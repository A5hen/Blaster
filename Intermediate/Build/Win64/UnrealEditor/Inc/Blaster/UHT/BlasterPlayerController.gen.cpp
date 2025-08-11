// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerController/BlasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	BLASTER_API UFunction* Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics
	{
		struct _Script_Blaster_eventHighPingDelegate_Parms
		{
			bool bHighPing;
		};
		static void NewProp_bHighPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::NewProp_bHighPing_SetBit(void* Obj)
	{
		((_Script_Blaster_eventHighPingDelegate_Parms*)Obj)->bHighPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::NewProp_bHighPing = { "bHighPing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Blaster_eventHighPingDelegate_Parms), &Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::NewProp_bHighPing_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::NewProp_bHighPing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blaster, nullptr, "HighPingDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::_Script_Blaster_eventHighPingDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::_Script_Blaster_eventHighPingDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHighPingDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighPingDelegate, bool bHighPing)
{
	struct _Script_Blaster_eventHighPingDelegate_Parms
	{
		bool bHighPing;
	};
	_Script_Blaster_eventHighPingDelegate_Parms Parms;
	Parms.bHighPing=bHighPing ? true : false;
	HighPingDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ABlasterPlayerController::execServerReportPingStatus)
	{
		P_GET_UBOOL(Z_Param_bHighPing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReportPingStatus_Implementation(Z_Param_bHighPing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execOnRep_MatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execOnRep_ShowTeamScores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShowTeamScores();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execClientElimAnnouncement)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Attacker);
		P_GET_OBJECT(APlayerState,Z_Param_Victim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientElimAnnouncement_Implementation(Z_Param_Attacker,Z_Param_Victim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execClientJoinMidGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_Match,Z_Param_Cooldown,Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execServerCheckMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCheckMatchState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execClientReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientRequstTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerReceivedClientRequestTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReportServerTime_Implementation(Z_Param_ClientRequstTime,Z_Param_ServerReceivedClientRequestTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execServerRequstServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientRequstTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequstServerTime_Implementation(Z_Param_ClientRequstTime);
		P_NATIVE_END;
	}
	struct BlasterPlayerController_eventClientElimAnnouncement_Parms
	{
		APlayerState* Attacker;
		APlayerState* Victim;
	};
	struct BlasterPlayerController_eventClientJoinMidGame_Parms
	{
		FName StateOfMatch;
		float Warmup;
		float Match;
		float Cooldown;
		float StartTime;
	};
	struct BlasterPlayerController_eventClientReportServerTime_Parms
	{
		float ClientRequstTime;
		float ServerReceivedClientRequestTime;
	};
	struct BlasterPlayerController_eventServerReportPingStatus_Parms
	{
		bool bHighPing;
	};
	struct BlasterPlayerController_eventServerRequstServerTime_Parms
	{
		float ClientRequstTime;
	};
	static FName NAME_ABlasterPlayerController_ClientElimAnnouncement = FName(TEXT("ClientElimAnnouncement"));
	void ABlasterPlayerController::ClientElimAnnouncement(APlayerState* Attacker, APlayerState* Victim)
	{
		BlasterPlayerController_eventClientElimAnnouncement_Parms Parms;
		Parms.Attacker=Attacker;
		Parms.Victim=Victim;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ClientElimAnnouncement),&Parms);
	}
	static FName NAME_ABlasterPlayerController_ClientJoinMidGame = FName(TEXT("ClientJoinMidGame"));
	void ABlasterPlayerController::ClientJoinMidGame(FName StateOfMatch, float Warmup, float Match, float Cooldown, float StartTime)
	{
		BlasterPlayerController_eventClientJoinMidGame_Parms Parms;
		Parms.StateOfMatch=StateOfMatch;
		Parms.Warmup=Warmup;
		Parms.Match=Match;
		Parms.Cooldown=Cooldown;
		Parms.StartTime=StartTime;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ClientJoinMidGame),&Parms);
	}
	static FName NAME_ABlasterPlayerController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
	void ABlasterPlayerController::ClientReportServerTime(float ClientRequstTime, float ServerReceivedClientRequestTime)
	{
		BlasterPlayerController_eventClientReportServerTime_Parms Parms;
		Parms.ClientRequstTime=ClientRequstTime;
		Parms.ServerReceivedClientRequestTime=ServerReceivedClientRequestTime;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ClientReportServerTime),&Parms);
	}
	static FName NAME_ABlasterPlayerController_ServerCheckMatchState = FName(TEXT("ServerCheckMatchState"));
	void ABlasterPlayerController::ServerCheckMatchState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ServerCheckMatchState),NULL);
	}
	static FName NAME_ABlasterPlayerController_ServerReportPingStatus = FName(TEXT("ServerReportPingStatus"));
	void ABlasterPlayerController::ServerReportPingStatus(bool bHighPing)
	{
		BlasterPlayerController_eventServerReportPingStatus_Parms Parms;
		Parms.bHighPing=bHighPing ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ServerReportPingStatus),&Parms);
	}
	static FName NAME_ABlasterPlayerController_ServerRequstServerTime = FName(TEXT("ServerRequstServerTime"));
	void ABlasterPlayerController::ServerRequstServerTime(float ClientRequstTime)
	{
		BlasterPlayerController_eventServerRequstServerTime_Parms Parms;
		Parms.ClientRequstTime=ClientRequstTime;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ServerRequstServerTime),&Parms);
	}
	void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
	{
		UClass* Class = ABlasterPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientElimAnnouncement", &ABlasterPlayerController::execClientElimAnnouncement },
			{ "ClientJoinMidGame", &ABlasterPlayerController::execClientJoinMidGame },
			{ "ClientReportServerTime", &ABlasterPlayerController::execClientReportServerTime },
			{ "OnRep_MatchState", &ABlasterPlayerController::execOnRep_MatchState },
			{ "OnRep_ShowTeamScores", &ABlasterPlayerController::execOnRep_ShowTeamScores },
			{ "ServerCheckMatchState", &ABlasterPlayerController::execServerCheckMatchState },
			{ "ServerReportPingStatus", &ABlasterPlayerController::execServerReportPingStatus },
			{ "ServerRequstServerTime", &ABlasterPlayerController::execServerRequstServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientElimAnnouncement_Parms, Attacker), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientElimAnnouncement_Parms, Victim), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Attacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Victim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientElimAnnouncement", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::PropPointers), sizeof(BlasterPlayerController_eventClientElimAnnouncement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::PropPointers) < 2048);
	static_assert(sizeof(BlasterPlayerController_eventClientElimAnnouncement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, StateOfMatch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Warmup), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Match), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Cooldown), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientJoinMidGame", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers), sizeof(BlasterPlayerController_eventClientJoinMidGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(BlasterPlayerController_eventClientJoinMidGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientRequstTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerReceivedClientRequestTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_ClientRequstTime = { "ClientRequstTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientReportServerTime_Parms, ClientRequstTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_ServerReceivedClientRequestTime = { "ServerReceivedClientRequestTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientReportServerTime_Parms, ServerReceivedClientRequestTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_ClientRequstTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_ServerReceivedClientRequestTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reports the current Server time to the Client in response to ServerRequstServerTime\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reports the current Server time to the Client in response to ServerRequstServerTime" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientReportServerTime", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers), sizeof(BlasterPlayerController_eventClientReportServerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(BlasterPlayerController_eventClientReportServerTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "OnRep_MatchState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "OnRep_ShowTeamScores", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerCheckMatchState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics
	{
		static void NewProp_bHighPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing_SetBit(void* Obj)
	{
		((BlasterPlayerController_eventServerReportPingStatus_Parms*)Obj)->bHighPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing = { "bHighPing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlasterPlayerController_eventServerReportPingStatus_Parms), &Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerReportPingStatus", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::PropPointers), sizeof(BlasterPlayerController_eventServerReportPingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(BlasterPlayerController_eventServerReportPingStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientRequstTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::NewProp_ClientRequstTime = { "ClientRequstTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventServerRequstServerTime_Parms, ClientRequstTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::NewProp_ClientRequstTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sync time between Server and Client*///Requests the current Server time, passing in the Client's time when the request was sent\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sync time between Server and Client//Requests the current Server time, passing in the Client's time when the request was sent" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerRequstServerTime", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::PropPointers), sizeof(BlasterPlayerController_eventServerRequstServerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(BlasterPlayerController_eventServerRequstServerTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerController);
	UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
	{
		return ABlasterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTeamScores_MetaData[];
#endif
		static void NewProp_bShowTeamScores_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTeamScores;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckPingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReturnAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenuWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnToMainMenuWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlasterPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientElimAnnouncement, "ClientElimAnnouncement" }, // 3610179640
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame, "ClientJoinMidGame" }, // 3207465578
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 44409345
		{ &Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 135339606
		{ &Z_Construct_UFunction_ABlasterPlayerController_OnRep_ShowTeamScores, "OnRep_ShowTeamScores" }, // 1473766669
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState, "ServerCheckMatchState" }, // 2085783428
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerReportPingStatus, "ServerReportPingStatus" }, // 4247103333
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerRequstServerTime, "ServerRequstServerTime" }, // 4229238981
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Difference between Server and Client Time\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difference between Server and Client Time" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, TimeSyncFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores_SetBit(void* Obj)
	{
		((ABlasterPlayerController*)Obj)->bShowTeamScores = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores = { "bShowTeamScores", "OnRep_ShowTeamScores", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlasterPlayerController), &Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD = { "BlasterHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterHUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode = { "BlasterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterGameMode), Z_Construct_UClass_ABlasterGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, MatchState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration_MetaData[] = {
		{ "Category", "BlasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration = { "HighPingDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, HighPingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency_MetaData[] = {
		{ "Category", "BlasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency = { "CheckPingFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, CheckPingFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold_MetaData[] = {
		{ "Category", "BlasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold = { "HighPingThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, HighPingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_InputContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Input*/" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_InputContext_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_InputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnAction = { "ReturnAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, ReturnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnAction_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Return to MainMenu*/" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return to MainMenu" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidgetClass = { "ReturnToMainMenuWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, ReturnToMainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidgetClass_MetaData), Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_bShowTeamScores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
		&ABlasterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABlasterPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterPlayerController>()
	{
		return ABlasterPlayerController::StaticClass();
	}

	void ABlasterPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bShowTeamScores(TEXT("bShowTeamScores"));
		static const FName Name_MatchState(TEXT("MatchState"));

		const bool bIsValid = true
			&& Name_bShowTeamScores == ClassReps[(int32)ENetFields_Private::bShowTeamScores].Property->GetFName()
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerController"));
	}
	ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
	ABlasterPlayerController::~ABlasterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 3306045403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_878472947(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
