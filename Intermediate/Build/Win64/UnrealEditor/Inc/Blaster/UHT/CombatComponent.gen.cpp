// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterComponent/CombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(UCombatComponent::execMulticastFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_EquipWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquipWeapon();
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
	struct CombatComponent_eventServerSetAimming_Parms
	{
		bool bIsAimming;
	};
	static FName NAME_UCombatComponent_MulticastFire = FName(TEXT("MulticastFire"));
	void UCombatComponent::MulticastFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_MulticastFire),NULL);
	}
	static FName NAME_UCombatComponent_ServerFire = FName(TEXT("ServerFire"));
	void UCombatComponent::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerFire),NULL);
	}
	static FName NAME_UCombatComponent_ServerSetAimming = FName(TEXT("ServerSetAimming"));
	void UCombatComponent::ServerSetAimming(bool bIsAimming)
	{
		CombatComponent_eventServerSetAimming_Parms Parms;
		Parms.bIsAimming=bIsAimming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerSetAimming),&Parms);
	}
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
		UClass* Class = UCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastFire", &UCombatComponent::execMulticastFire },
			{ "OnRep_EquipWeapon", &UCombatComponent::execOnRep_EquipWeapon },
			{ "ServerFire", &UCombatComponent::execServerFire },
			{ "ServerSetAimming", &UCombatComponent::execServerSetAimming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "MulticastFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_EquipWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
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
		{ &Z_Construct_UFunction_UCombatComponent_MulticastFire, "MulticastFire" }, // 900338520
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquipWeapon, "OnRep_EquipWeapon" }, // 3470138021
		{ &Z_Construct_UFunction_UCombatComponent_ServerFire, "ServerFire" }, // 569543726
		{ &Z_Construct_UFunction_UCombatComponent_ServerSetAimming, "ServerSetAimming" }, // 174979745
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquipWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_SetBit(void* Obj)
	{
		((UCombatComponent*)Obj)->bAimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming = { "bAimming", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming_MetaData) };
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAimming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
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
		static const FName Name_bAimming(TEXT("bAimming"));

		const bool bIsValid = true
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_bAimming == ClassReps[(int32)ENetFields_Private::bAimming].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	UCombatComponent::~UCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 3789691475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_3034269334(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
