// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Pickups/AmmoPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickup() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_AAmmoPickup();
	BLASTER_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_APickup();
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void AAmmoPickup::StaticRegisterNativesAAmmoPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPickup);
	UClass* Z_Construct_UClass_AAmmoPickup_NoRegister()
	{
		return AAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickups/AmmoPickup.h" },
		{ "ModuleRelativePath", "Pickups/AmmoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoValue_MetaData[] = {
		{ "Category", "AmmoPickup" },
		{ "ModuleRelativePath", "Pickups/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoValue = { "AmmoValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, AmmoValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoValue_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoValue_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "AmmoPickup" },
		{ "ModuleRelativePath", "Pickups/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, WeaponType), Z_Construct_UEnum_Blaster_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType_MetaData) }; // 2640822722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickup_Statics::ClassParams = {
		&AAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAmmoPickup()
	{
		if (!Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton, Z_Construct_UClass_AAmmoPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<AAmmoPickup>()
	{
		return AAmmoPickup::StaticClass();
	}
	AAmmoPickup::AAmmoPickup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickup);
	AAmmoPickup::~AAmmoPickup() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Pickups_AmmoPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Pickups_AmmoPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPickup, AAmmoPickup::StaticClass, TEXT("AAmmoPickup"), &Z_Registration_Info_UClass_AAmmoPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPickup), 658905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Pickups_AmmoPickup_h_1625176215(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Pickups_AmmoPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Pickups_AmmoPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
