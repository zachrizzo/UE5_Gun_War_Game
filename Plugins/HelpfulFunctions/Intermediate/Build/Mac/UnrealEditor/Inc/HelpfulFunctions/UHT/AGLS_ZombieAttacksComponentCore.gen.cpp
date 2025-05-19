// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_ZombieAttacksComponentCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_ZombieAttacksComponentCore() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Delegate FOnAttackStarted
struct Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics
{
	struct _Script_HelpfulFunctions_eventOnAttackStarted_Parms
	{
		float ActionDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::NewProp_ActionDuration = { "ActionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HelpfulFunctions_eventOnAttackStarted_Parms, ActionDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::NewProp_ActionDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "OnAttackStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackStarted, float ActionDuration)
{
	struct _Script_HelpfulFunctions_eventOnAttackStarted_Parms
	{
		float ActionDuration;
	};
	_Script_HelpfulFunctions_eventOnAttackStarted_Parms Parms;
	Parms.ActionDuration=ActionDuration;
	OnAttackStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttackStarted

// Begin Delegate FOnAttackEnded
struct Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics
{
	struct _Script_HelpfulFunctions_eventOnAttackEnded_Parms
	{
		float ActionElapsedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::NewProp_ActionElapsedTime = { "ActionElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HelpfulFunctions_eventOnAttackEnded_Parms, ActionElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::NewProp_ActionElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "OnAttackEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnded, float ActionElapsedTime)
{
	struct _Script_HelpfulFunctions_eventOnAttackEnded_Parms
	{
		float ActionElapsedTime;
	};
	_Script_HelpfulFunctions_eventOnAttackEnded_Parms Parms;
	Parms.ActionElapsedTime=ActionElapsedTime;
	OnAttackEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttackEnded

// Begin Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackEnded
struct Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, nullptr, "CallOnAttackEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_ZombieAttacksComponentCore::execCallOnAttackEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnAttackEnded();
	P_NATIVE_END;
}
// End Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackEnded

// Begin Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackStarted
struct Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, nullptr, "CallOnAttackStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_ZombieAttacksComponentCore::execCallOnAttackStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnAttackStarted();
	P_NATIVE_END;
}
// End Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackStarted

// Begin Class UAGLS_ZombieAttacksComponentCore Function CorrectlySetAttackTimer
struct Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics
{
	struct AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms
	{
		bool StartAttacking;
		float InDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartAttacking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking_SetBit(void* Obj)
{
	((AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms*)Obj)->StartAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking = { "StartAttacking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms), &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms, InDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms), &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_InDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, nullptr, "CorrectlySetAttackTimer", nullptr, nullptr, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_ZombieAttacksComponentCore::execCorrectlySetAttackTimer)
{
	P_GET_UBOOL(Z_Param_StartAttacking);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CorrectlySetAttackTimer(Z_Param_StartAttacking,Z_Param_InDuration);
	P_NATIVE_END;
}
// End Class UAGLS_ZombieAttacksComponentCore Function CorrectlySetAttackTimer

// Begin Class UAGLS_ZombieAttacksComponentCore
void UAGLS_ZombieAttacksComponentCore::StaticRegisterNativesUAGLS_ZombieAttacksComponentCore()
{
	UClass* Class = UAGLS_ZombieAttacksComponentCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallOnAttackEnded", &UAGLS_ZombieAttacksComponentCore::execCallOnAttackEnded },
		{ "CallOnAttackStarted", &UAGLS_ZombieAttacksComponentCore::execCallOnAttackStarted },
		{ "CorrectlySetAttackTimer", &UAGLS_ZombieAttacksComponentCore::execCorrectlySetAttackTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_ZombieAttacksComponentCore);
UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister()
{
	return UAGLS_ZombieAttacksComponentCore::StaticClass();
}
struct Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nImplements the attack system for the Character. If the component has been declarated in AGLS_ZombieCharacter \nthen in this case we have several functions at our disposal:\n- bool GetIsStartedAttack()\n- float GetAttackElapsedTime()\n- DELEGATE OnAttackStarted()\n- DELEGATE OnAttackEnded() */" },
#endif
		{ "IncludePath", "AGLS_ZombieAttacksComponentCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the attack system for the Character. If the component has been declarated in AGLS_ZombieCharacter\nthen in this case we have several functions at our disposal:\n- bool GetIsStartedAttack()\n- float GetAttackElapsedTime()\n- DELEGATE OnAttackStarted()\n- DELEGATE OnAttackEnded()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackStarted_MetaData[] = {
		{ "Category", "Attack Action" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackEnded_MetaData[] = {
		{ "Category", "Attack Action" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefChar_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefController_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttackStarted_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Variable\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTotalDuration_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackElapsedTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTraces_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Showing Peformed Traces by this component (On Per Frame or For Duration)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Showing Peformed Traces by this component (On Per Frame or For Duration)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShapes_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When it is enable during game component drawing Debug Shapes like: Spheres, Lines, Poins or Arrows\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When it is enable during game component drawing Debug Shapes like: Spheres, Lines, Poins or Arrows" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracesViewDurationMultiply_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
		{ "EditCondition", "bDrawDebugTraces" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapesViewDurationMultiply_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
		{ "EditCondition", "bDrawDebugShapes" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackEnded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefChar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefController;
	static void NewProp_bAttackStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackStarted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTotalDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackElapsedTime;
	static void NewProp_bDrawDebugTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTraces;
	static void NewProp_bDrawDebugShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShapes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TracesViewDurationMultiply;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapesViewDurationMultiply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded, "CallOnAttackEnded" }, // 3127507088
		{ &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted, "CallOnAttackStarted" }, // 1028200743
		{ &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer, "CorrectlySetAttackTimer" }, // 2053458190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_ZombieAttacksComponentCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackStarted = { "OnAttackStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, OnAttackStarted), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackStarted_MetaData), NewProp_OnAttackStarted_MetaData) }; // 3363999073
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackEnded = { "OnAttackEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, OnAttackEnded), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackEnded_MetaData), NewProp_OnAttackEnded_MetaData) }; // 3103081582
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefChar = { "RefChar", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, RefChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefChar_MetaData), NewProp_RefChar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefController = { "RefController", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, RefController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefController_MetaData), NewProp_RefController_MetaData) };
void Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted_SetBit(void* Obj)
{
	((UAGLS_ZombieAttacksComponentCore*)Obj)->bAttackStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted = { "bAttackStarted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_ZombieAttacksComponentCore), &Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttackStarted_MetaData), NewProp_bAttackStarted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackTotalDuration = { "AttackTotalDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, AttackTotalDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTotalDuration_MetaData), NewProp_AttackTotalDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackElapsedTime = { "AttackElapsedTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, AttackElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackElapsedTime_MetaData), NewProp_AttackElapsedTime_MetaData) };
void Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces_SetBit(void* Obj)
{
	((UAGLS_ZombieAttacksComponentCore*)Obj)->bDrawDebugTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces = { "bDrawDebugTraces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_ZombieAttacksComponentCore), &Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugTraces_MetaData), NewProp_bDrawDebugTraces_MetaData) };
void Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes_SetBit(void* Obj)
{
	((UAGLS_ZombieAttacksComponentCore*)Obj)->bDrawDebugShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes = { "bDrawDebugShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_ZombieAttacksComponentCore), &Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugShapes_MetaData), NewProp_bDrawDebugShapes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_TracesViewDurationMultiply = { "TracesViewDurationMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, TracesViewDurationMultiply), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracesViewDurationMultiply_MetaData), NewProp_TracesViewDurationMultiply_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_ShapesViewDurationMultiply = { "ShapesViewDurationMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, ShapesViewDurationMultiply), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapesViewDurationMultiply_MetaData), NewProp_ShapesViewDurationMultiply_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackTotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_TracesViewDurationMultiply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_ShapesViewDurationMultiply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::ClassParams = {
	&UAGLS_ZombieAttacksComponentCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore()
{
	if (!Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.OuterSingleton, Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAGLS_ZombieAttacksComponentCore>()
{
	return UAGLS_ZombieAttacksComponentCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_ZombieAttacksComponentCore);
UAGLS_ZombieAttacksComponentCore::~UAGLS_ZombieAttacksComponentCore() {}
// End Class UAGLS_ZombieAttacksComponentCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, UAGLS_ZombieAttacksComponentCore::StaticClass, TEXT("UAGLS_ZombieAttacksComponentCore"), &Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_ZombieAttacksComponentCore), 2858243801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_3827743996(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
