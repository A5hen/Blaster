// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponent/CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef BLASTER_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define BLASTER_CombatComponent_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerThrowGrenade_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual void MulticastShotGunFire_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets); \
	virtual bool ServerShotGunFire_Validate(TArray<FVector_NetQuantize> const& , float ); \
	virtual void ServerShotGunFire_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets, float FireDelay); \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual bool ServerFire_Validate(FVector_NetQuantize const& , float ); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget, float FireDelay); \
	virtual void ServerSetAimming_Implementation(bool bIsAimming); \
	virtual void ServerLaunchGrenade_Implementation(FVector_NetQuantize const& Target); \
 \
	DECLARE_FUNCTION(execOnRep_HoldingTheFlag); \
	DECLARE_FUNCTION(execOnRep_CombatState); \
	DECLARE_FUNCTION(execOnRep_Grenades); \
	DECLARE_FUNCTION(execOnRep_CarriedAmmo); \
	DECLARE_FUNCTION(execOnRep_Aimming); \
	DECLARE_FUNCTION(execOnRep_SecondaryWeapon); \
	DECLARE_FUNCTION(execOnRep_EquipWeapon); \
	DECLARE_FUNCTION(execServerThrowGrenade); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execMulticastShotGunFire); \
	DECLARE_FUNCTION(execServerShotGunFire); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAimming); \
	DECLARE_FUNCTION(execServerLaunchGrenade); \
	DECLARE_FUNCTION(execLaunchGrenade); \
	DECLARE_FUNCTION(execThrowGrenadeFinished); \
	DECLARE_FUNCTION(execShotGunShellReload); \
	DECLARE_FUNCTION(execFinishReload); \
	DECLARE_FUNCTION(execFinishSwapWeapons); \
	DECLARE_FUNCTION(execFinishSwap);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_CALLBACK_WRAPPERS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		SecondaryWeapon, \
		bAimming, \
		CarriedAmmo, \
		Grenades, \
		CombatState, \
		bHoldingTheFlag, \
		NETFIELD_REP_END=bHoldingTheFlag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_12_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_CALLBACK_WRAPPERS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
