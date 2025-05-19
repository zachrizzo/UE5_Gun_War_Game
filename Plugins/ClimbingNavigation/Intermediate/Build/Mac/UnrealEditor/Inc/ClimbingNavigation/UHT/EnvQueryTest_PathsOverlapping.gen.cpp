// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQueryTest_PathsOverlapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PathsOverlapping() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_PathsOverlapping();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQueryTest_PathsOverlapping
void UEnvQueryTest_PathsOverlapping::StaticRegisterNativesUEnvQueryTest_PathsOverlapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_PathsOverlapping);
UClass* Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_NoRegister()
{
	return UEnvQueryTest_PathsOverlapping::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQueryTest_PathsOverlapping.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PathsOverlapping.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersContext_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PathsOverlapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsOverlappingTollerance_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PathsOverlapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathToPointMethod_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If we apply this method, then in such a case\nthe path will be checked from the EnvQuerier position to the Point Location. If such a path is found, then in such a \nwe check if any of the segments overlaps with the position taken from 'Context Characters'. If we leave the value to \ntrue, then in such a case we do not generate the path, but it is taken from 'Context Characters'.*/" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryTest_PathsOverlapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we apply this method, then in such a case\nthe path will be checked from the EnvQuerier position to the Point Location. If such a path is found, then in such a\nwe check if any of the segments overlaps with the position taken from 'Context Characters'. If we leave the value to\ntrue, then in such a case we do not generate the path, but it is taken from 'Context Characters'." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharactersContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsOverlappingTollerance;
	static void NewProp_bUsePathToPointMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathToPointMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_PathsOverlapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_CharactersContext = { "CharactersContext", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PathsOverlapping, CharactersContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersContext_MetaData), NewProp_CharactersContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_AsOverlappingTollerance = { "AsOverlappingTollerance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PathsOverlapping, AsOverlappingTollerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsOverlappingTollerance_MetaData), NewProp_AsOverlappingTollerance_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_bUsePathToPointMethod_SetBit(void* Obj)
{
	((UEnvQueryTest_PathsOverlapping*)Obj)->bUsePathToPointMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_bUsePathToPointMethod = { "bUsePathToPointMethod", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_PathsOverlapping), &Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_bUsePathToPointMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathToPointMethod_MetaData), NewProp_bUsePathToPointMethod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_CharactersContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_AsOverlappingTollerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::NewProp_bUsePathToPointMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::ClassParams = {
	&UEnvQueryTest_PathsOverlapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_PathsOverlapping()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_PathsOverlapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_PathsOverlapping.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_PathsOverlapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_PathsOverlapping.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQueryTest_PathsOverlapping>()
{
	return UEnvQueryTest_PathsOverlapping::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_PathsOverlapping);
UEnvQueryTest_PathsOverlapping::~UEnvQueryTest_PathsOverlapping() {}
// End Class UEnvQueryTest_PathsOverlapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PathsOverlapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_PathsOverlapping, UEnvQueryTest_PathsOverlapping::StaticClass, TEXT("UEnvQueryTest_PathsOverlapping"), &Z_Registration_Info_UClass_UEnvQueryTest_PathsOverlapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_PathsOverlapping), 222181858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PathsOverlapping_h_2809238337(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PathsOverlapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PathsOverlapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
