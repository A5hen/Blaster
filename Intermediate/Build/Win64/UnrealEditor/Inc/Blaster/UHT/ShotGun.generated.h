// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/ShotGun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_ShotGun_generated_h
#error "ShotGun.generated.h already included, missing '#pragma once' in ShotGun.h"
#endif
#define BLASTER_ShotGun_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShotGun(); \
	friend struct Z_Construct_UClass_AShotGun_Statics; \
public: \
	DECLARE_CLASS(AShotGun, AHitScanWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(AShotGun)


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShotGun(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShotGun(AShotGun&&); \
	NO_API AShotGun(const AShotGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShotGun) \
	NO_API virtual ~AShotGun();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_12_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class AShotGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
