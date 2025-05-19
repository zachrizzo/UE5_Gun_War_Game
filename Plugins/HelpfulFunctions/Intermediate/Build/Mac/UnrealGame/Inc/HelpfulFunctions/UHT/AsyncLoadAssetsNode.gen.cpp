// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AsyncLoadAssetsNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncLoadAssetsNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncLoadAssetsNode();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncLoadAssetsNode_NoRegister();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Delegate FOnAssetsLoaded
struct Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics
{
	struct _Script_HelpfulFunctions_eventOnAssetsLoaded_Parms
	{
		TArray<UObject*> LoadedAssets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadAssetsNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::NewProp_LoadedAssets_Inner = { "LoadedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HelpfulFunctions_eventOnAssetsLoaded_Parms, LoadedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAssets_MetaData), NewProp_LoadedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::NewProp_LoadedAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::NewProp_LoadedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "OnAssetsLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAssetsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAssetsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssetsLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAssetsLoaded, TArray<UObject*> const& LoadedAssets)
{
	struct _Script_HelpfulFunctions_eventOnAssetsLoaded_Parms
	{
		TArray<UObject*> LoadedAssets;
	};
	_Script_HelpfulFunctions_eventOnAssetsLoaded_Parms Parms;
	Parms.LoadedAssets=LoadedAssets;
	OnAssetsLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAssetsLoaded

// Begin Class UAsyncLoadAssetsNode Function AsyncLoadAssetArray
struct Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics
{
	struct AsyncLoadAssetsNode_eventAsyncLoadAssetArray_Parms
	{
		TArray<TSoftObjectPtr<UObject> > AssetsToLoad;
		UAsyncLoadAssetsNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Asset Loading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Function that allows for asynchronous loading of many assets. At the input we provide an array in which we define which assets, for example: \ntextures, animations, sounds should be loaded into memory. After completing this process, the 'OnAssetsLoaded' delegate is called together \nwith a reference in the form of a HardReferences array to the indicated resources.*/" },
#endif
		{ "DisplayName", "Async Load Assets" },
		{ "ModuleRelativePath", "Public/AsyncLoadAssetsNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that allows for asynchronous loading of many assets. At the input we provide an array in which we define which assets, for example:\ntextures, animations, sounds should be loaded into memory. After completing this process, the 'OnAssetsLoaded' delegate is called together\nwith a reference in the form of a HardReferences array to the indicated resources." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetsToLoad_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::NewProp_AssetsToLoad_Inner = { "AssetsToLoad", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::NewProp_AssetsToLoad = { "AssetsToLoad", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadAssetsNode_eventAsyncLoadAssetArray_Parms, AssetsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsToLoad_MetaData), NewProp_AssetsToLoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadAssetsNode_eventAsyncLoadAssetArray_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadAssetsNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::NewProp_AssetsToLoad_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::NewProp_AssetsToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadAssetsNode, nullptr, "AsyncLoadAssetArray", nullptr, nullptr, Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::AsyncLoadAssetsNode_eventAsyncLoadAssetArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::AsyncLoadAssetsNode_eventAsyncLoadAssetArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadAssetsNode::execAsyncLoadAssetArray)
{
	P_GET_TARRAY_REF(TSoftObjectPtr<UObject>,Z_Param_Out_AssetsToLoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoadAssetsNode**)Z_Param__Result=UAsyncLoadAssetsNode::AsyncLoadAssetArray(Z_Param_Out_AssetsToLoad);
	P_NATIVE_END;
}
// End Class UAsyncLoadAssetsNode Function AsyncLoadAssetArray

// Begin Class UAsyncLoadAssetsNode
void UAsyncLoadAssetsNode::StaticRegisterNativesUAsyncLoadAssetsNode()
{
	UClass* Class = UAsyncLoadAssetsNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadAssetArray", &UAsyncLoadAssetsNode::execAsyncLoadAssetArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncLoadAssetsNode);
UClass* Z_Construct_UClass_UAsyncLoadAssetsNode_NoRegister()
{
	return UAsyncLoadAssetsNode::StaticClass();
}
struct Z_Construct_UClass_UAsyncLoadAssetsNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Definition offFunction that allows for asynchronous loading of many assets. At the input we provide an array in which we define which assets, \nfor example: textures, animations, sounds should be loaded into memory. After completing this process, the 'OnAssetsLoaded' delegate is called \ntogether with a reference in the form of a HardReferences array to the indicated resources.*/" },
#endif
		{ "IncludePath", "AsyncLoadAssetsNode.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadAssetsNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definition offFunction that allows for asynchronous loading of many assets. At the input we provide an array in which we define which assets,\nfor example: textures, animations, sounds should be loaded into memory. After completing this process, the 'OnAssetsLoaded' delegate is called\ntogether with a reference in the form of a HardReferences array to the indicated resources." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event wywo\xef\xbf\xbdywany po zako\xef\xbf\xbd""czeniu \xef\xbf\xbd""adowania wszystkich zasob\xef\xbf\xbdw */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadAssetsNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event wywo\xef\xbf\xbdywany po zako\xef\xbf\xbd""czeniu \xef\xbf\xbd""adowania wszystkich zasob\xef\xbf\xbdw" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadAssetsNode_AsyncLoadAssetArray, "AsyncLoadAssetArray" }, // 3498950001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadAssetsNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadAssetsNode, OnCompleted), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 4111967159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::NewProp_OnCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::ClassParams = {
	&UAsyncLoadAssetsNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadAssetsNode()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadAssetsNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadAssetsNode.OuterSingleton, Z_Construct_UClass_UAsyncLoadAssetsNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadAssetsNode.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAsyncLoadAssetsNode>()
{
	return UAsyncLoadAssetsNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadAssetsNode);
UAsyncLoadAssetsNode::~UAsyncLoadAssetsNode() {}
// End Class UAsyncLoadAssetsNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLoadAssetsNode, UAsyncLoadAssetsNode::StaticClass, TEXT("UAsyncLoadAssetsNode"), &Z_Registration_Info_UClass_UAsyncLoadAssetsNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadAssetsNode), 1965448627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_3086191850(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
