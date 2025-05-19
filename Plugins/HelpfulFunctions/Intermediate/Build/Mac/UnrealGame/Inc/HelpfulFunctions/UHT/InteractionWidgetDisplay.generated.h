// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionWidgetDisplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HELPFULFUNCTIONS_InteractionWidgetDisplay_generated_h
#error "InteractionWidgetDisplay.generated.h already included, missing '#pragma once' in InteractionWidgetDisplay.h"
#endif
#define HELPFULFUNCTIONS_InteractionWidgetDisplay_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_12_DELEGATE \
HELPFULFUNCTIONS_API void FWidgetCreatedSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetCreatedSignature);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_13_DELEGATE \
HELPFULFUNCTIONS_API void FWidgetDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetDestroyedSignature);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execDestroyInteractionWidget); \
	DECLARE_FUNCTION(execTryGenerateWidget);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionWidgetDisplay(); \
	friend struct Z_Construct_UClass_UInteractionWidgetDisplay_Statics; \
public: \
	DECLARE_CLASS(UInteractionWidgetDisplay, UArrowComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UInteractionWidgetDisplay)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionWidgetDisplay(UInteractionWidgetDisplay&&); \
	UInteractionWidgetDisplay(const UInteractionWidgetDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionWidgetDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionWidgetDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionWidgetDisplay) \
	NO_API virtual ~UInteractionWidgetDisplay();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_15_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UInteractionWidgetDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
