// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS/AGLSCompanionAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLSCompanionAIController() {}

// Begin Cross Module References
AGLS_API UClass* Z_Construct_UClass_AAGLSCompanionAIController();
AGLS_API UClass* Z_Construct_UClass_AAGLSCompanionAIController_NoRegister();
AGLS_API UEnum* Z_Construct_UEnum_AGLS_EAICompanionCommand();
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_AGLS();
// End Cross Module References

// Begin Class AAGLSCompanionAIController Function SetAICommand
struct Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics
{
	struct AGLSCompanionAIController_eventSetAICommand_Parms
	{
		EAICompanionCommand NewCommand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Companion Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to set the current command for the AI\n" },
#endif
		{ "ModuleRelativePath", "AGLSCompanionAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to set the current command for the AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCommand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewCommand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::NewProp_NewCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::NewProp_NewCommand = { "NewCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLSCompanionAIController_eventSetAICommand_Parms, NewCommand), Z_Construct_UEnum_AGLS_EAICompanionCommand, METADATA_PARAMS(0, nullptr) }; // 771269290
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::NewProp_NewCommand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::NewProp_NewCommand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLSCompanionAIController, nullptr, "SetAICommand", nullptr, nullptr, Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::AGLSCompanionAIController_eventSetAICommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::AGLSCompanionAIController_eventSetAICommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLSCompanionAIController::execSetAICommand)
{
	P_GET_ENUM(EAICompanionCommand,Z_Param_NewCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAICommand(EAICompanionCommand(Z_Param_NewCommand));
	P_NATIVE_END;
}
// End Class AAGLSCompanionAIController Function SetAICommand

// Begin Class AAGLSCompanionAIController
void AAGLSCompanionAIController::StaticRegisterNativesAAGLSCompanionAIController()
{
	UClass* Class = AAGLSCompanionAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAICommand", &AAGLSCompanionAIController::execSetAICommand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGLSCompanionAIController);
UClass* Z_Construct_UClass_AAGLSCompanionAIController_NoRegister()
{
	return AAGLSCompanionAIController::StaticClass();
}
struct Z_Construct_UClass_AAGLSCompanionAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AGLSCompanionAIController.h" },
		{ "ModuleRelativePath", "AGLSCompanionAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCommandBlackboardKeyName_MetaData[] = {
		{ "Category", "AI|Companion Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Blackboard key to store the current command.\n// This should match the key name you set up in your Blackboard asset.\n" },
#endif
		{ "ModuleRelativePath", "AGLSCompanionAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Blackboard key to store the current command.\nThis should match the key name you set up in your Blackboard asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Behavior Tree asset to run on this AI Controller\n" },
#endif
		{ "ModuleRelativePath", "AGLSCompanionAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior Tree asset to run on this AI Controller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentCommandBlackboardKeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAGLSCompanionAIController_SetAICommand, "SetAICommand" }, // 1141628853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGLSCompanionAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAGLSCompanionAIController_Statics::NewProp_CurrentCommandBlackboardKeyName = { "CurrentCommandBlackboardKeyName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLSCompanionAIController, CurrentCommandBlackboardKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCommandBlackboardKeyName_MetaData), NewProp_CurrentCommandBlackboardKeyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLSCompanionAIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLSCompanionAIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGLSCompanionAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLSCompanionAIController_Statics::NewProp_CurrentCommandBlackboardKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLSCompanionAIController_Statics::NewProp_BehaviorTreeAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLSCompanionAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAGLSCompanionAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_AGLS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLSCompanionAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGLSCompanionAIController_Statics::ClassParams = {
	&AAGLSCompanionAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAGLSCompanionAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAGLSCompanionAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLSCompanionAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGLSCompanionAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGLSCompanionAIController()
{
	if (!Z_Registration_Info_UClass_AAGLSCompanionAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGLSCompanionAIController.OuterSingleton, Z_Construct_UClass_AAGLSCompanionAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGLSCompanionAIController.OuterSingleton;
}
template<> AGLS_API UClass* StaticClass<AAGLSCompanionAIController>()
{
	return AAGLSCompanionAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGLSCompanionAIController);
AAGLSCompanionAIController::~AAGLSCompanionAIController() {}
// End Class AAGLSCompanionAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGLSCompanionAIController, AAGLSCompanionAIController::StaticClass, TEXT("AAGLSCompanionAIController"), &Z_Registration_Info_UClass_AAGLSCompanionAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGLSCompanionAIController), 2053333916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_628678168(TEXT("/Script/AGLS"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Source_AGLS_AGLSCompanionAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
