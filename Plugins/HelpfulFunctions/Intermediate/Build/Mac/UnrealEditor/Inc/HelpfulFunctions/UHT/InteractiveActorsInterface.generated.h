// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveActorsInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UObject;
class UUserWidget;
enum class CALS_OverlayState : uint8;
struct FGameplayTagContainer;
struct FHitResult;
struct FLinearColor;
#ifdef HELPFULFUNCTIONS_InteractiveActorsInterface_generated_h
#error "InteractiveActorsInterface.generated.h already included, missing '#pragma once' in InteractiveActorsInterface.h"
#endif
#define HELPFULFUNCTIONS_InteractiveActorsInterface_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPI_IA_Set_CanDisplayWidget_Implementation(bool CanDisplay) {}; \
	virtual void BPI_AI_Set_ActivateFunctionality_Implementation(bool Activate, ACharacter* Target) {}; \
	virtual void BPI_AI_Set_StartPlayerCollisionBlock_Implementation(bool BlockCollision, float TimeToBlock) {}; \
	virtual void BPI_AI_Set_StartInteractionTypeB_Implementation(bool Start) {}; \
	virtual void BPI_AI_Set_StartInteraction_Implementation(bool Start) {}; \
	virtual void BPI_AI_Set_HitByBullet_Implementation(FHitResult HitInfo, ACharacter* FromCharacter, AActor* FromActor) {}; \
	virtual void BPI_IA_Set_CreatedWidgetInstance_Implementation(UUserWidget* WidgetInstance) {}; \
	virtual void BPI_AI_Get_ObjectTracingOrigin_Implementation(FVector& PositionWS) {}; \
	virtual void BPI_AI_Get_ActorStartedInteraction_Implementation(bool& Started) {}; \
	virtual void BPI_IA_Get_ObjectCollisionOverlap_Implementation(bool& IsOverlaping, TArray<AActor*>& ToIgnore) {}; \
	virtual void BPI_IA_Get_ConfigHoldingOption_Implementation(bool& ActorCanBeHold, CALS_OverlayState& OverlayMatch) {}; \
	virtual void BPI_IA_Get_CreatedWidgetInstance_Implementation(UUserWidget*& WidgetInstance) const {}; \
	virtual void BPI_IA_Get_CheckDurningOverlap_Implementation(bool& CheckBasicStates, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace) {}; \
	virtual void BPI_IA_Get_CheckDurningAbilityRun_Implementation(bool& CheckBasicStates, bool& UseCorrectAngle, FVector2D& AngleArc, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace, AActor*& ToIgnores) {}; \
	virtual void BPI_IA_Get_WidgetWorldPosition_Implementation(FVector& ReturnPosition) {}; \
	virtual void BPI_IA_Get_RequiredAbilityOnOverlap_Implementation(bool& Require) const {}; \
	virtual void BPI_IA_Get_InteractionType_Implementation(int32& InteractionType) {}; \
	virtual void BPI_IA_Get_WidgetParams_Implementation(ACharacter* PlayerChar, FName& Text01, FName& Text02, float& Float01, FLinearColor& Color01, FLinearColor& Color02, UObject*& Object01, UObject*& Object02) {}; \
	virtual void BPI_IA_Get_OverridedWidget_Implementation(TSoftClassPtr<UUserWidget> & ReturnSoftClass) {}; \
	virtual void BPI_IA_Get_CurrentVelocity_Implementation(FVector& ReturnVelocity) {}; \
	virtual void BPI_IA_Get_InteractionTag_Implementation(FGameplayTagContainer& ReturnTag) {}; \
	DECLARE_FUNCTION(execBPI_IA_Set_CanDisplayWidget); \
	DECLARE_FUNCTION(execBPI_AI_Set_ActivateFunctionality); \
	DECLARE_FUNCTION(execBPI_AI_Set_StartPlayerCollisionBlock); \
	DECLARE_FUNCTION(execBPI_AI_Set_StartInteractionTypeB); \
	DECLARE_FUNCTION(execBPI_AI_Set_StartInteraction); \
	DECLARE_FUNCTION(execBPI_AI_Set_HitByBullet); \
	DECLARE_FUNCTION(execBPI_IA_Set_CreatedWidgetInstance); \
	DECLARE_FUNCTION(execBPI_AI_Get_ObjectTracingOrigin); \
	DECLARE_FUNCTION(execBPI_AI_Get_ActorStartedInteraction); \
	DECLARE_FUNCTION(execBPI_IA_Get_ObjectCollisionOverlap); \
	DECLARE_FUNCTION(execBPI_IA_Get_ConfigHoldingOption); \
	DECLARE_FUNCTION(execBPI_IA_Get_CreatedWidgetInstance); \
	DECLARE_FUNCTION(execBPI_IA_Get_CheckDurningOverlap); \
	DECLARE_FUNCTION(execBPI_IA_Get_CheckDurningAbilityRun); \
	DECLARE_FUNCTION(execBPI_IA_Get_WidgetWorldPosition); \
	DECLARE_FUNCTION(execBPI_IA_Get_RequiredAbilityOnOverlap); \
	DECLARE_FUNCTION(execBPI_IA_Get_InteractionType); \
	DECLARE_FUNCTION(execBPI_IA_Get_WidgetParams); \
	DECLARE_FUNCTION(execBPI_IA_Get_OverridedWidget); \
	DECLARE_FUNCTION(execBPI_IA_Get_CurrentVelocity); \
	DECLARE_FUNCTION(execBPI_IA_Get_InteractionTag);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_CALLBACK_WRAPPERS
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UInteractiveActorsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveActorsInterface(UInteractiveActorsInterface&&); \
	UInteractiveActorsInterface(const UInteractiveActorsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UInteractiveActorsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveActorsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveActorsInterface) \
	HELPFULFUNCTIONS_API virtual ~UInteractiveActorsInterface();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractiveActorsInterface(); \
	friend struct Z_Construct_UClass_UInteractiveActorsInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractiveActorsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UInteractiveActorsInterface)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractiveActorsInterface() {} \
public: \
	typedef UInteractiveActorsInterface UClassType; \
	typedef IInteractiveActorsInterface ThisClass; \
	static void Execute_BPI_AI_Get_ActorStartedInteraction(UObject* O, bool& Started); \
	static void Execute_BPI_AI_Get_ObjectTracingOrigin(UObject* O, FVector& PositionWS); \
	static void Execute_BPI_AI_Set_ActivateFunctionality(UObject* O, bool Activate, ACharacter* Target); \
	static void Execute_BPI_AI_Set_HitByBullet(UObject* O, FHitResult HitInfo, ACharacter* FromCharacter, AActor* FromActor); \
	static void Execute_BPI_AI_Set_StartInteraction(UObject* O, bool Start); \
	static void Execute_BPI_AI_Set_StartInteractionTypeB(UObject* O, bool Start); \
	static void Execute_BPI_AI_Set_StartPlayerCollisionBlock(UObject* O, bool BlockCollision, float TimeToBlock); \
	static void Execute_BPI_IA_Get_CheckDurningAbilityRun(UObject* O, bool& CheckBasicStates, bool& UseCorrectAngle, FVector2D& AngleArc, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace, AActor*& ToIgnores); \
	static void Execute_BPI_IA_Get_CheckDurningOverlap(UObject* O, bool& CheckBasicStates, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace); \
	static void Execute_BPI_IA_Get_ConfigHoldingOption(UObject* O, bool& ActorCanBeHold, CALS_OverlayState& OverlayMatch); \
	static void Execute_BPI_IA_Get_CreatedWidgetInstance(const UObject* O, UUserWidget*& WidgetInstance); \
	static void Execute_BPI_IA_Get_CurrentVelocity(UObject* O, FVector& ReturnVelocity); \
	static void Execute_BPI_IA_Get_InteractionTag(UObject* O, FGameplayTagContainer& ReturnTag); \
	static void Execute_BPI_IA_Get_InteractionType(UObject* O, int32& InteractionType); \
	static void Execute_BPI_IA_Get_ObjectCollisionOverlap(UObject* O, bool& IsOverlaping, TArray<AActor*>& ToIgnore); \
	static void Execute_BPI_IA_Get_OverridedWidget(UObject* O, TSoftClassPtr<UUserWidget> & ReturnSoftClass); \
	static void Execute_BPI_IA_Get_RequiredAbilityOnOverlap(const UObject* O, bool& Require); \
	static void Execute_BPI_IA_Get_WidgetParams(UObject* O, ACharacter* PlayerChar, FName& Text01, FName& Text02, float& Float01, FLinearColor& Color01, FLinearColor& Color02, UObject*& Object01, UObject*& Object02); \
	static void Execute_BPI_IA_Get_WidgetWorldPosition(UObject* O, FVector& ReturnPosition); \
	static void Execute_BPI_IA_Set_CanDisplayWidget(UObject* O, bool CanDisplay); \
	static void Execute_BPI_IA_Set_CreatedWidgetInstance(UObject* O, UUserWidget* WidgetInstance); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_14_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_CALLBACK_WRAPPERS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UInteractiveActorsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
