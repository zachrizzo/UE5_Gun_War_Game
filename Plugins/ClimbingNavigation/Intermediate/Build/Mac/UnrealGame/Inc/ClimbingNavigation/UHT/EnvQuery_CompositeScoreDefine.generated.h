// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvQuery_CompositeScoreDefine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIMBINGNAVIGATION_EnvQuery_CompositeScoreDefine_generated_h
#error "EnvQuery_CompositeScoreDefine.generated.h already included, missing '#pragma once' in EnvQuery_CompositeScoreDefine.h"
#endif
#define CLIMBINGNAVIGATION_EnvQuery_CompositeScoreDefine_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQuery_CompositeScoreDefine(); \
	friend struct Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics; \
public: \
	DECLARE_CLASS(UEnvQuery_CompositeScoreDefine, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UEnvQuery_CompositeScoreDefine)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQuery_CompositeScoreDefine(UEnvQuery_CompositeScoreDefine&&); \
	UEnvQuery_CompositeScoreDefine(const UEnvQuery_CompositeScoreDefine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQuery_CompositeScoreDefine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQuery_CompositeScoreDefine); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQuery_CompositeScoreDefine) \
	NO_API virtual ~UEnvQuery_CompositeScoreDefine();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_29_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UEnvQuery_CompositeScoreDefine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h


#define FOREACH_ENUM_ECOMPOSITESCOREDISTRIBUTION(op) \
	op(ECompositeScoreDistribution::Linear) \
	op(ECompositeScoreDistribution::inverseLinear) \
	op(ECompositeScoreDistribution::Squared) \
	op(ECompositeScoreDistribution::Custom) 

enum class ECompositeScoreDistribution : uint8;
template<> struct TIsUEnumClass<ECompositeScoreDistribution> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<ECompositeScoreDistribution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
