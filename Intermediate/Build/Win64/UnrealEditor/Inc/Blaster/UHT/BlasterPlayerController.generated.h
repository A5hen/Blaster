// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/BlasterPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef BLASTER_BlasterPlayerController_generated_h
#error "BlasterPlayerController.generated.h already included, missing '#pragma once' in BlasterPlayerController.h"
#endif
#define BLASTER_BlasterPlayerController_generated_h

#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_9_DELEGATE \
BLASTER_API void FHighPingDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighPingDelegate, bool bHighPing);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_SPARSE_DATA
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerReportPingStatus_Implementation(bool bHighPing); \
	virtual void ClientElimAnnouncement_Implementation(APlayerState* Attacker, APlayerState* Victim); \
	virtual void ClientJoinMidGame_Implementation(FName StateOfMatch, float Warmup, float Match, float Cooldown, float StartTime); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ClientReportServerTime_Implementation(float ClientRequstTime, float ServerReceivedClientRequestTime); \
	virtual void ServerRequstServerTime_Implementation(float ClientRequstTime); \
 \
	DECLARE_FUNCTION(execServerReportPingStatus); \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execOnRep_ShowTeamScores); \
	DECLARE_FUNCTION(execClientElimAnnouncement); \
	DECLARE_FUNCTION(execClientJoinMidGame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequstServerTime);


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_ACCESSORS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_CALLBACK_WRAPPERS
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerController(); \
	friend struct Z_Construct_UClass_ABlasterPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bShowTeamScores=NETFIELD_REP_START, \
		MatchState, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterPlayerController(ABlasterPlayerController&&); \
	NO_API ABlasterPlayerController(const ABlasterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerController) \
	NO_API virtual ~ABlasterPlayerController();


#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_14_PROLOG
#define FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_SPARSE_DATA \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_ACCESSORS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_CALLBACK_WRAPPERS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
