// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQueryTest_Composite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Composite() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_Composite();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_Composite_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Enum EScoreFoldingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScoreFoldingMethod;
static UEnum* EScoreFoldingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScoreFoldingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScoreFoldingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("EScoreFoldingMethod"));
	}
	return Z_Registration_Info_UEnum_EScoreFoldingMethod.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EScoreFoldingMethod>()
{
	return EScoreFoldingMethod_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnvQueryTest_Composite.h" },
		{ "Multiply.Name", "EScoreFoldingMethod::Multiply" },
		{ "Sum.Name", "EScoreFoldingMethod::Sum" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScoreFoldingMethod::Sum", (int64)EScoreFoldingMethod::Sum },
		{ "EScoreFoldingMethod::Multiply", (int64)EScoreFoldingMethod::Multiply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"EScoreFoldingMethod",
	"EScoreFoldingMethod",
	Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod()
{
	if (!Z_Registration_Info_UEnum_EScoreFoldingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScoreFoldingMethod.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScoreFoldingMethod.InnerSingleton;
}
// End Enum EScoreFoldingMethod

// Begin Class UEnvQueryTest_Composite
void UEnvQueryTest_Composite::StaticRegisterNativesUEnvQueryTest_Composite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Composite);
UClass* Z_Construct_UClass_UEnvQueryTest_Composite_NoRegister()
{
	return UEnvQueryTest_Composite::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Composite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Composite" },
		{ "IncludePath", "EnvQueryTest_Composite.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_Composite.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tests_Inner_MetaData[] = {
		{ "Category", "Tests" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[] = {
		{ "Category", "Tests" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoldingMethod_MetaData[] = {
		{ "Category", "Tests" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FoldingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FoldingMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Composite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tests_Inner_MetaData), NewProp_Tests_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0144008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Composite, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tests_MetaData), NewProp_Tests_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_FoldingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_FoldingMethod = { "FoldingMethod", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Composite, FoldingMethod), Z_Construct_UEnum_ClimbingNavigation_EScoreFoldingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoldingMethod_MetaData), NewProp_FoldingMethod_MetaData) }; // 2468413099
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Composite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_Tests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_Tests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_FoldingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Composite_Statics::NewProp_FoldingMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Composite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Composite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Composite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Composite_Statics::ClassParams = {
	&UEnvQueryTest_Composite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Composite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Composite_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Composite_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Composite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Composite()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Composite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Composite.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Composite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Composite.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQueryTest_Composite>()
{
	return UEnvQueryTest_Composite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Composite);
UEnvQueryTest_Composite::~UEnvQueryTest_Composite() {}
// End Class UEnvQueryTest_Composite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScoreFoldingMethod_StaticEnum, TEXT("EScoreFoldingMethod"), &Z_Registration_Info_UEnum_EScoreFoldingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2468413099U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Composite, UEnvQueryTest_Composite::StaticClass, TEXT("UEnvQueryTest_Composite"), &Z_Registration_Info_UClass_UEnvQueryTest_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Composite), 1492550784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_1044415173(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
