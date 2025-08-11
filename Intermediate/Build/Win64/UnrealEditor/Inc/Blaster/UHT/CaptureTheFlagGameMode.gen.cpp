// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/GameMode/CaptureTheFlagGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagGameMode() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ACaptureTheFlagGameMode();
	BLASTER_API UClass* Z_Construct_UClass_ACaptureTheFlagGameMode_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ATeamGameMode();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ACaptureTheFlagGameMode::StaticRegisterNativesACaptureTheFlagGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptureTheFlagGameMode);
	UClass* Z_Construct_UClass_ACaptureTheFlagGameMode_NoRegister()
	{
		return ACaptureTheFlagGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACaptureTheFlagGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATeamGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/CaptureTheFlagGameMode.h" },
		{ "ModuleRelativePath", "GameMode/CaptureTheFlagGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::ClassParams = {
		&ACaptureTheFlagGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACaptureTheFlagGameMode()
	{
		if (!Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ACaptureTheFlagGameMode>()
	{
		return ACaptureTheFlagGameMode::StaticClass();
	}
	ACaptureTheFlagGameMode::ACaptureTheFlagGameMode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagGameMode);
	ACaptureTheFlagGameMode::~ACaptureTheFlagGameMode() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_CaptureTheFlagGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_CaptureTheFlagGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagGameMode, ACaptureTheFlagGameMode::StaticClass, TEXT("ACaptureTheFlagGameMode"), &Z_Registration_Info_UClass_ACaptureTheFlagGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagGameMode), 1954325789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_CaptureTheFlagGameMode_h_3654815612(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_CaptureTheFlagGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_GameMode_CaptureTheFlagGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
