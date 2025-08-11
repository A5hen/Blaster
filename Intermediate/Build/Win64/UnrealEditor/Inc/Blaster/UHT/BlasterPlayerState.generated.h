// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/BlasterPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_BlasterPlayerState_generated_h
#error "BlasterPlayerState.generated.h already included, missing '#pragma once' in BlasterPlayerState.h"
#endif
#define BLASTER_BlasterPlayerState_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execOnRep_Defeat);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerState(); \
	friend struct Z_Construct_UClass_ABlasterPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Defeat=NETFIELD_REP_START, \
		Team, \
		NETFIELD_REP_END=Team	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterPlayerState(ABlasterPlayerState&&); \
	NO_API ABlasterPlayerState(const ABlasterPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerState) \
	NO_API virtual ~ABlasterPlayerState();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_13_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
