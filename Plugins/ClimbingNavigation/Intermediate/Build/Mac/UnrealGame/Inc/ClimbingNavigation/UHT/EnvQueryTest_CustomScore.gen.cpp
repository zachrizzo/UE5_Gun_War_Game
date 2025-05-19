// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQueryTest_CustomScore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_CustomScore() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CustomScoreDefine_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQueryTest_CustomScore
void UEnvQueryTest_CustomScore::StaticRegisterNativesUEnvQueryTest_CustomScore()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_CustomScore);
UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore_NoRegister()
{
	return UEnvQueryTest_CustomScore::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQueryTest_CustomScore.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreModifyClass_MetaData[] = {
		{ "Category", "ScoreLogic" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersContext_MetaData[] = {
		{ "Category", "AddtiveContext" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreModifyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharactersContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_CustomScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ScoreModifyClass = { "ScoreModifyClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_CustomScore, ScoreModifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQuery_CustomScoreDefine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreModifyClass_MetaData), NewProp_ScoreModifyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_CharactersContext = { "CharactersContext", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_CustomScore, CharactersContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersContext_MetaData), NewProp_CharactersContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ScoreModifyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_CharactersContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::ClassParams = {
	&UEnvQueryTest_CustomScore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQueryTest_CustomScore>()
{
	return UEnvQueryTest_CustomScore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_CustomScore);
UEnvQueryTest_CustomScore::~UEnvQueryTest_CustomScore() {}
// End Class UEnvQueryTest_CustomScore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_CustomScore, UEnvQueryTest_CustomScore::StaticClass, TEXT("UEnvQueryTest_CustomScore"), &Z_Registration_Info_UClass_UEnvQueryTest_CustomScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_CustomScore), 3121247242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h_4040883081(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
