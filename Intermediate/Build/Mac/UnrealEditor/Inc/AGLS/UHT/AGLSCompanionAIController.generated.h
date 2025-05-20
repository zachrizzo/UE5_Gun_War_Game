// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLSCompanionAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAICompanionCommand : uint8;
#ifdef AGLS_AGLSCompanionAIController_generated_h
#error "AGLSCompanionAIController.generated.h already included, missing '#pragma once' in AGLSCompanionAIController.h"
#endif
#define AGLS_AGLSCompanionAIController_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAICommand);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGLSCompanionAIController(); \
	friend struct Z_Construct_UClass_AAGLSCompanionAIController_Statics; \
public: \
	DECLARE_CLASS(AAGLSCompanionAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGLS"), NO_API) \
	DECLARE_SERIALIZER(AAGLSCompanionAIController)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAGLSCompanionAIController(AAGLSCompanionAIController&&); \
	AAGLSCompanionAIController(const AAGLSCompanionAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGLSCompanionAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGLSCompanionAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAGLSCompanionAIController) \
	NO_API virtual ~AAGLSCompanionAIController();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_9_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGLS_API UClass* StaticClass<class AAGLSCompanionAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
