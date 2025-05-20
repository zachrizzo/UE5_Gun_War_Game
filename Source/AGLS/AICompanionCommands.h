// AICompanionCommands.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "AICompanionCommands.generated.h"

UENUM(BlueprintType)
enum class EAICompanionCommand : uint8
{
	None		UMETA(DisplayName = "None"),
	Follow		UMETA(DisplayName = "Follow"),
	Wait		UMETA(DisplayName = "Wait"),
	Attack		UMETA(DisplayName = "Attack")
	// Add new commands here in the future
};
