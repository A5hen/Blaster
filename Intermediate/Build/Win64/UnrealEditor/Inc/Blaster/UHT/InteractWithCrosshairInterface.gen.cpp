// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Interface/InteractWithCrosshairInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractWithCrosshairInterface() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairInterface();
	BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void UInteractWithCrosshairInterface::StaticRegisterNativesUInteractWithCrosshairInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractWithCrosshairInterface);
	UClass* Z_Construct_UClass_UInteractWithCrosshairInterface_NoRegister()
	{
		return UInteractWithCrosshairInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractWithCrosshairInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/InteractWithCrosshairInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractWithCrosshairInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::ClassParams = {
		&UInteractWithCrosshairInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractWithCrosshairInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractWithCrosshairInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractWithCrosshairInterface.OuterSingleton, Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractWithCrosshairInterface.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UInteractWithCrosshairInterface>()
	{
		return UInteractWithCrosshairInterface::StaticClass();
	}
	UInteractWithCrosshairInterface::UInteractWithCrosshairInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractWithCrosshairInterface);
	UInteractWithCrosshairInterface::~UInteractWithCrosshairInterface() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Interface_InteractWithCrosshairInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Interface_InteractWithCrosshairInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractWithCrosshairInterface, UInteractWithCrosshairInterface::StaticClass, TEXT("UInteractWithCrosshairInterface"), &Z_Registration_Info_UClass_UInteractWithCrosshairInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractWithCrosshairInterface), 505816164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Interface_InteractWithCrosshairInterface_h_1048833628(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Interface_InteractWithCrosshairInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Interface_InteractWithCrosshairInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
