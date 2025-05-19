// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_Zombie_ControllerAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavigationPath;
#ifdef HELPFULFUNCTIONS_AGLS_Zombie_ControllerAI_generated_h
#error "AGLS_Zombie_ControllerAI.generated.h already included, missing '#pragma once' in AGLS_Zombie_ControllerAI.h"
#endif
#define HELPFULFUNCTIONS_AGLS_Zombie_ControllerAI_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCustomUpdateControlRotation); \
	DECLARE_FUNCTION(execPathWeightByNavLinksNumber); \
	DECLARE_FUNCTION(execDoesPathUseNavLink); \
	DECLARE_FUNCTION(execUpdateSightPerceptionValues);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_CALLBACK_WRAPPERS
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGLS_Zombie_ControllerAI(); \
	friend struct Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics; \
public: \
	DECLARE_CLASS(AAGLS_Zombie_ControllerAI, AAIController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AAGLS_Zombie_ControllerAI)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAGLS_Zombie_ControllerAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAGLS_Zombie_ControllerAI(AAGLS_Zombie_ControllerAI&&); \
	AAGLS_Zombie_ControllerAI(const AAGLS_Zombie_ControllerAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGLS_Zombie_ControllerAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGLS_Zombie_ControllerAI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAGLS_Zombie_ControllerAI) \
	NO_API virtual ~AAGLS_Zombie_ControllerAI();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_24_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_CALLBACK_WRAPPERS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AAGLS_Zombie_ControllerAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h


#define FOREACH_ENUM_ECONTROLLERAI_CONTROLROTMODE(op) \
	op(EControllerAI_ControlRotMode::FromControlRotation) \
	op(EControllerAI_ControlRotMode::FromNotZeroVelocity) \
	op(EControllerAI_ControlRotMode::FromCurrentAcceleration) \
	op(EControllerAI_ControlRotMode::FromFocusPoint) \
	op(EControllerAI_ControlRotMode::FromCustomDefinition) 

enum class EControllerAI_ControlRotMode : uint8;
template<> struct TIsUEnumClass<EControllerAI_ControlRotMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<EControllerAI_ControlRotMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
