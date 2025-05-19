// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/InteractiveActorsInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveActorsInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractiveActorsInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractiveActorsInterface_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Get_ActorStartedInteraction
struct InteractiveActorsInterface_eventBPI_AI_Get_ActorStartedInteraction_Parms
{
	bool Started;
};
void IInteractiveActorsInterface::BPI_AI_Get_ActorStartedInteraction(bool& Started)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_ActorStartedInteraction instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction = FName(TEXT("BPI_AI_Get_ActorStartedInteraction"));
void IInteractiveActorsInterface::Execute_BPI_AI_Get_ActorStartedInteraction(UObject* O, bool& Started)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Get_ActorStartedInteraction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction);
	if (Func)
	{
		Parms.Started=Started;
		O->ProcessEvent(Func, &Parms);
		Started=Parms.Started;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Get_ActorStartedInteraction_Implementation(Started);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get|Conditions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "DisplayName", "BPI IA Get ActorStartedInteraction" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Started_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Started;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::NewProp_Started_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_AI_Get_ActorStartedInteraction_Parms*)Obj)->Started = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_AI_Get_ActorStartedInteraction_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::NewProp_Started_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::NewProp_Started,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Get_ActorStartedInteraction", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Get_ActorStartedInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Get_ActorStartedInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Get_ActorStartedInteraction)
{
	P_GET_UBOOL_REF(Z_Param_Out_Started);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_ActorStartedInteraction_Implementation(Z_Param_Out_Started);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Get_ActorStartedInteraction

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Get_ObjectTracingOrigin
struct InteractiveActorsInterface_eventBPI_AI_Get_ObjectTracingOrigin_Parms
{
	FVector PositionWS;
};
void IInteractiveActorsInterface::BPI_AI_Get_ObjectTracingOrigin(FVector& PositionWS)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_ObjectTracingOrigin instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin = FName(TEXT("BPI_AI_Get_ObjectTracingOrigin"));
void IInteractiveActorsInterface::Execute_BPI_AI_Get_ObjectTracingOrigin(UObject* O, FVector& PositionWS)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Get_ObjectTracingOrigin_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin);
	if (Func)
	{
		Parms.PositionWS=PositionWS;
		O->ProcessEvent(Func, &Parms);
		PositionWS=Parms.PositionWS;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Get_ObjectTracingOrigin_Implementation(PositionWS);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get" },
		{ "DisplayName", "BPI IA Get ObjectTracingOrigin" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionWS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::NewProp_PositionWS = { "PositionWS", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_AI_Get_ObjectTracingOrigin_Parms, PositionWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::NewProp_PositionWS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Get_ObjectTracingOrigin", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Get_ObjectTracingOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Get_ObjectTracingOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Get_ObjectTracingOrigin)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PositionWS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_ObjectTracingOrigin_Implementation(Z_Param_Out_PositionWS);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Get_ObjectTracingOrigin

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Set_ActivateFunctionality
struct InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms
{
	bool Activate;
	ACharacter* Target;
};
void IInteractiveActorsInterface::BPI_AI_Set_ActivateFunctionality(bool Activate, ACharacter* Target)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_ActivateFunctionality instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality = FName(TEXT("BPI_AI_Set_ActivateFunctionality"));
void IInteractiveActorsInterface::Execute_BPI_AI_Set_ActivateFunctionality(UObject* O, bool Activate, ACharacter* Target)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality);
	if (Func)
	{
		Parms.Activate=Activate;
		Parms.Target=Target;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Set_ActivateFunctionality_Implementation(Activate,Target);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Set" },
		{ "DisplayName", "BPI IA Set ActivateFunctionality" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Activate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::NewProp_Activate_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms*)Obj)->Activate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms, Target), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::NewProp_Activate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Set_ActivateFunctionality", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Set_ActivateFunctionality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Set_ActivateFunctionality)
{
	P_GET_UBOOL(Z_Param_Activate);
	P_GET_OBJECT(ACharacter,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_ActivateFunctionality_Implementation(Z_Param_Activate,Z_Param_Target);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Set_ActivateFunctionality

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Set_HitByBullet
struct InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms
{
	FHitResult HitInfo;
	ACharacter* FromCharacter;
	AActor* FromActor;
};
void IInteractiveActorsInterface::BPI_AI_Set_HitByBullet(FHitResult HitInfo, ACharacter* FromCharacter, AActor* FromActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_HitByBullet instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet = FName(TEXT("BPI_AI_Set_HitByBullet"));
void IInteractiveActorsInterface::Execute_BPI_AI_Set_HitByBullet(UObject* O, FHitResult HitInfo, ACharacter* FromCharacter, AActor* FromActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet);
	if (Func)
	{
		Parms.HitInfo=HitInfo;
		Parms.FromCharacter=FromCharacter;
		Parms.FromActor=FromActor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Set_HitByBullet_Implementation(HitInfo,FromCharacter,FromActor);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Interactive Actors Interface|Set" },
		{ "DisplayName", "BPI IA Set HitByBullet" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::NewProp_FromCharacter = { "FromCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms, FromCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::NewProp_FromActor = { "FromActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms, FromActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::NewProp_FromCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::NewProp_FromActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Set_HitByBullet", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Set_HitByBullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Set_HitByBullet)
{
	P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
	P_GET_OBJECT(ACharacter,Z_Param_FromCharacter);
	P_GET_OBJECT(AActor,Z_Param_FromActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_HitByBullet_Implementation(Z_Param_HitInfo,Z_Param_FromCharacter,Z_Param_FromActor);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Set_HitByBullet

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Set_StartInteraction
struct InteractiveActorsInterface_eventBPI_AI_Set_StartInteraction_Parms
{
	bool Start;
};
void IInteractiveActorsInterface::BPI_AI_Set_StartInteraction(bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_StartInteraction instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction = FName(TEXT("BPI_AI_Set_StartInteraction"));
void IInteractiveActorsInterface::Execute_BPI_AI_Set_StartInteraction(UObject* O, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Set_StartInteraction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction);
	if (Func)
	{
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Set_StartInteraction_Implementation(Start);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Set" },
		{ "DisplayName", "BPI IA Set StartInteraction" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_AI_Set_StartInteraction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartInteraction_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Set_StartInteraction", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Set_StartInteraction)
{
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_StartInteraction_Implementation(Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Set_StartInteraction

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Set_StartInteractionTypeB
struct InteractiveActorsInterface_eventBPI_AI_Set_StartInteractionTypeB_Parms
{
	bool Start;
};
void IInteractiveActorsInterface::BPI_AI_Set_StartInteractionTypeB(bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_StartInteractionTypeB instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB = FName(TEXT("BPI_AI_Set_StartInteractionTypeB"));
void IInteractiveActorsInterface::Execute_BPI_AI_Set_StartInteractionTypeB(UObject* O, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Set_StartInteractionTypeB_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB);
	if (Func)
	{
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Set_StartInteractionTypeB_Implementation(Start);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Set" },
		{ "DisplayName", "BPI IA Set StartInteractionTypeB" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::NewProp_Start_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_AI_Set_StartInteractionTypeB_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartInteractionTypeB_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Set_StartInteractionTypeB", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartInteractionTypeB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartInteractionTypeB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Set_StartInteractionTypeB)
{
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_StartInteractionTypeB_Implementation(Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Set_StartInteractionTypeB

// Begin Interface UInteractiveActorsInterface Function BPI_AI_Set_StartPlayerCollisionBlock
struct InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms
{
	bool BlockCollision;
	float TimeToBlock;
};
void IInteractiveActorsInterface::BPI_AI_Set_StartPlayerCollisionBlock(bool BlockCollision, float TimeToBlock)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_StartPlayerCollisionBlock instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock = FName(TEXT("BPI_AI_Set_StartPlayerCollisionBlock"));
void IInteractiveActorsInterface::Execute_BPI_AI_Set_StartPlayerCollisionBlock(UObject* O, bool BlockCollision, float TimeToBlock)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock);
	if (Func)
	{
		Parms.BlockCollision=BlockCollision;
		Parms.TimeToBlock=TimeToBlock;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_AI_Set_StartPlayerCollisionBlock_Implementation(BlockCollision,TimeToBlock);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Set" },
		{ "DisplayName", "BPI IA Set StartPlayerCollisionBlock" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_BlockCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BlockCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::NewProp_BlockCollision_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms*)Obj)->BlockCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::NewProp_BlockCollision = { "BlockCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::NewProp_BlockCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::NewProp_TimeToBlock = { "TimeToBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms, TimeToBlock), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::NewProp_BlockCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::NewProp_TimeToBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_AI_Set_StartPlayerCollisionBlock", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_AI_Set_StartPlayerCollisionBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_AI_Set_StartPlayerCollisionBlock)
{
	P_GET_UBOOL(Z_Param_BlockCollision);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToBlock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_StartPlayerCollisionBlock_Implementation(Z_Param_BlockCollision,Z_Param_TimeToBlock);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_AI_Set_StartPlayerCollisionBlock

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_CheckDurningAbilityRun
struct InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms
{
	bool CheckBasicStates;
	bool UseCorrectAngle;
	FVector2D AngleArc;
	FVector2D MaxPositionZ;
	float MaxDistance;
	bool CheckWallHit;
	bool UseOtherTrace;
	AActor* ToIgnores;
};
void IInteractiveActorsInterface::BPI_IA_Get_CheckDurningAbilityRun(bool& CheckBasicStates, bool& UseCorrectAngle, FVector2D& AngleArc, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace, AActor*& ToIgnores)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_CheckDurningAbilityRun instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun = FName(TEXT("BPI_IA_Get_CheckDurningAbilityRun"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_CheckDurningAbilityRun(UObject* O, bool& CheckBasicStates, bool& UseCorrectAngle, FVector2D& AngleArc, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace, AActor*& ToIgnores)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun);
	if (Func)
	{
		Parms.CheckBasicStates=CheckBasicStates;
		Parms.UseCorrectAngle=UseCorrectAngle;
		Parms.AngleArc=AngleArc;
		Parms.MaxPositionZ=MaxPositionZ;
		Parms.MaxDistance=MaxDistance;
		Parms.CheckWallHit=CheckWallHit;
		Parms.UseOtherTrace=UseOtherTrace;
		Parms.ToIgnores=ToIgnores;
		O->ProcessEvent(Func, &Parms);
		CheckBasicStates=Parms.CheckBasicStates;
		UseCorrectAngle=Parms.UseCorrectAngle;
		AngleArc=Parms.AngleArc;
		MaxPositionZ=Parms.MaxPositionZ;
		MaxDistance=Parms.MaxDistance;
		CheckWallHit=Parms.CheckWallHit;
		UseOtherTrace=Parms.UseOtherTrace;
		ToIgnores=Parms.ToIgnores;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_CheckDurningAbilityRun_Implementation(CheckBasicStates,UseCorrectAngle,AngleArc,MaxPositionZ,MaxDistance,CheckWallHit,UseOtherTrace,ToIgnores);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Interactive Actors Interface|Get|Conditions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (Most of important function! SHOULD be overrided in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (Most of important function! SHOULD be overrided in child class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_CheckBasicStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckBasicStates;
	static void NewProp_UseCorrectAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCorrectAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngleArc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPositionZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static void NewProp_CheckWallHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckWallHit;
	static void NewProp_UseOtherTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseOtherTrace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToIgnores;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckBasicStates_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms*)Obj)->CheckBasicStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckBasicStates = { "CheckBasicStates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckBasicStates_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseCorrectAngle_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms*)Obj)->UseCorrectAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseCorrectAngle = { "UseCorrectAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseCorrectAngle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_AngleArc = { "AngleArc", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms, AngleArc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_MaxPositionZ = { "MaxPositionZ", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms, MaxPositionZ), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckWallHit_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms*)Obj)->CheckWallHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckWallHit = { "CheckWallHit", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckWallHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseOtherTrace_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms*)Obj)->UseOtherTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseOtherTrace = { "UseOtherTrace", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseOtherTrace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_ToIgnores = { "ToIgnores", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms, ToIgnores), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckBasicStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseCorrectAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_AngleArc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_MaxPositionZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_CheckWallHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_UseOtherTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::NewProp_ToIgnores,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_CheckDurningAbilityRun", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningAbilityRun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_CheckDurningAbilityRun)
{
	P_GET_UBOOL_REF(Z_Param_Out_CheckBasicStates);
	P_GET_UBOOL_REF(Z_Param_Out_UseCorrectAngle);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AngleArc);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxPositionZ);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxDistance);
	P_GET_UBOOL_REF(Z_Param_Out_CheckWallHit);
	P_GET_UBOOL_REF(Z_Param_Out_UseOtherTrace);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_ToIgnores);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_CheckDurningAbilityRun_Implementation(Z_Param_Out_CheckBasicStates,Z_Param_Out_UseCorrectAngle,Z_Param_Out_AngleArc,Z_Param_Out_MaxPositionZ,Z_Param_Out_MaxDistance,Z_Param_Out_CheckWallHit,Z_Param_Out_UseOtherTrace,P_ARG_GC_BARRIER(Z_Param_Out_ToIgnores));
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_CheckDurningAbilityRun

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_CheckDurningOverlap
struct InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms
{
	bool CheckBasicStates;
	FVector2D MaxPositionZ;
	float MaxDistance;
	bool CheckWallHit;
	bool UseOtherTrace;
};
void IInteractiveActorsInterface::BPI_IA_Get_CheckDurningOverlap(bool& CheckBasicStates, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_CheckDurningOverlap instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap = FName(TEXT("BPI_IA_Get_CheckDurningOverlap"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_CheckDurningOverlap(UObject* O, bool& CheckBasicStates, FVector2D& MaxPositionZ, float& MaxDistance, bool& CheckWallHit, bool& UseOtherTrace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap);
	if (Func)
	{
		Parms.CheckBasicStates=CheckBasicStates;
		Parms.MaxPositionZ=MaxPositionZ;
		Parms.MaxDistance=MaxDistance;
		Parms.CheckWallHit=CheckWallHit;
		Parms.UseOtherTrace=UseOtherTrace;
		O->ProcessEvent(Func, &Parms);
		CheckBasicStates=Parms.CheckBasicStates;
		MaxPositionZ=Parms.MaxPositionZ;
		MaxDistance=Parms.MaxDistance;
		CheckWallHit=Parms.CheckWallHit;
		UseOtherTrace=Parms.UseOtherTrace;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_CheckDurningOverlap_Implementation(CheckBasicStates,MaxPositionZ,MaxDistance,CheckWallHit,UseOtherTrace);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Interactive Actors Interface|Get|Conditions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (Most of important function! SHOULD be overrided in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (Most of important function! SHOULD be overrided in child class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_CheckBasicStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckBasicStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPositionZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static void NewProp_CheckWallHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckWallHit;
	static void NewProp_UseOtherTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseOtherTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckBasicStates_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms*)Obj)->CheckBasicStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckBasicStates = { "CheckBasicStates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckBasicStates_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_MaxPositionZ = { "MaxPositionZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms, MaxPositionZ), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckWallHit_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms*)Obj)->CheckWallHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckWallHit = { "CheckWallHit", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckWallHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_UseOtherTrace_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms*)Obj)->UseOtherTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_UseOtherTrace = { "UseOtherTrace", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_UseOtherTrace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckBasicStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_MaxPositionZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_CheckWallHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::NewProp_UseOtherTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_CheckDurningOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CheckDurningOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_CheckDurningOverlap)
{
	P_GET_UBOOL_REF(Z_Param_Out_CheckBasicStates);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxPositionZ);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxDistance);
	P_GET_UBOOL_REF(Z_Param_Out_CheckWallHit);
	P_GET_UBOOL_REF(Z_Param_Out_UseOtherTrace);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_CheckDurningOverlap_Implementation(Z_Param_Out_CheckBasicStates,Z_Param_Out_MaxPositionZ,Z_Param_Out_MaxDistance,Z_Param_Out_CheckWallHit,Z_Param_Out_UseOtherTrace);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_CheckDurningOverlap

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_ConfigHoldingOption
struct InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms
{
	bool ActorCanBeHold;
	CALS_OverlayState OverlayMatch;
};
void IInteractiveActorsInterface::BPI_IA_Get_ConfigHoldingOption(bool& ActorCanBeHold, CALS_OverlayState& OverlayMatch)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_ConfigHoldingOption instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption = FName(TEXT("BPI_IA_Get_ConfigHoldingOption"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_ConfigHoldingOption(UObject* O, bool& ActorCanBeHold, CALS_OverlayState& OverlayMatch)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption);
	if (Func)
	{
		Parms.ActorCanBeHold=ActorCanBeHold;
		Parms.OverlayMatch=OverlayMatch;
		O->ProcessEvent(Func, &Parms);
		ActorCanBeHold=Parms.ActorCanBeHold;
		OverlayMatch=Parms.OverlayMatch;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_ConfigHoldingOption_Implementation(ActorCanBeHold,OverlayMatch);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ActorCanBeHold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActorCanBeHold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayMatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_ActorCanBeHold_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms*)Obj)->ActorCanBeHold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_ActorCanBeHold = { "ActorCanBeHold", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_ActorCanBeHold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_OverlayMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_OverlayMatch = { "OverlayMatch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms, OverlayMatch), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_ActorCanBeHold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_OverlayMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::NewProp_OverlayMatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_ConfigHoldingOption", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_ConfigHoldingOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_ConfigHoldingOption)
{
	P_GET_UBOOL_REF(Z_Param_Out_ActorCanBeHold);
	P_GET_ENUM_REF(CALS_OverlayState,Z_Param_Out_OverlayMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_ConfigHoldingOption_Implementation(Z_Param_Out_ActorCanBeHold,(CALS_OverlayState&)(Z_Param_Out_OverlayMatch));
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_ConfigHoldingOption

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_CreatedWidgetInstance
struct InteractiveActorsInterface_eventBPI_IA_Get_CreatedWidgetInstance_Parms
{
	UUserWidget* WidgetInstance;
};
void IInteractiveActorsInterface::BPI_IA_Get_CreatedWidgetInstance(UUserWidget*& WidgetInstance) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_CreatedWidgetInstance instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance = FName(TEXT("BPI_IA_Get_CreatedWidgetInstance"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_CreatedWidgetInstance(const UObject* O, UUserWidget*& WidgetInstance)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_CreatedWidgetInstance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance);
	if (Func)
	{
		Parms.WidgetInstance=WidgetInstance;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		WidgetInstance=Parms.WidgetInstance;
	}
	else if (auto I = (const IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_CreatedWidgetInstance_Implementation(WidgetInstance);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get|Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CreatedWidgetInstance_Parms, WidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstance_MetaData), NewProp_WidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::NewProp_WidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_CreatedWidgetInstance", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CreatedWidgetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CreatedWidgetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_CreatedWidgetInstance)
{
	P_GET_OBJECT_REF(UUserWidget,Z_Param_Out_WidgetInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_CreatedWidgetInstance_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_WidgetInstance));
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_CreatedWidgetInstance

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_CurrentVelocity
struct InteractiveActorsInterface_eventBPI_IA_Get_CurrentVelocity_Parms
{
	FVector ReturnVelocity;
};
void IInteractiveActorsInterface::BPI_IA_Get_CurrentVelocity(FVector& ReturnVelocity)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_CurrentVelocity instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity = FName(TEXT("BPI_IA_Get_CurrentVelocity"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_CurrentVelocity(UObject* O, FVector& ReturnVelocity)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_CurrentVelocity_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity);
	if (Func)
	{
		Parms.ReturnVelocity=ReturnVelocity;
		O->ProcessEvent(Func, &Parms);
		ReturnVelocity=Parms.ReturnVelocity;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_CurrentVelocity_Implementation(ReturnVelocity);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::NewProp_ReturnVelocity = { "ReturnVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_CurrentVelocity_Parms, ReturnVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::NewProp_ReturnVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_CurrentVelocity", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CurrentVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_CurrentVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_CurrentVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_CurrentVelocity_Implementation(Z_Param_Out_ReturnVelocity);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_CurrentVelocity

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_InteractionTag
struct InteractiveActorsInterface_eventBPI_IA_Get_InteractionTag_Parms
{
	FGameplayTagContainer ReturnTag;
};
void IInteractiveActorsInterface::BPI_IA_Get_InteractionTag(FGameplayTagContainer& ReturnTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_InteractionTag instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag = FName(TEXT("BPI_IA_Get_InteractionTag"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_InteractionTag(UObject* O, FGameplayTagContainer& ReturnTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_InteractionTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag);
	if (Func)
	{
		Parms.ReturnTag=ReturnTag;
		O->ProcessEvent(Func, &Parms);
		ReturnTag=Parms.ReturnTag;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_InteractionTag_Implementation(ReturnTag);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::NewProp_ReturnTag = { "ReturnTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_InteractionTag_Parms, ReturnTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::NewProp_ReturnTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_InteractionTag", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_InteractionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_InteractionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_InteractionTag)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ReturnTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_InteractionTag_Implementation(Z_Param_Out_ReturnTag);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_InteractionTag

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_InteractionType
struct InteractiveActorsInterface_eventBPI_IA_Get_InteractionType_Parms
{
	int32 InteractionType;
};
void IInteractiveActorsInterface::BPI_IA_Get_InteractionType(int32& InteractionType)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_InteractionType instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_InteractionType = FName(TEXT("BPI_IA_Get_InteractionType"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_InteractionType(UObject* O, int32& InteractionType)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_InteractionType_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_InteractionType);
	if (Func)
	{
		Parms.InteractionType=InteractionType;
		O->ProcessEvent(Func, &Parms);
		InteractionType=Parms.InteractionType;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_InteractionType_Implementation(InteractionType);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor */" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_InteractionType_Parms, InteractionType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::NewProp_InteractionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_InteractionType", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_InteractionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_InteractionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_InteractionType)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InteractionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_InteractionType_Implementation(Z_Param_Out_InteractionType);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_InteractionType

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_ObjectCollisionOverlap
struct InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms
{
	bool IsOverlaping;
	TArray<AActor*> ToIgnore;
};
void IInteractiveActorsInterface::BPI_IA_Get_ObjectCollisionOverlap(bool& IsOverlaping, TArray<AActor*>& ToIgnore)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_ObjectCollisionOverlap instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap = FName(TEXT("BPI_IA_Get_ObjectCollisionOverlap"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_ObjectCollisionOverlap(UObject* O, bool& IsOverlaping, TArray<AActor*>& ToIgnore)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap);
	if (Func)
	{
		Parms.IsOverlaping=IsOverlaping;
		Parms.ToIgnore=ToIgnore;
		O->ProcessEvent(Func, &Parms);
		IsOverlaping=Parms.IsOverlaping;
		ToIgnore=Parms.ToIgnore;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_ObjectCollisionOverlap_Implementation(IsOverlaping,ToIgnore);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get|Conditions" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsOverlaping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOverlaping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_IsOverlaping_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms*)Obj)->IsOverlaping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_IsOverlaping = { "IsOverlaping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_IsOverlaping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_ToIgnore_Inner = { "ToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_ToIgnore = { "ToIgnore", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms, ToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_IsOverlaping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_ToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::NewProp_ToIgnore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_ObjectCollisionOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_ObjectCollisionOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_ObjectCollisionOverlap)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsOverlaping);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ToIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_ObjectCollisionOverlap_Implementation(Z_Param_Out_IsOverlaping,Z_Param_Out_ToIgnore);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_ObjectCollisionOverlap

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_OverridedWidget
struct InteractiveActorsInterface_eventBPI_IA_Get_OverridedWidget_Parms
{
	TSoftClassPtr<UUserWidget>  ReturnSoftClass;
};
void IInteractiveActorsInterface::BPI_IA_Get_OverridedWidget(TSoftClassPtr<UUserWidget> & ReturnSoftClass)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_OverridedWidget instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget = FName(TEXT("BPI_IA_Get_OverridedWidget"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_OverridedWidget(UObject* O, TSoftClassPtr<UUserWidget> & ReturnSoftClass)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_OverridedWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget);
	if (Func)
	{
		Parms.ReturnSoftClass=ReturnSoftClass;
		O->ProcessEvent(Func, &Parms);
		ReturnSoftClass=Parms.ReturnSoftClass;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_OverridedWidget_Implementation(ReturnSoftClass);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get|Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnSoftClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::NewProp_ReturnSoftClass = { "ReturnSoftClass", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_OverridedWidget_Parms, ReturnSoftClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::NewProp_ReturnSoftClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_OverridedWidget", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_OverridedWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_OverridedWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_OverridedWidget)
{
	P_GET_SOFTCLASS_REF(TSoftClassPtr<UUserWidget> ,Z_Param_Out_ReturnSoftClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_OverridedWidget_Implementation(Z_Param_Out_ReturnSoftClass);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_OverridedWidget

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_RequiredAbilityOnOverlap
struct InteractiveActorsInterface_eventBPI_IA_Get_RequiredAbilityOnOverlap_Parms
{
	bool Require;
};
void IInteractiveActorsInterface::BPI_IA_Get_RequiredAbilityOnOverlap(bool& Require) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_RequiredAbilityOnOverlap instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap = FName(TEXT("BPI_IA_Get_RequiredAbilityOnOverlap"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_RequiredAbilityOnOverlap(const UObject* O, bool& Require)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_RequiredAbilityOnOverlap_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap);
	if (Func)
	{
		Parms.Require=Require;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		Require=Parms.Require;
	}
	else if (auto I = (const IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_RequiredAbilityOnOverlap_Implementation(Require);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Require_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Require;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::NewProp_Require_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Get_RequiredAbilityOnOverlap_Parms*)Obj)->Require = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::NewProp_Require = { "Require", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_RequiredAbilityOnOverlap_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::NewProp_Require_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::NewProp_Require,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_RequiredAbilityOnOverlap", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_RequiredAbilityOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_RequiredAbilityOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_RequiredAbilityOnOverlap)
{
	P_GET_UBOOL_REF(Z_Param_Out_Require);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_RequiredAbilityOnOverlap_Implementation(Z_Param_Out_Require);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_RequiredAbilityOnOverlap

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_WidgetParams
struct InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms
{
	ACharacter* PlayerChar;
	FName Text01;
	FName Text02;
	float Float01;
	FLinearColor Color01;
	FLinearColor Color02;
	UObject* Object01;
	UObject* Object02;
};
void IInteractiveActorsInterface::BPI_IA_Get_WidgetParams(ACharacter* PlayerChar, FName& Text01, FName& Text02, float& Float01, FLinearColor& Color01, FLinearColor& Color02, UObject*& Object01, UObject*& Object02)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_WidgetParams instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams = FName(TEXT("BPI_IA_Get_WidgetParams"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_WidgetParams(UObject* O, ACharacter* PlayerChar, FName& Text01, FName& Text02, float& Float01, FLinearColor& Color01, FLinearColor& Color02, UObject*& Object01, UObject*& Object02)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams);
	if (Func)
	{
		Parms.PlayerChar=PlayerChar;
		Parms.Text01=Text01;
		Parms.Text02=Text02;
		Parms.Float01=Float01;
		Parms.Color01=Color01;
		Parms.Color02=Color02;
		Parms.Object01=Object01;
		Parms.Object02=Object02;
		O->ProcessEvent(Func, &Parms);
		Text01=Parms.Text01;
		Text02=Parms.Text02;
		Float01=Parms.Float01;
		Color01=Parms.Color01;
		Color02=Parms.Color02;
		Object01=Parms.Object01;
		Object02=Parms.Object02;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_WidgetParams_Implementation(PlayerChar,Text01,Text02,Float01,Color01,Color02,Object01,Object02);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get|Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerChar;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Text01;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Text02;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color02;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object01;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object02;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_PlayerChar = { "PlayerChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, PlayerChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Text01 = { "Text01", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Text01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Text02 = { "Text02", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Text02), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Float01 = { "Float01", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Float01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Color01 = { "Color01", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Color01), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Color02 = { "Color02", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Color02), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Object01 = { "Object01", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Object01), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Object02 = { "Object02", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms, Object02), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_PlayerChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Text01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Text02,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Float01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Color01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Color02,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Object01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::NewProp_Object02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_WidgetParams", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_WidgetParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_WidgetParams)
{
	P_GET_OBJECT(ACharacter,Z_Param_PlayerChar);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Text01);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Text02);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Float01);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color01);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color02);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_Object01);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_Object02);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_WidgetParams_Implementation(Z_Param_PlayerChar,Z_Param_Out_Text01,Z_Param_Out_Text02,Z_Param_Out_Float01,Z_Param_Out_Color01,Z_Param_Out_Color02,P_ARG_GC_BARRIER(Z_Param_Out_Object01),P_ARG_GC_BARRIER(Z_Param_Out_Object02));
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_WidgetParams

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Get_WidgetWorldPosition
struct InteractiveActorsInterface_eventBPI_IA_Get_WidgetWorldPosition_Parms
{
	FVector ReturnPosition;
};
void IInteractiveActorsInterface::BPI_IA_Get_WidgetWorldPosition(FVector& ReturnPosition)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Get_WidgetWorldPosition instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition = FName(TEXT("BPI_IA_Get_WidgetWorldPosition"));
void IInteractiveActorsInterface::Execute_BPI_IA_Get_WidgetWorldPosition(UObject* O, FVector& ReturnPosition)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Get_WidgetWorldPosition_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition);
	if (Func)
	{
		Parms.ReturnPosition=ReturnPosition;
		O->ProcessEvent(Func, &Parms);
		ReturnPosition=Parms.ReturnPosition;
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Get_WidgetWorldPosition_Implementation(ReturnPosition);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Get|Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::NewProp_ReturnPosition = { "ReturnPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Get_WidgetWorldPosition_Parms, ReturnPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::NewProp_ReturnPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Get_WidgetWorldPosition", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Get_WidgetWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Get_WidgetWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Get_WidgetWorldPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Get_WidgetWorldPosition_Implementation(Z_Param_Out_ReturnPosition);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Get_WidgetWorldPosition

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Set_CanDisplayWidget
struct InteractiveActorsInterface_eventBPI_IA_Set_CanDisplayWidget_Parms
{
	bool CanDisplay;
};
void IInteractiveActorsInterface::BPI_IA_Set_CanDisplayWidget(bool CanDisplay)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Set_CanDisplayWidget instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget = FName(TEXT("BPI_IA_Set_CanDisplayWidget"));
void IInteractiveActorsInterface::Execute_BPI_IA_Set_CanDisplayWidget(UObject* O, bool CanDisplay)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Set_CanDisplayWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget);
	if (Func)
	{
		Parms.CanDisplay=CanDisplay;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Set_CanDisplayWidget_Implementation(CanDisplay);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Set" },
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::NewProp_CanDisplay_SetBit(void* Obj)
{
	((InteractiveActorsInterface_eventBPI_IA_Set_CanDisplayWidget_Parms*)Obj)->CanDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::NewProp_CanDisplay = { "CanDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveActorsInterface_eventBPI_IA_Set_CanDisplayWidget_Parms), &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::NewProp_CanDisplay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::NewProp_CanDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Set_CanDisplayWidget", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Set_CanDisplayWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Set_CanDisplayWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Set_CanDisplayWidget)
{
	P_GET_UBOOL(Z_Param_CanDisplay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Set_CanDisplayWidget_Implementation(Z_Param_CanDisplay);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Set_CanDisplayWidget

// Begin Interface UInteractiveActorsInterface Function BPI_IA_Set_CreatedWidgetInstance
struct InteractiveActorsInterface_eventBPI_IA_Set_CreatedWidgetInstance_Parms
{
	UUserWidget* WidgetInstance;
};
void IInteractiveActorsInterface::BPI_IA_Set_CreatedWidgetInstance(UUserWidget* WidgetInstance)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IA_Set_CreatedWidgetInstance instead.");
}
static FName NAME_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance = FName(TEXT("BPI_IA_Set_CreatedWidgetInstance"));
void IInteractiveActorsInterface::Execute_BPI_IA_Set_CreatedWidgetInstance(UObject* O, UUserWidget* WidgetInstance)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorsInterface::StaticClass()));
	InteractiveActorsInterface_eventBPI_IA_Set_CreatedWidgetInstance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance);
	if (Func)
	{
		Parms.WidgetInstance=WidgetInstance;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveActorsInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorsInterface::StaticClass())))
	{
		I->BPI_IA_Set_CreatedWidgetInstance_Implementation(WidgetInstance);
	}
}
struct Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactive Actors Interface|Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blueprint Interface - Interactive Actor (This function NOT require override in child class)*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Interface - Interactive Actor (This function NOT require override in child class)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveActorsInterface_eventBPI_IA_Set_CreatedWidgetInstance_Parms, WidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstance_MetaData), NewProp_WidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::NewProp_WidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveActorsInterface, nullptr, "BPI_IA_Set_CreatedWidgetInstance", nullptr, nullptr, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::PropPointers), sizeof(InteractiveActorsInterface_eventBPI_IA_Set_CreatedWidgetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveActorsInterface_eventBPI_IA_Set_CreatedWidgetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorsInterface::execBPI_IA_Set_CreatedWidgetInstance)
{
	P_GET_OBJECT(UUserWidget,Z_Param_WidgetInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_IA_Set_CreatedWidgetInstance_Implementation(Z_Param_WidgetInstance);
	P_NATIVE_END;
}
// End Interface UInteractiveActorsInterface Function BPI_IA_Set_CreatedWidgetInstance

// Begin Interface UInteractiveActorsInterface
void UInteractiveActorsInterface::StaticRegisterNativesUInteractiveActorsInterface()
{
	UClass* Class = UInteractiveActorsInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_AI_Get_ActorStartedInteraction", &IInteractiveActorsInterface::execBPI_AI_Get_ActorStartedInteraction },
		{ "BPI_AI_Get_ObjectTracingOrigin", &IInteractiveActorsInterface::execBPI_AI_Get_ObjectTracingOrigin },
		{ "BPI_AI_Set_ActivateFunctionality", &IInteractiveActorsInterface::execBPI_AI_Set_ActivateFunctionality },
		{ "BPI_AI_Set_HitByBullet", &IInteractiveActorsInterface::execBPI_AI_Set_HitByBullet },
		{ "BPI_AI_Set_StartInteraction", &IInteractiveActorsInterface::execBPI_AI_Set_StartInteraction },
		{ "BPI_AI_Set_StartInteractionTypeB", &IInteractiveActorsInterface::execBPI_AI_Set_StartInteractionTypeB },
		{ "BPI_AI_Set_StartPlayerCollisionBlock", &IInteractiveActorsInterface::execBPI_AI_Set_StartPlayerCollisionBlock },
		{ "BPI_IA_Get_CheckDurningAbilityRun", &IInteractiveActorsInterface::execBPI_IA_Get_CheckDurningAbilityRun },
		{ "BPI_IA_Get_CheckDurningOverlap", &IInteractiveActorsInterface::execBPI_IA_Get_CheckDurningOverlap },
		{ "BPI_IA_Get_ConfigHoldingOption", &IInteractiveActorsInterface::execBPI_IA_Get_ConfigHoldingOption },
		{ "BPI_IA_Get_CreatedWidgetInstance", &IInteractiveActorsInterface::execBPI_IA_Get_CreatedWidgetInstance },
		{ "BPI_IA_Get_CurrentVelocity", &IInteractiveActorsInterface::execBPI_IA_Get_CurrentVelocity },
		{ "BPI_IA_Get_InteractionTag", &IInteractiveActorsInterface::execBPI_IA_Get_InteractionTag },
		{ "BPI_IA_Get_InteractionType", &IInteractiveActorsInterface::execBPI_IA_Get_InteractionType },
		{ "BPI_IA_Get_ObjectCollisionOverlap", &IInteractiveActorsInterface::execBPI_IA_Get_ObjectCollisionOverlap },
		{ "BPI_IA_Get_OverridedWidget", &IInteractiveActorsInterface::execBPI_IA_Get_OverridedWidget },
		{ "BPI_IA_Get_RequiredAbilityOnOverlap", &IInteractiveActorsInterface::execBPI_IA_Get_RequiredAbilityOnOverlap },
		{ "BPI_IA_Get_WidgetParams", &IInteractiveActorsInterface::execBPI_IA_Get_WidgetParams },
		{ "BPI_IA_Get_WidgetWorldPosition", &IInteractiveActorsInterface::execBPI_IA_Get_WidgetWorldPosition },
		{ "BPI_IA_Set_CanDisplayWidget", &IInteractiveActorsInterface::execBPI_IA_Set_CanDisplayWidget },
		{ "BPI_IA_Set_CreatedWidgetInstance", &IInteractiveActorsInterface::execBPI_IA_Set_CreatedWidgetInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveActorsInterface);
UClass* Z_Construct_UClass_UInteractiveActorsInterface_NoRegister()
{
	return UInteractiveActorsInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractiveActorsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveActorsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ActorStartedInteraction, "BPI_AI_Get_ActorStartedInteraction" }, // 2411777836
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Get_ObjectTracingOrigin, "BPI_AI_Get_ObjectTracingOrigin" }, // 3979019550
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_ActivateFunctionality, "BPI_AI_Set_ActivateFunctionality" }, // 3179365329
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_HitByBullet, "BPI_AI_Set_HitByBullet" }, // 3566065029
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteraction, "BPI_AI_Set_StartInteraction" }, // 3697684870
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartInteractionTypeB, "BPI_AI_Set_StartInteractionTypeB" }, // 3337148599
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_AI_Set_StartPlayerCollisionBlock, "BPI_AI_Set_StartPlayerCollisionBlock" }, // 3786248984
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningAbilityRun, "BPI_IA_Get_CheckDurningAbilityRun" }, // 309309843
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CheckDurningOverlap, "BPI_IA_Get_CheckDurningOverlap" }, // 2072355409
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ConfigHoldingOption, "BPI_IA_Get_ConfigHoldingOption" }, // 3530492605
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CreatedWidgetInstance, "BPI_IA_Get_CreatedWidgetInstance" }, // 194942450
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_CurrentVelocity, "BPI_IA_Get_CurrentVelocity" }, // 692425230
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionTag, "BPI_IA_Get_InteractionTag" }, // 1239874313
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_InteractionType, "BPI_IA_Get_InteractionType" }, // 2046843398
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_ObjectCollisionOverlap, "BPI_IA_Get_ObjectCollisionOverlap" }, // 1448561362
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_OverridedWidget, "BPI_IA_Get_OverridedWidget" }, // 872271890
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_RequiredAbilityOnOverlap, "BPI_IA_Get_RequiredAbilityOnOverlap" }, // 826600108
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetParams, "BPI_IA_Get_WidgetParams" }, // 2300879544
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Get_WidgetWorldPosition, "BPI_IA_Get_WidgetWorldPosition" }, // 4256094754
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CanDisplayWidget, "BPI_IA_Set_CanDisplayWidget" }, // 3996381461
		{ &Z_Construct_UFunction_UInteractiveActorsInterface_BPI_IA_Set_CreatedWidgetInstance, "BPI_IA_Set_CreatedWidgetInstance" }, // 430110495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveActorsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveActorsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveActorsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveActorsInterface_Statics::ClassParams = {
	&UInteractiveActorsInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveActorsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveActorsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveActorsInterface()
{
	if (!Z_Registration_Info_UClass_UInteractiveActorsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveActorsInterface.OuterSingleton, Z_Construct_UClass_UInteractiveActorsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveActorsInterface.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UInteractiveActorsInterface>()
{
	return UInteractiveActorsInterface::StaticClass();
}
UInteractiveActorsInterface::UInteractiveActorsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveActorsInterface);
UInteractiveActorsInterface::~UInteractiveActorsInterface() {}
// End Interface UInteractiveActorsInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveActorsInterface, UInteractiveActorsInterface::StaticClass, TEXT("UInteractiveActorsInterface"), &Z_Registration_Info_UClass_UInteractiveActorsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveActorsInterface), 2055839955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_1661732231(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActorsInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
