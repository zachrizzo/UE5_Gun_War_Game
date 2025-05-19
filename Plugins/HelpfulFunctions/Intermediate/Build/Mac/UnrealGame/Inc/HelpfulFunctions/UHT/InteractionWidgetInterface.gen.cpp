// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/InteractionWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UInteractionWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Interface UInteractionWidgetInterface Function BPI_UI_PlayInitAnimation
void IInteractionWidgetInterface::BPI_UI_PlayInitAnimation()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_UI_PlayInitAnimation instead.");
}
static FName NAME_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation = FName(TEXT("BPI_UI_PlayInitAnimation"));
void IInteractionWidgetInterface::Execute_BPI_UI_PlayInitAnimation(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionWidgetInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractionWidgetInterface::StaticClass())))
	{
		I->BPI_UI_PlayInitAnimation_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Widget Interface" },
		{ "ModuleRelativePath", "Public/InteractionWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetInterface, nullptr, "BPI_UI_PlayInitAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionWidgetInterface::execBPI_UI_PlayInitAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_UI_PlayInitAnimation_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionWidgetInterface Function BPI_UI_PlayInitAnimation

// Begin Interface UInteractionWidgetInterface Function BPI_UI_Set_WidgetTextsValues
struct InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms
{
	FName Text01;
	FName Text02;
	float Float01;
	FLinearColor Color01;
	FLinearColor Color02;
	UObject* Object01;
	UObject* Object02;
};
void IInteractionWidgetInterface::BPI_UI_Set_WidgetTextsValues(FName Text01, FName Text02, float Float01, FLinearColor Color01, FLinearColor Color02, UObject* Object01, UObject* Object02)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_UI_Set_WidgetTextsValues instead.");
}
static FName NAME_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues = FName(TEXT("BPI_UI_Set_WidgetTextsValues"));
void IInteractionWidgetInterface::Execute_BPI_UI_Set_WidgetTextsValues(UObject* O, FName Text01, FName Text02, float Float01, FLinearColor Color01, FLinearColor Color02, UObject* Object01, UObject* Object02)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionWidgetInterface::StaticClass()));
	InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues);
	if (Func)
	{
		Parms.Text01=Text01;
		Parms.Text02=Text02;
		Parms.Float01=Float01;
		Parms.Color01=Color01;
		Parms.Color02=Color02;
		Parms.Object01=Object01;
		Parms.Object02=Object02;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractionWidgetInterface::StaticClass())))
	{
		I->BPI_UI_Set_WidgetTextsValues_Implementation(Text01,Text02,Float01,Color01,Color02,Object01,Object02);
	}
}
struct Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Widget Interface" },
		{ "ModuleRelativePath", "Public/InteractionWidgetInterface.h" },
	};
#endif // WITH_METADATA
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Text01 = { "Text01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Text01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Text02 = { "Text02", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Text02), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Float01 = { "Float01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Float01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Color01 = { "Color01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Color01), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Color02 = { "Color02", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Color02), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Object01 = { "Object01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Object01), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Object02 = { "Object02", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms, Object02), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Text01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Text02,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Float01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Color01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Color02,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Object01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::NewProp_Object02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetInterface, nullptr, "BPI_UI_Set_WidgetTextsValues", nullptr, nullptr, Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::PropPointers), sizeof(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionWidgetInterface_eventBPI_UI_Set_WidgetTextsValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionWidgetInterface::execBPI_UI_Set_WidgetTextsValues)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Text01);
	P_GET_PROPERTY(FNameProperty,Z_Param_Text02);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Float01);
	P_GET_STRUCT(FLinearColor,Z_Param_Color01);
	P_GET_STRUCT(FLinearColor,Z_Param_Color02);
	P_GET_OBJECT(UObject,Z_Param_Object01);
	P_GET_OBJECT(UObject,Z_Param_Object02);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_UI_Set_WidgetTextsValues_Implementation(Z_Param_Text01,Z_Param_Text02,Z_Param_Float01,Z_Param_Color01,Z_Param_Color02,Z_Param_Object01,Z_Param_Object02);
	P_NATIVE_END;
}
// End Interface UInteractionWidgetInterface Function BPI_UI_Set_WidgetTextsValues

// Begin Interface UInteractionWidgetInterface Function BPI_UI_Set_WidgetWorldLocation
struct InteractionWidgetInterface_eventBPI_UI_Set_WidgetWorldLocation_Parms
{
	FVector InWorldLocation;
};
void IInteractionWidgetInterface::BPI_UI_Set_WidgetWorldLocation(FVector InWorldLocation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_UI_Set_WidgetWorldLocation instead.");
}
static FName NAME_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation = FName(TEXT("BPI_UI_Set_WidgetWorldLocation"));
void IInteractionWidgetInterface::Execute_BPI_UI_Set_WidgetWorldLocation(UObject* O, FVector InWorldLocation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionWidgetInterface::StaticClass()));
	InteractionWidgetInterface_eventBPI_UI_Set_WidgetWorldLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation);
	if (Func)
	{
		Parms.InWorldLocation=InWorldLocation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractionWidgetInterface::StaticClass())))
	{
		I->BPI_UI_Set_WidgetWorldLocation_Implementation(InWorldLocation);
	}
}
struct Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Widget Interface" },
		{ "ModuleRelativePath", "Public/InteractionWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::NewProp_InWorldLocation = { "InWorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionWidgetInterface_eventBPI_UI_Set_WidgetWorldLocation_Parms, InWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::NewProp_InWorldLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidgetInterface, nullptr, "BPI_UI_Set_WidgetWorldLocation", nullptr, nullptr, Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::PropPointers), sizeof(InteractionWidgetInterface_eventBPI_UI_Set_WidgetWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionWidgetInterface_eventBPI_UI_Set_WidgetWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionWidgetInterface::execBPI_UI_Set_WidgetWorldLocation)
{
	P_GET_STRUCT(FVector,Z_Param_InWorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_UI_Set_WidgetWorldLocation_Implementation(Z_Param_InWorldLocation);
	P_NATIVE_END;
}
// End Interface UInteractionWidgetInterface Function BPI_UI_Set_WidgetWorldLocation

// Begin Interface UInteractionWidgetInterface
void UInteractionWidgetInterface::StaticRegisterNativesUInteractionWidgetInterface()
{
	UClass* Class = UInteractionWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_UI_PlayInitAnimation", &IInteractionWidgetInterface::execBPI_UI_PlayInitAnimation },
		{ "BPI_UI_Set_WidgetTextsValues", &IInteractionWidgetInterface::execBPI_UI_Set_WidgetTextsValues },
		{ "BPI_UI_Set_WidgetWorldLocation", &IInteractionWidgetInterface::execBPI_UI_Set_WidgetWorldLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionWidgetInterface);
UClass* Z_Construct_UClass_UInteractionWidgetInterface_NoRegister()
{
	return UInteractionWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractionWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_PlayInitAnimation, "BPI_UI_PlayInitAnimation" }, // 3921677339
		{ &Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetTextsValues, "BPI_UI_Set_WidgetTextsValues" }, // 4162113417
		{ &Z_Construct_UFunction_UInteractionWidgetInterface_BPI_UI_Set_WidgetWorldLocation, "BPI_UI_Set_WidgetWorldLocation" }, // 1638834790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionWidgetInterface_Statics::ClassParams = {
	&UInteractionWidgetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UInteractionWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionWidgetInterface.OuterSingleton, Z_Construct_UClass_UInteractionWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionWidgetInterface.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UInteractionWidgetInterface>()
{
	return UInteractionWidgetInterface::StaticClass();
}
UInteractionWidgetInterface::UInteractionWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionWidgetInterface);
UInteractionWidgetInterface::~UInteractionWidgetInterface() {}
// End Interface UInteractionWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionWidgetInterface, UInteractionWidgetInterface::StaticClass, TEXT("UInteractionWidgetInterface"), &Z_Registration_Info_UClass_UInteractionWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionWidgetInterface), 1737357688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_3477957623(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractionWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
