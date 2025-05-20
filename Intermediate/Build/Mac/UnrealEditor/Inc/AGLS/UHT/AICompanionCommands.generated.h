// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICompanionCommands.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGLS_AICompanionCommands_generated_h
#error "AICompanionCommands.generated.h already included, missing '#pragma once' in AICompanionCommands.h"
#endif
#define AGLS_AICompanionCommands_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AICompanionCommands_h


#define FOREACH_ENUM_EAICOMPANIONCOMMAND(op) \
	op(EAICompanionCommand::None) \
	op(EAICompanionCommand::Follow) \
	op(EAICompanionCommand::Wait) \
	op(EAICompanionCommand::Attack) 

enum class EAICompanionCommand : uint8;
template<> struct TIsUEnumClass<EAICompanionCommand> { enum { Value = true }; };
template<> AGLS_API UEnum* StaticEnum<EAICompanionCommand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
