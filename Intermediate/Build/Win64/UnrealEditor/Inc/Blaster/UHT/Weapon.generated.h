// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLASTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define BLASTER_Weapon_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientAddAmmo_Implementation(int32 AmmoToAdd); \
	virtual void ClientUpdateAmmo_Implementation(int32 ServerAmmo); \
 \
	DECLARE_FUNCTION(execClientAddAmmo); \
	DECLARE_FUNCTION(execClientUpdateAmmo); \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execOnPingTooHigh); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_CALLBACK_WRAPPERS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bUseServerSideRewind=NETFIELD_REP_START, \
		WeaponState, \
		NETFIELD_REP_END=WeaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_32_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_CALLBACK_WRAPPERS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Weapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::EWS_Initial) \
	op(EWeaponState::EWS_Equipped) \
	op(EWeaponState::EWS_EquippedSecondary) \
	op(EWeaponState::EWS_Dropped) \
	op(EWeaponState::EWS_Max) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<EWeaponState>();

#define FOREACH_ENUM_EFIRETYPE(op) \
	op(EFireType::EFT_Projectile) \
	op(EFireType::EFT_HitScan) \
	op(EFireType::EFT_ShotGun) \
	op(EFireType::EFT_Max) 

enum class EFireType : uint8;
template<> struct TIsUEnumClass<EFireType> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<EFireType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
