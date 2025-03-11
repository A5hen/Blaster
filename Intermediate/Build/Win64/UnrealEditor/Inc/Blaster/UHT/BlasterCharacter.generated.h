// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BlasterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef BLASTER_BlasterCharacter_generated_h
#error "BlasterCharacter.generated.h already included, missing '#pragma once' in BlasterCharacter.h"
#endif
#define BLASTER_BlasterCharacter_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_CALLBACK_WRAPPERS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterCharacter(ABlasterCharacter&&); \
	NO_API ABlasterCharacter(const ABlasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterCharacter) \
	NO_API virtual ~ABlasterCharacter();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_15_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_CALLBACK_WRAPPERS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
