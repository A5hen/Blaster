// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerStart/TeamPlayerStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamPlayerStart() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ATeamPlayerStart();
	BLASTER_API UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister();
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ETeam();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ATeamPlayerStart::StaticRegisterNativesATeamPlayerStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamPlayerStart);
	UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister()
	{
		return ATeamPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_ATeamPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "PlayerStart/TeamPlayerStart.h" },
		{ "ModuleRelativePath", "PlayerStart/TeamPlayerStart.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "TeamPlayerStart" },
		{ "ModuleRelativePath", "PlayerStart/TeamPlayerStart.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamPlayerStart, Team), Z_Construct_UEnum_Blaster_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_MetaData), Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_MetaData) }; // 2299747555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamPlayerStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamPlayerStart_Statics::ClassParams = {
		&ATeamPlayerStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATeamPlayerStart()
	{
		if (!Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton, Z_Construct_UClass_ATeamPlayerStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ATeamPlayerStart>()
	{
		return ATeamPlayerStart::StaticClass();
	}
	ATeamPlayerStart::ATeamPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamPlayerStart);
	ATeamPlayerStart::~ATeamPlayerStart() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerStart_TeamPlayerStart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerStart_TeamPlayerStart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeamPlayerStart, ATeamPlayerStart::StaticClass, TEXT("ATeamPlayerStart"), &Z_Registration_Info_UClass_ATeamPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamPlayerStart), 818442503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerStart_TeamPlayerStart_h_3222317470(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerStart_TeamPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerStart_TeamPlayerStart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
