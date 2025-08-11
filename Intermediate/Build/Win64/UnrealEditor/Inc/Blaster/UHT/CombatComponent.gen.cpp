// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterComponent/CombatComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ECombatState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(UCombatComponent::execOnRep_HoldingTheFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HoldingTheFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_CombatState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CombatState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_Grenades)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Grenades();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_CarriedAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CarriedAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_Aimming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Aimming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_SecondaryWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SecondaryWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_EquipWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquipWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerThrowGrenade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerThrowGrenade_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execMulticastShotGunFire)
	{
		P_GET_TARRAY(FVector_NetQuantize,Z_Param_TraceHitTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastShotGunFire_Implementation(Z_Param_TraceHitTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerShotGunFire)
	{
		P_GET_TARRAY(FVector_NetQuantize,Z_Param_TraceHitTargets);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FireDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerShotGunFire_Validate(Z_Param_TraceHitTargets,Z_Param_FireDelay))
		{
			RPC_ValidateFailed(TEXT("ServerShotGunFire_Validate"));
			return;
		}
		P_THIS->ServerShotGunFire_Implementation(Z_Param_TraceHitTargets,Z_Param_FireDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execMulticastFire)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation(Z_Param_TraceHitTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerFire)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FireDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerFire_Validate(Z_Param_TraceHitTarget,Z_Param_FireDelay))
		{
			RPC_ValidateFailed(TEXT("ServerFire_Validate"));
			return;
		}
		P_THIS->ServerFire_Implementation(Z_Param_TraceHitTarget,Z_Param_FireDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerSetAimming)
	{
		P_GET_UBOOL(Z_Param_bIsAimming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAimming_Implementation(Z_Param_bIsAimming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerLaunchGrenade)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLaunchGrenade_Implementation(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execLaunchGrenade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LaunchGrenade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execThrowGrenadeFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowGrenadeFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execShotGunShellReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShotGunShellReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execFinishReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execFinishSwapWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSwapWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execFinishSwap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSwap();
		P_NATIVE_END;
	}
	struct CombatComponent_eventMulticastFire_Parms
	{
		FVector_NetQuantize TraceHitTarget;
	};
	struct CombatComponent_eventMulticastShotGunFire_Parms
	{
		TArray<FVector_NetQuantize> TraceHitTargets;
	};
	struct CombatComponent_eventServerFire_Parms
	{
		FVector_NetQuantize TraceHitTarget;
		float FireDelay;
	};
	struct CombatComponent_eventServerLaunchGrenade_Parms
	{
		FVector_NetQuantize Target;
	};
	struct CombatComponent_eventServerSetAimming_Parms
	{
		bool bIsAimming;
	};
	struct CombatComponent_eventServerShotGunFire_Parms
	{
		TArray<FVector_NetQuantize> TraceHitTargets;
		float FireDelay;
	};
	static FName NAME_UCombatComponent_MulticastFire = FName(TEXT("MulticastFire"));
	void UCombatComponent::MulticastFire(FVector_NetQuantize const& TraceHitTarget)
	{
		CombatComponent_eventMulticastFire_Parms Parms;
		Parms.TraceHitTarget=TraceHitTarget;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_MulticastFire),&Parms);
	}
	static FName NAME_UCombatComponent_MulticastShotGunFire = FName(TEXT("MulticastShotGunFire"));
	void UCombatComponent::MulticastShotGunFire(TArray<FVector_NetQuantize> const& TraceHitTargets)
	{
		CombatComponent_eventMulticastShotGunFire_Parms Parms;
		Parms.TraceHitTargets=TraceHitTargets;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_MulticastShotGunFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerFire = FName(TEXT("ServerFire"));
	void UCombatComponent::ServerFire(FVector_NetQuantize const& TraceHitTarget, float FireDelay)
	{
		CombatComponent_eventServerFire_Parms Parms;
		Parms.TraceHitTarget=TraceHitTarget;
		Parms.FireDelay=FireDelay;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerLaunchGrenade = FName(TEXT("ServerLaunchGrenade"));
	void UCombatComponent::ServerLaunchGrenade(FVector_NetQuantize const& Target)
	{
		CombatComponent_eventServerLaunchGrenade_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerLaunchGrenade),&Parms);
	}
	static FName NAME_UCombatComponent_ServerReload = FName(TEXT("ServerReload"));
	void UCombatComponent::ServerReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerReload),NULL);
	}
	static FName NAME_UCombatComponent_ServerSetAimming = FName(TEXT("ServerSetAimming"));
	void UCombatComponent::ServerSetAimming(bool bIsAimming)
	{
		CombatComponent_eventServerSetAimming_Parms Parms;
		Parms.bIsAimming=bIsAimming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerSetAimming),&Parms);
	}
	static FName NAME_UCombatComponent_ServerShotGunFire = FName(TEXT("ServerShotGunFire"));
	void UCombatComponent::ServerShotGunFire(TArray<FVector_NetQuantize> const& TraceHitTargets, float FireDelay)
	{
		CombatComponent_eventServerShotGunFire_Parms Parms;
		Parms.TraceHitTargets=TraceHitTargets;
		Parms.FireDelay=FireDelay;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerShotGunFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerThrowGrenade = FName(TEXT("ServerThrowGrenade"));
	void UCombatComponent::ServerThrowGrenade()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerThrowGrenade),NULL);
	}
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
		UClass* Class = UCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishReload", &UCombatComponent::execFinishReload },
			{ "FinishSwap", &UCombatComponent::execFinishSwap },
			{ "FinishSwapWeapons", &UCombatComponent::execFinishSwapWeapons },
			{ "LaunchGrenade", &UCombatComponent::execLaunchGrenade },
			{ "MulticastFire", &UCombatComponent::execMulticastFire },
			{ "MulticastShotGunFire", &UCombatComponent::execMulticastShotGunFire },
			{ "OnRep_Aimming", &UCombatComponent::execOnRep_Aimming },
			{ "OnRep_CarriedAmmo", &UCombatComponent::execOnRep_CarriedAmmo },
			{ "OnRep_CombatState", &UCombatComponent::execOnRep_CombatState },
			{ "OnRep_EquipWeapon", &UCombatComponent::execOnRep_EquipWeapon },
			{ "OnRep_Grenades", &UCombatComponent::execOnRep_Grenades },
			{ "OnRep_HoldingTheFlag", &UCombatComponent::execOnRep_HoldingTheFlag },
			{ "OnRep_SecondaryWeapon", &UCombatComponent::execOnRep_SecondaryWeapon },
			{ "ServerFire", &UCombatComponent::execServerFire },
			{ "ServerLaunchGrenade", &UCombatComponent::execServerLaunchGrenade },
			{ "ServerReload", &UCombatComponent::execServerReload },
			{ "ServerSetAimming", &UCombatComponent::execServerSetAimming },
			{ "ServerShotGunFire", &UCombatComponent::execServerShotGunFire },
			{ "ServerThrowGrenade", &UCombatComponent::execServerThrowGrenade },
			{ "ShotGunShellReload", &UCombatComponent::execShotGunShellReload },
			{ "ThrowGrenadeFinished", &UCombatComponent::execThrowGrenadeFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatComponent_FinishReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_FinishReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_FinishReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_FinishSwap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_FinishSwap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishSwap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishSwap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishSwap_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_FinishSwap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishSwap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishSwapWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "LaunchGrenade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_LaunchGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventMulticastFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData), Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData) }; // 561190916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "MulticastFire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers), sizeof(CombatComponent_eventMulticastFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatComponent_eventMulticastFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponent_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceHitTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets_Inner = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventMulticastShotGunFire_Parms, TraceHitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets_MetaData), Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets_MetaData) }; // 561190916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::NewProp_TraceHitTargets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "MulticastShotGunFire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::PropPointers), sizeof(CombatComponent_eventMulticastShotGunFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatComponent_eventMulticastShotGunFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_Aimming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_Aimming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_Aimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_Aimming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_Aimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_Aimming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_Aimming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_Aimming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CarriedAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CombatState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_EquipWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_Grenades", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_Grenades()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_HoldingTheFlag", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_SecondaryWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData), Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData) }; // 561190916
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerFire_Parms, FireDelay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_FireDelay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerFire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers), sizeof(CombatComponent_eventServerFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatComponent_eventServerFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerLaunchGrenade_Parms, Target), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::NewProp_Target_MetaData) }; // 561190916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerLaunchGrenade", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::PropPointers), sizeof(CombatComponent_eventServerLaunchGrenade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatComponent_eventServerLaunchGrenade_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Grenade*/" },
#endif
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grenade" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics
	{
		static void NewProp_bIsAimming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAimming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::NewProp_bIsAimming_SetBit(void* Obj)
	{
		((CombatComponent_eventServerSetAimming_Parms*)Obj)->bIsAimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::NewProp_bIsAimming = { "bIsAimming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventServerSetAimming_Parms), &Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::NewProp_bIsAimming_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::NewProp_bIsAimming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerSetAimming", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::PropPointers), sizeof(CombatComponent_eventServerSetAimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatComponent_eventServerSetAimming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerSetAimming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerSetAimming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceHitTargets;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets_Inner = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerShotGunFire_Parms, TraceHitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets_MetaData), Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets_MetaData) }; // 561190916
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerShotGunFire_Parms, FireDelay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_TraceHitTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::NewProp_FireDelay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerShotGunFire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::PropPointers), sizeof(CombatComponent_eventServerShotGunFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatComponent_eventServerShotGunFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerShotGunFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerShotGunFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerThrowGrenade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ShotGunShellReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ShotGunShellReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ShotGunShellReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ShotGunShellReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ShotGunShellReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ShotGunShellReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ShotGunShellReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ShotGunShellReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ThrowGrenadeFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
	UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
	{
		return UCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimming_MetaData[];
#endif
		static void NewProp_bAimming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CarriedAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCarriedAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCarriedAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ARAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RocketAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RocketAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PistolAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PistolAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmachineGunAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmachineGunAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotGunAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotGunAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperRifleAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SniperRifleAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeLauncherAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeLauncherAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrenades_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGrenades;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grenades_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Grenades;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldingTheFlag_MetaData[];
#endif
		static void NewProp_bHoldingTheFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldingTheFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheFlag_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_FinishReload, "FinishReload" }, // 3617900755
		{ &Z_Construct_UFunction_UCombatComponent_FinishSwap, "FinishSwap" }, // 584157087
		{ &Z_Construct_UFunction_UCombatComponent_FinishSwapWeapons, "FinishSwapWeapons" }, // 2279688278
		{ &Z_Construct_UFunction_UCombatComponent_LaunchGrenade, "LaunchGrenade" }, // 1684466023
		{ &Z_Construct_UFunction_UCombatComponent_MulticastFire, "MulticastFire" }, // 1004522852
		{ &Z_Construct_UFunction_UCombatComponent_MulticastShotGunFire, "MulticastShotGunFire" }, // 2949639969
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_Aimming, "OnRep_Aimming" }, // 3755861423
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo, "OnRep_CarriedAmmo" }, // 1498811941
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CombatState, "OnRep_CombatState" }, // 2748731060
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon, "OnRep_EquipWeapon" }, // 3415789069
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_Grenades, "OnRep_Grenades" }, // 1062118391
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_HoldingTheFlag, "OnRep_HoldingTheFlag" }, // 3250420510
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon, "OnRep_SecondaryWeapon" }, // 185743367
		{ &Z_Construct_UFunction_UCombatComponent_ServerFire, "ServerFire" }, // 691721986
		{ &Z_Construct_UFunction_UCombatComponent_ServerLaunchGrenade, "ServerLaunchGrenade" }, // 1487859825
		{ &Z_Construct_UFunction_UCombatComponent_ServerReload, "ServerReload" }, // 865719370
		{ &Z_Construct_UFunction_UCombatComponent_ServerSetAimming, "ServerSetAimming" }, // 174979745
		{ &Z_Construct_UFunction_UCombatComponent_ServerShotGunFire, "ServerShotGunFire" }, // 3937105416
		{ &Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade, "ServerThrowGrenade" }, // 4181836293
		{ &Z_Construct_UFunction_UCombatComponent_ShotGunShellReload, "ShotGunShellReload" }, // 564571879
		{ &Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished, "ThrowGrenadeFinished" }, // 3423610480
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlasterComponent/CombatComponent.h" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass = { "GrenadeClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, GrenadeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, HUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquipWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", "OnRep_SecondaryWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, SecondaryWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_SetBit(void* Obj)
	{
		((UCombatComponent*)Obj)->bAimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming = { "bAimming", "OnRep_Aimming", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed = { "BaseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, BaseWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AimWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ZoomedFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedInterpSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedInterpSpeed = { "ZoomedInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ZoomedInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedInterpSpeed_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Carried Ammo*/" },
#endif
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carried Ammo" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo = { "CarriedAmmo", "OnRep_CarriedAmmo", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CarriedAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo = { "MaxCarriedAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, MaxCarriedAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ARAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ARAmmo = { "ARAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ARAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ARAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_ARAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_RocketAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_RocketAmmo = { "RocketAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, RocketAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_RocketAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_RocketAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_PistolAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_PistolAmmo = { "PistolAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, PistolAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_PistolAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_PistolAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_SubmachineGunAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SubmachineGunAmmo = { "SubmachineGunAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, SubmachineGunAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_SubmachineGunAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_SubmachineGunAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ShotGunAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ShotGunAmmo = { "ShotGunAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ShotGunAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ShotGunAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_ShotGunAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_SniperRifleAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SniperRifleAmmo = { "SniperRifleAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, SniperRifleAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_SniperRifleAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_SniperRifleAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeLauncherAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeLauncherAmmo = { "GrenadeLauncherAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, GrenadeLauncherAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeLauncherAmmo_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeLauncherAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades = { "MaxGrenades", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, MaxGrenades), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades = { "Grenades", "OnRep_Grenades", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Grenades), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Combat State*/" },
#endif
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat State" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState = { "CombatState", "OnRep_CombatState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CombatState), Z_Construct_UEnum_Blaster_ECombatState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData) }; // 2579312988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag_SetBit(void* Obj)
	{
		((UCombatComponent*)Obj)->bHoldingTheFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag = { "bHoldingTheFlag", "OnRep_HoldingTheFlag", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_TheFlag_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_TheFlag = { "TheFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, TheFlag), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_TheFlag_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_TheFlag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ARAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_RocketAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_PistolAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SubmachineGunAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ShotGunAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SniperRifleAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeLauncherAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bHoldingTheFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_TheFlag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
		&UCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UCombatComponent>()
	{
		return UCombatComponent::StaticClass();
	}

	void UCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
		static const FName Name_SecondaryWeapon(TEXT("SecondaryWeapon"));
		static const FName Name_bAimming(TEXT("bAimming"));
		static const FName Name_CarriedAmmo(TEXT("CarriedAmmo"));
		static const FName Name_Grenades(TEXT("Grenades"));
		static const FName Name_CombatState(TEXT("CombatState"));
		static const FName Name_bHoldingTheFlag(TEXT("bHoldingTheFlag"));

		const bool bIsValid = true
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_SecondaryWeapon == ClassReps[(int32)ENetFields_Private::SecondaryWeapon].Property->GetFName()
			&& Name_bAimming == ClassReps[(int32)ENetFields_Private::bAimming].Property->GetFName()
			&& Name_CarriedAmmo == ClassReps[(int32)ENetFields_Private::CarriedAmmo].Property->GetFName()
			&& Name_Grenades == ClassReps[(int32)ENetFields_Private::Grenades].Property->GetFName()
			&& Name_CombatState == ClassReps[(int32)ENetFields_Private::CombatState].Property->GetFName()
			&& Name_bHoldingTheFlag == ClassReps[(int32)ENetFields_Private::bHoldingTheFlag].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	UCombatComponent::~UCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 1945327634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_1654615354(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
