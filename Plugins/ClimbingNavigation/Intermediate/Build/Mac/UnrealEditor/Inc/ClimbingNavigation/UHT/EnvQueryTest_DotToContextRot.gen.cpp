// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQueryTest_DotToContextRot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_DotToContextRot() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_DotToContextRot();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_DotToContextRot_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQueryTest_DotToContextRot
void UEnvQueryTest_DotToContextRot::StaticRegisterNativesUEnvQueryTest_DotToContextRot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_DotToContextRot);
UClass* Z_Construct_UClass_UEnvQueryTest_DotToContextRot_NoRegister()
{
	return UEnvQueryTest_DotToContextRot::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Dot To Context Actors" },
		{ "IncludePath", "EnvQueryTest_DotToContextRot.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersContext_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForNavPointInstRadius_MetaData[] = {
		{ "Category", "Test Config" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceForNavPointChannel_MetaData[] = {
		{ "Category", "Test Config" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiredTagFromHit_MetaData[] = {
		{ "Category", "Test Config" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "Category", "Test Config" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryUseControlRotation_MetaData[] = {
		{ "Category", "Test Config" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowExp01_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowExp02_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_DotToContextRot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharactersContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchForNavPointInstRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceForNavPointChannel;
	static void NewProp_bRequiredTagFromHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiredTagFromHit;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static void NewProp_bTryUseControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryUseControlRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowExp01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowExp02;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_DotToContextRot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_CharactersContext = { "CharactersContext", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_DotToContextRot, CharactersContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersContext_MetaData), NewProp_CharactersContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_SearchForNavPointInstRadius = { "SearchForNavPointInstRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_DotToContextRot, SearchForNavPointInstRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForNavPointInstRadius_MetaData), NewProp_SearchForNavPointInstRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_TraceForNavPointChannel = { "TraceForNavPointChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_DotToContextRot, TraceForNavPointChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceForNavPointChannel_MetaData), NewProp_TraceForNavPointChannel_MetaData) }; // 756624936
void Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bRequiredTagFromHit_SetBit(void* Obj)
{
	((UEnvQueryTest_DotToContextRot*)Obj)->bRequiredTagFromHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bRequiredTagFromHit = { "bRequiredTagFromHit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_DotToContextRot), &Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bRequiredTagFromHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiredTagFromHit_MetaData), NewProp_bRequiredTagFromHit_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_DotToContextRot, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bTryUseControlRotation_SetBit(void* Obj)
{
	((UEnvQueryTest_DotToContextRot*)Obj)->bTryUseControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bTryUseControlRotation = { "bTryUseControlRotation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_DotToContextRot), &Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bTryUseControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryUseControlRotation_MetaData), NewProp_bTryUseControlRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_PowExp01 = { "PowExp01", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_DotToContextRot, PowExp01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowExp01_MetaData), NewProp_PowExp01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_PowExp02 = { "PowExp02", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_DotToContextRot, PowExp02), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowExp02_MetaData), NewProp_PowExp02_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_CharactersContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_SearchForNavPointInstRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_TraceForNavPointChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bRequiredTagFromHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_bTryUseControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_PowExp01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::NewProp_PowExp02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::ClassParams = {
	&UEnvQueryTest_DotToContextRot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_DotToContextRot()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_DotToContextRot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_DotToContextRot.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_DotToContextRot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_DotToContextRot.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQueryTest_DotToContextRot>()
{
	return UEnvQueryTest_DotToContextRot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_DotToContextRot);
UEnvQueryTest_DotToContextRot::~UEnvQueryTest_DotToContextRot() {}
// End Class UEnvQueryTest_DotToContextRot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_DotToContextRot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_DotToContextRot, UEnvQueryTest_DotToContextRot::StaticClass, TEXT("UEnvQueryTest_DotToContextRot"), &Z_Registration_Info_UClass_UEnvQueryTest_DotToContextRot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_DotToContextRot), 2731524612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_DotToContextRot_h_2762769164(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_DotToContextRot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_DotToContextRot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
