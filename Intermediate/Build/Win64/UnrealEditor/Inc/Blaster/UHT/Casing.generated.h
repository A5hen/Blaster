// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Casing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLASTER_Casing_generated_h
#error "Casing.generated.h already included, missing '#pragma once' in Casing.h"
#endif
#define BLASTER_Casing_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasing(); \
	friend struct Z_Construct_UClass_ACasing_Statics; \
public: \
	DECLARE_CLASS(ACasing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ACasing)


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACasing(ACasing&&); \
	NO_API ACasing(const ACasing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACasing) \
	NO_API virtual ~ACasing();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_9_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ACasing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_Casing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
