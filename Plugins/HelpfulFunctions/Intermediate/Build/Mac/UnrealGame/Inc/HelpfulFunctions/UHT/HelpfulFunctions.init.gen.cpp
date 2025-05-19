// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpfulFunctions_init() {}
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnTraversalActionChanged__DelegateSignature();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HelpfulFunctions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HelpfulFunctions()
	{
		if (!Z_Registration_Info_UPackage__Script_HelpfulFunctions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_OnAssetsLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_OnTraversalActionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetCreatedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HelpfulFunctions_WidgetDestroyedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HelpfulFunctions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBF5414F7,
				0xBA26E498,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HelpfulFunctions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HelpfulFunctions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HelpfulFunctions(Z_Construct_UPackage__Script_HelpfulFunctions, TEXT("/Script/HelpfulFunctions"), Z_Registration_Info_UPackage__Script_HelpfulFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBF5414F7, 0xBA26E498));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
