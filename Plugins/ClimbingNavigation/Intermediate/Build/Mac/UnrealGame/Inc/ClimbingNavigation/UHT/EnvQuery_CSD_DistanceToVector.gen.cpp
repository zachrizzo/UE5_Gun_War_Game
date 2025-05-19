// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQuery_CSD_DistanceToVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery_CSD_DistanceToVector() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQuery_CSD_DistanceToVector
void UEnvQuery_CSD_DistanceToVector::StaticRegisterNativesUEnvQuery_CSD_DistanceToVector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQuery_CSD_DistanceToVector);
UClass* Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_NoRegister()
{
	return UEnvQuery_CSD_DistanceToVector::StaticClass();
}
struct Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "DistanceToVector" },
		{ "IncludePath", "EnvQuery_CSD_DistanceToVector.h" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_DistanceToVector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZ_MetaData[] = {
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_DistanceToVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextOffsetZ_MetaData[] = {
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_DistanceToVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefNormalizationMax_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_DistanceToVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefNormalizationMin_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_DistanceToVector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContextOffsetZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefNormalizationMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefNormalizationMin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery_CSD_DistanceToVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_bIgnoreZ_SetBit(void* Obj)
{
	((UEnvQuery_CSD_DistanceToVector*)Obj)->bIgnoreZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_bIgnoreZ = { "bIgnoreZ", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQuery_CSD_DistanceToVector), &Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_bIgnoreZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreZ_MetaData), NewProp_bIgnoreZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_ContextOffsetZ = { "ContextOffsetZ", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_DistanceToVector, ContextOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextOffsetZ_MetaData), NewProp_ContextOffsetZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_RefNormalizationMax = { "RefNormalizationMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_DistanceToVector, RefNormalizationMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefNormalizationMax_MetaData), NewProp_RefNormalizationMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_RefNormalizationMin = { "RefNormalizationMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_DistanceToVector, RefNormalizationMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefNormalizationMin_MetaData), NewProp_RefNormalizationMin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_bIgnoreZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_ContextOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_RefNormalizationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::NewProp_RefNormalizationMin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQuery_CompositeScoreDefine,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::ClassParams = {
	&UEnvQuery_CSD_DistanceToVector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector()
{
	if (!Z_Registration_Info_UClass_UEnvQuery_CSD_DistanceToVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQuery_CSD_DistanceToVector.OuterSingleton, Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQuery_CSD_DistanceToVector.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQuery_CSD_DistanceToVector>()
{
	return UEnvQuery_CSD_DistanceToVector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery_CSD_DistanceToVector);
UEnvQuery_CSD_DistanceToVector::~UEnvQuery_CSD_DistanceToVector() {}
// End Class UEnvQuery_CSD_DistanceToVector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_DistanceToVector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQuery_CSD_DistanceToVector, UEnvQuery_CSD_DistanceToVector::StaticClass, TEXT("UEnvQuery_CSD_DistanceToVector"), &Z_Registration_Info_UClass_UEnvQuery_CSD_DistanceToVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQuery_CSD_DistanceToVector), 1591409253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_DistanceToVector_h_2815595438(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_DistanceToVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_DistanceToVector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
