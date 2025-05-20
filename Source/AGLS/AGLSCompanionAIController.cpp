// AGLSCompanionAIController.cpp
#include "AGLSCompanionAIController.h" // Now in the same directory
#include "AICompanionCommands.h"     // Also in the same directory
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
// #include "Kismet/GameplayStatics.h" // Only if needed

AAGLSCompanionAIController::AAGLSCompanionAIController()
{
	CurrentCommandBlackboardKeyName = FName("CurrentCommand");
	BehaviorTreeAsset = nullptr;
}

void AAGLSCompanionAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (BehaviorTreeAsset)
	{
		UBlackboardComponent* BlackboardComp = GetBlackboardComponent();
		UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackboardComp);
		
		if (BlackboardComp)
		{
			// Example: Set initial command if desired
			// BlackboardComp->SetValueAsEnum(CurrentCommandBlackboardKeyName, static_cast<uint8>(EAICompanionCommand::Follow));
			RunBehaviorTree(BehaviorTreeAsset);
		}
	}
}

void AAGLSCompanionAIController::SetAICommand(EAICompanionCommand NewCommand)
{
	UBlackboardComponent* BlackboardComp = GetBlackboardComponent();
	if (BlackboardComp)
	{
		BlackboardComp->SetValueAsEnum(CurrentCommandBlackboardKeyName, static_cast<uint8>(NewCommand));
	}
}
