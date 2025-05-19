// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_ZombieAttacksComponentCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELPFULFUNCTIONS_AGLS_ZombieAttacksComponentCore_generated_h
#error "AGLS_ZombieAttacksComponentCore.generated.h already included, missing '#pragma once' in AGLS_ZombieAttacksComponentCore.h"
#endif
#define HELPFULFUNCTIONS_AGLS_ZombieAttacksComponentCore_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_10_DELEGATE \
HELPFULFUNCTIONS_API void FOnAttackStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackStarted, float ActionDuration);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_11_DELEGATE \
HELPFULFUNCTIONS_API void FOnAttackEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnded, float ActionElapsedTime);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCorrectlySetAttackTimer); \
	DECLARE_FUNCTION(execCallOnAttackEnded); \
	DECLARE_FUNCTION(execCallOnAttackStarted);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_ZombieAttacksComponentCore(); \
	friend struct Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics; \
public: \
	DECLARE_CLASS(UAGLS_ZombieAttacksComponentCore, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UAGLS_ZombieAttacksComponentCore)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAGLS_ZombieAttacksComponentCore(UAGLS_ZombieAttacksComponentCore&&); \
	UAGLS_ZombieAttacksComponentCore(const UAGLS_ZombieAttacksComponentCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_ZombieAttacksComponentCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_ZombieAttacksComponentCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGLS_ZombieAttacksComponentCore) \
	NO_API virtual ~UAGLS_ZombieAttacksComponentCore();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_20_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UAGLS_ZombieAttacksComponentCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
