// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandleForItemCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAKUBCABLECOMPONENT_HandleForItemCpp_generated_h
#error "HandleForItemCpp.generated.h already included, missing '#pragma once' in HandleForItemCpp.h"
#endif
#define JAKUBCABLECOMPONENT_HandleForItemCpp_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandleForItemCpp(); \
	friend struct Z_Construct_UClass_UHandleForItemCpp_Statics; \
public: \
	DECLARE_CLASS(UHandleForItemCpp, UJakubSimpleParticleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), NO_API) \
	DECLARE_SERIALIZER(UHandleForItemCpp)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandleForItemCpp(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandleForItemCpp(UHandleForItemCpp&&); \
	UHandleForItemCpp(const UHandleForItemCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandleForItemCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandleForItemCpp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHandleForItemCpp) \
	NO_API virtual ~UHandleForItemCpp();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_30_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_33_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<class UHandleForItemCpp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_HandleForItemCpp_h


#define FOREACH_ENUM_EIWALS_HANDLEITEMTYPE(op) \
	op(EIWALS_HandleItemType::None) \
	op(EIWALS_HandleItemType::Binoculars) \
	op(EIWALS_HandleItemType::Bow) \
	op(EIWALS_HandleItemType::Axe) \
	op(EIWALS_HandleItemType::Knife) \
	op(EIWALS_HandleItemType::Sword) \
	op(EIWALS_HandleItemType::Food) \
	op(EIWALS_HandleItemType::FirstAidKit) \
	op(EIWALS_HandleItemType::Grenade_1) \
	op(EIWALS_HandleItemType::Grenade_2) \
	op(EIWALS_HandleItemType::Prop_1) \
	op(EIWALS_HandleItemType::Prop_2) 

namespace EIWALS_HandleItemType { enum Type : int; }
template<> JAKUBCABLECOMPONENT_API UEnum* StaticEnum<EIWALS_HandleItemType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
