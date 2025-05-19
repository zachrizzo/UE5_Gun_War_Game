// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_ZombieCharacterCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class USkeletalMeshComponent;
enum class AGLS_LOD_State : uint8;
enum class CALS_Gait : uint8;
enum class ECALS_WeaponType : uint8;
struct FHitResult;
#ifdef HELPFULFUNCTIONS_AGLS_ZombieCharacterCore_generated_h
#error "AGLS_ZombieCharacterCore.generated.h already included, missing '#pragma once' in AGLS_ZombieCharacterCore.h"
#endif
#define HELPFULFUNCTIONS_AGLS_ZombieCharacterCore_generated_h

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FRuntimePhysicAnimConfig>();

#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttackElapsedTime); \
	DECLARE_FUNCTION(execGetIsStartedAttack); \
	DECLARE_FUNCTION(execGetRefBoneTransformInLocalSpace); \
	DECLARE_FUNCTION(execGetChildBoneNames); \
	DECLARE_FUNCTION(execGetGetUpAnimation); \
	DECLARE_FUNCTION(execRagdollUpdate); \
	DECLARE_FUNCTION(execRagdollEnd); \
	DECLARE_FUNCTION(execRagdollStart); \
	DECLARE_FUNCTION(execCalculateHitDirection); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execApplyDamageValue); \
	DECLARE_FUNCTION(execDeathByFallDamage); \
	DECLARE_FUNCTION(execCheckFallDamage); \
	DECLARE_FUNCTION(execStartDeathSequence); \
	DECLARE_FUNCTION(execHitReactionAndDamage); \
	DECLARE_FUNCTION(execUpdateCrawlingRotation); \
	DECLARE_FUNCTION(execUpdateFallingRotation); \
	DECLARE_FUNCTION(execUpdateGroundedRotation); \
	DECLARE_FUNCTION(execSmoothCharacterRotation); \
	DECLARE_FUNCTION(execDisableEnableRequiredBodies); \
	DECLARE_FUNCTION(execUpdateCurrentBodiesPhysicStats); \
	DECLARE_FUNCTION(execUpdateCurrentLOD_State); \
	DECLARE_FUNCTION(execGetCurrentRequiredLOD); \
	DECLARE_FUNCTION(execOnStartedCrawling); \
	DECLARE_FUNCTION(execUpdateGroundedMovement); \
	DECLARE_FUNCTION(execGetActualGait); \
	DECLARE_FUNCTION(execGetAllowedGait); \
	DECLARE_FUNCTION(execGetMappedSpeedC); \
	DECLARE_FUNCTION(execUpdateCharacterMovementPerFrame); \
	DECLARE_FUNCTION(execGetDeformerActivationLOD); \
	DECLARE_FUNCTION(execGetAnimCurveValue);


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_CALLBACK_WRAPPERS
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGLS_ZombieCharacterCore(); \
	friend struct Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics; \
public: \
	DECLARE_CLASS(AAGLS_ZombieCharacterCore, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AAGLS_ZombieCharacterCore) \
	virtual UObject* _getUObject() const override { return const_cast<AAGLS_ZombieCharacterCore*>(this); }


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAGLS_ZombieCharacterCore(AAGLS_ZombieCharacterCore&&); \
	AAGLS_ZombieCharacterCore(const AAGLS_ZombieCharacterCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGLS_ZombieCharacterCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGLS_ZombieCharacterCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAGLS_ZombieCharacterCore) \
	NO_API virtual ~AAGLS_ZombieCharacterCore();


#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_97_PROLOG
#define FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_CALLBACK_WRAPPERS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_INCLASS_NO_PURE_DECLS \
	FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AAGLS_ZombieCharacterCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h


#define FOREACH_ENUM_ECHARACTERDETAILMODEFLAGS(op) \
	op(ECharacterDetailModeFlags::LOD0) \
	op(ECharacterDetailModeFlags::LOD1) \
	op(ECharacterDetailModeFlags::LOD2) \
	op(ECharacterDetailModeFlags::LOD3) 

enum class ECharacterDetailModeFlags : uint8;
template<> struct TIsUEnumClass<ECharacterDetailModeFlags> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<ECharacterDetailModeFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
