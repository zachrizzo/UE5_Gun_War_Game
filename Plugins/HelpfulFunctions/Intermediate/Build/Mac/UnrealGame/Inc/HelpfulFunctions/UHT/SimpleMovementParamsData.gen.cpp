// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/SimpleMovementParamsData.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleMovementParamsData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USimpleMovementParamsData();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USimpleMovementParamsData_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class USimpleMovementParamsData
void USimpleMovementParamsData::StaticRegisterNativesUSimpleMovementParamsData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleMovementParamsData);
UClass* Z_Construct_UClass_USimpleMovementParamsData_NoRegister()
{
	return USimpleMovementParamsData::StaticClass();
}
struct Z_Construct_UClass_USimpleMovementParamsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SimpleMovementParamsData.h" },
		{ "ModuleRelativePath", "Public/SimpleMovementParamsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSettings_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/SimpleMovementParamsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchToMovementState_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/SimpleMovementParamsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSettings_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MovementSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MatchToMovementState_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchToMovementState_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchToMovementState_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MatchToMovementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleMovementParamsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MovementSettings_ValueProp = { "MovementSettings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe, METADATA_PARAMS(0, nullptr) }; // 2042637900
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MovementSettings_Key_KeyProp = { "MovementSettings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MovementSettings = { "MovementSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleMovementParamsData, MovementSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSettings_MetaData), NewProp_MovementSettings_MetaData) }; // 2042637900
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState_ValueProp = { "MatchToMovementState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState_Key_KeyProp = { "MatchToMovementState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(0, nullptr) }; // 1562728553
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState = { "MatchToMovementState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleMovementParamsData, MatchToMovementState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchToMovementState_MetaData), NewProp_MatchToMovementState_MetaData) }; // 1562728553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleMovementParamsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MovementSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MovementSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MovementSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleMovementParamsData_Statics::NewProp_MatchToMovementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleMovementParamsData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleMovementParamsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleMovementParamsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleMovementParamsData_Statics::ClassParams = {
	&USimpleMovementParamsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleMovementParamsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleMovementParamsData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleMovementParamsData_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleMovementParamsData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleMovementParamsData()
{
	if (!Z_Registration_Info_UClass_USimpleMovementParamsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleMovementParamsData.OuterSingleton, Z_Construct_UClass_USimpleMovementParamsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleMovementParamsData.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<USimpleMovementParamsData>()
{
	return USimpleMovementParamsData::StaticClass();
}
USimpleMovementParamsData::USimpleMovementParamsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleMovementParamsData);
USimpleMovementParamsData::~USimpleMovementParamsData() {}
// End Class USimpleMovementParamsData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_SimpleMovementParamsData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleMovementParamsData, USimpleMovementParamsData::StaticClass, TEXT("USimpleMovementParamsData"), &Z_Registration_Info_UClass_USimpleMovementParamsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleMovementParamsData), 2347162707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_SimpleMovementParamsData_h_1948532159(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_SimpleMovementParamsData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_SimpleMovementParamsData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
