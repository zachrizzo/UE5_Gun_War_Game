// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_Zombie_ControllerAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_Zombie_ControllerAI() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_Zombie_ControllerAI();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_Zombie_ControllerAI_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Enum EControllerAI_ControlRotMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerAI_ControlRotMode;
static UEnum* EControllerAI_ControlRotMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControllerAI_ControlRotMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControllerAI_ControlRotMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("EControllerAI_ControlRotMode"));
	}
	return Z_Registration_Info_UEnum_EControllerAI_ControlRotMode.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<EControllerAI_ControlRotMode>()
{
	return EControllerAI_ControlRotMode_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FromControlRotation.Name", "EControllerAI_ControlRotMode::FromControlRotation" },
		{ "FromCurrentAcceleration.Name", "EControllerAI_ControlRotMode::FromCurrentAcceleration" },
		{ "FromCustomDefinition.Name", "EControllerAI_ControlRotMode::FromCustomDefinition" },
		{ "FromFocusPoint.Name", "EControllerAI_ControlRotMode::FromFocusPoint" },
		{ "FromNotZeroVelocity.Name", "EControllerAI_ControlRotMode::FromNotZeroVelocity" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControllerAI_ControlRotMode::FromControlRotation", (int64)EControllerAI_ControlRotMode::FromControlRotation },
		{ "EControllerAI_ControlRotMode::FromNotZeroVelocity", (int64)EControllerAI_ControlRotMode::FromNotZeroVelocity },
		{ "EControllerAI_ControlRotMode::FromCurrentAcceleration", (int64)EControllerAI_ControlRotMode::FromCurrentAcceleration },
		{ "EControllerAI_ControlRotMode::FromFocusPoint", (int64)EControllerAI_ControlRotMode::FromFocusPoint },
		{ "EControllerAI_ControlRotMode::FromCustomDefinition", (int64)EControllerAI_ControlRotMode::FromCustomDefinition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"EControllerAI_ControlRotMode",
	"EControllerAI_ControlRotMode",
	Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode()
{
	if (!Z_Registration_Info_UEnum_EControllerAI_ControlRotMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerAI_ControlRotMode.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControllerAI_ControlRotMode.InnerSingleton;
}
// End Enum EControllerAI_ControlRotMode

// Begin Class AAGLS_Zombie_ControllerAI Function CustomUpdateControlRotation
struct AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms
{
	float DeltaTime;
	bool bUpdatePawn;
};
static const FName NAME_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation = FName(TEXT("CustomUpdateControlRotation"));
void AAGLS_Zombie_ControllerAI::CustomUpdateControlRotation(float DeltaTime, bool bUpdatePawn)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.bUpdatePawn=bUpdatePawn ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CustomUpdateControlRotation_Implementation(DeltaTime, bUpdatePawn);
	}
}
struct Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Controller|Rotation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bUpdatePawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn_SetBit(void* Obj)
{
	((AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms*)Obj)->bUpdatePawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn = { "bUpdatePawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms), &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_Zombie_ControllerAI, nullptr, "CustomUpdateControlRotation", nullptr, nullptr, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::PropPointers), sizeof(AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_Zombie_ControllerAI_eventCustomUpdateControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Zombie_ControllerAI::execCustomUpdateControlRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_bUpdatePawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CustomUpdateControlRotation_Implementation(Z_Param_DeltaTime,Z_Param_bUpdatePawn);
	P_NATIVE_END;
}
// End Class AAGLS_Zombie_ControllerAI Function CustomUpdateControlRotation

// Begin Class AAGLS_Zombie_ControllerAI Function DoesPathUseNavLink
struct Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics
{
	struct AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms
	{
		UNavigationPath* Path;
		float MaxDistanceToPoint2D;
		float MaxHeightDiff;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Controller|Navigation" },
		{ "CPP_Default_MaxDistanceToPoint2D", "200.000000" },
		{ "CPP_Default_MaxHeightDiff", "50.000000" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToPoint2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeightDiff;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms, Path), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_MaxDistanceToPoint2D = { "MaxDistanceToPoint2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms, MaxDistanceToPoint2D), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_MaxHeightDiff = { "MaxHeightDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms, MaxHeightDiff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms), &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_MaxDistanceToPoint2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_MaxHeightDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_Zombie_ControllerAI, nullptr, "DoesPathUseNavLink", nullptr, nullptr, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::AGLS_Zombie_ControllerAI_eventDoesPathUseNavLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Zombie_ControllerAI::execDoesPathUseNavLink)
{
	P_GET_OBJECT(UNavigationPath,Z_Param_Path);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistanceToPoint2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeightDiff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesPathUseNavLink(Z_Param_Path,Z_Param_MaxDistanceToPoint2D,Z_Param_MaxHeightDiff);
	P_NATIVE_END;
}
// End Class AAGLS_Zombie_ControllerAI Function DoesPathUseNavLink

// Begin Class AAGLS_Zombie_ControllerAI Function PathWeightByNavLinksNumber
struct Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics
{
	struct AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms
	{
		UNavigationPath* Path;
		float MaxDistanceToPoint2D;
		float MaxHeightDiff;
		float Bias;
		bool UseAbsOnHeight;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Controller|Navigation" },
		{ "CPP_Default_Bias", "0.100000" },
		{ "CPP_Default_MaxDistanceToPoint2D", "200.000000" },
		{ "CPP_Default_MaxHeightDiff", "50.000000" },
		{ "CPP_Default_UseAbsOnHeight", "true" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToPoint2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeightDiff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static void NewProp_UseAbsOnHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAbsOnHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms, Path), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxDistanceToPoint2D = { "MaxDistanceToPoint2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms, MaxDistanceToPoint2D), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxHeightDiff = { "MaxHeightDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms, MaxHeightDiff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms, Bias), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight_SetBit(void* Obj)
{
	((AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms*)Obj)->UseAbsOnHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight = { "UseAbsOnHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms), &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxDistanceToPoint2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxHeightDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_Zombie_ControllerAI, nullptr, "PathWeightByNavLinksNumber", nullptr, nullptr, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::AGLS_Zombie_ControllerAI_eventPathWeightByNavLinksNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Zombie_ControllerAI::execPathWeightByNavLinksNumber)
{
	P_GET_OBJECT(UNavigationPath,Z_Param_Path);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistanceToPoint2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeightDiff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Bias);
	P_GET_UBOOL(Z_Param_UseAbsOnHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->PathWeightByNavLinksNumber(Z_Param_Path,Z_Param_MaxDistanceToPoint2D,Z_Param_MaxHeightDiff,Z_Param_Bias,Z_Param_UseAbsOnHeight);
	P_NATIVE_END;
}
// End Class AAGLS_Zombie_ControllerAI Function PathWeightByNavLinksNumber

// Begin Class AAGLS_Zombie_ControllerAI Function UpdateSightPerceptionValues
static const FName NAME_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues = FName(TEXT("UpdateSightPerceptionValues"));
void AAGLS_Zombie_ControllerAI::UpdateSightPerceptionValues()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateSightPerceptionValues_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Controller|Perception" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_Zombie_ControllerAI, nullptr, "UpdateSightPerceptionValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Zombie_ControllerAI::execUpdateSightPerceptionValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSightPerceptionValues_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_Zombie_ControllerAI Function UpdateSightPerceptionValues

// Begin Class AAGLS_Zombie_ControllerAI
void AAGLS_Zombie_ControllerAI::StaticRegisterNativesAAGLS_Zombie_ControllerAI()
{
	UClass* Class = AAGLS_Zombie_ControllerAI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CustomUpdateControlRotation", &AAGLS_Zombie_ControllerAI::execCustomUpdateControlRotation },
		{ "DoesPathUseNavLink", &AAGLS_Zombie_ControllerAI::execDoesPathUseNavLink },
		{ "PathWeightByNavLinksNumber", &AAGLS_Zombie_ControllerAI::execPathWeightByNavLinksNumber },
		{ "UpdateSightPerceptionValues", &AAGLS_Zombie_ControllerAI::execUpdateSightPerceptionValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGLS_Zombie_ControllerAI);
UClass* Z_Construct_UClass_AAGLS_Zombie_ControllerAI_NoRegister()
{
	return AAGLS_Zombie_ControllerAI::StaticClass();
}
struct Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AGLS_Zombie_ControllerAI.h" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhenSeeReactionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Controller|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhenLostSightReactionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Controller|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawControlRotDesiredMode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Controller|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDetectionTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Controller|Perception" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectedEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Controller|Perception" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoosedEnemyActor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Controller|Perception" },
		{ "ModuleRelativePath", "Public/AGLS_Zombie_ControllerAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhenSeeReactionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhenLostSightReactionSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_YawControlRotDesiredMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_YawControlRotDesiredMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyDetectionTime;
	static void NewProp_bDetectedEnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectedEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoosedEnemyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_CustomUpdateControlRotation, "CustomUpdateControlRotation" }, // 1404795483
		{ &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_DoesPathUseNavLink, "DoesPathUseNavLink" }, // 2184362632
		{ &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_PathWeightByNavLinksNumber, "PathWeightByNavLinksNumber" }, // 711324323
		{ &Z_Construct_UFunction_AAGLS_Zombie_ControllerAI_UpdateSightPerceptionValues, "UpdateSightPerceptionValues" }, // 1745021701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGLS_Zombie_ControllerAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_WhenSeeReactionSpeed = { "WhenSeeReactionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Zombie_ControllerAI, WhenSeeReactionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhenSeeReactionSpeed_MetaData), NewProp_WhenSeeReactionSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_WhenLostSightReactionSpeed = { "WhenLostSightReactionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Zombie_ControllerAI, WhenLostSightReactionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhenLostSightReactionSpeed_MetaData), NewProp_WhenLostSightReactionSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_YawControlRotDesiredMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_YawControlRotDesiredMode = { "YawControlRotDesiredMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Zombie_ControllerAI, YawControlRotDesiredMode), Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawControlRotDesiredMode_MetaData), NewProp_YawControlRotDesiredMode_MetaData) }; // 4211987435
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_EnemyDetectionTime = { "EnemyDetectionTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Zombie_ControllerAI, EnemyDetectionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyDetectionTime_MetaData), NewProp_EnemyDetectionTime_MetaData) };
void Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_bDetectedEnemy_SetBit(void* Obj)
{
	((AAGLS_Zombie_ControllerAI*)Obj)->bDetectedEnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_bDetectedEnemy = { "bDetectedEnemy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_Zombie_ControllerAI), &Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_bDetectedEnemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectedEnemy_MetaData), NewProp_bDetectedEnemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_ChoosedEnemyActor = { "ChoosedEnemyActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Zombie_ControllerAI, ChoosedEnemyActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoosedEnemyActor_MetaData), NewProp_ChoosedEnemyActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_WhenSeeReactionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_WhenLostSightReactionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_YawControlRotDesiredMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_YawControlRotDesiredMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_EnemyDetectionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_bDetectedEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::NewProp_ChoosedEnemyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::ClassParams = {
	&AAGLS_Zombie_ControllerAI::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGLS_Zombie_ControllerAI()
{
	if (!Z_Registration_Info_UClass_AAGLS_Zombie_ControllerAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGLS_Zombie_ControllerAI.OuterSingleton, Z_Construct_UClass_AAGLS_Zombie_ControllerAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGLS_Zombie_ControllerAI.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<AAGLS_Zombie_ControllerAI>()
{
	return AAGLS_Zombie_ControllerAI::StaticClass();
}
AAGLS_Zombie_ControllerAI::AAGLS_Zombie_ControllerAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGLS_Zombie_ControllerAI);
AAGLS_Zombie_ControllerAI::~AAGLS_Zombie_ControllerAI() {}
// End Class AAGLS_Zombie_ControllerAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControllerAI_ControlRotMode_StaticEnum, TEXT("EControllerAI_ControlRotMode"), &Z_Registration_Info_UEnum_EControllerAI_ControlRotMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4211987435U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGLS_Zombie_ControllerAI, AAGLS_Zombie_ControllerAI::StaticClass, TEXT("AAGLS_Zombie_ControllerAI"), &Z_Registration_Info_UClass_AAGLS_Zombie_ControllerAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGLS_Zombie_ControllerAI), 162577731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_3112465688(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Zombie_ControllerAI_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
