// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_TimerFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_TimerFunction;
class UGameplayAbility;
#ifdef IWALS_ABILITYSYSTEM_AbilityTask_TimerFunction_generated_h
#error "AbilityTask_TimerFunction.generated.h already included, missing '#pragma once' in AbilityTask_TimerFunction.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_TimerFunction_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_11_DELEGATE \
IWALS_ABILITYSYSTEM_API void FExecuteTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExecuteTickDelegate);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTimerTask);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_TimerFunction(); \
	friend struct Z_Construct_UClass_UAbilityTask_TimerFunction_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_TimerFunction, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_TimerFunction)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_TimerFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_TimerFunction(UAbilityTask_TimerFunction&&); \
	UAbilityTask_TimerFunction(const UAbilityTask_TimerFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_TimerFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_TimerFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_TimerFunction) \
	NO_API virtual ~UAbilityTask_TimerFunction();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_13_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UAbilityTask_TimerFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
