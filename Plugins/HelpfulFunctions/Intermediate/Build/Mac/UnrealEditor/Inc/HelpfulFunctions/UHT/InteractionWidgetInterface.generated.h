// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
#ifdef HELPFULFUNCTIONS_InteractionWidgetInterface_generated_h
#error "InteractionWidgetInterface.generated.h already included, missing '#pragma once' in InteractionWidgetInterface.h"
#endif
#define HELPFULFUNCTIONS_InteractionWidgetInterface_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPI_UI_Set_WidgetTextsValues_Implementation(FName Text01, FName Text02, float Float01, FLinearColor Color01, FLinearColor Color02, UObject* Object01, UObject* Object02) {}; \
	virtual void BPI_UI_PlayInitAnimation_Implementation() {}; \
	virtual void BPI_UI_Set_WidgetWorldLocation_Implementation(FVector InWorldLocation) {}; \
	DECLARE_FUNCTION(execBPI_UI_Set_WidgetTextsValues); \
	DECLARE_FUNCTION(execBPI_UI_PlayInitAnimation); \
	DECLARE_FUNCTION(execBPI_UI_Set_WidgetWorldLocation);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_CALLBACK_WRAPPERS
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UInteractionWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionWidgetInterface(UInteractionWidgetInterface&&); \
	UInteractionWidgetInterface(const UInteractionWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UInteractionWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionWidgetInterface) \
	HELPFULFUNCTIONS_API virtual ~UInteractionWidgetInterface();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionWidgetInterface(); \
	friend struct Z_Construct_UClass_UInteractionWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UInteractionWidgetInterface)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionWidgetInterface() {} \
public: \
	typedef UInteractionWidgetInterface UClassType; \
	typedef IInteractionWidgetInterface ThisClass; \
	static void Execute_BPI_UI_PlayInitAnimation(UObject* O); \
	static void Execute_BPI_UI_Set_WidgetTextsValues(UObject* O, FName Text01, FName Text02, float Float01, FLinearColor Color01, FLinearColor Color02, UObject* Object01, UObject* Object02); \
	static void Execute_BPI_UI_Set_WidgetWorldLocation(UObject* O, FVector InWorldLocation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_10_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_CALLBACK_WRAPPERS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UInteractionWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
