// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Weapon/ProjectileWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileWeapon() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_AProjectileWeapon();
	BLASTER_API UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void AProjectileWeapon::StaticRegisterNativesAProjectileWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileWeapon);
	UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister()
	{
		return AProjectileWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ProjectileWeapon.h" },
		{ "ModuleRelativePath", "Weapon/ProjectileWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams = {
		&AProjectileWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProjectileWeapon()
	{
		if (!Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton, Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<AProjectileWeapon>()
	{
		return AProjectileWeapon::StaticClass();
	}
	AProjectileWeapon::AProjectileWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileWeapon);
	AProjectileWeapon::~AProjectileWeapon() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ProjectileWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ProjectileWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileWeapon, AProjectileWeapon::StaticClass, TEXT("AProjectileWeapon"), &Z_Registration_Info_UClass_AProjectileWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileWeapon), 3677504699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ProjectileWeapon_h_3328531902(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ProjectileWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ProjectileWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
