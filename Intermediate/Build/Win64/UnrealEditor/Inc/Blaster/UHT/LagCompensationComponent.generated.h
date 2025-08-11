// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponent/LagCompensationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABlasterCharacter;
struct FVector_NetQuantize100;
struct FVector_NetQuantize;
#ifdef BLASTER_LagCompensationComponent_generated_h
#error "LagCompensationComponent.generated.h already included, missing '#pragma once' in LagCompensationComponent.h"
#endif
#define BLASTER_LagCompensationComponent_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoxInfomation_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


template<> BLASTER_API UScriptStruct* StaticStruct<struct FBoxInfomation>();

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFramePackage_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


template<> BLASTER_API UScriptStruct* StaticStruct<struct FFramePackage>();

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


template<> BLASTER_API UScriptStruct* StaticStruct<struct FServerSideRewindResult>();

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


template<> BLASTER_API UScriptStruct* StaticStruct<struct FShotGunServerSideRewindResult>();

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ProjectileServerScoreRequest_Implementation(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialVelocity, float HitTime); \
	virtual void ShotGunServerScoreRequest_Implementation(TArray<ABlasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime); \
	virtual void ServerScoreRequest_Implementation(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime); \
 \
	DECLARE_FUNCTION(execProjectileServerScoreRequest); \
	DECLARE_FUNCTION(execShotGunServerScoreRequest); \
	DECLARE_FUNCTION(execServerScoreRequest);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_CALLBACK_WRAPPERS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULagCompensationComponent(); \
	friend struct Z_Construct_UClass_ULagCompensationComponent_Statics; \
public: \
	DECLARE_CLASS(ULagCompensationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ULagCompensationComponent)


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULagCompensationComponent(ULagCompensationComponent&&); \
	NO_API ULagCompensationComponent(const ULagCompensationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagCompensationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagCompensationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULagCompensationComponent) \
	NO_API virtual ~ULagCompensationComponent();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_63_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_CALLBACK_WRAPPERS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ULagCompensationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
