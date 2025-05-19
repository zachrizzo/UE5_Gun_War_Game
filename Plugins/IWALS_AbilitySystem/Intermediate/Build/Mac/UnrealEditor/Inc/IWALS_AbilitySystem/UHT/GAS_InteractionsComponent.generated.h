// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS_InteractionsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;
class UUserWidget;
struct FGameplayAbilityBindIWALS;
struct FGameplayTag;
struct FGameplayTag; class UGameplayAbility;
struct FHitResult;
#ifdef IWALS_ABILITYSYSTEM_GAS_InteractionsComponent_generated_h
#error "GAS_InteractionsComponent.generated.h already included, missing '#pragma once' in GAS_InteractionsComponent.h"
#endif
#define IWALS_ABILITYSYSTEM_GAS_InteractionsComponent_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_24_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnAbilityLoadingComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityLoadingComplete, TSubclassOf<UGameplayAbility> LoadedAbility);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_25_DELEGATE \
IWALS_ABILITYSYSTEM_API void FContinueInteraction_DelegateWrapper(const FMulticastScriptDelegate& ContinueInteraction, AActor* BestActor, TArray<AActor*> const& AllActorsInRange);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOverlappedActors); \
	DECLARE_FUNCTION(execRunAbilityForActor); \
	DECLARE_FUNCTION(execLoadAbilitesMatchedToActors); \
	DECLARE_FUNCTION(execTryFindAndActivateAbility); \
	DECLARE_FUNCTION(execCheckRequiredConditionsWhenAbility); \
	DECLARE_FUNCTION(execCheckRequiredConditionsWhenOverlap); \
	DECLARE_FUNCTION(execTrySpawnCorrectInteractionWidget); \
	DECLARE_FUNCTION(execGetChoosedActorForInteraction); \
	DECLARE_FUNCTION(execOnAbilityClassLoaded); \
	DECLARE_FUNCTION(execOnWidgetClassLoaded); \
	DECLARE_FUNCTION(execAsyncLoadAbilityClass); \
	DECLARE_FUNCTION(execAsyncLoadWidgetClass); \
	DECLARE_FUNCTION(execTryFindAbilityClassByTag); \
	DECLARE_FUNCTION(execGetHardRefAbilitiesFromSet); \
	DECLARE_FUNCTION(execGetSoftRefAbilitiesFromSet); \
	DECLARE_FUNCTION(execCurrentHasThisAbility); \
	DECLARE_FUNCTION(execAddNewAbilityClassToComponent);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_CALLBACK_WRAPPERS
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_InteractionsComponent(); \
	friend struct Z_Construct_UClass_UGAS_InteractionsComponent_Statics; \
public: \
	DECLARE_CLASS(UGAS_InteractionsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGAS_InteractionsComponent)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_InteractionsComponent(UGAS_InteractionsComponent&&); \
	UGAS_InteractionsComponent(const UGAS_InteractionsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_InteractionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_InteractionsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_InteractionsComponent) \
	NO_API virtual ~UGAS_InteractionsComponent();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_27_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_CALLBACK_WRAPPERS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UGAS_InteractionsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_InteractionsComponent_h


#define FOREACH_ENUM_EAGLS_INTERACTIVEACTORSSORT(op) \
	op(EAGLS_InteractiveActorsSort::NoSorting) \
	op(EAGLS_InteractiveActorsSort::BasedOnDistance) \
	op(EAGLS_InteractiveActorsSort::BasedOnAngle) \
	op(EAGLS_InteractiveActorsSort::DistanceAndAngle) 

enum class EAGLS_InteractiveActorsSort : uint8;
template<> struct TIsUEnumClass<EAGLS_InteractiveActorsSort> { enum { Value = true }; };
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<EAGLS_InteractiveActorsSort>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
