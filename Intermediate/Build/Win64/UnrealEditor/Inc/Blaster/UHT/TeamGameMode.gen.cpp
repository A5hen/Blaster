// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/GameMode/TeamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamGameMode() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode();
	BLASTER_API UClass* Z_Construct_UClass_ATeamGameMode();
	BLASTER_API UClass* Z_Construct_UClass_ATeamGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ATeamGameMode::StaticRegisterNativesATeamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamGameMode);
	UClass* Z_Construct_UClass_ATeamGameMode_NoRegister()
	{
		return ATeamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATeamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlasterGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/TeamGameMode.h" },
		{ "ModuleRelativePath", "GameMode/TeamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamGameMode_Statics::ClassParams = {
		&ATeamGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATeamGameMode()
	{
		if (!Z_Registration_Info_UClass_ATeamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamGameMode.OuterSingleton, Z_Construct_UClass_ATeamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeamGameMode.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ATeamGameMode>()
	{
		return ATeamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamGameMode);
	ATeamGameMode::~ATeamGameMode() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_TeamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_TeamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeamGameMode, ATeamGameMode::StaticClass, TEXT("ATeamGameMode"), &Z_Registration_Info_UClass_ATeamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamGameMode), 3961627883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_TeamGameMode_h_4119917720(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_TeamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_TeamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
