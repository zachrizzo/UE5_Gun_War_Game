// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELPFULFUNCTIONS_InteractiveActor_generated_h
#error "InteractiveActor.generated.h already included, missing '#pragma once' in InteractiveActor.h"
#endif
#define HELPFULFUNCTIONS_InteractiveActor_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceDestroyWidget); \
	DECLARE_FUNCTION(execGetInteractionState); \
	DECLARE_FUNCTION(execUpdateInteractionState);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveActor(); \
	friend struct Z_Construct_UClass_AInteractiveActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractiveActor*>(this); }


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractiveActor(AInteractiveActor&&); \
	AInteractiveActor(const AInteractiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractiveActor) \
	NO_API virtual ~AInteractiveActor();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_25_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AInteractiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
