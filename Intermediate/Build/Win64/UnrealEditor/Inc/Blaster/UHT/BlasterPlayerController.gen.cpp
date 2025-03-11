// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerController/BlasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerController);
	UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
	{
		return ABlasterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
		&ABlasterPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABlasterPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterPlayerController>()
	{
		return ABlasterPlayerController::StaticClass();
	}
	ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
	ABlasterPlayerController::~ABlasterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 2650254735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_2993006211(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
