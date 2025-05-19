// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingNavigation/Public/EnvQuery_CustomScoreDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery_CustomScoreDefine() {}

// Begin Cross Module References
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CustomScoreDefine();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CustomScoreDefine_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// End Cross Module References

// Begin Class UEnvQuery_CustomScoreDefine Function SetScorePerPoint
struct EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms
{
	float ReturnScore;
	FVector CurrentPointPosition;
	FVector QuerierLocation;
	AActor* QuerierActor;
	TArray<AActor*> ContextActors;
	int32 CurrentPointIndex;
};
static const FName NAME_UEnvQuery_CustomScoreDefine_SetScorePerPoint = FName(TEXT("SetScorePerPoint"));
void UEnvQuery_CustomScoreDefine::SetScorePerPoint(float& ReturnScore, FVector CurrentPointPosition, FVector QuerierLocation, AActor* QuerierActor, TArray<AActor*> const& ContextActors, int32 CurrentPointIndex) const
{
	EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms Parms;
	Parms.ReturnScore=ReturnScore;
	Parms.CurrentPointPosition=CurrentPointPosition;
	Parms.QuerierLocation=QuerierLocation;
	Parms.QuerierActor=QuerierActor;
	Parms.ContextActors=ContextActors;
	Parms.CurrentPointIndex=CurrentPointIndex;
	UFunction* Func = FindFunctionChecked(NAME_UEnvQuery_CustomScoreDefine_SetScorePerPoint);
		const_cast<UEnvQuery_CustomScoreDefine*>(this)->ProcessEvent(Func,&Parms);
	ReturnScore=Parms.ReturnScore;
}
struct Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EQS Score" },
		{ "DisplayName", "Set Score Per Point" },
		{ "Keywords", "EQS,Score" },
		{ "ModuleRelativePath", "Public/EnvQuery_CustomScoreDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnScore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPointPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuerierLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextActors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_ReturnScore = { "ReturnScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms, ReturnScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_CurrentPointPosition = { "CurrentPointPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms, CurrentPointPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_QuerierLocation = { "QuerierLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms, QuerierLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_ContextActors_Inner = { "ContextActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_ContextActors = { "ContextActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms, ContextActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextActors_MetaData), NewProp_ContextActors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_CurrentPointIndex = { "CurrentPointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms, CurrentPointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_ReturnScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_CurrentPointPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_QuerierLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_QuerierActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_ContextActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_ContextActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::NewProp_CurrentPointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQuery_CustomScoreDefine, nullptr, "SetScorePerPoint", nullptr, nullptr, Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::PropPointers), sizeof(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQuery_CustomScoreDefine_eventSetScorePerPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQuery_CustomScoreDefine Function SetScorePerPoint

// Begin Class UEnvQuery_CustomScoreDefine
void UEnvQuery_CustomScoreDefine::StaticRegisterNativesUEnvQuery_CustomScoreDefine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQuery_CustomScoreDefine);
UClass* Z_Construct_UClass_UEnvQuery_CustomScoreDefine_NoRegister()
{
	return UEnvQuery_CustomScoreDefine::StaticClass();
}
struct Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQuery_CustomScoreDefine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnvQuery_CustomScoreDefine.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQuery_CustomScoreDefine_SetScorePerPoint, "SetScorePerPoint" }, // 1485539187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery_CustomScoreDefine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics::ClassParams = {
	&UEnvQuery_CustomScoreDefine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQuery_CustomScoreDefine()
{
	if (!Z_Registration_Info_UClass_UEnvQuery_CustomScoreDefine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQuery_CustomScoreDefine.OuterSingleton, Z_Construct_UClass_UEnvQuery_CustomScoreDefine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQuery_CustomScoreDefine.OuterSingleton;
}
template<> CLIMBINGNAVIGATION_API UClass* StaticClass<UEnvQuery_CustomScoreDefine>()
{
	return UEnvQuery_CustomScoreDefine::StaticClass();
}
UEnvQuery_CustomScoreDefine::UEnvQuery_CustomScoreDefine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery_CustomScoreDefine);
UEnvQuery_CustomScoreDefine::~UEnvQuery_CustomScoreDefine() {}
// End Class UEnvQuery_CustomScoreDefine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CustomScoreDefine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQuery_CustomScoreDefine, UEnvQuery_CustomScoreDefine::StaticClass, TEXT("UEnvQuery_CustomScoreDefine"), &Z_Registration_Info_UClass_UEnvQuery_CustomScoreDefine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQuery_CustomScoreDefine), 24646512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CustomScoreDefine_h_3890720015(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CustomScoreDefine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CustomScoreDefine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
