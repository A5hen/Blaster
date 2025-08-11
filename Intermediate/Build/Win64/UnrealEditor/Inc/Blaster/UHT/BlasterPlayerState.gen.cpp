// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerState/BlasterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerState() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ETeam();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(ABlasterPlayerState::execOnRep_Team)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Team();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerState::execOnRep_Defeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Defeat();
		P_NATIVE_END;
	}
	void ABlasterPlayerState::StaticRegisterNativesABlasterPlayerState()
	{
		UClass* Class = ABlasterPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Defeat", &ABlasterPlayerState::execOnRep_Defeat },
			{ "OnRep_Team", &ABlasterPlayerState::execOnRep_Team },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerState, nullptr, "OnRep_Defeat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerState, nullptr, "OnRep_Team", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerState);
	UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister()
	{
		return ABlasterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defeat_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Defeat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlasterPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeat, "OnRep_Defeat" }, // 2136939762
		{ &Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team, "OnRep_Team" }, // 234035980
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/BlasterPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character_MetaData), Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller_MetaData), Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeat_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeat = { "Defeat", "OnRep_Defeat", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Defeat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeat_MetaData), Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeat_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team = { "Team", "OnRep_Team", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Team), Z_Construct_UEnum_Blaster_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_MetaData), Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_MetaData) }; // 2299747555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams = {
		&ABlasterPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABlasterPlayerState()
	{
		if (!Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton, Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterPlayerState>()
	{
		return ABlasterPlayerState::StaticClass();
	}

	void ABlasterPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Defeat(TEXT("Defeat"));
		static const FName Name_Team(TEXT("Team"));

		const bool bIsValid = true
			&& Name_Defeat == ClassReps[(int32)ENetFields_Private::Defeat].Property->GetFName()
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerState"));
	}
	ABlasterPlayerState::ABlasterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerState);
	ABlasterPlayerState::~ABlasterPlayerState() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerState, ABlasterPlayerState::StaticClass, TEXT("ABlasterPlayerState"), &Z_Registration_Info_UClass_ABlasterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerState), 553374421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_3813454788(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
