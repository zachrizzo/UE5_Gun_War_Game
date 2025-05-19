// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvQueryTest_Composite.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIMBINGNAVIGATION_EnvQueryTest_Composite_generated_h
#error "EnvQueryTest_Composite.generated.h already included, missing '#pragma once' in EnvQueryTest_Composite.h"
#endif
#define CLIMBINGNAVIGATION_EnvQueryTest_Composite_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Composite(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Composite_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Composite, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Composite)


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryTest_Composite(UEnvQueryTest_Composite&&); \
	UEnvQueryTest_Composite(const UEnvQueryTest_Composite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Composite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Composite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Composite) \
	NO_API virtual ~UEnvQueryTest_Composite();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_22_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGNAVIGATION_API UClass* StaticClass<class UEnvQueryTest_Composite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h


#define FOREACH_ENUM_ESCOREFOLDINGMETHOD(op) \
	op(EScoreFoldingMethod::Sum) \
	op(EScoreFoldingMethod::Multiply) 

enum class EScoreFoldingMethod : uint8;
template<> struct TIsUEnumClass<EScoreFoldingMethod> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EScoreFoldingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
