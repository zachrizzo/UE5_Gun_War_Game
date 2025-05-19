// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQueryTest_PointInsideCylinder.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PointInsideCylinder() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQueryTest_PointInsideCylinder
void UEnvQueryTest_PointInsideCylinder::StaticRegisterNativesUEnvQueryTest_PointInsideCylinder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_PointInsideCylinder);
UClass* Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_NoRegister()
{
	return UEnvQueryTest_PointInsideCylinder::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQueryTest_PointInsideCylinder.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersContext_MetaData[] = {
		{ "Category", "In Cylinder Volume Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Kontekst definiuj\xef\xbf\xbd""cy pozycj\xef\xbf\xbd i rotacjr cylindrow */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kontekst definiuj\xef\xbf\xbd""cy pozycj\xef\xbf\xbd i rotacjr cylindrow" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfAngle_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Volume Shape" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Polowa kata wycinka cylindra */" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Polowa kata wycinka cylindra" },
#endif
		{ "UIMax", "90" },
		{ "UImin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Volume Shape" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Volume Shape" },
		{ "ClampMax", "500" },
		{ "ClampMin", "5" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
		{ "UIMax", "500" },
		{ "UImin", "5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDistanceOnScoreResult_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Score Type" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemapScore_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Score Type" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapScoreRange_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Score Type" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoNotUseControlRotation_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Score Type" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointOffset_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Offsets" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderBaseOffset_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Offsets" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckTraceToPoint_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Trace Check" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Trace Check" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTraceOffset_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Trace Check" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceOriginOffset_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Trace Check" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Trace Check" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryDrawVolumes_MetaData[] = {
		{ "Category", "In Cylinder Volume Test|Addtive Debug" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_PointInsideCylinder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharactersContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UseDistanceOnScoreResult;
	static void NewProp_bRemapScore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapScore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemapScoreRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoNotUseControlRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CylinderBaseOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckTraceToPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointTraceOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceOriginOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTryDrawVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryDrawVolumes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_PointInsideCylinder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_CharactersContext = { "CharactersContext", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, CharactersContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersContext_MetaData), NewProp_CharactersContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, HalfAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfAngle_MetaData), NewProp_HalfAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_UseDistanceOnScoreResult = { "UseDistanceOnScoreResult", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, UseDistanceOnScoreResult), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDistanceOnScoreResult_MetaData), NewProp_UseDistanceOnScoreResult_MetaData) }; // 4208764161
void Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bRemapScore_SetBit(void* Obj)
{
	((UEnvQueryTest_PointInsideCylinder*)Obj)->bRemapScore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bRemapScore = { "bRemapScore", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_PointInsideCylinder), &Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bRemapScore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemapScore_MetaData), NewProp_bRemapScore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_RemapScoreRange = { "RemapScoreRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, RemapScoreRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapScoreRange_MetaData), NewProp_RemapScoreRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_DoNotUseControlRotation = { "DoNotUseControlRotation", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, DoNotUseControlRotation), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoNotUseControlRotation_MetaData), NewProp_DoNotUseControlRotation_MetaData) }; // 4208764161
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_PointOffset = { "PointOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, PointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointOffset_MetaData), NewProp_PointOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_CylinderBaseOffset = { "CylinderBaseOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, CylinderBaseOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderBaseOffset_MetaData), NewProp_CylinderBaseOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_CheckTraceToPoint = { "CheckTraceToPoint", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, CheckTraceToPoint), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckTraceToPoint_MetaData), NewProp_CheckTraceToPoint_MetaData) }; // 4208764161
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_PointTraceOffset = { "PointTraceOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, PointTraceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTraceOffset_MetaData), NewProp_PointTraceOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_TraceOriginOffset = { "TraceOriginOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, TraceOriginOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceOriginOffset_MetaData), NewProp_TraceOriginOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_PointInsideCylinder, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bTryDrawVolumes_SetBit(void* Obj)
{
	((UEnvQueryTest_PointInsideCylinder*)Obj)->bTryDrawVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bTryDrawVolumes = { "bTryDrawVolumes", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_PointInsideCylinder), &Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bTryDrawVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryDrawVolumes_MetaData), NewProp_bTryDrawVolumes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_CharactersContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_HalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_UseDistanceOnScoreResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bRemapScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_RemapScoreRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_DoNotUseControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_PointOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_CylinderBaseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_CheckTraceToPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_PointTraceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_TraceOriginOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::NewProp_bTryDrawVolumes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::ClassParams = {
	&UEnvQueryTest_PointInsideCylinder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_PointInsideCylinder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_PointInsideCylinder.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_PointInsideCylinder.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQueryTest_PointInsideCylinder>()
{
	return UEnvQueryTest_PointInsideCylinder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_PointInsideCylinder);
UEnvQueryTest_PointInsideCylinder::~UEnvQueryTest_PointInsideCylinder() {}
// End Class UEnvQueryTest_PointInsideCylinder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PointInsideCylinder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_PointInsideCylinder, UEnvQueryTest_PointInsideCylinder::StaticClass, TEXT("UEnvQueryTest_PointInsideCylinder"), &Z_Registration_Info_UClass_UEnvQueryTest_PointInsideCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_PointInsideCylinder), 2758110053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PointInsideCylinder_h_251935448(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PointInsideCylinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_PointInsideCylinder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
