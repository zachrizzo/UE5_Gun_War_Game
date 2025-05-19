// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQueryGenerator_NavCoverPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_NavCoverPoints() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQueryGenerator_NavCoverPoints
void UEnvQueryGenerator_NavCoverPoints::StaticRegisterNativesUEnvQueryGenerator_NavCoverPoints()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_NavCoverPoints);
UClass* Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_NoRegister()
{
	return UEnvQueryGenerator_NavCoverPoints::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQueryGenerator_NavCoverPoints.h" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_NavCoverPoints.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateAround_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** context */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_NavCoverPoints.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Promie\xef\xbf\xbd dla SphereTraceMultiByProfile */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_NavCoverPoints.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promie\xef\xbf\xbd dla SphereTraceMultiByProfile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Nazwa profilu dla SphereTraceMultiByProfile */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_NavCoverPoints.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nazwa profilu dla SphereTraceMultiByProfile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Czy debugowa\xef\xbf\xbd trace */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_NavCoverPoints.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Czy debugowa\xef\xbf\xbd trace" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GenerateAround;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_NavCoverPoints>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_GenerateAround = { "GenerateAround", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_NavCoverPoints, GenerateAround), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateAround_MetaData), NewProp_GenerateAround_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_NavCoverPoints, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_NavCoverPoints, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
{
	((UEnvQueryGenerator_NavCoverPoints*)Obj)->bDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryGenerator_NavCoverPoints), &Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugTrace_MetaData), NewProp_bDebugTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_GenerateAround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::NewProp_bDebugTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::ClassParams = {
	&UEnvQueryGenerator_NavCoverPoints::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_NavCoverPoints.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_NavCoverPoints.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_NavCoverPoints.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQueryGenerator_NavCoverPoints>()
{
	return UEnvQueryGenerator_NavCoverPoints::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_NavCoverPoints);
UEnvQueryGenerator_NavCoverPoints::~UEnvQueryGenerator_NavCoverPoints() {}
// End Class UEnvQueryGenerator_NavCoverPoints

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryGenerator_NavCoverPoints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_NavCoverPoints, UEnvQueryGenerator_NavCoverPoints::StaticClass, TEXT("UEnvQueryGenerator_NavCoverPoints"), &Z_Registration_Info_UClass_UEnvQueryGenerator_NavCoverPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_NavCoverPoints), 2633151487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryGenerator_NavCoverPoints_h_3674745705(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryGenerator_NavCoverPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryGenerator_NavCoverPoints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
