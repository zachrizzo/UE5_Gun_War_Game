// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/InteractionWidgetCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionWidgetCondition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetCondition();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetCondition_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UInteractionWidgetCondition Function AddtiveConditionToCheck
struct InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms
{
	ACharacter* OverlappedActor;
	AActor* InteractiveActor;
	FVector WidgetLocation;
	FVector ActorLocation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInteractionWidgetCondition_AddtiveConditionToCheck = FName(TEXT("AddtiveConditionToCheck"));
bool UInteractionWidgetCondition::AddtiveConditionToCheck(ACharacter* OverlappedActor, AActor* InteractiveActor, FVector WidgetLocation, FVector ActorLocation)
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractionWidgetCondition_AddtiveConditionToCheck);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms Parms;
		Parms.OverlappedActor=OverlappedActor;
		Parms.InteractiveActor=InteractiveActor;
		Parms.WidgetLocation=WidgetLocation;
		Parms.ActorLocation=ActorLocation;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return AddtiveConditionToCheck_Implementation(OverlappedActor, InteractiveActor, WidgetLocation, ActorLocation);
	}
}
struct Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Widget" },
		{ "DisplayName", "Addtive Condition To Check" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Widget,Player,Condition" },
		{ "ModuleRelativePath", "Public/InteractionWidgetCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractiveActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms, OverlappedActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_InteractiveActor = { "InteractiveActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms, InteractiveActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_WidgetLocation = { "WidgetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms, WidgetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms), &Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_InteractiveActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_WidgetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_ActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetCondition, nullptr, "AddtiveConditionToCheck", nullptr, nullptr, Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::PropPointers), sizeof(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionWidgetCondition_eventAddtiveConditionToCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionWidgetCondition::execAddtiveConditionToCheck)
{
	P_GET_OBJECT(ACharacter,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_InteractiveActor);
	P_GET_STRUCT(FVector,Z_Param_WidgetLocation);
	P_GET_STRUCT(FVector,Z_Param_ActorLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddtiveConditionToCheck_Implementation(Z_Param_OverlappedActor,Z_Param_InteractiveActor,Z_Param_WidgetLocation,Z_Param_ActorLocation);
	P_NATIVE_END;
}
// End Class UInteractionWidgetCondition Function AddtiveConditionToCheck

// Begin Class UInteractionWidgetCondition
void UInteractionWidgetCondition::StaticRegisterNativesUInteractionWidgetCondition()
{
	UClass* Class = UInteractionWidgetCondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddtiveConditionToCheck", &UInteractionWidgetCondition::execAddtiveConditionToCheck },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionWidgetCondition);
UClass* Z_Construct_UClass_UInteractionWidgetCondition_NoRegister()
{
	return UInteractionWidgetCondition::StaticClass();
}
struct Z_Construct_UClass_UInteractionWidgetCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractionWidgetCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionWidgetCondition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionWidgetCondition_AddtiveConditionToCheck, "AddtiveConditionToCheck" }, // 79243231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionWidgetCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionWidgetCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionWidgetCondition_Statics::ClassParams = {
	&UInteractionWidgetCondition::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionWidgetCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionWidgetCondition()
{
	if (!Z_Registration_Info_UClass_UInteractionWidgetCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionWidgetCondition.OuterSingleton, Z_Construct_UClass_UInteractionWidgetCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionWidgetCondition.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UInteractionWidgetCondition>()
{
	return UInteractionWidgetCondition::StaticClass();
}
UInteractionWidgetCondition::UInteractionWidgetCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionWidgetCondition);
UInteractionWidgetCondition::~UInteractionWidgetCondition() {}
// End Class UInteractionWidgetCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetCondition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionWidgetCondition, UInteractionWidgetCondition::StaticClass, TEXT("UInteractionWidgetCondition"), &Z_Registration_Info_UClass_UInteractionWidgetCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionWidgetCondition), 127285700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetCondition_h_3413199980(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetCondition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
