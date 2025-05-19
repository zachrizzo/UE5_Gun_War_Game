// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/AGLS_NavLinkCustomComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_NavLinkCustomComponent() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAGLS_NavLinkCustomComponent();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAGLS_NavLinkCustomComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UAGLS_NavLinkCustomComponent
void UAGLS_NavLinkCustomComponent::StaticRegisterNativesUAGLS_NavLinkCustomComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_NavLinkCustomComponent);
UClass* Z_Construct_UClass_UAGLS_NavLinkCustomComponent_NoRegister()
{
	return UAGLS_NavLinkCustomComponent::StaticClass();
}
struct Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AGLS_NavLinkCustomComponent.h" },
		{ "ModuleRelativePath", "Public/AGLS_NavLinkCustomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRelativeBoundOffset_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/AGLS_NavLinkCustomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndRelativeBoundOffset_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Public/AGLS_NavLinkCustomComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRelativeBoundOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndRelativeBoundOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_NavLinkCustomComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::NewProp_StartRelativeBoundOffset = { "StartRelativeBoundOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_NavLinkCustomComponent, StartRelativeBoundOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRelativeBoundOffset_MetaData), NewProp_StartRelativeBoundOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::NewProp_EndRelativeBoundOffset = { "EndRelativeBoundOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_NavLinkCustomComponent, EndRelativeBoundOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndRelativeBoundOffset_MetaData), NewProp_EndRelativeBoundOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::NewProp_StartRelativeBoundOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::NewProp_EndRelativeBoundOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavLinkCustomComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::ClassParams = {
	&UAGLS_NavLinkCustomComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_NavLinkCustomComponent()
{
	if (!Z_Registration_Info_UClass_UAGLS_NavLinkCustomComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_NavLinkCustomComponent.OuterSingleton, Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_NavLinkCustomComponent.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UAGLS_NavLinkCustomComponent>()
{
	return UAGLS_NavLinkCustomComponent::StaticClass();
}
UAGLS_NavLinkCustomComponent::UAGLS_NavLinkCustomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_NavLinkCustomComponent);
UAGLS_NavLinkCustomComponent::~UAGLS_NavLinkCustomComponent() {}
// End Class UAGLS_NavLinkCustomComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_NavLinkCustomComponent, UAGLS_NavLinkCustomComponent::StaticClass, TEXT("UAGLS_NavLinkCustomComponent"), &Z_Registration_Info_UClass_UAGLS_NavLinkCustomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_NavLinkCustomComponent), 2350650592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_3555675412(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
