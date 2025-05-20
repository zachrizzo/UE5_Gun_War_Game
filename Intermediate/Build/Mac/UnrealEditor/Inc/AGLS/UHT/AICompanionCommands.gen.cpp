// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS/AICompanionCommands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICompanionCommands() {}

// Begin Cross Module References
AGLS_API UEnum* Z_Construct_UEnum_AGLS_EAICompanionCommand();
UPackage* Z_Construct_UPackage__Script_AGLS();
// End Cross Module References

// Begin Enum EAICompanionCommand
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAICompanionCommand;
static UEnum* EAICompanionCommand_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAICompanionCommand.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAICompanionCommand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AGLS_EAICompanionCommand, (UObject*)Z_Construct_UPackage__Script_AGLS(), TEXT("EAICompanionCommand"));
	}
	return Z_Registration_Info_UEnum_EAICompanionCommand.OuterSingleton;
}
template<> AGLS_API UEnum* StaticEnum<EAICompanionCommand>()
{
	return EAICompanionCommand_StaticEnum();
}
struct Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "EAICompanionCommand::Attack" },
		{ "BlueprintType", "true" },
		{ "Follow.DisplayName", "Follow" },
		{ "Follow.Name", "EAICompanionCommand::Follow" },
		{ "ModuleRelativePath", "AICompanionCommands.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAICompanionCommand::None" },
		{ "Wait.DisplayName", "Wait" },
		{ "Wait.Name", "EAICompanionCommand::Wait" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAICompanionCommand::None", (int64)EAICompanionCommand::None },
		{ "EAICompanionCommand::Follow", (int64)EAICompanionCommand::Follow },
		{ "EAICompanionCommand::Wait", (int64)EAICompanionCommand::Wait },
		{ "EAICompanionCommand::Attack", (int64)EAICompanionCommand::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AGLS,
	nullptr,
	"EAICompanionCommand",
	"EAICompanionCommand",
	Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AGLS_EAICompanionCommand()
{
	if (!Z_Registration_Info_UEnum_EAICompanionCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAICompanionCommand.InnerSingleton, Z_Construct_UEnum_AGLS_EAICompanionCommand_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAICompanionCommand.InnerSingleton;
}
// End Enum EAICompanionCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AICompanionCommands_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAICompanionCommand_StaticEnum, TEXT("EAICompanionCommand"), &Z_Registration_Info_UEnum_EAICompanionCommand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 771269290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AICompanionCommands_h_3755697470(TEXT("/Script/AGLS"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AICompanionCommands_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AICompanionCommands_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
