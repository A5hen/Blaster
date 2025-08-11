// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/HUD/ReturnToMainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReturnToMainMenu() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_UReturnToMainMenu();
	BLASTER_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiPlayerSessionsSubsystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(UReturnToMainMenu::execReturnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReturnToMainMenu::execOnPlayerLeftGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLeftGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReturnToMainMenu::execOnDestroyedSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroyedSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void UReturnToMainMenu::StaticRegisterNativesUReturnToMainMenu()
	{
		UClass* Class = UReturnToMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDestroyedSession", &UReturnToMainMenu::execOnDestroyedSession },
			{ "OnPlayerLeftGame", &UReturnToMainMenu::execOnPlayerLeftGame },
			{ "ReturnButtonClicked", &UReturnToMainMenu::execReturnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics
	{
		struct ReturnToMainMenu_eventOnDestroyedSession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((ReturnToMainMenu_eventOnDestroyedSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReturnToMainMenu_eventOnDestroyedSession_Parms), &Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnDestroyedSession", nullptr, nullptr, Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::ReturnToMainMenu_eventOnDestroyedSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::ReturnToMainMenu_eventOnDestroyedSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnPlayerLeftGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "ReturnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReturnToMainMenu);
	UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister()
	{
		return UReturnToMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UReturnToMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiPlayerSessionsSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiPlayerSessionsSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReturnToMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReturnToMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnDestroyedSession, "OnDestroyedSession" }, // 2576470637
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame, "OnPlayerLeftGame" }, // 3707319479
		{ &Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked, "ReturnButtonClicked" }, // 1215034083
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ReturnToMainMenu.h" },
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton = { "ReturnButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, ReturnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton_MetaData), Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiPlayerSessionsSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiPlayerSessionsSubsystem = { "MultiPlayerSessionsSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, MultiPlayerSessionsSubsystem), Z_Construct_UClass_UMultiPlayerSessionsSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiPlayerSessionsSubsystem_MetaData), Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiPlayerSessionsSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiPlayerSessionsSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReturnToMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnToMainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReturnToMainMenu_Statics::ClassParams = {
		&UReturnToMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReturnToMainMenu()
	{
		if (!Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton, Z_Construct_UClass_UReturnToMainMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UReturnToMainMenu>()
	{
		return UReturnToMainMenu::StaticClass();
	}
	UReturnToMainMenu::UReturnToMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnToMainMenu);
	UReturnToMainMenu::~UReturnToMainMenu() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ReturnToMainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ReturnToMainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReturnToMainMenu, UReturnToMainMenu::StaticClass, TEXT("UReturnToMainMenu"), &Z_Registration_Info_UClass_UReturnToMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReturnToMainMenu), 1138346626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ReturnToMainMenu_h_117043338(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ReturnToMainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ReturnToMainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
