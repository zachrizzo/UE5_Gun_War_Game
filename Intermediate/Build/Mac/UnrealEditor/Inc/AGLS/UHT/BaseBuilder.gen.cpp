// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS/BaseBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBuilder() {}

// Begin Cross Module References
AGLS_API UClass* Z_Construct_UClass_ABaseBuilder();
AGLS_API UClass* Z_Construct_UClass_ABaseBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AGLS();
// End Cross Module References

// Begin Class ABaseBuilder
void ABaseBuilder::StaticRegisterNativesABaseBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBuilder);
UClass* Z_Construct_UClass_ABaseBuilder_NoRegister()
{
	return ABaseBuilder::StaticClass();
}
struct Z_Construct_UClass_ABaseBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseBuilder.h" },
		{ "ModuleRelativePath", "BaseBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AGLS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBuilder_Statics::ClassParams = {
	&ABaseBuilder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseBuilder()
{
	if (!Z_Registration_Info_UClass_ABaseBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBuilder.OuterSingleton, Z_Construct_UClass_ABaseBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseBuilder.OuterSingleton;
}
template<> AGLS_API UClass* StaticClass<ABaseBuilder>()
{
	return ABaseBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBuilder);
ABaseBuilder::~ABaseBuilder() {}
// End Class ABaseBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_BaseBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBuilder, ABaseBuilder::StaticClass, TEXT("ABaseBuilder"), &Z_Registration_Info_UClass_ABaseBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBuilder), 999169127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_BaseBuilder_h_2765292130(TEXT("/Script/AGLS"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_BaseBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_BaseBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
