// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Weapon/ShotGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotGun() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_AHitScanWeapon();
	BLASTER_API UClass* Z_Construct_UClass_AShotGun();
	BLASTER_API UClass* Z_Construct_UClass_AShotGun_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void AShotGun::StaticRegisterNativesAShotGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotGun);
	UClass* Z_Construct_UClass_AShotGun_NoRegister()
	{
		return AShotGun::StaticClass();
	}
	struct Z_Construct_UClass_AShotGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPellets_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPellets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotGun_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGun_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ShotGun.h" },
		{ "ModuleRelativePath", "Weapon/ShotGun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGun_Statics::NewProp_NumberOfPellets_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Weapon/ShotGun.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AShotGun_Statics::NewProp_NumberOfPellets = { "NumberOfPellets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShotGun, NumberOfPellets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShotGun_Statics::NewProp_NumberOfPellets_MetaData), Z_Construct_UClass_AShotGun_Statics::NewProp_NumberOfPellets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGun_Statics::NewProp_NumberOfPellets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotGun_Statics::ClassParams = {
		&AShotGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShotGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShotGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShotGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AShotGun_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotGun_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShotGun()
	{
		if (!Z_Registration_Info_UClass_AShotGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotGun.OuterSingleton, Z_Construct_UClass_AShotGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShotGun.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<AShotGun>()
	{
		return AShotGun::StaticClass();
	}
	AShotGun::AShotGun() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotGun);
	AShotGun::~AShotGun() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShotGun, AShotGun::StaticClass, TEXT("AShotGun"), &Z_Registration_Info_UClass_AShotGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotGun), 555245802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_1462723144(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Weapon_ShotGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
