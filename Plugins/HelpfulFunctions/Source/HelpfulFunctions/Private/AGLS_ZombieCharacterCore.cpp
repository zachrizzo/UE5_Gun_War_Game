#include "AGLS_ZombieCharacterCore.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "Engine/SkeletalMesh.h"
#include "ReferenceSkeleton.h"
#include "Components/SkeletalMeshComponent.h"

#define STANDING CALS_Stance::Standing
#define CROUCHING CALS_Stance::Crouching
#define GAIT_WALK CALS_Gait::Walking
#define GAIT_RUN CALS_Gait::Running
#define GAIT_SPRINT CALS_Gait::Sprinting
#define AIMING CALS_RotationMode::Aiming
#define MOVEMENT GetCharacterMovement()
#define KML UKismetMathLibrary
#define AGLS_Zombie_CapHeight_Macro GetCapsuleComponent()->GetScaledCapsuleHalfHeight()
#define AGLS_Zombie_AnimInst_Macro GetMesh()->GetAnimInstance()
#define CapRadius GetCapsuleComponent()->GetScaledCapsuleRadius()

// Sets default values
AAGLS_ZombieCharacterCore::AAGLS_ZombieCharacterCore()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AsyncFunctionsComponent = CreateDefaultSubobject<UAsyncFunctionsPlayer>(TEXT("AsyncFunctionsComponent"));
	AttacksSystemComponent = CreateDefaultSubobject<UAGLS_ZombieAttacksComponentCore>(TEXT("AttacksSystemComponent"));

	if (GetCharacterMovement())
	{
		MOVEMENT->MaxAcceleration = 1000.0;
		MOVEMENT->BrakingFrictionFactor = 0.3;
		MOVEMENT->SetCrouchedHalfHeight(60.0f);
		MOVEMENT->bUseSeparateBrakingFriction = true;
		MOVEMENT->MinAnalogWalkSpeed = 25.0;
		MOVEMENT->bCanWalkOffLedgesWhenCrouching = true;
		MOVEMENT->LedgeCheckThreshold = 8.0;
		MOVEMENT->bRunPhysicsWithNoController = true;

		MOVEMENT->JumpZVelocity = 400.0;
		MOVEMENT->AirControlBoostMultiplier = 1.5;

		MOVEMENT->BrakingDecelerationSwimming = 200.0;

		MOVEMENT->BrakingDecelerationFlying = 1200.0;

		MOVEMENT->RotationRate = FRotator(0, -1, 0);
		MOVEMENT->bUseControllerDesiredRotation = false;
		MOVEMENT->bOrientRotationToMovement = false;

		MOVEMENT->bRequestedMoveUseAcceleration = true;
	}

	bUseControllerRotationYaw = false;

}

// Called when the game starts or when spawned
void AAGLS_ZombieCharacterCore::BeginPlay()
{
	Super::BeginPlay();
	
	//Make sure the mesh and animbp update after the CharacterBP to ensure it gets the most recent values.
	GetMesh()->AddTickPrerequisiteActor(this);

	//Set the Movement Model
	UpdateMovementSettings(MovementParamsData, DefMovementModelName);

	//Update states to use the initial desired values.
	OnGaitChanged(DesiredGait);
	OnRotationModeChanged(RotationModeC);
	OnStanceChanged(CurrentStance); 
	if (CurrentStance == CROUCHING) Crouch();

	//Set default rotation values.
	AimingRotationC = GetActorRotation();
	DesiredActorRotation = GetActorRotation();
	InAirRotationC = GetActorRotation();
	LastMovementInputRotationC = GetActorRotation();

	//Initialize health points
	if (HealthAndDamageConfig)
	{
		const UALS_DamageConfigData* DefaultConfig = HealthAndDamageConfig->GetDefaultObject<UALS_DamageConfigData>();
		if (DefaultConfig)
		{
			if (CurrentHealthPoints <= 0.0 || CurrentHealthPoints > DefaultConfig->MaxHealth)
			{
				CurrentHealthPoints = DefaultConfig->MaxHealth;
			}
		}
	}

	if (InitMovementRandomScale.X != 1.0 || InitMovementRandomScale.Y != 1.0)
	{
		ConstSpeedScale = UKismetMathLibrary::RandomFloatInRange(InitMovementRandomScale.X, InitMovementRandomScale.Y);
	}
	
}

float AAGLS_ZombieCharacterCore::GetAnimCurveValue(FName CurveName)
{
	if (AGLS_Zombie_AnimInst_Macro)
	{
		return AGLS_Zombie_AnimInst_Macro->GetCurveValue(CurveName);
	}
	return 0.0f;
}

// Called every frame
void AAGLS_ZombieCharacterCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateEssentialValues();

	/* Calculate Floor Velocity */
	if (this->GetCharacterMovement()->CurrentFloor.bBlockingHit == true && this->GetCharacterMovement()->CurrentFloor.HitResult.Location.IsNearlyZero() == false)
	{
		FloorVelocityC = (this->GetCharacterMovement()->CurrentFloor.HitResult.Location - PrevFloorLocation) / DeltaTime;
		FloorVelocityC = FloorVelocityC - FVector(this->GetCharacterMovement()->Velocity.X, this->GetCharacterMovement()->Velocity.Y, 0.0);
		PrevFloorLocation = this->GetCharacterMovement()->CurrentFloor.HitResult.Location;
	}
	else
	{
		FloorVelocityC = FVector(0, 0, 0);
		PrevFloorLocation = GetActorLocation() - FVector(0, 0, AGLS_Zombie_CapHeight_Macro);
	}

	/* Experimental function. Improves the behavior of the capsule in a non-inertial reference frame (the floor moves relative to the world space) */
	if (CorrectNonInertialFloor)
	{
		if (this->GetCharacterMovement()->IsFalling() == true)
		{
			if (AddedFloorForce == false)
			{
				LaunchCharacter(FVector(PrevFloorVelocity.X, PrevFloorVelocity.Y, 0.0), false, false);
				AddedFloorForce = true;
			}
		}
		else
		{
			PrevFloorVelocity = FloorVelocityC;
			AddedFloorForce = false;
		}
	}

	switch (MovementStateC)
	{
	case CALS_MovementState::None:
		break;
	case CALS_MovementState::Grounded:
		UpdateGroundedMovement();
		UpdateGroundedRotation();
		break;
	case CALS_MovementState::InAir:
		UpdateFallingRotation_Implementation();
		break;
	case CALS_MovementState::Mantling:
		break;
	case CALS_MovementState::Ragdoll:
		RagdollUpdate();
		break;
	case CALS_MovementState::Crawl:
		UpdateGroundedMovement();
		UpdateCrawlingRotation();
		break;
	case CALS_MovementState::Prone:
		break;
	default:
		break;
	}


}

// Called to bind functionality to input
void AAGLS_ZombieCharacterCore::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AAGLS_ZombieCharacterCore::GetDeformerActivationLOD(AGLS_LOD_State CurrentState)
{
	ECharacterDetailModeFlags StateFlags = static_cast<ECharacterDetailModeFlags>(DeformerActivationState);
	ECharacterDetailModeFlags ConvertedCurrent;
	///                                                     ??????????????????????
	switch (CurrentState)
	{
	case AGLS_LOD_State::LOD0:
		ConvertedCurrent = ECharacterDetailModeFlags::LOD0; break;
	case AGLS_LOD_State::LOD1:
		ConvertedCurrent = ECharacterDetailModeFlags::LOD1; break;
	case AGLS_LOD_State::LOD2:
		ConvertedCurrent = ECharacterDetailModeFlags::LOD2; break;
	case AGLS_LOD_State::LOD3:
		ConvertedCurrent = ECharacterDetailModeFlags::LOD3; break;
	default:
		ConvertedCurrent = ECharacterDetailModeFlags::LOD0; break;
	}

	if (EnumHasAnyFlags(StateFlags, ECharacterDetailModeFlags::LOD0))
	{ if (ConvertedCurrent == ECharacterDetailModeFlags::LOD0) return true;
	}
	if (EnumHasAnyFlags(StateFlags, ECharacterDetailModeFlags::LOD1))
	{ if (ConvertedCurrent == ECharacterDetailModeFlags::LOD1) return true;
	}
	if (EnumHasAnyFlags(StateFlags, ECharacterDetailModeFlags::LOD2))
	{ if (ConvertedCurrent == ECharacterDetailModeFlags::LOD2) return true;
	}
	if (EnumHasAnyFlags(StateFlags, ECharacterDetailModeFlags::LOD3))
	{ if (ConvertedCurrent == ECharacterDetailModeFlags::LOD3) return true;
	}
	return false;
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Character Movement Mode Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnCharacterMoveChanged(EMovementMode PrevMode, EMovementMode NewMode)
{
	if (NewMode == EMovementMode::MOVE_Walking || NewMode == EMovementMode::MOVE_NavWalking)
	{
		if(GetCharacterMovement()->IsCrouching()) { Execute_BPI_AI_Set_MovementState(this, CALS_MovementState::Crawl); }
		else { Execute_BPI_AI_Set_MovementState(this, CALS_MovementState::Grounded); }
	}
	else if (NewMode == EMovementMode::MOVE_Falling)
	{
		Execute_BPI_AI_Set_MovementState(this, CALS_MovementState::InAir);
	}
	else if (NewMode == EMovementMode::MOVE_None)
	{
		Execute_BPI_AI_Set_MovementState(this, CALS_MovementState::None);
	}
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Movement State Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnMovementStateChanged(CALS_MovementState NewAction)
{
	PreviousMovementState = MovementStateC;
	MovementStateC = NewAction;

	if (MovementStateC == CALS_MovementState::InAir)
	{
		InAirRotationC = GetActorRotation();
		if (CurrentMovementAction == CALS_MovementAction::None && CurrentStance == CALS_Stance::Crouching)
		{
			UnCrouch();
		}
	}
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Rotation Mode Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnRotationModeChanged(CALS_RotationMode NewMode)
{
	if (NewMode != RotationModeC)
	{
		PreviousRotationMode = RotationModeC;
		RotationModeC = NewMode;
	}
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Gait Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnGaitChanged(CALS_Gait NewMode)
{
	CurrentGait = NewMode;
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Grounded Movement Mode Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnGroundedModeChanged(CALS_GroundedMoveMode NewMode, bool bUpdateMoveParams)
{
	if (NewMode != GroundedMovementMode)
	{
		GroundedMovementMode = NewMode;
		if (bUpdateMoveParams && IsValid(MovementParamsData))
		{
			FName StateName = MovementParamsData->MatchToMovementState.FindRef(NewMode);
			if (StateName != TEXT("None") && StateName != TEXT(""))
			{
				UpdateMovementSettings(MovementParamsData, TEXT("Normal"));
			}
		}
	}
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Stance Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnStanceChanged(CALS_Stance NewState)
{
	CurrentStance = NewState;
}

//☰☰☰☰☰☰☰▶︎ CHARACTER MOVEMENT CHANGE FUNCTION - Level Of Details (LOD) Changed ◀︎☰☰☰☰☰☰☰
void AAGLS_ZombieCharacterCore::OnDetailsLevelChanged(AGLS_LOD_State NewState)
{
	LOD_StateC = NewState;
}



void AAGLS_ZombieCharacterCore::UpdateEssentialValues()
{
	// Update Essential Values
	float SafeDelta = GetWorld()->DeltaTimeSeconds;
	if (SafeDelta == 0.0) { SafeDelta = 0.01; }

	AccelerationC = (GetVelocity() - PreviousVelocity) / SafeDelta;
	MovementSpeedDifferenceC = FVector(GetVelocity().X, GetVelocity().Y, 0.0).Length() - FVector(PreviousVelocity.X, PreviousVelocity.Y, 0.0).Length();

	SpeedC = FVector(GetVelocity().X, GetVelocity().Y, 0.0).Length();
	if (SpeedC > 1.0) { bIsMoving = true; }
	else { bIsMoving = false; }

	FVector AccelerationXY = this->GetCharacterMovement()->GetCurrentAcceleration();
	AccelerationXY.Z = 0.0;
	float MovementInputAmount = AccelerationXY.Length() / this->GetCharacterMovement()->GetMaxAcceleration();

	if (MovementInputAmount > 0.0) { bHasMovementInput = true; }
	else { bHasMovementInput = false; }

	//Update Base Rotation Values
	if (bHasMovementInput == true)
	{
		LastMovementInputRotationC = UKismetMathLibrary::MakeRotFromX(this->GetCharacterMovement()->GetCurrentAcceleration());
	}
	if (bIsMoving == true)
	{
		LastVelocityRotation = UKismetMathLibrary::MakeRotFromX(GetVelocity());
	}

	if (GetVelocity().Length() > 2.0)
	{
		LastNonZeroVelocity = GetVelocity();
	}

	if (GetCharacterMovement()->GetCurrentAcceleration().Length() > 0.8)
	{
		LastNonZeroAcceleratrion = GetCharacterMovement()->GetCurrentAcceleration();
	}

	//Update Cached Variables
	PreviousVelocity = GetVelocity();

}

float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation)
{
	if (!Velocity.IsNearlyZero())
	{
		const FMatrix RotMatrix = FRotationMatrix(BaseRotation);
		const FVector ForwardVector = RotMatrix.GetScaledAxis(EAxis::X);
		const FVector RightVector = RotMatrix.GetScaledAxis(EAxis::Y);
		const FVector NormalizedVel = Velocity.GetSafeNormal2D();

		// get a cos(alpha) of forward vector vs velocity
		const float ForwardCosAngle = static_cast<float>(FVector::DotProduct(ForwardVector, NormalizedVel));
		// now get the alpha and convert to degree
		float ForwardDeltaDegree = FMath::RadiansToDegrees(FMath::Acos(ForwardCosAngle));

		// depending on where right vector is, flip it
		const float RightCosAngle = static_cast<float>(FVector::DotProduct(RightVector, NormalizedVel));
		if (RightCosAngle < 0.f)
		{
			ForwardDeltaDegree *= -1.f;
		}
		return ForwardDeltaDegree;
	}
	return 0.f;
}

float AAGLS_ZombieCharacterCore::GetTargetSpeedWithStrafe(FVector SpeedVector)
{

	if (StrafeSpeedMapCurve)
	{
		float StrafeSpeedMap = StrafeSpeedMapCurve->GetFloatValue(abs(CalculateDirection(this->GetCharacterMovement()->Velocity, GetActorRotation())));
		if (StrafeSpeedMap < 1.0)
		{
			return UKismetMathLibrary::MapRangeClamped(StrafeSpeedMap, 0.0, 1.0, SpeedVector.X, SpeedVector.Y);
		}
		else
		{
			return UKismetMathLibrary::MapRangeClamped(StrafeSpeedMap, 1.0, 2.0, SpeedVector.Y, SpeedVector.Z);
		}
	}
	return 300.0;
}

float AAGLS_ZombieCharacterCore::GetMappedSpeedC(float SpeedScale)
{
	const float LocWalkSpeed = GetTargetSpeedWithStrafe(CurrentMovementSettings.WalkSpeed);
	const float LocRunSpeed = GetTargetSpeedWithStrafe(CurrentMovementSettings.RunSpeed);
	const float LocSprintSpeed = GetTargetSpeedWithStrafe(CurrentMovementSettings.SprintSpeed);

	if (SpeedC > LocRunSpeed)
	{
		return UKismetMathLibrary::MapRangeClamped(SpeedC, LocRunSpeed, LocSprintSpeed, 2.0, 3.0);
	}
	else if (SpeedC > LocWalkSpeed)
	{
		return UKismetMathLibrary::MapRangeClamped(SpeedC, LocWalkSpeed, LocRunSpeed, 1.0, 2.0);
	}
	else
	{
		return UKismetMathLibrary::MapRangeClamped(SpeedC, 0, LocWalkSpeed, 0.0, 1.0);
	}
}

// Calculate the Allowed Gait. This represents the maximum Gait the character is currently allowed to be in, and can be determined by the 
// desired gait, the rotation mode, the stance, etc. For example, if you wanted to force the character into a walking state while indoors, 
// this could be done here.
CALS_Gait AAGLS_ZombieCharacterCore::GetAllowedGait_Implementation()
{
	if (CurrentStance == CROUCHING || RotationModeC == AIMING)
	{
		if (DesiredGait == GAIT_WALK)
		{ return CALS_Gait::Walking; }
		else
		{ return CALS_Gait::Running; }
	}
	else
	{
		return DesiredGait;
	}
}

CALS_Gait AAGLS_ZombieCharacterCore::GetActualGait_Implementation(CALS_Gait AllowedGait)
{
	return AllowedGait;
}

bool AAGLS_ZombieCharacterCore::UpdateMovementSettings(USimpleMovementParamsData* ParamsAsset, FName KeyName)
{
	if (MovementParamsData)
	{
		FCALSMovementSettingsStrafe DefaultSettings; DefaultSettings.RunSpeed = FVector::ZeroVector;
		FCALSMovementSettingsStrafe Settings = MovementParamsData->MovementSettings.FindRef(KeyName);
		if (IsValid(Settings.MovementCurve) && Settings.RunSpeed.Length() > 0.0)
		{
			CurrentMovementSettings = Settings;
			return true;
		}
		return false;
	}
	return false;
}

// Update the Character Max Walk Speed to the configured speeds based on the currently Allowed Gait. 
// Update the Acceleration, Deceleration, and Ground Friction using the Movement Curve. This allows for fine control over movement 
// behavior at each speed (May not be suitable for replication).
void AAGLS_ZombieCharacterCore::UpdateCharacterMovementPerFrame(CALS_Gait AllowedGait)
{
	FVector DesiredMaxSpeeds = FVector(100, 100, 100);
	switch (AllowedGait)
	{
	case CALS_Gait::Walking:
		DesiredMaxSpeeds = CurrentMovementSettings.WalkSpeed;
		break;
	case CALS_Gait::Running:
		DesiredMaxSpeeds = CurrentMovementSettings.RunSpeed;
		break;
	case CALS_Gait::Sprinting:
		DesiredMaxSpeeds = CurrentMovementSettings.SprintSpeed;
		break;
	}

	GetCharacterMovement()->MaxWalkSpeed = GetTargetSpeedWithStrafe(DesiredMaxSpeeds) * ConstSpeedScale;
	GetCharacterMovement()->MaxWalkSpeedCrouched = GetTargetSpeedWithStrafe(DesiredMaxSpeeds) * ConstSpeedScale;

	if (CurrentMovementSettings.MovementCurve)
	{
		FVector FromCurveParams = CurrentMovementSettings.MovementCurve->GetVectorValue(GetMappedSpeedC(ConstSpeedScale));
		GetCharacterMovement()->MaxAcceleration = FromCurveParams.X;
		GetCharacterMovement()->BrakingDecelerationWalking = FromCurveParams.Y + GetAnimCurveValue(TEXT("Modify_Deceleration"));
		GetCharacterMovement()->GroundFriction = FromCurveParams.Z + GetAnimCurveValue(TEXT("Modify_GroundFriction"));
	}

}

// Bazowa funkcja łącząca ze sobą wiele wyżej zaimplementowanych funkcji. Jej działanie polega na finalnym ustaleniu poprawnych parametrów
// dotychących głównie Character Movement Component
void AAGLS_ZombieCharacterCore::UpdateGroundedMovement_Implementation()
{
	CALS_Gait AGait = GetAllowedGait();
	CALS_Gait ActualGait = GetActualGait(AGait);
	if (ActualGait != CurrentGait)
	{
		IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_Gait(this, ActualGait);
	}

	UpdateCharacterMovementPerFrame(AGait);
}



void AAGLS_ZombieCharacterCore::OnStartedCrawling_Implementation()
{
}

//⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷
//⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷⫸⫷


AGLS_LOD_State AAGLS_ZombieCharacterCore::GetCurrentRequiredLOD_Implementation()
{
	return LOD_StateC;
}

void AAGLS_ZombieCharacterCore::UpdateCurrentLOD_State_Implementation()
{

}

// ▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒
// ▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒ Physic [S] [E] [C] [T] [I] [O] [N]  ░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒
// ▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒░░░▒

bool AAGLS_ZombieCharacterCore::UpdateCurrentBodiesPhysicStats()
{
	BodiesWithActivatedPhysic.Empty();
	bool SomeSimulate = false;

	for (FName BodyName : PhysicAnimConfigDetails.AllCollisionBodiesInPS)
	{
		if (GetMesh()->IsSimulatingPhysics(BodyName) == true)
		{
			BodiesWithActivatedPhysic.Add(BodyName);
			SomeSimulate = true;
		}
	}
	return SomeSimulate;
}

bool AAGLS_ZombieCharacterCore::DisableEnableRequiredBodies(bool bEnableSimulation)
{
	if (BodiesWithActivatedPhysic.Num() == 0) return false;

	for (FName BodyName : BodiesWithActivatedPhysic)
	{
		GetMesh()->SetBodySimulatePhysics(BodyName, bEnableSimulation);
	}
	return true;
}


//⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆
//⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆ H E A L T H  ,  D A M A G E  ,  D E A T H  ,  H I T ⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆
//⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆⛆

void AAGLS_ZombieCharacterCore::HitReactionAndDamage_Implementation(bool& OutDeath, FVector& OutHitLocation, FVector& OutHitNormal, FName& OutBoneName,
	float& Outamage, AActor* DamageCauser, float DamagePoints, FHitResult HitInfo, ECALS_WeaponType WeaponType, bool InstantDeath)
{

}

void AAGLS_ZombieCharacterCore::StartDeathSequence_Implementation(FVector HitLocation, FVector HitNormal, FName HitBoneName, int DeathTypeIndex)
{

}

bool AAGLS_ZombieCharacterCore::CheckFallDamage_Implementation(FHitResult LandHitResult, float VelocityMaxRange, FVector DamageTresholds)
{
	if (GetVelocity().Z >= -10.0) { return false; }

	//Map Velocity
	float MappedVelocityZ = KML::MapRangeClamped(abs(GetVelocity().Z), 0.0, VelocityMaxRange, 0.0, 1.0);

	//Select Fall Damage Type
	if (MappedVelocityZ > DamageTresholds.X)
	{
		DeathByFallDamage(LandHitResult); return true;
	}
	else if (MappedVelocityZ > DamageTresholds.Y)
	{
		const float PlayRateRandom = KML::RandomFloatInRange(0.85, 1.1);
		if (AGLS_Zombie_AnimInst_Macro)
		{
			//AsyncFunctionsComponent->PlayDynamicMontageAsync(AnimInst(), HardLandMontage, TEXT("BaseLayer"), 0.15, 0.3, PlayRateRandom);
			AsyncFunctionsComponent->MontagePlayAsync(AGLS_Zombie_AnimInst_Macro, HardLandMontage, PlayRateRandom, 0.0, false);
			ApplyDamageValue(nullptr, LandHitResult, 40.0, 3, -1.0);
			return true;
		}
	}
	else if (MappedVelocityZ > DamageTresholds.Z)
	{
		const float PlayRateRandom = KML::RandomFloatInRange(0.85, 1.1);
		if (AGLS_Zombie_AnimInst_Macro)
		{
			//AsyncFunctionsComponent->PlayDynamicMontageAsync(AnimInst(), LightLandMontage, TEXT("BaseLayer"), 0.15, 0.3, PlayRateRandom);
			AsyncFunctionsComponent->MontagePlayAsync(AGLS_Zombie_AnimInst_Macro, LightLandMontage, PlayRateRandom, 0.0, false);
			ApplyDamageValue(nullptr, LandHitResult, 25.0, 3, -1.0);
			return true;
		}
	}
	return false;
}

void AAGLS_ZombieCharacterCore::DeathByFallDamage_Implementation(FHitResult HitGroundResult)
{
}

bool AAGLS_ZombieCharacterCore::ApplyDamageValue_Implementation(AActor* DamageCauser, FHitResult HitInfo, float DamageValue, int DamageTypeIndex, float UnRagdollTime)
{
	return false;
}

bool AAGLS_ZombieCharacterCore::IsAlive()
{
	return IsDeathC == false && AGLS_Zombie_AnimInst_Macro->GetCurveValue(TEXT("DeathAnim_Alpha")) < 0.2;
}

FVector AAGLS_ZombieCharacterCore::CalculateHitDirection(FHitResult InHitResult, FVector2D RangeX, FVector2D RangeZ)
{
	const FVector HitLocation = InHitResult.ImpactPoint;
	const FVector HitNormal = InHitResult.Normal;
	const FVector S = FVector(1, 1, 1);

	FTransform RelativeOffset = KML::MakeRelativeTransform(FTransform(KML::MakeRotFromX(HitNormal), HitLocation, S), GetMesh()->GetComponentTransform());

	float ValueX = KML::MapRangeClamped(abs(RelativeOffset.GetLocation().X), RangeX.X, RangeX.Y, 0.0, 1.0);
	if (RelativeOffset.GetLocation().X < 0.0) ValueX = ValueX * -1.0;

	float ValueZ = 0.0;

	if (RelativeOffset.GetLocation().Z < 100.0)
	{
		ValueZ = KML::MapRangeClamped(abs(RelativeOffset.GetLocation().Z), 25.0, 100.0, -1.0, 0.0);
	}
	else
	{
		ValueZ = KML::MapRangeClamped(abs(RelativeOffset.GetLocation().Z), RangeZ.X, RangeZ.Y, 0.0, 1.0);
	}
	ValueZ = ValueZ * -1.0;

	FVector2D HitReactionCoords = FVector2D(ValueX, ValueZ) * -1.0;

	FTransform SocketTransform = GetMesh()->GetSocketTransform(InHitResult.BoneName, ERelativeTransformSpace::RTS_World);
	SocketTransform.SetRotation(GetMesh()->GetComponentQuat());
	SocketTransform.SetScale3D(S);

	const FTransform OnMeshOffset = KML::MakeRelativeTransform(FTransform(KML::MakeRotFromX(HitNormal), HitLocation, S), SocketTransform);

	FVector HitCoords3D = FVector(0.0, HitReactionCoords.X, HitReactionCoords.Y);
	if (OnMeshOffset.GetLocation().Y < -0.1)
	{
		HitCoords3D.X = 0.0;
	}
	else
	{
		HitCoords3D.X = 1.0;
	}
	return HitCoords3D;
}

// ▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░ Update Actor Rotation for property movement state - Section ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

void AAGLS_ZombieCharacterCore::SmoothCharacterRotation(FRotator TargetRotation, float InterpSpeed)
{
	FRotator NewRotation = UKismetMathLibrary::RInterpTo(GetActorRotation(), TargetRotation, GetWorld()->DeltaTimeSeconds, InterpSpeed);
	const FQuat TargetQuat = UKismetMathLibrary::Conv_RotatorToQuaternion(NewRotation);
	SetActorRotation(TargetQuat, ETeleportType::None);

	DesiredActorRotation = TargetRotation;
}

// ➊ Update Grounded rotation
void AAGLS_ZombieCharacterCore::UpdateGroundedRotation_Implementation()
{
	if (IsDeathC || bLockRotationUpdate) return;
	if (CurrentMovementAction != CALS_MovementAction::None) return;

	//Calculate the rotation rate by using the current Rotation Rate Curve in the Movement Settings. Using the curve in conjunction 
	// with the mapped speed gives you a high level of control over the rotation rates for each speed. Increase the speed if the 
	// camera is rotating quickly for more responsive rotation.
	float RotationRate = 15.0;
	if (CurrentMovementSettings.RotationRateCurve)
	{
		RotationRate = CurrentMovementSettings.RotationRateCurve->GetFloatValue(GetMappedSpeedC(1.0));
	}

	float MappedAimRate = 1.0;
	FRotator ControlYaw = FRotator(0, GetControlRotation().Yaw, 0);

	if (SpeedC > 80.0 || (bIsMoving && bHasMovementInput))
	{
		switch (RotationModeC)
		{
		case CALS_RotationMode::VelocityDirection:
			//➊ Velocity Direction Rotation
			SmoothCharacterRotation(UKismetMathLibrary::MakeRotFromX(FVector(GetVelocity().X, GetVelocity().Y, 0.0)), RotationRate * MappedAimRate);
			break;

		case CALS_RotationMode::LookingDirection:
			//➋ Looking Direction Rotation
			MappedAimRate = UKismetMathLibrary::MapRangeClamped(AimYawRotationRateC, 0.0, 300.0, 1.0, 1.5);
			ControlYaw = FRotator(0, GetControlRotation().Yaw + GetAnimCurveValue(TEXT("YawOffset")), 0);
			SmoothCharacterRotation(ControlYaw, RotationRate * MappedAimRate);
			break;

		case CALS_RotationMode::Aiming:
			//➌ Aiming Rotation
			MappedAimRate = UKismetMathLibrary::MapRangeClamped(AimYawRotationRateC, 0.0, 300.0, 1.0, 3);
			
			SmoothCharacterRotation(ControlYaw, RotationRate * MappedAimRate);
			break;

		default:
			break;
		}
	}
	else
	{
		switch (RotationModeC)
		{
		case CALS_RotationMode::VelocityDirection:
			if (SetAsControlRotationWhenIdle)
			{
				SmoothCharacterRotation(ControlYaw, 16.0);
			}
			else
			{
				SmoothCharacterRotation(LastVelocityRotation, 8.0);
			}
			break;
		case CALS_RotationMode::LookingDirection:
			if (SetAsControlRotationWhenIdle)
			{
				SmoothCharacterRotation(ControlYaw, 16.0);
			}
			break;
		case CALS_RotationMode::Aiming:
			SmoothCharacterRotation(ControlYaw, 20.0);
			break;
		default:
			break;
		}
	}

}

// ➋ Update In AIR rotation
void AAGLS_ZombieCharacterCore::UpdateFallingRotation_Implementation()
{

}

// ➌ Update Crawling rotation
void AAGLS_ZombieCharacterCore::UpdateCrawlingRotation_Implementation()
{
	UpdateGroundedRotation();
}

// ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ Overrided Character MAIN Functions ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒

void AAGLS_ZombieCharacterCore::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);
	OnCharacterMoveChanged(PrevMovementMode, GetCharacterMovement()->MovementMode);
}

void AAGLS_ZombieCharacterCore::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	OnStanceChanged(CROUCHING);
	UpdateMovementSettings(MovementParamsData, TEXT("Crawl"));
	OnMovementStateChanged(CALS_MovementState::Crawl);

	OnStartedCrawling();
}

void AAGLS_ZombieCharacterCore::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	OnStanceChanged(STANDING);
	UpdateMovementSettings(MovementParamsData, DefMovementModelName);

	if(GetCharacterMovement()->IsFalling()) { OnMovementStateChanged(CALS_MovementState::InAir); }
	else { OnMovementStateChanged(CALS_MovementState::Grounded); }

}

// -----------------------------------------------------------------------------
// Ragdoll System Implementations
// -----------------------------------------------------------------------------

void AAGLS_ZombieCharacterCore::RagdollStart_Implementation()
{
	// TODO: Implement Ragdoll Start Logic
	// Example: GetMesh()->SetSimulatePhysics(true);
}

void AAGLS_ZombieCharacterCore::RagdollEnd_Implementation()
{
	// TODO: Implement Ragdoll End Logic
	// Example: GetMesh()->SetSimulatePhysics(false);
}

void AAGLS_ZombieCharacterCore::RagdollUpdate_Implementation(float OutSpringRange, float InDamping, float InForceLimit, int DebugIndex)
{
	// TODO: Implement Ragdoll Update Logic
}

TSoftObjectPtr<UAnimMontage> AAGLS_ZombieCharacterCore::GetGetUpAnimation_Implementation()
{
	// TODO: Implement Get Get Up Animation Logic
	// Return the class member RagdollGetUpAnim, which might be set in Blueprints or defaults.
	// This member was declared in the header: UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True", Category = "Zombie Core|Ragdoll")) UAnimMontage* RagdollGetUpAnim = nullptr;
	return RagdollGetUpAnim;
}

// -----------------------------------------------------------------------------
// Utility Function Implementations
// -----------------------------------------------------------------------------

TArray<FName> AAGLS_ZombieCharacterCore::GetChildBoneNames(FName BoneName, bool bIncludeSelf) const
{
	// TODO: Implement proper Get Child Bone Names Logic. This is a placeholder.
	if (GetMesh() && GetMesh()->SkeletalMesh)
	{
		TArray<FName> ChildBones;
		const FReferenceSkeleton& RefSkeleton = GetMesh()->SkeletalMesh->GetRefSkeleton();
		int32 BoneIndex = RefSkeleton.FindBoneIndex(BoneName);

		if (BoneIndex != INDEX_NONE)
		{
			if (bIncludeSelf)
			{
				ChildBones.Add(BoneName);
			}

			TArray<int32> ChildBoneIndices;
			RefSkeleton.GetDirectChildBones(BoneIndex, ChildBoneIndices);

			for (int32 ChildIndex : ChildBoneIndices)
			{
				ChildBones.Add(RefSkeleton.GetBoneName(ChildIndex));
				// Add recursive call here if you need all descendants, not just direct children
			}
		}
		return ChildBones;
	}
	return TArray<FName>();
}

FTransform AAGLS_ZombieCharacterCore::GetRefBoneTransformInLocalSpace(USkeletalMeshComponent* InSkeletalMesh, FName BoneName) const
{
	// TODO: Confirm the correct RelativeTransformSpace (RTS_ParentBoneSpace or RTS_ComponentSpace)
	if (InSkeletalMesh)
	{
		// Assuming 'LocalSpace' means local to the parent bone.
		// If it means local to the SkeletalMeshComponent origin, use RTS_Component.
		return InSkeletalMesh->GetSocketTransform(BoneName, ERelativeTransformSpace::RTS_ParentBoneSpace);
	}
	return FTransform::Identity;
}

bool AAGLS_ZombieCharacterCore::GetIsStartedAttack() const
{
	// TODO: Implement Get Is Started Attack Logic by querying AttacksSystemComponent
	if (AttacksSystemComponent)
	{
		// Example: return AttacksSystemComponent->IsCurrentlyAttacking();
	}
	return false;
}

float AAGLS_ZombieCharacterCore::GetAttackElapsedTime() const
{
	// TODO: Implement Get Attack Elapsed Time Logic by querying AttacksSystemComponent
	if (AttacksSystemComponent)
	{
		// Example: return AttacksSystemComponent->GetCurrentAttackElapsedTime();
	}
	return 0.0f;
}

// ████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
// █████████████████████████████████████ INTERFACES OVERRIDE SECTION ██████████████████████████████████████████████████████████████████
// ████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████

void AAGLS_ZombieCharacterCore::BPI_AI_Get_CurrentStates_Implementation(
	TEnumAsByte<EMovementMode>& PawnMovementMode,
	CALS_MovementState& MovementState,
	CALS_MovementState& PrevMovementState,
	CALS_MovementAction& MovementAction,
	CALS_RotationMode& RotationMode,
	CALS_Gait& ActualGait,
	CALS_Stance& ActualStance,
	CALS_OverlayState& OverlayState,
	CALS_GroundedMoveMode& GroundedMoveMode)
{
	PawnMovementMode = GetCharacterMovement()->MovementMode;
	MovementState = this->MovementStateC;
	PrevMovementState = this->PreviousMovementState;
	MovementAction = this->CurrentMovementAction;
	RotationMode = this->RotationModeC;
	ActualGait = this->CurrentGait;
	ActualStance = this->CurrentStance;
	OverlayState = CALS_OverlayState::Default;
	GroundedMoveMode = this->GroundedMovementMode;
}

void AAGLS_ZombieCharacterCore::BPI_AI_Get_EssentialValues_Implementation(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving,
	bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate)
{
	Velocity = GetVelocity();
	Acceleration = this->AccelerationC;
	MovementInput = GetCharacterMovement()->GetCurrentAcceleration();
	IsMoving = this->bIsMoving;
	HasMovementInput = this->bHasMovementInput;
	Speed = this->SpeedC;
	AimingRotation = this->AimingRotationC;
	AimYawRate = 0.0;
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_LockRotationUpdate_Implementation(bool LockUpdate)
{ bLockRotationUpdate = LockUpdate; }

void AAGLS_ZombieCharacterCore::BPI_AI_Get_RotationLocked_Implementation(bool& RotationIsLocked)
{ RotationIsLocked = bLockRotationUpdate; }

void AAGLS_ZombieCharacterCore::BPI_AI_CrouchOrUncrouch_Implementation(CALS_Stance Stance)
{
	if (Stance == CROUCHING) Crouch();
	else UnCrouch();
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_MovementState_Implementation(CALS_MovementState NewState)
{
	if (NewState != MovementStateC) OnMovementStateChanged(NewState);
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_MovementAction_Implementation(CALS_MovementAction NewAction)
{
	CurrentMovementAction = NewAction;
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_RotationMode_Implementation(CALS_RotationMode NewMode)
{
	if(NewMode != RotationModeC) OnRotationModeChanged(NewMode);
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_Gait_Implementation(CALS_Gait NewGait)
{
	OnGaitChanged(NewGait);
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_DesiredGait_Implementation(CALS_Gait NewDesiredGait)
{
	DesiredGait = NewDesiredGait;
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_GrounedMoveMode_Implementation(CALS_GroundedMoveMode NewMode)
{
	OnGroundedModeChanged(NewMode, true);
}

void AAGLS_ZombieCharacterCore::BPI_AI_Get_LOD_State_Implementation(AGLS_LOD_State& CurrentState)
{
	CurrentState = LOD_StateC;
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_MovementSettingsByName_Implementation(FName KeyName)
{
	UpdateMovementSettings(MovementParamsData, KeyName);
}

void AAGLS_ZombieCharacterCore::BPI_AI_Get_LocomotionModeIndex_Implementation(int& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName)
{
	LocomotionIndex = LocomotionStateIndex;
	LocomotionByte = 0;
	LocomotionName = TEXT("Default");
}

void AAGLS_ZombieCharacterCore::BPI_AI_Set_EnableRagdoll_Implementation(bool Enable)
{
	if (Enable)
	{
		RagdollStart();
	}
	else
	{
		RagdollEnd();
	}
}
