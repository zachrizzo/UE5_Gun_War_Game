// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQuery_CSD_CheckPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery_CSD_CheckPath() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CSD_CheckPath();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CSD_CheckPath_NoRegister();
CLIMBINGNAVIGATION_API UEnum* Z_Construct_UEnum_ClimbingNavigation_EPathTestMode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Enum EPathTestMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathTestMode;
static UEnum* EPathTestMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathTestMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathTestMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClimbingNavigation_EPathTestMode, (UObject*)Z_Construct_UPackage__Script_ClimbingNavigation(), TEXT("EPathTestMode"));
	}
	return Z_Registration_Info_UEnum_EPathTestMode.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EPathTestMode>()
{
	return EPathTestMode_StaticEnum();
}
struct Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
		{ "NoCheck.Name", "EPathTestMode::NoCheck" },
		{ "OnlyAsValid.Name", "EPathTestMode::OnlyAsValid" },
		{ "WithDistance.Name", "EPathTestMode::WithDistance" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathTestMode::NoCheck", (int64)EPathTestMode::NoCheck },
		{ "EPathTestMode::OnlyAsValid", (int64)EPathTestMode::OnlyAsValid },
		{ "EPathTestMode::WithDistance", (int64)EPathTestMode::WithDistance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClimbingNavigation,
	nullptr,
	"EPathTestMode",
	"EPathTestMode",
	Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClimbingNavigation_EPathTestMode()
{
	if (!Z_Registration_Info_UEnum_EPathTestMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathTestMode.InnerSingleton, Z_Construct_UEnum_ClimbingNavigation_EPathTestMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathTestMode.InnerSingleton;
}
// End Enum EPathTestMode

// Begin Class UEnvQuery_CSD_CheckPath
void UEnvQuery_CSD_CheckPath::StaticRegisterNativesUEnvQuery_CSD_CheckPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQuery_CSD_CheckPath);
UClass* Z_Construct_UClass_UEnvQuery_CSD_CheckPath_NoRegister()
{
	return UEnvQuery_CSD_CheckPath::StaticClass();
}
struct Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "CheckPath" },
		{ "IncludePath", "EnvQuery_CSD_CheckPath.h" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTestMode_MetaData[] = {
		{ "Category", "Path Test" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckCost_MetaData[] = {
		{ "Category", "Path Test" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckFromContext_MetaData[] = {
		{ "Category", "Path Test" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavFilter_MetaData[] = {
		{ "Category", "Path Test" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefNormalizationMin_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefNormalizationMax_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/EnvQuery_CSD_CheckPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathTestMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathTestMode;
	static void NewProp_bCheckCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCost;
	static void NewProp_bCheckFromContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckFromContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NavFilter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefNormalizationMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefNormalizationMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery_CSD_CheckPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_PathTestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_PathTestMode = { "PathTestMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_CheckPath, PathTestMode), Z_Construct_UEnum_ClimbingNavigation_EPathTestMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTestMode_MetaData), NewProp_PathTestMode_MetaData) }; // 2796343753
void Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckCost_SetBit(void* Obj)
{
	((UEnvQuery_CSD_CheckPath*)Obj)->bCheckCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckCost = { "bCheckCost", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQuery_CSD_CheckPath), &Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckCost_MetaData), NewProp_bCheckCost_MetaData) };
void Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckFromContext_SetBit(void* Obj)
{
	((UEnvQuery_CSD_CheckPath*)Obj)->bCheckFromContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckFromContext = { "bCheckFromContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQuery_CSD_CheckPath), &Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckFromContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckFromContext_MetaData), NewProp_bCheckFromContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_NavFilter = { "NavFilter", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_CheckPath, NavFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavFilter_MetaData), NewProp_NavFilter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_RefNormalizationMin = { "RefNormalizationMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_CheckPath, RefNormalizationMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefNormalizationMin_MetaData), NewProp_RefNormalizationMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_RefNormalizationMax = { "RefNormalizationMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery_CSD_CheckPath, RefNormalizationMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefNormalizationMax_MetaData), NewProp_RefNormalizationMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_PathTestMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_PathTestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_bCheckFromContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_NavFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_RefNormalizationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::NewProp_RefNormalizationMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQuery_CompositeScoreDefine,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::ClassParams = {
	&UEnvQuery_CSD_CheckPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQuery_CSD_CheckPath()
{
	if (!Z_Registration_Info_UClass_UEnvQuery_CSD_CheckPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQuery_CSD_CheckPath.OuterSingleton, Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQuery_CSD_CheckPath.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQuery_CSD_CheckPath>()
{
	return UEnvQuery_CSD_CheckPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery_CSD_CheckPath);
UEnvQuery_CSD_CheckPath::~UEnvQuery_CSD_CheckPath() {}
// End Class UEnvQuery_CSD_CheckPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathTestMode_StaticEnum, TEXT("EPathTestMode"), &Z_Registration_Info_UEnum_EPathTestMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2796343753U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQuery_CSD_CheckPath, UEnvQuery_CSD_CheckPath::StaticClass, TEXT("UEnvQuery_CSD_CheckPath"), &Z_Registration_Info_UClass_UEnvQuery_CSD_CheckPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQuery_CSD_CheckPath), 2408260504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_402299087(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
