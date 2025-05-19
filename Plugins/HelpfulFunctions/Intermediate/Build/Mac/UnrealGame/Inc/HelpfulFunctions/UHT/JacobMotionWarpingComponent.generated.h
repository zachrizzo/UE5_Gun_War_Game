// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JacobMotionWarpingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UAnimSequence;
class UCurveVector;
#ifdef HELPFULFUNCTIONS_JacobMotionWarpingComponent_generated_h
#error "JacobMotionWarpingComponent.generated.h already included, missing '#pragma once' in JacobMotionWarpingComponent.h"
#endif
#define HELPFULFUNCTIONS_JacobMotionWarpingComponent_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTimelineBlendIn); \
	DECLARE_FUNCTION(execGetTargetAxis); \
	DECLARE_FUNCTION(execGetOriginPosition); \
	DECLARE_FUNCTION(execPredictedSingleMotionPositionAuto); \
	DECLARE_FUNCTION(execPredictedSingleMotionPosition); \
	DECLARE_FUNCTION(execWarpingUpdate); \
	DECLARE_FUNCTION(execStopUpdatingWarpPoint); \
	DECLARE_FUNCTION(execSetMotionWarpingTarget); \
	DECLARE_FUNCTION(execResetValues);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJacobMotionWarpingComponent(); \
	friend struct Z_Construct_UClass_UJacobMotionWarpingComponent_Statics; \
public: \
	DECLARE_CLASS(UJacobMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UJacobMotionWarpingComponent)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJacobMotionWarpingComponent(UJacobMotionWarpingComponent&&); \
	UJacobMotionWarpingComponent(const UJacobMotionWarpingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJacobMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJacobMotionWarpingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJacobMotionWarpingComponent) \
	NO_API virtual ~UJacobMotionWarpingComponent();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_12_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UJacobMotionWarpingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
