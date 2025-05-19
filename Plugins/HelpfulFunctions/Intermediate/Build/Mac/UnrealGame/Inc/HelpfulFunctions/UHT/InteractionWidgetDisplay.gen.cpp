// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/InteractionWidgetDisplay.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionWidgetDisplay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetCondition_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetDisplay();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetDisplay_NoRegister();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Delegate FWidgetCreatedSignature
struct Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "WidgetCreatedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWidgetCreatedSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetCreatedSignature)
{
	WidgetCreatedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWidgetCreatedSignature

// Begin Delegate FWidgetDestroyedSignature
struct Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "WidgetDestroyedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWidgetDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetDestroyedSignature)
{
	WidgetDestroyedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWidgetDestroyedSignature

// Begin Class UInteractionWidgetDisplay Function DestroyInteractionWidget
struct Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to destroy the widget\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to destroy the widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetDisplay, nullptr, "DestroyInteractionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionWidgetDisplay::execDestroyInteractionWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyInteractionWidget();
	P_NATIVE_END;
}
// End Class UInteractionWidgetDisplay Function DestroyInteractionWidget

// Begin Class UInteractionWidgetDisplay Function OnBeginOverlap
struct Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics
{
	struct InteractionWidgetDisplay_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractionWidgetDisplay_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionWidgetDisplay_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetDisplay, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::InteractionWidgetDisplay_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::InteractionWidgetDisplay_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionWidgetDisplay::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UInteractionWidgetDisplay Function OnBeginOverlap

// Begin Class UInteractionWidgetDisplay Function OnEndOverlap
struct Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics
{
	struct InteractionWidgetDisplay_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetDisplay_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetDisplay, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::InteractionWidgetDisplay_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::InteractionWidgetDisplay_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionWidgetDisplay::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class UInteractionWidgetDisplay Function OnEndOverlap

// Begin Class UInteractionWidgetDisplay Function TryGenerateWidget
struct Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to manually try generating the widget\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to manually try generating the widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetDisplay, nullptr, "TryGenerateWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionWidgetDisplay::execTryGenerateWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryGenerateWidget();
	P_NATIVE_END;
}
// End Class UInteractionWidgetDisplay Function TryGenerateWidget

// Begin Class UInteractionWidgetDisplay
void UInteractionWidgetDisplay::StaticRegisterNativesUInteractionWidgetDisplay()
{
	UClass* Class = UInteractionWidgetDisplay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyInteractionWidget", &UInteractionWidgetDisplay::execDestroyInteractionWidget },
		{ "OnBeginOverlap", &UInteractionWidgetDisplay::execOnBeginOverlap },
		{ "OnEndOverlap", &UInteractionWidgetDisplay::execOnEndOverlap },
		{ "TryGenerateWidget", &UInteractionWidgetDisplay::execTryGenerateWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionWidgetDisplay);
UClass* Z_Construct_UClass_UInteractionWidgetDisplay_NoRegister()
{
	return UInteractionWidgetDisplay::StaticClass();
}
struct Z_Construct_UClass_UInteractionWidgetDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "PlayerMechanics" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "InteractionWidgetDisplay.h" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetCreated_MetaData[] = {
		{ "Category", "Interaction Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlueprintAssignable events\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintAssignable events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetDestroyed_MetaData[] = {
		{ "Category", "Interaction Widget" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current widget instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current widget instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soft reference to the widget class\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft reference to the widget class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision component explicitly assigned for interaction\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision component explicitly assigned for interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtiveConditionObject_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickIntervalWhenDisplay_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickIntervalWhenOnlyOverlap_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionCheckOffset_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionWidgetDisplay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetDestroyed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AddtiveConditionObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickIntervalWhenDisplay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickIntervalWhenOnlyOverlap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionCheckOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionWidgetDisplay_DestroyInteractionWidget, "DestroyInteractionWidget" }, // 172665445
		{ &Z_Construct_UFunction_UInteractionWidgetDisplay_OnBeginOverlap, "OnBeginOverlap" }, // 4267167549
		{ &Z_Construct_UFunction_UInteractionWidgetDisplay_OnEndOverlap, "OnEndOverlap" }, // 3845489950
		{ &Z_Construct_UFunction_UInteractionWidgetDisplay_TryGenerateWidget, "TryGenerateWidget" }, // 1786701174
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionWidgetDisplay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_OnWidgetCreated = { "OnWidgetCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, OnWidgetCreated), Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetCreated_MetaData), NewProp_OnWidgetCreated_MetaData) }; // 525854267
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_OnWidgetDestroyed = { "OnWidgetDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, OnWidgetDestroyed), Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetDestroyed_MetaData), NewProp_OnWidgetDestroyed_MetaData) }; // 1956251555
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, OverlapComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponent_MetaData), NewProp_OverlapComponent_MetaData) }; // 3869904073
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_AddtiveConditionObject = { "AddtiveConditionObject", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, AddtiveConditionObject), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionWidgetCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtiveConditionObject_MetaData), NewProp_AddtiveConditionObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_TickIntervalWhenDisplay = { "TickIntervalWhenDisplay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, TickIntervalWhenDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickIntervalWhenDisplay_MetaData), NewProp_TickIntervalWhenDisplay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_TickIntervalWhenOnlyOverlap = { "TickIntervalWhenOnlyOverlap", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, TickIntervalWhenOnlyOverlap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickIntervalWhenOnlyOverlap_MetaData), NewProp_TickIntervalWhenOnlyOverlap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_ConditionCheckOffset = { "ConditionCheckOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionWidgetDisplay, ConditionCheckOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionCheckOffset_MetaData), NewProp_ConditionCheckOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionWidgetDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_OnWidgetCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_OnWidgetDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_OverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_AddtiveConditionObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_TickIntervalWhenDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_TickIntervalWhenOnlyOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidgetDisplay_Statics::NewProp_ConditionCheckOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetDisplay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionWidgetDisplay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArrowComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetDisplay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionWidgetDisplay_Statics::ClassParams = {
	&UInteractionWidgetDisplay::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionWidgetDisplay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetDisplay_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetDisplay_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionWidgetDisplay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionWidgetDisplay()
{
	if (!Z_Registration_Info_UClass_UInteractionWidgetDisplay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionWidgetDisplay.OuterSingleton, Z_Construct_UClass_UInteractionWidgetDisplay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionWidgetDisplay.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UInteractionWidgetDisplay>()
{
	return UInteractionWidgetDisplay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionWidgetDisplay);
UInteractionWidgetDisplay::~UInteractionWidgetDisplay() {}
// End Class UInteractionWidgetDisplay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionWidgetDisplay, UInteractionWidgetDisplay::StaticClass, TEXT("UInteractionWidgetDisplay"), &Z_Registration_Info_UClass_UInteractionWidgetDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionWidgetDisplay), 2856660519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_2582824229(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetDisplay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
