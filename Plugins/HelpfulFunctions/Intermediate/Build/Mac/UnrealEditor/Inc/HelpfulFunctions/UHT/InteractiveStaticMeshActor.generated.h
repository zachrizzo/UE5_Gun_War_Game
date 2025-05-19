// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveStaticMeshActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELPFULFUNCTIONS_InteractiveStaticMeshActor_generated_h
#error "InteractiveStaticMeshActor.generated.h already included, missing '#pragma once' in InteractiveStaticMeshActor.h"
#endif
#define HELPFULFUNCTIONS_InteractiveStaticMeshActor_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceDestroyWidget); \
	DECLARE_FUNCTION(execGetInteractionState); \
	DECLARE_FUNCTION(execUpdateInteractionState);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveStaticMeshActor(); \
	friend struct Z_Construct_UClass_AInteractiveStaticMeshActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveStaticMeshActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveStaticMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractiveStaticMeshActor*>(this); }


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractiveStaticMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractiveStaticMeshActor(AInteractiveStaticMeshActor&&); \
	AInteractiveStaticMeshActor(const AInteractiveStaticMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveStaticMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveStaticMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveStaticMeshActor) \
	NO_API virtual ~AInteractiveStaticMeshActor();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_24_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AInteractiveStaticMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveStaticMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
