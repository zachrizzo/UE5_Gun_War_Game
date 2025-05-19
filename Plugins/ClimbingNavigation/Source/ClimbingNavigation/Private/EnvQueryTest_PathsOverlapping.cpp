


#include "EnvQueryTest_PathsOverlapping.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavMesh/RecastNavMesh.h"

UEnvQueryTest_PathsOverlapping::UEnvQueryTest_PathsOverlapping(const FObjectInitializer& ObjectInitializer)
{
	Cost = EEnvTestCost::High;
	ValidItemType = UEnvQueryItemType_VectorBase::StaticClass();
}

void UEnvQueryTest_PathsOverlapping::RunTest(FEnvQueryInstance& QueryInstance) const
{
    UObject* QueryOwner = QueryInstance.Owner.Get();
    if (!QueryOwner)
    {
        return;
    }

    TArray<AActor*> ContextActors;
    if (!QueryInstance.PrepareContext(CharactersContext, ContextActors))
    {
        return;
    }

    UWorld* World = QueryInstance.World;
    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
    const ARecastNavMesh* RecastNavMesh = Cast<ARecastNavMesh>(NavSys->GetDefaultNavDataInstance(FNavigationSystem::DontCreate));

    if (!NavSys || !RecastNavMesh)
    {
        return;
    }

    FloatValueMin.BindData(QueryOwner, QueryInstance.QueryID);
    float MinThresholdValue = FloatValueMin.GetValue();

    FloatValueMax.BindData(QueryOwner, QueryInstance.QueryID);
    float MaxThresholdValue = FloatValueMax.GetValue();

    AActor* OwnerActor = Cast<AActor>(QueryOwner);
    if (!OwnerActor) return;

    const FVector QuerierLocation = OwnerActor->GetActorLocation();



    // Iterujemy przez elementy testowe w EQS
    for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
    {
        const FVector TestPoint = GetItemLocation(QueryInstance, It.GetIndex());

        // Pobieramy pozycj� startow� zapytania (EnvQuerier)
        
        FVector QueryStart = QuerierLocation;

        // Tworzymy �cie�k� z QueryStart do TestPoint
        FNavLocation NavLocation;
        FPathFindingQuery PathQuery;

        // Znajd� �cie�k�
        FPathFindingResult PathResult = NavSys->FindPathSync(
            FPathFindingQuery(QueryOwner, *NavSys->GetDefaultNavDataInstance(), QueryStart, TestPoint, nullptr)
        );

        if (!PathResult.IsSuccessful() || !PathResult.Path.IsValid())
        {
            // Je�li �cie�ka nie istnieje, ustawiamy niski wynik
            It.SetScore(TestPurpose, FilterType, 0.0, MinThresholdValue, MaxThresholdValue);
            continue;
        }

        TArray<FNavPathPoint> PathPoints = PathResult.Path->GetPathPoints();

        bool bPathOverlaps = false;
        for (const AActor* ContextActor : ContextActors)
        {
            if (!ContextActor)
            {
                continue;
            }

            // Pobieramy pozycj� aktora
            FVector ActorLocation = ContextActor->GetActorLocation();

            // Je�li aktor to ACharacter, uwzgl�dniamy wysoko�� kapsu�y
            const ACharacter* Character = Cast<ACharacter>(ContextActor);
            if (Character)
            {
                float CapsuleHalfHeight = Character->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();
                ActorLocation.Z -= CapsuleHalfHeight; // Obni�amy pozycj� do poziomu pod�o�a
            }

            // Iterujemy przez punkty �cie�ki i sprawdzamy kolizj�
            for (int32 i = 0; i < PathPoints.Num() - 1; i++)
            {
                FVector SegmentStart = PathPoints[i].Location;
                FVector SegmentEnd = PathPoints[i + 1].Location;

                float Distance = FMath::PointDistToSegment(ActorLocation, SegmentStart, SegmentEnd);
                if (Distance < AsOverlappingTollerance)
                {
                    bPathOverlaps = true;
                    break;
                }
            }

            if (bPathOverlaps)
            {
                break;
            }
        }

        // Je�li �cie�ka koliduje z aktorem, ustawiamy wynik na 0.0
        It.SetScore(TestPurpose, FilterType, bPathOverlaps ? 0.0f : 1.0f, MinThresholdValue, MaxThresholdValue);
    }
}

FText UEnvQueryTest_PathsOverlapping::GetDescriptionTitle() const
{
	return FText::FromString(TEXT("Context Actor Overlapping Path"));
}

FText UEnvQueryTest_PathsOverlapping::GetDescriptionDetails() const
{
    const FString Description = FString::Printf(
        TEXT("Allows to check that path to Point  \n")
        TEXT("is not goes through Context positions.\n")
    );

    return FText::FromString(Description);
}
