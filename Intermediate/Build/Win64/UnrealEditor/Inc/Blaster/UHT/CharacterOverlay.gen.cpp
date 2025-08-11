// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/HUD/CharacterOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterOverlay() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay();
	BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void UCharacterOverlay::StaticRegisterNativesUCharacterOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterOverlay);
	UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister()
	{
		return UCharacterOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RedTeamScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSpacerText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreSpacerText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueTeamScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefeatValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefeatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmoValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedAmmoValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchCountdownText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchCountdownText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadesValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadesValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/CharacterOverlay.h" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar = { "ShieldBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ShieldBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText = { "ShieldText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ShieldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreValue = { "ScoreValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ScoreValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreValue_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore = { "RedTeamScore", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, RedTeamScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText = { "ScoreSpacerText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ScoreSpacerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, BlueTeamScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatValue = { "DefeatValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, DefeatValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatValue_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoValue = { "WeaponAmmoValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponAmmoValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoValue_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoValue = { "CarriedAmmoValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, CarriedAmmoValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoValue_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText = { "MatchCountdownText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, MatchCountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadesValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadesValue = { "GrenadesValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, GrenadesValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadesValue_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadesValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage = { "HighPingImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation = { "HighPingAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation_MetaData), Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadesValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams = {
		&UCharacterOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterOverlay()
	{
		if (!Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton, Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UCharacterOverlay>()
	{
		return UCharacterOverlay::StaticClass();
	}
	UCharacterOverlay::UCharacterOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterOverlay);
	UCharacterOverlay::~UCharacterOverlay() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_CharacterOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_CharacterOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterOverlay, UCharacterOverlay::StaticClass, TEXT("UCharacterOverlay"), &Z_Registration_Info_UClass_UCharacterOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterOverlay), 4293276446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_CharacterOverlay_h_3353780733(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_CharacterOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_CharacterOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
