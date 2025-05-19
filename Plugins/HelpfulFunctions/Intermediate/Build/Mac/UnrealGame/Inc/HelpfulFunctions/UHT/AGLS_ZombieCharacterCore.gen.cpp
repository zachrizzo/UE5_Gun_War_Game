// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_ZombieCharacterCore.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_ZombieCharacterCore() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_ZombieCharacterCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_ZombieCharacterCore_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncFunctionsPlayer_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USimpleMovementParamsData_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin ScriptStruct FRuntimePhysicAnimConfig
static_assert(std::is_polymorphic<FRuntimePhysicAnimConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRuntimePhysicAnimConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig;
class UScriptStruct* FRuntimePhysicAnimConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("RuntimePhysicAnimConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FRuntimePhysicAnimConfig>()
{
	return FRuntimePhysicAnimConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Structure mainly intended for advanced Physic Animation setup*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure mainly intended for advanced Physic Animation setup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationInitBodyName_MetaData[] = {
		{ "Category", "Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG: This variable defines from which bone changes will be made in the physics simulation via Physic Asset. This name will usually be passed \nto the SetAllBodiesBelowSimulatePhysic() function\n\nPL: Zmienna ta okre\xc5\x9bla od jakiej ko\xc5\x9b""ci b\xc4\x99""d\xc4\x85 wprowadzane zmiany w symulacji fizyki za po\xc5\x9brednictwem Physic Asset. Nazwa ta zazwyczaj b\xc4\x99""dzie \nprzekazywana do funkcji SetAllBodiesBelowSimulatePhysic()*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG: This variable defines from which bone changes will be made in the physics simulation via Physic Asset. This name will usually be passed\nto the SetAllBodiesBelowSimulatePhysic() function\n\nPL: Zmienna ta okre\xc5\x9bla od jakiej ko\xc5\x9b""ci b\xc4\x99""d\xc4\x85 wprowadzane zmiany w symulacji fizyki za po\xc5\x9brednictwem Physic Asset. Nazwa ta zazwyczaj b\xc4\x99""dzie\nprzekazywana do funkcji SetAllBodiesBelowSimulatePhysic()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSelf_MetaData[] = {
		{ "Category", "Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG: Influences whether when calling a function changing the physics simulation state for individual bodies, the name defined in \nSimulationInitBodyName should also be included in the change. For example, if SimulationInitBodyName = \"Spine_01\" then should we \ninclude the Bodies associated with this bone or not\n\nPL: Wp\xc5\x82ywa na to czy podczas wywo\xc5\x82ywania funkcji zmieniaj\xc4\x85""cej stan symululowania fizyki dla poszczeg\xc3\xb3lnych bodies, do zmiany powinno \nsi\xc4\x99 uwzgl\xc4\x99""dni\xc4\x87 te\xc5\xbc nazw\xc4\x99 zdefiniowan\xc4\x85 w SimulationInitBodyName. Przyk\xc5\x82""adowo je\xc5\xbc""eli SimulationInitBodyName = \"Spine_01\" to czy powinni\xc5\x9bmy \nuwzgl\xc4\x99""dni\xc4\x87 Bodies powi\xc4\x85zane z t\xc4\x85 ko\xc5\x9b""ci\xc4\x85, cz te\xc5\xbc nie*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG: Influences whether when calling a function changing the physics simulation state for individual bodies, the name defined in\nSimulationInitBodyName should also be included in the change. For example, if SimulationInitBodyName = \"Spine_01\" then should we\ninclude the Bodies associated with this bone or not\n\nPL: Wp\xc5\x82ywa na to czy podczas wywo\xc5\x82ywania funkcji zmieniaj\xc4\x85""cej stan symululowania fizyki dla poszczeg\xc3\xb3lnych bodies, do zmiany powinno\nsi\xc4\x99 uwzgl\xc4\x99""dni\xc4\x87 te\xc5\xbc nazw\xc4\x99 zdefiniowan\xc4\x85 w SimulationInitBodyName. Przyk\xc5\x82""adowo je\xc5\xbc""eli SimulationInitBodyName = \"Spine_01\" to czy powinni\xc5\x9bmy\nuwzgl\xc4\x99""dni\xc4\x87 Bodies powi\xc4\x85zane z t\xc4\x85 ko\xc5\x9b""ci\xc4\x85, cz te\xc5\xbc nie" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWhenRagdoll_MetaData[] = {
		{ "Category", "Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG: Additional PhysicAsset, which is set when, for example, the Ragdoll() function is called in the character. If this variable != null, \nthen the basic Physic Asset contained in the Mesh will be overwritten. After disabling Ragdoll mode, the asset will be released. It can be \nleft empty (in fact, it is NOT recommended)\n\nPL: Dodatkowy PhysicAsset, kt\xc3\xb3ry jest ustawiany w momencie kiedy w charakterze dojdzie do wywo\xc5\x82""ania np. funkcji Ragdoll(). Je\xc5\xbc""eli zmienna \nta != null to wtedy dojdzie do nadpisania podstawowego Physic Asset zawartego w Mesh. Po wy\xc5\x82\xc4\x85""czeniu trybu Ragdoll zas\xc3\xb3""b zostanie zwolniony. \nMo\xc5\xbcna pozostawi\xc4\x87 puste (wr\xc4\x99""cz jest to zalecane)*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG: Additional PhysicAsset, which is set when, for example, the Ragdoll() function is called in the character. If this variable != null,\nthen the basic Physic Asset contained in the Mesh will be overwritten. After disabling Ragdoll mode, the asset will be released. It can be\nleft empty (in fact, it is NOT recommended)\n\nPL: Dodatkowy PhysicAsset, kt\xc3\xb3ry jest ustawiany w momencie kiedy w charakterze dojdzie do wywo\xc5\x82""ania np. funkcji Ragdoll(). Je\xc5\xbc""eli zmienna\nta != null to wtedy dojdzie do nadpisania podstawowego Physic Asset zawartego w Mesh. Po wy\xc5\x82\xc4\x85""czeniu trybu Ragdoll zas\xc3\xb3""b zostanie zwolniony.\nMo\xc5\xbcna pozostawi\xc4\x87 puste (wr\xc4\x99""cz jest to zalecane)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodiesNameToOverride_MetaData[] = {
		{ "Category", "Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG: An additional variable that allows you to 'skip' the enabling of physics simulation for bodies associated with declared bone names. \nFor example, if we call SetAllBodiesBelowSimulatePhysic() for the Spine_01 bone, then all bones that are higher in the hierarchy will \nstart to simulate physics. By entering e.g. 'hand_l' and 'hand_r' into the BodiesNameToOverride variable, we will make these bones excluded \nfrom the simulation. Useful when configuring Physic Animation\n\nPL: Dodatkowa zmienna pozwalaj\xc4\x85""ca na 'omini\xc4\x99""cie' w\xc5\x82\xc4\x85""czenia symulacji fizyki dla bodies powi\xc4\x85zanych z zadeklorowanymi nazwami ko\xc5\x9b""ci. \nPrzyk\xc5\x82\xc4\x85""dowo je\xc5\xbc""eli wywo\xc5\x82""amy SetAllBodiesBelowSimulatePhysic() dla ko\xc5\x9b""ci Spine_01 to w takim przypadku wszystkie ko\xc5\x9b""ci, kt\xc3\xb3re sa wy\xc5\xbc""ej w \nhierarchii zaczn\xc4\x85 symulowa\xc4\x87 fizyk\xc4\x99. Wprowadzaj\xc4\x85""c do zmiennej BodiesNameToOverride np. 'hand_l' oraz 'hand_r' sprawimy \xc5\xbc""e te ko\xc5\x9b""ci zostan\xc4\x85 \nwy\xc5\x82\xc4\x85""czone z symulacji. Pomocne przy konfiguracji Physic Aniamtion*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG: An additional variable that allows you to 'skip' the enabling of physics simulation for bodies associated with declared bone names.\nFor example, if we call SetAllBodiesBelowSimulatePhysic() for the Spine_01 bone, then all bones that are higher in the hierarchy will\nstart to simulate physics. By entering e.g. 'hand_l' and 'hand_r' into the BodiesNameToOverride variable, we will make these bones excluded\nfrom the simulation. Useful when configuring Physic Animation\n\nPL: Dodatkowa zmienna pozwalaj\xc4\x85""ca na 'omini\xc4\x99""cie' w\xc5\x82\xc4\x85""czenia symulacji fizyki dla bodies powi\xc4\x85zanych z zadeklorowanymi nazwami ko\xc5\x9b""ci.\nPrzyk\xc5\x82\xc4\x85""dowo je\xc5\xbc""eli wywo\xc5\x82""amy SetAllBodiesBelowSimulatePhysic() dla ko\xc5\x9b""ci Spine_01 to w takim przypadku wszystkie ko\xc5\x9b""ci, kt\xc3\xb3re sa wy\xc5\xbc""ej w\nhierarchii zaczn\xc4\x85 symulowa\xc4\x87 fizyk\xc4\x99. Wprowadzaj\xc4\x85""c do zmiennej BodiesNameToOverride np. 'hand_l' oraz 'hand_r' sprawimy \xc5\xbc""e te ko\xc5\x9b""ci zostan\xc4\x85\nwy\xc5\x82\xc4\x85""czone z symulacji. Pomocne przy konfiguracji Physic Aniamtion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCollisionBodiesInPS_MetaData[] = {
		{ "Category", "Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG: Important array containing names of all bones from SkeletalMesh that have assigned PhysicBodies. This is important when Character \ngoes to low level of detail e.g. LOD_02 or LOD_03. For these states physics simulation should be disabled, however in this case information \nabout currently simulating Bodies would be lost. Therefore it is required to manually enter all bone names. Without such solution it would \nbe required to iterate through all bones in SkeletalMesh which is not very efficient approach.\n\nPL: Wa\xc5\xbcna tabilca zawieraj\xc4\x85""ca nazwy wszystkich ko\xc5\x9b""ci ze SkeletalMesh, kt\xc3\xb3re maj\xc4\x85 przypisane PhysicBodies. Jest to istotne w momencie kiedy \nCharacter przechodzi w niski poziom detail np. LOD_02  lub LOD_03. Dla tych stan\xc3\xb3w symulacja fizyki powinna zosta\xc4\x87 wy\xc5\x82\xc4\x85""czona, jednak w takim \nprzypadku informacja o aktualnie symuluj\xc4\x85""cych Bodies zosta\xc5\x82""a by utracona. Dlatego wymagane jest aby  wprowadzi\xc4\x87 r\xc4\x99""cznie wszystkie nazwy ko\xc5\x9b""ci. \nBez takiego rozwi\xc4\x85zania wymagane by\xc5\x82o by iterowanie przez wszystkie ko\xc5\x9b""ci w SkeletalMesh co nie jest do\xc5\x9b\xc4\x87 wydajnym podej\xc5\x9b""ciem.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG: Important array containing names of all bones from SkeletalMesh that have assigned PhysicBodies. This is important when Character\ngoes to low level of detail e.g. LOD_02 or LOD_03. For these states physics simulation should be disabled, however in this case information\nabout currently simulating Bodies would be lost. Therefore it is required to manually enter all bone names. Without such solution it would\nbe required to iterate through all bones in SkeletalMesh which is not very efficient approach.\n\nPL: Wa\xc5\xbcna tabilca zawieraj\xc4\x85""ca nazwy wszystkich ko\xc5\x9b""ci ze SkeletalMesh, kt\xc3\xb3re maj\xc4\x85 przypisane PhysicBodies. Jest to istotne w momencie kiedy\nCharacter przechodzi w niski poziom detail np. LOD_02  lub LOD_03. Dla tych stan\xc3\xb3w symulacja fizyki powinna zosta\xc4\x87 wy\xc5\x82\xc4\x85""czona, jednak w takim\nprzypadku informacja o aktualnie symuluj\xc4\x85""cych Bodies zosta\xc5\x82""a by utracona. Dlatego wymagane jest aby  wprowadzi\xc4\x87 r\xc4\x99""cznie wszystkie nazwy ko\xc5\x9b""ci.\nBez takiego rozwi\xc4\x85zania wymagane by\xc5\x82o by iterowanie przez wszystkie ko\xc5\x9b""ci w SkeletalMesh co nie jest do\xc5\x9b\xc4\x87 wydajnym podej\xc5\x9b""ciem." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SimulationInitBodyName;
	static void NewProp_bIncludeSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideWhenRagdoll;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BodiesNameToOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BodiesNameToOverride;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllCollisionBodiesInPS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCollisionBodiesInPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimePhysicAnimConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_SimulationInitBodyName = { "SimulationInitBodyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePhysicAnimConfig, SimulationInitBodyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationInitBodyName_MetaData), NewProp_SimulationInitBodyName_MetaData) };
void Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
{
	((FRuntimePhysicAnimConfig*)Obj)->bIncludeSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRuntimePhysicAnimConfig), &Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSelf_MetaData), NewProp_bIncludeSelf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_OverrideWhenRagdoll = { "OverrideWhenRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePhysicAnimConfig, OverrideWhenRagdoll), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideWhenRagdoll_MetaData), NewProp_OverrideWhenRagdoll_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_BodiesNameToOverride_Inner = { "BodiesNameToOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_BodiesNameToOverride = { "BodiesNameToOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePhysicAnimConfig, BodiesNameToOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodiesNameToOverride_MetaData), NewProp_BodiesNameToOverride_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_AllCollisionBodiesInPS_Inner = { "AllCollisionBodiesInPS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_AllCollisionBodiesInPS = { "AllCollisionBodiesInPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePhysicAnimConfig, AllCollisionBodiesInPS), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCollisionBodiesInPS_MetaData), NewProp_AllCollisionBodiesInPS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_SimulationInitBodyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_bIncludeSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_OverrideWhenRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_BodiesNameToOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_BodiesNameToOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_AllCollisionBodiesInPS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewProp_AllCollisionBodiesInPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"RuntimePhysicAnimConfig",
	Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::PropPointers),
	sizeof(FRuntimePhysicAnimConfig),
	alignof(FRuntimePhysicAnimConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig.InnerSingleton, Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig.InnerSingleton;
}
// End ScriptStruct FRuntimePhysicAnimConfig

// Begin Enum ECharacterDetailModeFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterDetailModeFlags;
static UEnum* ECharacterDetailModeFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterDetailModeFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterDetailModeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("ECharacterDetailModeFlags"));
	}
	return Z_Registration_Info_UEnum_ECharacterDetailModeFlags.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<ECharacterDetailModeFlags>()
{
	return ECharacterDetailModeFlags_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "LOD0.Name", "ECharacterDetailModeFlags::LOD0" },
		{ "LOD1.Name", "ECharacterDetailModeFlags::LOD1" },
		{ "LOD2.Name", "ECharacterDetailModeFlags::LOD2" },
		{ "LOD3.Name", "ECharacterDetailModeFlags::LOD3" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterDetailModeFlags::LOD0", (int64)ECharacterDetailModeFlags::LOD0 },
		{ "ECharacterDetailModeFlags::LOD1", (int64)ECharacterDetailModeFlags::LOD1 },
		{ "ECharacterDetailModeFlags::LOD2", (int64)ECharacterDetailModeFlags::LOD2 },
		{ "ECharacterDetailModeFlags::LOD3", (int64)ECharacterDetailModeFlags::LOD3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"ECharacterDetailModeFlags",
	"ECharacterDetailModeFlags",
	Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags()
{
	if (!Z_Registration_Info_UEnum_ECharacterDetailModeFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterDetailModeFlags.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_ECharacterDetailModeFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterDetailModeFlags.InnerSingleton;
}
// End Enum ECharacterDetailModeFlags

// Begin Class AAGLS_ZombieCharacterCore Function ApplyDamageValue
struct AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms
{
	AActor* DamageCauser;
	FHitResult HitInfo;
	float DamageValue;
	int32 DamageTypeIndex;
	float UnRagdollTime;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_ZombieCharacterCore_ApplyDamageValue = FName(TEXT("ApplyDamageValue"));
bool AAGLS_ZombieCharacterCore::ApplyDamageValue(AActor* DamageCauser, FHitResult HitInfo, float DamageValue, int32 DamageTypeIndex, float UnRagdollTime)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_ApplyDamageValue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms Parms;
		Parms.DamageCauser=DamageCauser;
		Parms.HitInfo=HitInfo;
		Parms.DamageValue=DamageValue;
		Parms.DamageTypeIndex=DamageTypeIndex;
		Parms.UnRagdollTime=UnRagdollTime;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ApplyDamageValue_Implementation(DamageCauser, HitInfo, DamageValue, DamageTypeIndex, UnRagdollTime);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Damage" },
		{ "CPP_Default_DamageTypeIndex", "1" },
		{ "CPP_Default_DamageValue", "1.000000" },
		{ "CPP_Default_UnRagdollTime", "-1.000000" },
		{ "DisplayName", "Apply Damage Value" },
		{ "Keywords", "Zombie,Character,Damage" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DamageTypeIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnRagdollTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms, DamageValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_DamageTypeIndex = { "DamageTypeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms, DamageTypeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_UnRagdollTime = { "UnRagdollTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms, UnRagdollTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_DamageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_DamageTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_UnRagdollTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "ApplyDamageValue", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventApplyDamageValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execApplyDamageValue)
{
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_DamageTypeIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UnRagdollTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyDamageValue_Implementation(Z_Param_DamageCauser,Z_Param_HitInfo,Z_Param_DamageValue,Z_Param_DamageTypeIndex,Z_Param_UnRagdollTime);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function ApplyDamageValue

// Begin Class AAGLS_ZombieCharacterCore Function CalculateHitDirection
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics
{
	struct AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms
	{
		FHitResult InHitResult;
		FVector2D RangeX;
		FVector2D RangeZ;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "RangeX,RangeZ" },
		{ "Category", "Zombie|Damage" },
		{ "CPP_Default_RangeX", "(X=12.000,Y=28.000)" },
		{ "CPP_Default_RangeZ", "(X=120.000,Y=160.000)" },
		{ "Keywords", "Zombie,Character,Damage" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_InHitResult = { "InHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms, InHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_RangeX = { "RangeX", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms, RangeX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_RangeZ = { "RangeZ", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms, RangeZ), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_InHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_RangeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_RangeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "CalculateHitDirection", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::AGLS_ZombieCharacterCore_eventCalculateHitDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execCalculateHitDirection)
{
	P_GET_STRUCT(FHitResult,Z_Param_InHitResult);
	P_GET_STRUCT(FVector2D,Z_Param_RangeX);
	P_GET_STRUCT(FVector2D,Z_Param_RangeZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateHitDirection(Z_Param_InHitResult,Z_Param_RangeX,Z_Param_RangeZ);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function CalculateHitDirection

// Begin Class AAGLS_ZombieCharacterCore Function CheckFallDamage
struct AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms
{
	FHitResult LandHitResult;
	float VelocityMaxRange;
	FVector DamageTresholds;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AAGLS_ZombieCharacterCore_CheckFallDamage = FName(TEXT("CheckFallDamage"));
bool AAGLS_ZombieCharacterCore::CheckFallDamage(FHitResult LandHitResult, float VelocityMaxRange, FVector DamageTresholds)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_CheckFallDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms Parms;
		Parms.LandHitResult=LandHitResult;
		Parms.VelocityMaxRange=VelocityMaxRange;
		Parms.DamageTresholds=DamageTresholds;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckFallDamage_Implementation(LandHitResult, VelocityMaxRange, DamageTresholds);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "VelocityMaxRange,DamageTresholds" },
		{ "Category", "Zombie|Damage" },
		{ "CPP_Default_DamageTresholds", "0.700000,0.550000,0.420000" },
		{ "CPP_Default_VelocityMaxRange", "1500.000000" },
		{ "DisplayName", "Check Fall Damage" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Zombie,Character,Damage" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandHitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityMaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTresholds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_LandHitResult = { "LandHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms, LandHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_VelocityMaxRange = { "VelocityMaxRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms, VelocityMaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_DamageTresholds = { "DamageTresholds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms, DamageTresholds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_LandHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_VelocityMaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_DamageTresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "CheckFallDamage", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventCheckFallDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execCheckFallDamage)
{
	P_GET_STRUCT(FHitResult,Z_Param_LandHitResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMaxRange);
	P_GET_STRUCT(FVector,Z_Param_DamageTresholds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckFallDamage_Implementation(Z_Param_LandHitResult,Z_Param_VelocityMaxRange,Z_Param_DamageTresholds);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function CheckFallDamage

// Begin Class AAGLS_ZombieCharacterCore Function DeathByFallDamage
struct AGLS_ZombieCharacterCore_eventDeathByFallDamage_Parms
{
	FHitResult HitGroundResult;
};
static const FName NAME_AAGLS_ZombieCharacterCore_DeathByFallDamage = FName(TEXT("DeathByFallDamage"));
void AAGLS_ZombieCharacterCore::DeathByFallDamage(FHitResult HitGroundResult)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_DeathByFallDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventDeathByFallDamage_Parms Parms;
		Parms.HitGroundResult=HitGroundResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DeathByFallDamage_Implementation(HitGroundResult);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Damage" },
		{ "DisplayName", "Death By Fall Damage" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "Zombie,Character,Damage" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitGroundResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::NewProp_HitGroundResult = { "HitGroundResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventDeathByFallDamage_Parms, HitGroundResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::NewProp_HitGroundResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "DeathByFallDamage", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventDeathByFallDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventDeathByFallDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execDeathByFallDamage)
{
	P_GET_STRUCT(FHitResult,Z_Param_HitGroundResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeathByFallDamage_Implementation(Z_Param_HitGroundResult);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function DeathByFallDamage

// Begin Class AAGLS_ZombieCharacterCore Function DisableEnableRequiredBodies
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics
{
	struct AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms
	{
		bool bEnableSimulation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Core|Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prosta funkcja ktora aktywuje i wylacza posczagolne Bodies dla Physic Asset. Uwaga nie dziala to tak samo jak wywolanie np. EnableAllBodiesPhysic. Innformacja o tym ktore Bodies nalezy aktowowac\n//a ktore nie pobierana jest ze zmiennej TArray<FName>. Zmiany w jej wartosciach powoduje wywolanie funkcji UpdateCurrentBodiesPhysicStats()\n" },
#endif
		{ "Keywords", "Zombie,Physic" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prosta funkcja ktora aktywuje i wylacza posczagolne Bodies dla Physic Asset. Uwaga nie dziala to tak samo jak wywolanie np. EnableAllBodiesPhysic. Innformacja o tym ktore Bodies nalezy aktowowac\na ktore nie pobierana jest ze zmiennej TArray<FName>. Zmiany w jej wartosciach powoduje wywolanie funkcji UpdateCurrentBodiesPhysicStats()" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimulation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_bEnableSimulation_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms*)Obj)->bEnableSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_bEnableSimulation = { "bEnableSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_bEnableSimulation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_bEnableSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "DisableEnableRequiredBodies", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::AGLS_ZombieCharacterCore_eventDisableEnableRequiredBodies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execDisableEnableRequiredBodies)
{
	P_GET_UBOOL(Z_Param_bEnableSimulation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DisableEnableRequiredBodies(Z_Param_bEnableSimulation);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function DisableEnableRequiredBodies

// Begin Class AAGLS_ZombieCharacterCore Function GetActualGait
struct AGLS_ZombieCharacterCore_eventGetActualGait_Parms
{
	CALS_Gait AllowedGait;
	CALS_Gait ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_ZombieCharacterCore_eventGetActualGait_Parms()
		: ReturnValue((CALS_Gait)0)
	{
	}
};
static const FName NAME_AAGLS_ZombieCharacterCore_GetActualGait = FName(TEXT("GetActualGait"));
CALS_Gait AAGLS_ZombieCharacterCore::GetActualGait(CALS_Gait AllowedGait)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_GetActualGait);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventGetActualGait_Parms Parms;
		Parms.AllowedGait=AllowedGait;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetActualGait_Implementation(AllowedGait);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_AllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_AllowedGait = { "AllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetActualGait_Parms, AllowedGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetActualGait_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_AllowedGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_AllowedGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetActualGait", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventGetActualGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventGetActualGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetActualGait)
{
	P_GET_ENUM(CALS_Gait,Z_Param_AllowedGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(CALS_Gait*)Z_Param__Result=P_THIS->GetActualGait_Implementation(CALS_Gait(Z_Param_AllowedGait));
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetActualGait

// Begin Class AAGLS_ZombieCharacterCore Function GetAllowedGait
struct AGLS_ZombieCharacterCore_eventGetAllowedGait_Parms
{
	CALS_Gait ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_ZombieCharacterCore_eventGetAllowedGait_Parms()
		: ReturnValue((CALS_Gait)0)
	{
	}
};
static const FName NAME_AAGLS_ZombieCharacterCore_GetAllowedGait = FName(TEXT("GetAllowedGait"));
CALS_Gait AAGLS_ZombieCharacterCore::GetAllowedGait()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_GetAllowedGait);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventGetAllowedGait_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetAllowedGait_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetAllowedGait_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetAllowedGait", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventGetAllowedGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventGetAllowedGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetAllowedGait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(CALS_Gait*)Z_Param__Result=P_THIS->GetAllowedGait_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetAllowedGait

// Begin Class AAGLS_ZombieCharacterCore Function GetAnimCurveValue
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetAnimCurveValue_Parms
	{
		FName CurveName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Core|Utility" },
		{ "CPP_Default_CurveName", "BasePose_N" },
		{ "Keywords", "Zombie,Curve" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetAnimCurveValue_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetAnimCurveValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetAnimCurveValue", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::AGLS_ZombieCharacterCore_eventGetAnimCurveValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::AGLS_ZombieCharacterCore_eventGetAnimCurveValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetAnimCurveValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAnimCurveValue(Z_Param_CurveName);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetAnimCurveValue

// Begin Class AAGLS_ZombieCharacterCore Function GetAttackElapsedTime
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetAttackElapsedTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Utility" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetAttackElapsedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetAttackElapsedTime", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::AGLS_ZombieCharacterCore_eventGetAttackElapsedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::AGLS_ZombieCharacterCore_eventGetAttackElapsedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetAttackElapsedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackElapsedTime();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetAttackElapsedTime

// Begin Class AAGLS_ZombieCharacterCore Function GetChildBoneNames
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms
	{
		FName BoneName;
		bool bIncludeSelf;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Child Bones Names Structure from Mesh \n" },
#endif
		{ "CPP_Default_bIncludeSelf", "false" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Child Bones Names Structure from Mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bIncludeSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms*)Obj)->bIncludeSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_bIncludeSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetChildBoneNames", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::AGLS_ZombieCharacterCore_eventGetChildBoneNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetChildBoneNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bIncludeSelf);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetChildBoneNames(Z_Param_BoneName,Z_Param_bIncludeSelf);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetChildBoneNames

// Begin Class AAGLS_ZombieCharacterCore Function GetCurrentRequiredLOD
struct AGLS_ZombieCharacterCore_eventGetCurrentRequiredLOD_Parms
{
	AGLS_LOD_State ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_ZombieCharacterCore_eventGetCurrentRequiredLOD_Parms()
		: ReturnValue((AGLS_LOD_State)0)
	{
	}
};
static const FName NAME_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD = FName(TEXT("GetCurrentRequiredLOD"));
AGLS_LOD_State AAGLS_ZombieCharacterCore::GetCurrentRequiredLOD()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventGetCurrentRequiredLOD_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetCurrentRequiredLOD_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Optymalization" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetCurrentRequiredLOD_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(0, nullptr) }; // 4107279616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetCurrentRequiredLOD", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventGetCurrentRequiredLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventGetCurrentRequiredLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetCurrentRequiredLOD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGLS_LOD_State*)Z_Param__Result=P_THIS->GetCurrentRequiredLOD_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetCurrentRequiredLOD

// Begin Class AAGLS_ZombieCharacterCore Function GetDeformerActivationLOD
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetDeformerActivationLOD_Parms
	{
		AGLS_LOD_State CurrentState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Deformer" },
		{ "Keywords", "Zombie,Character,Deformer" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetDeformerActivationLOD_Parms, CurrentState), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(0, nullptr) }; // 4107279616
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventGetDeformerActivationLOD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventGetDeformerActivationLOD_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetDeformerActivationLOD", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::AGLS_ZombieCharacterCore_eventGetDeformerActivationLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::AGLS_ZombieCharacterCore_eventGetDeformerActivationLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetDeformerActivationLOD)
{
	P_GET_ENUM(AGLS_LOD_State,Z_Param_CurrentState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDeformerActivationLOD(AGLS_LOD_State(Z_Param_CurrentState));
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetDeformerActivationLOD

// Begin Class AAGLS_ZombieCharacterCore Function GetGetUpAnimation
struct AGLS_ZombieCharacterCore_eventGetGetUpAnimation_Parms
{
	TSoftObjectPtr<UAnimMontage> ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_ZombieCharacterCore_eventGetGetUpAnimation_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_AAGLS_ZombieCharacterCore_GetGetUpAnimation = FName(TEXT("GetGetUpAnimation"));
TSoftObjectPtr<UAnimMontage> AAGLS_ZombieCharacterCore::GetGetUpAnimation()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_GetGetUpAnimation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventGetGetUpAnimation_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetGetUpAnimation_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Ragdoll" },
		{ "DisplayName", "Get Get Up Animation" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS,Character,Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetGetUpAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetGetUpAnimation", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventGetGetUpAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventGetGetUpAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetGetUpAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UAnimMontage>*)Z_Param__Result=P_THIS->GetGetUpAnimation_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetGetUpAnimation

// Begin Class AAGLS_ZombieCharacterCore Function GetIsStartedAttack
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetIsStartedAttack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Utility" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventGetIsStartedAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventGetIsStartedAttack_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetIsStartedAttack", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::AGLS_ZombieCharacterCore_eventGetIsStartedAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::AGLS_ZombieCharacterCore_eventGetIsStartedAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetIsStartedAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsStartedAttack();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetIsStartedAttack

// Begin Class AAGLS_ZombieCharacterCore Function GetMappedSpeedC
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetMappedSpeedC_Parms
	{
		float SpeedScale;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Core|Movement" },
		{ "CPP_Default_SpeedScale", "1.000000" },
		{ "Keywords", "Zombie,Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetMappedSpeedC_Parms, SpeedScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetMappedSpeedC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::NewProp_SpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetMappedSpeedC", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::AGLS_ZombieCharacterCore_eventGetMappedSpeedC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::AGLS_ZombieCharacterCore_eventGetMappedSpeedC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetMappedSpeedC)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMappedSpeedC(Z_Param_SpeedScale);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetMappedSpeedC

// Begin Class AAGLS_ZombieCharacterCore Function GetRefBoneTransformInLocalSpace
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics
{
	struct AGLS_ZombieCharacterCore_eventGetRefBoneTransformInLocalSpace_Parms
	{
		USkeletalMeshComponent* InSkeletalMesh;
		FName BoneName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Utility" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetRefBoneTransformInLocalSpace_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSkeletalMesh_MetaData), NewProp_InSkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetRefBoneTransformInLocalSpace_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventGetRefBoneTransformInLocalSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::NewProp_InSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "GetRefBoneTransformInLocalSpace", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::AGLS_ZombieCharacterCore_eventGetRefBoneTransformInLocalSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::AGLS_ZombieCharacterCore_eventGetRefBoneTransformInLocalSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execGetRefBoneTransformInLocalSpace)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMesh);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRefBoneTransformInLocalSpace(Z_Param_InSkeletalMesh,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function GetRefBoneTransformInLocalSpace

// Begin Class AAGLS_ZombieCharacterCore Function HitReactionAndDamage
struct AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms
{
	bool OutDeath;
	FVector OutHitLocation;
	FVector OutHitNormal;
	FName OutBoneName;
	float Outamage;
	AActor* DamageCauser;
	float DamagePoints;
	FHitResult HitInfo;
	ECALS_WeaponType WeaponType;
	bool InstantDeath;
};
static const FName NAME_AAGLS_ZombieCharacterCore_HitReactionAndDamage = FName(TEXT("HitReactionAndDamage"));
void AAGLS_ZombieCharacterCore::HitReactionAndDamage(bool& OutDeath, FVector& OutHitLocation, FVector& OutHitNormal, FName& OutBoneName, float& Outamage, AActor* DamageCauser, float DamagePoints, FHitResult HitInfo, ECALS_WeaponType WeaponType, bool InstantDeath)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_HitReactionAndDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms Parms;
		Parms.OutDeath=OutDeath ? true : false;
		Parms.OutHitLocation=OutHitLocation;
		Parms.OutHitNormal=OutHitNormal;
		Parms.OutBoneName=OutBoneName;
		Parms.Outamage=Outamage;
		Parms.DamageCauser=DamageCauser;
		Parms.DamagePoints=DamagePoints;
		Parms.HitInfo=HitInfo;
		Parms.WeaponType=WeaponType;
		Parms.InstantDeath=InstantDeath ? true : false;
	ProcessEvent(Func,&Parms);
		OutDeath=Parms.OutDeath;
		OutHitLocation=Parms.OutHitLocation;
		OutHitNormal=Parms.OutHitNormal;
		OutBoneName=Parms.OutBoneName;
		Outamage=Parms.Outamage;
	}
	else
	{
		HitReactionAndDamage_Implementation(OutDeath, OutHitLocation, OutHitNormal, OutBoneName, Outamage, DamageCauser, DamagePoints, HitInfo, WeaponType, InstantDeath);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Hit Reaction And Damage\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hit Reaction And Damage" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_OutDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutDeath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutBoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Outamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static void NewProp_InstantDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InstantDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutDeath_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms*)Obj)->OutDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutDeath = { "OutDeath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutDeath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutHitLocation = { "OutHitLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, OutHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutHitNormal = { "OutHitNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, OutHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutBoneName = { "OutBoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, OutBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_Outamage = { "Outamage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, Outamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_DamagePoints = { "DamagePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, DamagePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms, WeaponType), Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType, METADATA_PARAMS(0, nullptr) }; // 4247320243
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_InstantDeath_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms*)Obj)->InstantDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_InstantDeath = { "InstantDeath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_InstantDeath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutHitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutHitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_OutBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_Outamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_DamagePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::NewProp_InstantDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "HitReactionAndDamage", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventHitReactionAndDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execHitReactionAndDamage)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutDeath);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutHitLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutHitNormal);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutBoneName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Outamage);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamagePoints);
	P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
	P_GET_ENUM(ECALS_WeaponType,Z_Param_WeaponType);
	P_GET_UBOOL(Z_Param_InstantDeath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitReactionAndDamage_Implementation(Z_Param_Out_OutDeath,Z_Param_Out_OutHitLocation,Z_Param_Out_OutHitNormal,Z_Param_Out_OutBoneName,Z_Param_Out_Outamage,Z_Param_DamageCauser,Z_Param_DamagePoints,Z_Param_HitInfo,ECALS_WeaponType(Z_Param_WeaponType),Z_Param_InstantDeath);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function HitReactionAndDamage

// Begin Class AAGLS_ZombieCharacterCore Function IsAlive
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics
{
	struct AGLS_ZombieCharacterCore_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Damage" },
		{ "DisplayName", "Is Alive" },
		{ "Keywords", "Zombie,Character,Damage" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventIsAlive_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::AGLS_ZombieCharacterCore_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::AGLS_ZombieCharacterCore_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function IsAlive

// Begin Class AAGLS_ZombieCharacterCore Function OnStartedCrawling
static const FName NAME_AAGLS_ZombieCharacterCore_OnStartedCrawling = FName(TEXT("OnStartedCrawling"));
void AAGLS_ZombieCharacterCore::OnStartedCrawling()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_OnStartedCrawling);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnStartedCrawling_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "OnStartedCrawling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execOnStartedCrawling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartedCrawling_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function OnStartedCrawling

// Begin Class AAGLS_ZombieCharacterCore Function RagdollEnd
static const FName NAME_AAGLS_ZombieCharacterCore_RagdollEnd = FName(TEXT("RagdollEnd"));
void AAGLS_ZombieCharacterCore::RagdollEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_RagdollEnd);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RagdollEnd_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Ragdoll" },
		{ "DisplayName", "Ragdoll End" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS,Character,Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "RagdollEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execRagdollEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RagdollEnd_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function RagdollEnd

// Begin Class AAGLS_ZombieCharacterCore Function RagdollStart
static const FName NAME_AAGLS_ZombieCharacterCore_RagdollStart = FName(TEXT("RagdollStart"));
void AAGLS_ZombieCharacterCore::RagdollStart()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_RagdollStart);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RagdollStart_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try RAGDOLL Start\n" },
#endif
		{ "DisplayName", "Ragdoll Start" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "AGLS,Character,Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try RAGDOLL Start" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "RagdollStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execRagdollStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RagdollStart_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function RagdollStart

// Begin Class AAGLS_ZombieCharacterCore Function RagdollUpdate
struct AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms
{
	float OutSpringRange;
	float InDamping;
	float InForceLimit;
	int32 DebugIndex;
};
static const FName NAME_AAGLS_ZombieCharacterCore_RagdollUpdate = FName(TEXT("RagdollUpdate"));
void AAGLS_ZombieCharacterCore::RagdollUpdate(float OutSpringRange, float InDamping, float InForceLimit, int32 DebugIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_RagdollUpdate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms Parms;
		Parms.OutSpringRange=OutSpringRange;
		Parms.InDamping=InDamping;
		Parms.InForceLimit=InForceLimit;
		Parms.DebugIndex=DebugIndex;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RagdollUpdate_Implementation(OutSpringRange, InDamping, InForceLimit, DebugIndex);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OutSpringRange,InDamping,InForceLimit,DebugIndex" },
		{ "Category", "Zombie|Ragdoll" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_InDamping", "0.000000" },
		{ "CPP_Default_InForceLimit", "0.000000" },
		{ "CPP_Default_OutSpringRange", "5000.000000" },
		{ "DisplayName", "Ragdoll Update" },
		{ "ForceAsFunction", "" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSpringRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_OutSpringRange = { "OutSpringRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms, OutSpringRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms, InDamping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms, InForceLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_OutSpringRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_InDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_InForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::NewProp_DebugIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "RagdollUpdate", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventRagdollUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execRagdollUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutSpringRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RagdollUpdate_Implementation(Z_Param_OutSpringRange,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_DebugIndex);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function RagdollUpdate

// Begin Class AAGLS_ZombieCharacterCore Function SmoothCharacterRotation
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics
{
	struct AGLS_ZombieCharacterCore_eventSmoothCharacterRotation_Parms
	{
		FRotator TargetRotation;
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Core|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Smooth Character Rotation\n" },
#endif
		{ "CPP_Default_InterpSpeed", "15.000000" },
		{ "CPP_Default_TargetRotation", "0.000000,0.000000,0.000000" },
		{ "Keywords", "Zombie,Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smooth Character Rotation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventSmoothCharacterRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventSmoothCharacterRotation_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "SmoothCharacterRotation", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::AGLS_ZombieCharacterCore_eventSmoothCharacterRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::AGLS_ZombieCharacterCore_eventSmoothCharacterRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execSmoothCharacterRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothCharacterRotation(Z_Param_TargetRotation,Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function SmoothCharacterRotation

// Begin Class AAGLS_ZombieCharacterCore Function StartDeathSequence
struct AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms
{
	FVector HitLocation;
	FVector HitNormal;
	FName HitBoneName;
	int32 DeathTypeIndex;
};
static const FName NAME_AAGLS_ZombieCharacterCore_StartDeathSequence = FName(TEXT("StartDeathSequence"));
void AAGLS_ZombieCharacterCore::StartDeathSequence(FVector HitLocation, FVector HitNormal, FName HitBoneName, int32 DeathTypeIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_StartDeathSequence);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms Parms;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		Parms.HitBoneName=HitBoneName;
		Parms.DeathTypeIndex=DeathTypeIndex;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		StartDeathSequence_Implementation(HitLocation, HitNormal, HitBoneName, DeathTypeIndex);
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Damage" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeathTypeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms, HitBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_DeathTypeIndex = { "DeathTypeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms, DeathTypeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_HitBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::NewProp_DeathTypeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "StartDeathSequence", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::PropPointers), sizeof(AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_ZombieCharacterCore_eventStartDeathSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execStartDeathSequence)
{
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_STRUCT(FVector,Z_Param_HitNormal);
	P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
	P_GET_PROPERTY(FIntProperty,Z_Param_DeathTypeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDeathSequence_Implementation(Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitBoneName,Z_Param_DeathTypeIndex);
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function StartDeathSequence

// Begin Class AAGLS_ZombieCharacterCore Function UpdateCharacterMovementPerFrame
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics
{
	struct AGLS_ZombieCharacterCore_eventUpdateCharacterMovementPerFrame_Parms
	{
		CALS_Gait AllowedGait;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Core|Movement" },
		{ "Keywords", "Zombie,Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::NewProp_AllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::NewProp_AllowedGait = { "AllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieCharacterCore_eventUpdateCharacterMovementPerFrame_Parms, AllowedGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::NewProp_AllowedGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::NewProp_AllowedGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateCharacterMovementPerFrame", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::AGLS_ZombieCharacterCore_eventUpdateCharacterMovementPerFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::AGLS_ZombieCharacterCore_eventUpdateCharacterMovementPerFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateCharacterMovementPerFrame)
{
	P_GET_ENUM(CALS_Gait,Z_Param_AllowedGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCharacterMovementPerFrame(CALS_Gait(Z_Param_AllowedGait));
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateCharacterMovementPerFrame

// Begin Class AAGLS_ZombieCharacterCore Function UpdateCrawlingRotation
static const FName NAME_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation = FName(TEXT("UpdateCrawlingRotation"));
void AAGLS_ZombieCharacterCore::UpdateCrawlingRotation()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateCrawlingRotation_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////Dziala pobnie jak UpdateGroundedRotation() tylko jest aktywowana w momencie kiedy MovementState == Crawl\n" },
#endif
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/Dziala pobnie jak UpdateGroundedRotation() tylko jest aktywowana w momencie kiedy MovementState == Crawl" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateCrawlingRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateCrawlingRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCrawlingRotation_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateCrawlingRotation

// Begin Class AAGLS_ZombieCharacterCore Function UpdateCurrentBodiesPhysicStats
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics
{
	struct AGLS_ZombieCharacterCore_eventUpdateCurrentBodiesPhysicStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Core|Physic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Current Bodies Physic Stats. Funkcja potrzebna do wywolania w momencie kiedy zmieniamy jakies parametry dla physic asset. Wynika to z faktu ze podczas zmiany LOD konieczne jest zapamietanie\n//ktore z Bodies byly aktywne a ktore nie.\n" },
#endif
		{ "Keywords", "Zombie,Physic" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Current Bodies Physic Stats. Funkcja potrzebna do wywolania w momencie kiedy zmieniamy jakies parametry dla physic asset. Wynika to z faktu ze podczas zmiany LOD konieczne jest zapamietanie\nktore z Bodies byly aktywne a ktore nie." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieCharacterCore_eventUpdateCurrentBodiesPhysicStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieCharacterCore_eventUpdateCurrentBodiesPhysicStats_Parms), &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateCurrentBodiesPhysicStats", nullptr, nullptr, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::AGLS_ZombieCharacterCore_eventUpdateCurrentBodiesPhysicStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::AGLS_ZombieCharacterCore_eventUpdateCurrentBodiesPhysicStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateCurrentBodiesPhysicStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateCurrentBodiesPhysicStats();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateCurrentBodiesPhysicStats

// Begin Class AAGLS_ZombieCharacterCore Function UpdateCurrentLOD_State
static const FName NAME_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State = FName(TEXT("UpdateCurrentLOD_State"));
void AAGLS_ZombieCharacterCore::UpdateCurrentLOD_State()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateCurrentLOD_State_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Optymalization" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateCurrentLOD_State", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateCurrentLOD_State)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrentLOD_State_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateCurrentLOD_State

// Begin Class AAGLS_ZombieCharacterCore Function UpdateFallingRotation
static const FName NAME_AAGLS_ZombieCharacterCore_UpdateFallingRotation = FName(TEXT("UpdateFallingRotation"));
void AAGLS_ZombieCharacterCore::UpdateFallingRotation()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_UpdateFallingRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateFallingRotation_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dziala pobnie jak UpdateGroundedRotation() tylko jest aktywowana w momencie kiedy MovementState == InAir\n" },
#endif
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dziala pobnie jak UpdateGroundedRotation() tylko jest aktywowana w momencie kiedy MovementState == InAir" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateFallingRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateFallingRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFallingRotation_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateFallingRotation

// Begin Class AAGLS_ZombieCharacterCore Function UpdateGroundedMovement
static const FName NAME_AAGLS_ZombieCharacterCore_UpdateGroundedMovement = FName(TEXT("UpdateGroundedMovement"));
void AAGLS_ZombieCharacterCore::UpdateGroundedMovement()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_UpdateGroundedMovement);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateGroundedMovement_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateGroundedMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateGroundedMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroundedMovement_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateGroundedMovement

// Begin Class AAGLS_ZombieCharacterCore Function UpdateGroundedRotation
static const FName NAME_AAGLS_ZombieCharacterCore_UpdateGroundedRotation = FName(TEXT("UpdateGroundedRotation"));
void AAGLS_ZombieCharacterCore::UpdateGroundedRotation()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_ZombieCharacterCore_UpdateGroundedRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateGroundedRotation_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bazowa funkcja do aktualizacji rotacji kapsuly. W zaleznosci od takich zmiennych jak RotationCurve, MovementState, IsMoving ustalana jest docelowa rotacja oraz nastepuje interpolacja poprzez\n//uzycie SmoothCharacterRotation()\n" },
#endif
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bazowa funkcja do aktualizacji rotacji kapsuly. W zaleznosci od takich zmiennych jak RotationCurve, MovementState, IsMoving ustalana jest docelowa rotacja oraz nastepuje interpolacja poprzez\nuzycie SmoothCharacterRotation()" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAGLS_ZombieCharacterCore, nullptr, "UpdateGroundedRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_ZombieCharacterCore::execUpdateGroundedRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroundedRotation_Implementation();
	P_NATIVE_END;
}
// End Class AAGLS_ZombieCharacterCore Function UpdateGroundedRotation

// Begin Class AAGLS_ZombieCharacterCore
void AAGLS_ZombieCharacterCore::StaticRegisterNativesAAGLS_ZombieCharacterCore()
{
	UClass* Class = AAGLS_ZombieCharacterCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageValue", &AAGLS_ZombieCharacterCore::execApplyDamageValue },
		{ "CalculateHitDirection", &AAGLS_ZombieCharacterCore::execCalculateHitDirection },
		{ "CheckFallDamage", &AAGLS_ZombieCharacterCore::execCheckFallDamage },
		{ "DeathByFallDamage", &AAGLS_ZombieCharacterCore::execDeathByFallDamage },
		{ "DisableEnableRequiredBodies", &AAGLS_ZombieCharacterCore::execDisableEnableRequiredBodies },
		{ "GetActualGait", &AAGLS_ZombieCharacterCore::execGetActualGait },
		{ "GetAllowedGait", &AAGLS_ZombieCharacterCore::execGetAllowedGait },
		{ "GetAnimCurveValue", &AAGLS_ZombieCharacterCore::execGetAnimCurveValue },
		{ "GetAttackElapsedTime", &AAGLS_ZombieCharacterCore::execGetAttackElapsedTime },
		{ "GetChildBoneNames", &AAGLS_ZombieCharacterCore::execGetChildBoneNames },
		{ "GetCurrentRequiredLOD", &AAGLS_ZombieCharacterCore::execGetCurrentRequiredLOD },
		{ "GetDeformerActivationLOD", &AAGLS_ZombieCharacterCore::execGetDeformerActivationLOD },
		{ "GetGetUpAnimation", &AAGLS_ZombieCharacterCore::execGetGetUpAnimation },
		{ "GetIsStartedAttack", &AAGLS_ZombieCharacterCore::execGetIsStartedAttack },
		{ "GetMappedSpeedC", &AAGLS_ZombieCharacterCore::execGetMappedSpeedC },
		{ "GetRefBoneTransformInLocalSpace", &AAGLS_ZombieCharacterCore::execGetRefBoneTransformInLocalSpace },
		{ "HitReactionAndDamage", &AAGLS_ZombieCharacterCore::execHitReactionAndDamage },
		{ "IsAlive", &AAGLS_ZombieCharacterCore::execIsAlive },
		{ "OnStartedCrawling", &AAGLS_ZombieCharacterCore::execOnStartedCrawling },
		{ "RagdollEnd", &AAGLS_ZombieCharacterCore::execRagdollEnd },
		{ "RagdollStart", &AAGLS_ZombieCharacterCore::execRagdollStart },
		{ "RagdollUpdate", &AAGLS_ZombieCharacterCore::execRagdollUpdate },
		{ "SmoothCharacterRotation", &AAGLS_ZombieCharacterCore::execSmoothCharacterRotation },
		{ "StartDeathSequence", &AAGLS_ZombieCharacterCore::execStartDeathSequence },
		{ "UpdateCharacterMovementPerFrame", &AAGLS_ZombieCharacterCore::execUpdateCharacterMovementPerFrame },
		{ "UpdateCrawlingRotation", &AAGLS_ZombieCharacterCore::execUpdateCrawlingRotation },
		{ "UpdateCurrentBodiesPhysicStats", &AAGLS_ZombieCharacterCore::execUpdateCurrentBodiesPhysicStats },
		{ "UpdateCurrentLOD_State", &AAGLS_ZombieCharacterCore::execUpdateCurrentLOD_State },
		{ "UpdateFallingRotation", &AAGLS_ZombieCharacterCore::execUpdateFallingRotation },
		{ "UpdateGroundedMovement", &AAGLS_ZombieCharacterCore::execUpdateGroundedMovement },
		{ "UpdateGroundedRotation", &AAGLS_ZombieCharacterCore::execUpdateGroundedRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGLS_ZombieCharacterCore);
UClass* Z_Construct_UClass_AAGLS_ZombieCharacterCore_NoRegister()
{
	return AAGLS_ZombieCharacterCore::StaticClass();
}
struct Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Base C++ class prepared for constructing the Zombie character. Contains many variable declarations related to further implementation and \nmodifications via child classes. Through this class character has have implemented dynamic variables for CharacterMovementComponent such as:\n- float Acceleration (from Curve Vector.X)\n- float Deceleration (from Curve Vector.Y)\n- float GroundFriction (from Curve Vector.Z)\n- float MaxWalkingSpeed (From Vector where X=Forward, Y=Left/Right, Z=BackDirection)\nThese values \xe2\x80\x8b\xe2\x80\x8b""are set depending on the DataAsset configuration, which was specified for the USimpleMovementParamsData* MovementParamsData variable\n\nThis class also implements the capsule rotation interpolation system, ragdoll, and many other functions for constructing the final character. \nMany functions declared in C++ have an override option via Blueprint, which allows for more free modification in the child class.*/" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AGLS_ZombieCharacterCore.h" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base C++ class prepared for constructing the Zombie character. Contains many variable declarations related to further implementation and\nmodifications via child classes. Through this class character has have implemented dynamic variables for CharacterMovementComponent such as:\n- float Acceleration (from Curve Vector.X)\n- float Deceleration (from Curve Vector.Y)\n- float GroundFriction (from Curve Vector.Z)\n- float MaxWalkingSpeed (From Vector where X=Forward, Y=Left/Right, Z=BackDirection)\nThese values \xe2\x80\x8b\xe2\x80\x8b""are set depending on the DataAsset configuration, which was specified for the USimpleMovementParamsData* MovementParamsData variable\n\nThis class also implements the capsule rotation interpolation system, ragdoll, and many other functions for constructing the final character.\nMany functions declared in C++ have an override option via Blueprint, which allows for more free modification in the child class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttacksSystemComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the Velocity value from the previous frame (n-1)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the Velocity value from the previous frame (n-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*A variable that stores the Velocity value of the ground the character is currently on. This is needed when we use velocity \ncorrection in a non-inertial reference frame.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A variable that stores the Velocity value of the ground the character is currently on. This is needed when we use velocity\ncorrection in a non-inertial reference frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Stores the manually calculated acceleration of the capsule by calculating the simplified derivative of velocity \n[Velocity(n) - (Velocity(n - 1) / dt]*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the manually calculated acceleration of the capsule by calculating the simplified derivative of velocity\n[Velocity(n) - (Velocity(n - 1) / dt]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "DisplayName", "Aiming Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredActorRotation_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAirRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "DisplayName", "In Air Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementInputRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "DisplayName", "Last Movement Input Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNonZeroVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNonZeroAcceleratrion_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSettings_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SpeedC = CurrentVelocity.Length()\n" },
#endif
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SpeedC = CurrentVelocity.Length()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRotationRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IsMoving = TRUE when SpeedC > 1.0\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsMoving = TRUE when SpeedC > 1.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMovementInput_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*float MovementInputAmount = AccelerationXY.Length() / this->GetCharacterMovement()->GetMaxAcceleration();\nif (MovementInputAmount > 0.0) { bHasMovementInput = true; }\nelse { bHasMovementInput = false; }*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "float MovementInputAmount = AccelerationXY.Length() / this->GetCharacterMovement()->GetMaxAcceleration();\nif (MovementInputAmount > 0.0) { bHasMovementInput = true; }\nelse { bHasMovementInput = false; }" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDeathC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Essential" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Defaults" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleHeight_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Defaults" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollFaceUp_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRagdollVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollGetUpAnim_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Ragdoll" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncFunctionsComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthPoints_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//IMPORTANT VARIABLE: If CurrentHealth < 0 OR CurrentHealth > MaxHealth THEN on BeginPlay CurrentHealth = MaxHealth\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMPORTANT VARIABLE: If CurrentHealth < 0 OR CurrentHealth > MaxHealth THEN on BeginPlay CurrentHealth = MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementParamsData_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*DataAsset from which information about CharacterMovementComponent parameters will be retrieved during game play. \nCannot be left EMPTY.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset from which information about CharacterMovementComponent parameters will be retrieved during game play.\nCannot be left EMPTY." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAndDamageConfig_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Damage" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSpeedMapCurve_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectNonInertialFloor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Movement" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetAsControlRotationWhenIdle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Actor Rotation as Control Rotation when is NOT Moving\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Actor Rotation as Control Rotation when is NOT Moving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefMovementModelName_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Movement" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitMovementRandomScale_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Movement" },
		{ "ClampMax", "1.5" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nYou can enter a range from which a random value will be selected to multiply MaxWalkingSpeed. This allows you to \nintroduce more variety with more instances, as they will move at different maximum speeds.\n\nPL:\nMo\xc5\xbcna wprowadzi\xc4\x87 przedzia\xc5\x82 z kt\xc3\xb3rego b\xc4\x99""dzie wybrana przypadkowa warto\xc5\x9b\xc4\x87 mno\xc5\xbc\xc4\x85""ca MaxWalkingSpeed. Dzi\xc4\x99ki temu mo\xc5\xbcna wprowadzi\xc4\x87 \nwi\xc4\x99ksz\xc4\x85 r\xc3\xb3\xc5\xbcnorodno\xc5\x9b\xc4\x87 przy wi\xc4\x99kszej ilo\xc5\x9b""ci instancji, gdy\xc5\xbc b\xc4\x99""d\xc4\x85 porusza\xc4\x87 si\xc4\x99 z innymi maksymalnymi pr\xc4\x99""dko\xc5\x9b""ciami.*/" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nYou can enter a range from which a random value will be selected to multiply MaxWalkingSpeed. This allows you to\nintroduce more variety with more instances, as they will move at different maximum speeds.\n\nPL:\nMo\xc5\xbcna wprowadzi\xc4\x87 przedzia\xc5\x82 z kt\xc3\xb3rego b\xc4\x99""dzie wybrana przypadkowa warto\xc5\x9b\xc4\x87 mno\xc5\xbc\xc4\x85""ca MaxWalkingSpeed. Dzi\xc4\x99ki temu mo\xc5\xbcna wprowadzi\xc4\x87\nwi\xc4\x99ksz\xc4\x85 r\xc3\xb3\xc5\xbcnorodno\xc5\x9b\xc4\x87 przy wi\xc4\x99kszej ilo\xc5\x9b""ci instancji, gdy\xc5\xbc b\xc4\x99""d\xc4\x85 porusza\xc4\x87 si\xc4\x99 z innymi maksymalnymi pr\xc4\x99""dko\xc5\x9b""ciami." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBodyDismemberment_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Value that affects the fact that when dealing damage, Skeletal Mesh can be dismembered. This is directly related to physics simulation and the use of Physic Animation. \nDisconnection of PhysicsBodies parts is done by breaking the Physic Constraint. Note: This function works correctly only on a well-prepared skeletal mesh. \nAdditionally, it is associated with a performance cost. It should not be used with a very large number of Character instances.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value that affects the fact that when dealing damage, Skeletal Mesh can be dismembered. This is directly related to physics simulation and the use of Physic Animation.\nDisconnection of PhysicsBodies parts is done by breaking the Physic Constraint. Note: This function works correctly only on a well-prepared skeletal mesh.\nAdditionally, it is associated with a performance cost. It should not be used with a very large number of Character instances." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSimWhenDetectDamage_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If 'UseBodyDismemberment' is used, then we can only apply physics simulation when the first damage is taken. \nOtherwise, the simulation will be updated whenever the character is in LOD0 or LOD1.*/" },
#endif
		{ "EditCondition", "UseBodyDismemberment" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If 'UseBodyDismemberment' is used, then we can only apply physics simulation when the first damage is taken.\nOtherwise, the simulation will be updated whenever the character is in LOD0 or LOD1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicAnimStrength_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Reference value defining the base PhysicAnimationStrength value for the PhysicAnimation component*/" },
#endif
		{ "EditCondition", "UseBodyDismemberment" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference value defining the base PhysicAnimationStrength value for the PhysicAnimation component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodiesHealth_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Physics" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nImportant variable when UseBodyDismemberment is set to true. In this part it is necessary to define which bones will have a separate health points. \nFor example, if 'hand_l' = 1.0, then when damage is registered, additionally information about the hit bone will be taken from HitResult. Then an attempt \nwill be made to find it in BodiesHealth and finally reduce the value of health points. These values \xe2\x80\x8b\xe2\x80\x8b""are also used to calculate the so-called 'Limb_Health' \nwhich determines whether the limb should be detached from the skeleton when this value is less than 0.01\n\nPL:\nWa\xc5\xbcna zmienna w przypadku kiedy UseBodyDismemberment jest ustawiana na true. W tej cz\xc4\x99\xc5\x9b""ci konieczne jest zdefiniowanie jakie ko\xc5\x9b""ci b\xc4\x99""d\xc4\x85 posiada\xc5\x82y oddzielny \npasek zdrowia. Przyk\xc5\x82""adowo je\xc5\xbc""eli 'hand_l' = 1.0, to w momencie kiedy zostan\xc4\x85 zajerestrowane obra\xc5\xbc""enia, to dodatkowo z HitResult zostanie pobrana informacja \no trafinej ko\xc5\x9b""ci. Nastepnie zajdzie pr\xc3\xb3""ba ndnalezienia jej w BodiesHealth a finalnie zmiejszenie warto\xc5\x9b""ci punkt\xc3\xb3w zdrowia. Warto\xc5\x9b""ci te s\xc4\x85 r\xc3\xb3wnie\xc5\xbc u\xc5\xbcywane do \nwyliczenia tak zwanego 'Limb_Health' kt\xc3\xb3ry okre\xc5\x9bla czy ko\xc5\x84""czyna powinna zosta\xc4\x87 odczepiona od szkeletu w momencie kiedy warto\xc5\x9b\xc4\x87 ta b\xc4\x99""dzie mniejsza od 0.01*/" },
#endif
		{ "EditCondition", "UseBodyDismemberment" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nImportant variable when UseBodyDismemberment is set to true. In this part it is necessary to define which bones will have a separate health points.\nFor example, if 'hand_l' = 1.0, then when damage is registered, additionally information about the hit bone will be taken from HitResult. Then an attempt\nwill be made to find it in BodiesHealth and finally reduce the value of health points. These values \xe2\x80\x8b\xe2\x80\x8b""are also used to calculate the so-called 'Limb_Health'\nwhich determines whether the limb should be detached from the skeleton when this value is less than 0.01\n\nPL:\nWa\xc5\xbcna zmienna w przypadku kiedy UseBodyDismemberment jest ustawiana na true. W tej cz\xc4\x99\xc5\x9b""ci konieczne jest zdefiniowanie jakie ko\xc5\x9b""ci b\xc4\x99""d\xc4\x85 posiada\xc5\x82y oddzielny\npasek zdrowia. Przyk\xc5\x82""adowo je\xc5\xbc""eli 'hand_l' = 1.0, to w momencie kiedy zostan\xc4\x85 zajerestrowane obra\xc5\xbc""enia, to dodatkowo z HitResult zostanie pobrana informacja\no trafinej ko\xc5\x9b""ci. Nastepnie zajdzie pr\xc3\xb3""ba ndnalezienia jej w BodiesHealth a finalnie zmiejszenie warto\xc5\x9b""ci punkt\xc3\xb3w zdrowia. Warto\xc5\x9b""ci te s\xc4\x85 r\xc3\xb3wnie\xc5\xbc u\xc5\xbcywane do\nwyliczenia tak zwanego 'Limb_Health' kt\xc3\xb3ry okre\xc5\x9bla czy ko\xc5\x84""czyna powinna zosta\xc4\x87 odczepiona od szkeletu w momencie kiedy warto\xc5\x9b\xc4\x87 ta b\xc4\x99""dzie mniejsza od 0.01" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicAnimConfigDetails_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Physics" },
		{ "EditCondition", "UseBodyDismemberment" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerClass_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Deformer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nDetermine which asset of type 'Deformer' SkeletalMesh should use. Note: introducing a reference to the asset for this variable, and not defining it manually \nin the skeletal mesh component, will cause longer initialization time of the Zombie instance on the scene. Otherwise, pointing the resource directly in the \ncomponent will significantly affect the compilation time of the Blueprint.\nWARNING: Using Deformer Graph is expensive in the case of many instances of this class.\n\nPL:\nOkre\xc5\x9blenie z jakiego zasobu typu 'Deformer' powinien ko\xc5\xbcysta\xc4\x87 SkeletalMesh. Uwaga: wprowadzenie odnieszienia do zasobu dla tej zmiennej, a nie zdefiniowanie \ngo r\xc4\x99""cznie w skeletal mesh component b\xc4\x99""dzie powodowa\xc4\x87 d\xc5\x82\xc3\xb3\xc5\xbcszy czas inicjacji instancji Zombie na mapie. W innym przypadku wskazanie zasobu bezpo\xc5\x9brednio w \nkomponencie wp\xc5\x82ynie znacz\xc4\x85""co na czas kompilacji Blueprint.\nUWAGA: U\xc5\xbcycie Deformer Graph jest kosztowne w przypadku wielu instancji tej klasy.*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nDetermine which asset of type 'Deformer' SkeletalMesh should use. Note: introducing a reference to the asset for this variable, and not defining it manually\nin the skeletal mesh component, will cause longer initialization time of the Zombie instance on the scene. Otherwise, pointing the resource directly in the\ncomponent will significantly affect the compilation time of the Blueprint.\nWARNING: Using Deformer Graph is expensive in the case of many instances of this class.\n\nPL:\nOkre\xc5\x9blenie z jakiego zasobu typu 'Deformer' powinien ko\xc5\xbcysta\xc4\x87 SkeletalMesh. Uwaga: wprowadzenie odnieszienia do zasobu dla tej zmiennej, a nie zdefiniowanie\ngo r\xc4\x99""cznie w skeletal mesh component b\xc4\x99""dzie powodowa\xc4\x87 d\xc5\x82\xc3\xb3\xc5\xbcszy czas inicjacji instancji Zombie na mapie. W innym przypadku wskazanie zasobu bezpo\xc5\x9brednio w\nkomponencie wp\xc5\x82ynie znacz\xc4\x85""co na czas kompilacji Blueprint.\nUWAGA: U\xc5\xbcycie Deformer Graph jest kosztowne w przypadku wielu instancji tej klasy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerActivationState_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECharacterDetailModeFlags" },
		{ "Category", "Zombie Core|Deformer" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightLandMontage_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Anim Instance|Landing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nMontage animations to be activated when a character registers a fall from a great height. They can be left empty because \nLanding Animations are implemented in Motion Matching\n\nPL:\nAnimacje montage jakie maj\xc4\x85 by\xc4\x87 aktywowane w momencie kiedy charakter zarejestruje updadek z du\xc5\xbc""ej wysoko\xc5\x9b""ci. \nMog\xc4\x85 pozosta\xc4\x87 puste, poniewa\xc5\xbc Landing Animations s\xc4\x85 zaimplementowane w Motion Matching*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nMontage animations to be activated when a character registers a fall from a great height. They can be left empty because\nLanding Animations are implemented in Motion Matching\n\nPL:\nAnimacje montage jakie maj\xc4\x85 by\xc4\x87 aktywowane w momencie kiedy charakter zarejestruje updadek z du\xc5\xbc""ej wysoko\xc5\x9b""ci.\nMog\xc4\x85 pozosta\xc4\x87 puste, poniewa\xc5\xbc Landing Animations s\xc4\x85 zaimplementowane w Motion Matching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardLandMontage_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Anim Instance|Landing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENG:\nMontage animations to be activated when a character registers a fall from a great height. They can be left empty because\nLanding Animations are implemented in Motion Matching\n\nPL:\nAnimacje montage jakie maj\xc4\x85 by\xc4\x87 aktywowane w momencie kiedy charakter zarejestruje updadek z du\xc5\xbc""ej wysoko\xc5\x9b""ci.\nMog\xc4\x85 pozosta\xc4\x87 puste, poniewa\xc5\xbc Landing Animations s\xc4\x85 zaimplementowane w Motion Matching*/" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nMontage animations to be activated when a character registers a fall from a great height. They can be left empty because\nLanding Animations are implemented in Motion Matching\n\nPL:\nAnimacje montage jakie maj\xc4\x85 by\xc4\x87 aktywowane w momencie kiedy charakter zarejestruje updadek z du\xc5\xbc""ej wysoko\xc5\x9b""ci.\nMog\xc4\x85 pozosta\xc4\x87 puste, poniewa\xc5\xbc Landing Animations s\xc4\x85 zaimplementowane w Motion Matching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtivePostureIndex_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Anim Instance|Posture" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtivePostureStrength_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|Anim Instance|Posture" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGait_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredGait_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "DisplayName", "MovementStateC" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "DisplayName", "Rotation Mode" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundedMovementMode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStance_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_StateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Core|States" },
		{ "DisplayName", "LOD State" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieCharacterCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttacksSystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredActorRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAirRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastMovementInputRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastNonZeroVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastNonZeroAcceleratrion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMovementSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRotationRateC;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static void NewProp_bHasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMovementInput;
	static void NewProp_IsDeathC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDeathC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefCapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefCapsuleHeight;
	static void NewProp_bRagdollOnGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollOnGround;
	static void NewProp_bRagdollFaceUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollFaceUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRagdollVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RagdollGetUpAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncFunctionsComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementParamsData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthAndDamageConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrafeSpeedMapCurve;
	static void NewProp_CorrectNonInertialFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CorrectNonInertialFloor;
	static void NewProp_SetAsControlRotationWhenIdle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAsControlRotationWhenIdle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefMovementModelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitMovementRandomScale;
	static void NewProp_UseBodyDismemberment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBodyDismemberment;
	static void NewProp_StartSimWhenDetectDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartSimWhenDetectDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPhysicAnimStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BodiesHealth_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BodiesHealth_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BodiesHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicAnimConfigDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformerClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeformerActivationState;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LightLandMontage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HardLandMontage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddtivePostureIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddtivePostureStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationModeC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationModeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedMovementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentStance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeathState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LOD_StateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LOD_StateC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_ApplyDamageValue, "ApplyDamageValue" }, // 2237011158
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CalculateHitDirection, "CalculateHitDirection" }, // 2492599453
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_CheckFallDamage, "CheckFallDamage" }, // 3122148126
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DeathByFallDamage, "DeathByFallDamage" }, // 1764883182
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_DisableEnableRequiredBodies, "DisableEnableRequiredBodies" }, // 2009247137
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetActualGait, "GetActualGait" }, // 515423315
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAllowedGait, "GetAllowedGait" }, // 886994524
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAnimCurveValue, "GetAnimCurveValue" }, // 4045770410
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetAttackElapsedTime, "GetAttackElapsedTime" }, // 156049435
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetChildBoneNames, "GetChildBoneNames" }, // 3917130472
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetCurrentRequiredLOD, "GetCurrentRequiredLOD" }, // 2148629282
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetDeformerActivationLOD, "GetDeformerActivationLOD" }, // 2946811456
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetGetUpAnimation, "GetGetUpAnimation" }, // 3443767151
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetIsStartedAttack, "GetIsStartedAttack" }, // 671579251
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetMappedSpeedC, "GetMappedSpeedC" }, // 3984656131
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_GetRefBoneTransformInLocalSpace, "GetRefBoneTransformInLocalSpace" }, // 214497657
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_HitReactionAndDamage, "HitReactionAndDamage" }, // 3406472648
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_IsAlive, "IsAlive" }, // 1908387391
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_OnStartedCrawling, "OnStartedCrawling" }, // 1292121033
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollEnd, "RagdollEnd" }, // 1621112366
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollStart, "RagdollStart" }, // 76499492
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_RagdollUpdate, "RagdollUpdate" }, // 2373934242
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_SmoothCharacterRotation, "SmoothCharacterRotation" }, // 3760381225
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_StartDeathSequence, "StartDeathSequence" }, // 2009063393
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCharacterMovementPerFrame, "UpdateCharacterMovementPerFrame" }, // 1391839435
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCrawlingRotation, "UpdateCrawlingRotation" }, // 860418198
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentBodiesPhysicStats, "UpdateCurrentBodiesPhysicStats" }, // 1976373772
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateCurrentLOD_State, "UpdateCurrentLOD_State" }, // 3179144461
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateFallingRotation, "UpdateFallingRotation" }, // 3882189234
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedMovement, "UpdateGroundedMovement" }, // 2354414015
		{ &Z_Construct_UFunction_AAGLS_ZombieCharacterCore_UpdateGroundedRotation, "UpdateGroundedRotation" }, // 19841520
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGLS_ZombieCharacterCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AttacksSystemComponent = { "AttacksSystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AttacksSystemComponent), Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttacksSystemComponent_MetaData), NewProp_AttacksSystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_PrevVelocity = { "PrevVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, PrevVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevVelocity_MetaData), NewProp_PrevVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_FloorVelocityC = { "FloorVelocityC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, FloorVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorVelocityC_MetaData), NewProp_FloorVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationC_MetaData), NewProp_AccelerationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AimingRotationC = { "AimingRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingRotationC_MetaData), NewProp_AimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DesiredActorRotation = { "DesiredActorRotation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DesiredActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredActorRotation_MetaData), NewProp_DesiredActorRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_InAirRotationC = { "InAirRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, InAirRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAirRotationC_MetaData), NewProp_InAirRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastMovementInputRotationC = { "LastMovementInputRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, LastMovementInputRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementInputRotationC_MetaData), NewProp_LastMovementInputRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastNonZeroVelocity = { "LastNonZeroVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, LastNonZeroVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNonZeroVelocity_MetaData), NewProp_LastNonZeroVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastNonZeroAcceleratrion = { "LastNonZeroAcceleratrion", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, LastNonZeroAcceleratrion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNonZeroAcceleratrion_MetaData), NewProp_LastNonZeroAcceleratrion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentMovementSettings = { "CurrentMovementSettings", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, CurrentMovementSettings), Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementSettings_MetaData), NewProp_CurrentMovementSettings_MetaData) }; // 2042637900
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, SpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedC_MetaData), NewProp_SpeedC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AimYawRotationRateC = { "AimYawRotationRateC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AimYawRotationRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimYawRotationRateC_MetaData), NewProp_AimYawRotationRateC_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bHasMovementInput_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->bHasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bHasMovementInput = { "bHasMovementInput", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bHasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMovementInput_MetaData), NewProp_bHasMovementInput_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_IsDeathC_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->IsDeathC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_IsDeathC = { "IsDeathC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_IsDeathC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDeathC_MetaData), NewProp_IsDeathC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefCapsuleRadius = { "DefCapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DefCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleRadius_MetaData), NewProp_DefCapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefCapsuleHeight = { "DefCapsuleHeight", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DefCapsuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefCapsuleHeight_MetaData), NewProp_DefCapsuleHeight_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollOnGround_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->bRagdollOnGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollOnGround = { "bRagdollOnGround", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRagdollOnGround_MetaData), NewProp_bRagdollOnGround_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollFaceUp_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->bRagdollFaceUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollFaceUp = { "bRagdollFaceUp", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollFaceUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRagdollFaceUp_MetaData), NewProp_bRagdollFaceUp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastRagdollVelocity = { "LastRagdollVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, LastRagdollVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRagdollVelocity_MetaData), NewProp_LastRagdollVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeathTime = { "DeathTime", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DeathTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathTime_MetaData), NewProp_DeathTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_RagdollGetUpAnim = { "RagdollGetUpAnim", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, RagdollGetUpAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollGetUpAnim_MetaData), NewProp_RagdollGetUpAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AsyncFunctionsComponent = { "AsyncFunctionsComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AsyncFunctionsComponent), Z_Construct_UClass_UAsyncFunctionsPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncFunctionsComponent_MetaData), NewProp_AsyncFunctionsComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentHealthPoints = { "CurrentHealthPoints", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, CurrentHealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealthPoints_MetaData), NewProp_CurrentHealthPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MovementParamsData = { "MovementParamsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, MovementParamsData), Z_Construct_UClass_USimpleMovementParamsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementParamsData_MetaData), NewProp_MovementParamsData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_HealthAndDamageConfig = { "HealthAndDamageConfig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, HealthAndDamageConfig), Z_Construct_UClass_UClass, Z_Construct_UClass_UALS_DamageConfigData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAndDamageConfig_MetaData), NewProp_HealthAndDamageConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_StrafeSpeedMapCurve = { "StrafeSpeedMapCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, StrafeSpeedMapCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSpeedMapCurve_MetaData), NewProp_StrafeSpeedMapCurve_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CorrectNonInertialFloor_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->CorrectNonInertialFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CorrectNonInertialFloor = { "CorrectNonInertialFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CorrectNonInertialFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectNonInertialFloor_MetaData), NewProp_CorrectNonInertialFloor_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_SetAsControlRotationWhenIdle_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->SetAsControlRotationWhenIdle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_SetAsControlRotationWhenIdle = { "SetAsControlRotationWhenIdle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_SetAsControlRotationWhenIdle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetAsControlRotationWhenIdle_MetaData), NewProp_SetAsControlRotationWhenIdle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefMovementModelName = { "DefMovementModelName", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DefMovementModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefMovementModelName_MetaData), NewProp_DefMovementModelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_InitMovementRandomScale = { "InitMovementRandomScale", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, InitMovementRandomScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitMovementRandomScale_MetaData), NewProp_InitMovementRandomScale_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_UseBodyDismemberment_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->UseBodyDismemberment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_UseBodyDismemberment = { "UseBodyDismemberment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_UseBodyDismemberment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBodyDismemberment_MetaData), NewProp_UseBodyDismemberment_MetaData) };
void Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_StartSimWhenDetectDamage_SetBit(void* Obj)
{
	((AAGLS_ZombieCharacterCore*)Obj)->StartSimWhenDetectDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_StartSimWhenDetectDamage = { "StartSimWhenDetectDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_ZombieCharacterCore), &Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_StartSimWhenDetectDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSimWhenDetectDamage_MetaData), NewProp_StartSimWhenDetectDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefaultPhysicAnimStrength = { "DefaultPhysicAnimStrength", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DefaultPhysicAnimStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPhysicAnimStrength_MetaData), NewProp_DefaultPhysicAnimStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_BodiesHealth_ValueProp = { "BodiesHealth", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_BodiesHealth_Key_KeyProp = { "BodiesHealth_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_BodiesHealth = { "BodiesHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, BodiesHealth), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodiesHealth_MetaData), NewProp_BodiesHealth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_PhysicAnimConfigDetails = { "PhysicAnimConfigDetails", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, PhysicAnimConfigDetails), Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicAnimConfigDetails_MetaData), NewProp_PhysicAnimConfigDetails_MetaData) }; // 266540899
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MeshDeformerClass = { "MeshDeformerClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, MeshDeformerClass), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformerClass_MetaData), NewProp_MeshDeformerClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeformerActivationState = { "DeformerActivationState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DeformerActivationState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerActivationState_MetaData), NewProp_DeformerActivationState_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LightLandMontage = { "LightLandMontage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, LightLandMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightLandMontage_MetaData), NewProp_LightLandMontage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_HardLandMontage = { "HardLandMontage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, HardLandMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardLandMontage_MetaData), NewProp_HardLandMontage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AddtivePostureIndex = { "AddtivePostureIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AddtivePostureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtivePostureIndex_MetaData), NewProp_AddtivePostureIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AddtivePostureStrength = { "AddtivePostureStrength", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, AddtivePostureStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtivePostureStrength_MetaData), NewProp_AddtivePostureStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentGait = { "CurrentGait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, CurrentGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGait_MetaData), NewProp_CurrentGait_MetaData) }; // 1732279459
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DesiredGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DesiredGait = { "DesiredGait", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DesiredGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredGait_MetaData), NewProp_DesiredGait_MetaData) }; // 1732279459
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MovementStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MovementStateC = { "MovementStateC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, MovementStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStateC_MetaData), NewProp_MovementStateC_MetaData) }; // 3255268152
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_RotationModeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_RotationModeC = { "RotationModeC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, RotationModeC), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationModeC_MetaData), NewProp_RotationModeC_MetaData) }; // 1340769226
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_GroundedMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_GroundedMovementMode = { "GroundedMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, GroundedMovementMode), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundedMovementMode_MetaData), NewProp_GroundedMovementMode_MetaData) }; // 1562728553
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentStance = { "CurrentStance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, CurrentStance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStance_MetaData), NewProp_CurrentStance_MetaData) }; // 87690985
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeathState = { "DeathState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, DeathState), Z_Construct_UEnum_HelpfulFunctions_CALS_DeathType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathState_MetaData), NewProp_DeathState_MetaData) }; // 1991249896
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LOD_StateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LOD_StateC = { "LOD_StateC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_ZombieCharacterCore, LOD_StateC), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_StateC_MetaData), NewProp_LOD_StateC_MetaData) }; // 4107279616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AttacksSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_PrevVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_FloorVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DesiredActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_InAirRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastMovementInputRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastNonZeroVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastNonZeroAcceleratrion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentMovementSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_SpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AimYawRotationRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bHasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_IsDeathC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollOnGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_bRagdollFaceUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LastRagdollVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeathTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_RagdollGetUpAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AsyncFunctionsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentHealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MovementParamsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_HealthAndDamageConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_StrafeSpeedMapCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CorrectNonInertialFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_SetAsControlRotationWhenIdle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefMovementModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_InitMovementRandomScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_UseBodyDismemberment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_StartSimWhenDetectDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DefaultPhysicAnimStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_BodiesHealth_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_BodiesHealth_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_BodiesHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_PhysicAnimConfigDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MeshDeformerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeformerActivationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LightLandMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_HardLandMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AddtivePostureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_AddtivePostureStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DesiredGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DesiredGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MovementStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_MovementStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_RotationModeC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_RotationModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_GroundedMovementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_GroundedMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_CurrentStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeathState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_DeathState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LOD_StateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::NewProp_LOD_StateC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_NoRegister, (int32)VTABLE_OFFSET(AAGLS_ZombieCharacterCore, IALS_HumanAI_InterfaceCpp), false },  // 3422989030
	{ Z_Construct_UClass_UAGLS_AI_CharacterInterface_NoRegister, (int32)VTABLE_OFFSET(AAGLS_ZombieCharacterCore, IAGLS_AI_CharacterInterface), false },  // 869262784
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::ClassParams = {
	&AAGLS_ZombieCharacterCore::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGLS_ZombieCharacterCore()
{
	if (!Z_Registration_Info_UClass_AAGLS_ZombieCharacterCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGLS_ZombieCharacterCore.OuterSingleton, Z_Construct_UClass_AAGLS_ZombieCharacterCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGLS_ZombieCharacterCore.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<AAGLS_ZombieCharacterCore>()
{
	return AAGLS_ZombieCharacterCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGLS_ZombieCharacterCore);
AAGLS_ZombieCharacterCore::~AAGLS_ZombieCharacterCore() {}
// End Class AAGLS_ZombieCharacterCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterDetailModeFlags_StaticEnum, TEXT("ECharacterDetailModeFlags"), &Z_Registration_Info_UEnum_ECharacterDetailModeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2751881608U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRuntimePhysicAnimConfig::StaticStruct, Z_Construct_UScriptStruct_FRuntimePhysicAnimConfig_Statics::NewStructOps, TEXT("RuntimePhysicAnimConfig"), &Z_Registration_Info_UScriptStruct_RuntimePhysicAnimConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimePhysicAnimConfig), 266540899U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGLS_ZombieCharacterCore, AAGLS_ZombieCharacterCore::StaticClass, TEXT("AAGLS_ZombieCharacterCore"), &Z_Registration_Info_UClass_AAGLS_ZombieCharacterCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGLS_ZombieCharacterCore), 3503406262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_4124137353(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_4TB_Z_unreal_engine_AGLS_v1_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieCharacterCore_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
