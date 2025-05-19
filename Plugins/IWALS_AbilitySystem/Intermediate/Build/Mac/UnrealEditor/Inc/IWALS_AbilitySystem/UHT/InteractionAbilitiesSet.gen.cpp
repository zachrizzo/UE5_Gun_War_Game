// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/InteractionAbilitiesSet.h"
#include "IWALS_AbilitySystem/Public/IWALS_GameplayAbilitySet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAbilitiesSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UInteractionAbilitiesSet();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UInteractionAbilitiesSet_NoRegister();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityBindIWALS();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Class UInteractionAbilitiesSet
void UInteractionAbilitiesSet::StaticRegisterNativesUInteractionAbilitiesSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionAbilitiesSet);
UClass* Z_Construct_UClass_UInteractionAbilitiesSet_NoRegister()
{
	return UInteractionAbilitiesSet::StaticClass();
}
struct Z_Construct_UClass_UInteractionAbilitiesSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "InteractionAbilitiesSet.h" },
		{ "ModuleRelativePath", "Public/InteractionAbilitiesSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftRefAbilitiesSet_MetaData[] = {
		{ "Category", "AbilitySetSoftRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Abilities that will be stored here and will not be loaded into memory at the start of the game. During the interaction, it is determined\n\x09   what matching GameplayAbility is required, and then the class is loaded into memory from disk.*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractionAbilitiesSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities that will be stored here and will not be loaded into memory at the start of the game. During the interaction, it is determined\n         what matching GameplayAbility is required, and then the class is loaded into memory from disk." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysLoadedAbilitiesSet_MetaData[] = {
		{ "Category", "AbilitySetAlwaysLoaded" },
		{ "ModuleRelativePath", "Public/InteractionAbilitiesSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftRefAbilitiesSet_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoftRefAbilitiesSet_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SoftRefAbilitiesSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlwaysLoadedAbilitiesSet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlwaysLoadedAbilitiesSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionAbilitiesSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_SoftRefAbilitiesSet_ValueProp = { "SoftRefAbilitiesSet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_SoftRefAbilitiesSet_Key_KeyProp = { "SoftRefAbilitiesSet_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_SoftRefAbilitiesSet = { "SoftRefAbilitiesSet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionAbilitiesSet, SoftRefAbilitiesSet), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftRefAbilitiesSet_MetaData), NewProp_SoftRefAbilitiesSet_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_AlwaysLoadedAbilitiesSet_Inner = { "AlwaysLoadedAbilitiesSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilityBindIWALS, METADATA_PARAMS(0, nullptr) }; // 2428963816
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_AlwaysLoadedAbilitiesSet = { "AlwaysLoadedAbilitiesSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionAbilitiesSet, AlwaysLoadedAbilitiesSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysLoadedAbilitiesSet_MetaData), NewProp_AlwaysLoadedAbilitiesSet_MetaData) }; // 2428963816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionAbilitiesSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_SoftRefAbilitiesSet_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_SoftRefAbilitiesSet_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_SoftRefAbilitiesSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_AlwaysLoadedAbilitiesSet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAbilitiesSet_Statics::NewProp_AlwaysLoadedAbilitiesSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAbilitiesSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionAbilitiesSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAbilitiesSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionAbilitiesSet_Statics::ClassParams = {
	&UInteractionAbilitiesSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractionAbilitiesSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAbilitiesSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAbilitiesSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionAbilitiesSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionAbilitiesSet()
{
	if (!Z_Registration_Info_UClass_UInteractionAbilitiesSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionAbilitiesSet.OuterSingleton, Z_Construct_UClass_UInteractionAbilitiesSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionAbilitiesSet.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UInteractionAbilitiesSet>()
{
	return UInteractionAbilitiesSet::StaticClass();
}
UInteractionAbilitiesSet::UInteractionAbilitiesSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionAbilitiesSet);
UInteractionAbilitiesSet::~UInteractionAbilitiesSet() {}
// End Class UInteractionAbilitiesSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionAbilitiesSet, UInteractionAbilitiesSet::StaticClass, TEXT("UInteractionAbilitiesSet"), &Z_Registration_Info_UClass_UInteractionAbilitiesSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionAbilitiesSet), 3260611982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_1202389334(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
