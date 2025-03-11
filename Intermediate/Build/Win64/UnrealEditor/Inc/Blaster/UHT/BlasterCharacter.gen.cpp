// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Character/BlasterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterCharacter() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(ABlasterCharacter::execServerEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipButtonPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	static FName NAME_ABlasterCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
	void ABlasterCharacter::ServerEquipButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlasterCharacter_ServerEquipButtonPressed),NULL);
	}
	void ABlasterCharacter::StaticRegisterNativesABlasterCharacter()
	{
		UClass* Class = ABlasterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_OverlappingWeapon", &ABlasterCharacter::execOnRep_OverlappingWeapon },
			{ "ServerEquipButtonPressed", &ABlasterCharacter::execServerEquipButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct BlasterCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeapon* LastWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "ServerEquipButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterCharacter);
	UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister()
	{
		return ABlasterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraMoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EquipAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AimAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverHeadWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverHeadWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireWeaponMotage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireWeaponMotage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlasterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 388327165
		{ &Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 1763509450
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BlasterCharacter.h" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Input*/" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputContext_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraMoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraMoveAction = { "CameraMoveAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraMoveAction_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraMoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction = { "EquipAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, EquipAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverHeadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlasterCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Input*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverHeadWidget = { "OverHeadWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverHeadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverHeadWidget_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverHeadWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat_MetaData[] = {
		{ "Category", "BlasterCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Combat Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMotage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMotage = { "FireWeaponMotage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FireWeaponMotage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMotage_MetaData), Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMotage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraMoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverHeadWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMotage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams = {
		&ABlasterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABlasterCharacter()
	{
		if (!Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton, Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterCharacter>()
	{
		return ABlasterCharacter::StaticClass();
	}

	void ABlasterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));

		const bool bIsValid = true
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterCharacter);
	ABlasterCharacter::~ABlasterCharacter() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterCharacter, ABlasterCharacter::StaticClass, TEXT("ABlasterCharacter"), &Z_Registration_Info_UClass_ABlasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterCharacter), 3958825407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_1735726782(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
