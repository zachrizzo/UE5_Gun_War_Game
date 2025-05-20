// AGLSCompanionAIController.h
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AICompanionCommands.h" // Our command enum
#include "AGLSCompanionAIController.generated.h"

UCLASS()
class AGLS_API AAGLSCompanionAIController : public AAIController
{
	GENERATED_BODY()

public:
	AAGLSCompanionAIController();

	// Function to set the current command for the AI
	UFUNCTION(BlueprintCallable, Category = "AI|Companion Commands")
	void SetAICommand(EAICompanionCommand NewCommand);

	// Name of the Blackboard key to store the current command.
	// This should match the key name you set up in your Blackboard asset.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI|Companion Commands")
	FName CurrentCommandBlackboardKeyName;

protected:
	// Called when the controller possesses a pawn.
	virtual void OnPossess(APawn* InPawn) override;

	// Behavior Tree asset to run on this AI Controller
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviorTreeAsset;
};
