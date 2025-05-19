// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQuery_CompositeScoreDefine.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery_CompositeScoreDefine() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Enum ECompositeScoreDistribution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompositeScoreDistribution;
static UEnum* ECompositeScoreDistribution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECompositeScoreDistribution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECompositeScoreDistribution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("ECompositeScoreDistribution"));
	}
	return Z_Registration_Info_UEnum_ECompositeScoreDistribution.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<ECompositeScoreDistribution>()
{
	return ECompositeScoreDistribution_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.Name", "ECompositeScoreDistribution::Custom" },
		{ "inverseLinear.Name", "ECompositeScoreDistribution::inverseLinear" },
		{ "Linear.Name", "ECompositeScoreDistribution::Linear" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
		{ "Squared.Name", "ECompositeScoreDistribution::Squared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECompositeScoreDistribution::Linear", (int64)ECompositeScoreDistribution::Linear },
		{ "ECompositeScoreDistribution::inverseLinear", (int64)ECompositeScoreDistribution::inverseLinear },
		{ "ECompositeScoreDistribution::Squared", (int64)ECompositeScoreDistribution::Squared },
		{ "ECompositeScoreDistribution::Custom", (int64)ECompositeScoreDistribution::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"ECompositeScoreDistribution",
	"ECompositeScoreDistribution",
	Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution()
{
	if (!Z_Registration_Info_UEnum_ECompositeScoreDistribution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompositeScoreDistribution.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECompositeScoreDistribution.InnerSingleton;
}
// End Enum ECompositeScoreDistribution

// Begin Class UEnvQuery_CompositeScoreDefine
void UEnvQuery_CompositeScoreDefine::StaticRegisterNativesUEnvQuery_CompositeScoreDefine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQuery_CompositeScoreDefine);
UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister()
{
	return UEnvQuery_CompositeScoreDefine::StaticClass();
}
struct Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Score Define" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQuery_CompositeScoreDefine.h" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPurpose_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The purpose of this test.  Should it be used for filtering possible results, scoring them, or both? */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The purpose of this test.  Should it be used for filtering possible results, scoring them, or both?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestComment_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional comment or explanation about what this test is for.  Useful when the purpose of tests may not be clear,\n\x09  * especially when there are multiple tests of the same type. */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional comment or explanation about what this test is for.  Useful when the purpose of tests may not be clear,\nespecially when there are multiple tests of the same type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionMode_MetaData[] = {
		{ "Category", "Score" },
		{ "EditCondition", "bShowScoreOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Score" },
		{ "EditCondition", "bShowScoreOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreFactor_MetaData[] = {
		{ "Category", "Score" },
		{ "EditCondition", "bShowScoreOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryNormalize_MetaData[] = {
		{ "Category", "Score" },
		{ "EditCondition", "bShowScoreOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Does this test filter out results that are below a lower limit, above an upper limit, or both?  Or does it just look for a matching value? */" },
#endif
		{ "EditCondition", "bShowFilterOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this test filter out results that are below a lower limit, above an upper limit, or both?  Or does it just look for a matching value?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Desired boolean value of the test for scoring to occur or filtering test to pass. */" },
#endif
		{ "EditCondition", "bShowFilterOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Desired boolean value of the test for scoring to occur or filtering test to pass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValueMin_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum limit (inclusive) of valid values for the raw test value. Lower values will be discarded as invalid. */" },
#endif
		{ "EditCondition", "bShowFilterOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum limit (inclusive) of valid values for the raw test value. Lower values will be discarded as invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValueMax_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum limit (inclusive) of valid values for the raw test value. Higher values will be discarded as invalid. */" },
#endif
		{ "EditCondition", "bShowFilterOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EnvQuery_CompositeScoreDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum limit (inclusive) of valid values for the raw test value. Higher values will be discarded as invalid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestPurpose;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestComment;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Context;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistributionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributionMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreFactor;
	static void NewProp_bTryNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryNormalize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValueMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValueMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery_CompositeScoreDefine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_TestPurpose = { "TestPurpose", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, TestPurpose), Z_Construct_UEnum_AIModule_EEnvTestPurpose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPurpose_MetaData), NewProp_TestPurpose_MetaData) }; // 3393873306
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_TestComment = { "TestComment", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, TestComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestComment_MetaData), NewProp_TestComment_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, Context), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_DistributionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_DistributionMode = { "DistributionMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, DistributionMode), Z_Construct_UEnum_ClimbingNavigation_ECompositeScoreDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionMode_MetaData), NewProp_DistributionMode_MetaData) }; // 3690448770
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCurve_MetaData), NewProp_CustomCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_ScoreFactor = { "ScoreFactor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, ScoreFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreFactor_MetaData), NewProp_ScoreFactor_MetaData) };
void Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_bTryNormalize_SetBit(void* Obj)
{
	((UEnvQuery_CompositeScoreDefine*)Obj)->bTryNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_bTryNormalize = { "bTryNormalize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQuery_CompositeScoreDefine), &Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_bTryNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryNormalize_MetaData), NewProp_bTryNormalize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, FilterType), Z_Construct_UEnum_AIModule_EEnvTestFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 3311921176
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, BoolValue), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) }; // 4208764161
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_FloatValueMin = { "FloatValueMin", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, FloatValueMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValueMin_MetaData), NewProp_FloatValueMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_FloatValueMax = { "FloatValueMax", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CompositeScoreDefine, FloatValueMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValueMax_MetaData), NewProp_FloatValueMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_TestPurpose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_TestComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_DistributionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_DistributionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_CustomCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_ScoreFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_bTryNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_FloatValueMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::NewProp_FloatValueMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::ClassParams = {
	&UEnvQuery_CompositeScoreDefine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine()
{
	if (!Z_Registration_Info_UClass_UEnvQuery_CompositeScoreDefine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQuery_CompositeScoreDefine.OuterSingleton, Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQuery_CompositeScoreDefine.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQuery_CompositeScoreDefine>()
{
	return UEnvQuery_CompositeScoreDefine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery_CompositeScoreDefine);
UEnvQuery_CompositeScoreDefine::~UEnvQuery_CompositeScoreDefine() {}
// End Class UEnvQuery_CompositeScoreDefine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECompositeScoreDistribution_StaticEnum, TEXT("ECompositeScoreDistribution"), &Z_Registration_Info_UEnum_ECompositeScoreDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3690448770U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQuery_CompositeScoreDefine, UEnvQuery_CompositeScoreDefine::StaticClass, TEXT("UEnvQuery_CompositeScoreDefine"), &Z_Registration_Info_UClass_UEnvQuery_CompositeScoreDefine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQuery_CompositeScoreDefine), 2222751069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_326955814(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
