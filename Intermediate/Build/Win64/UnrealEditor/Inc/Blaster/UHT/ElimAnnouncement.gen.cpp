// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/HUD/ElimAnnouncement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElimAnnouncement() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_UElimAnnouncement();
	BLASTER_API UClass* Z_Construct_UClass_UElimAnnouncement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void UElimAnnouncement::StaticRegisterNativesUElimAnnouncement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElimAnnouncement);
	UClass* Z_Construct_UClass_UElimAnnouncement_NoRegister()
	{
		return UElimAnnouncement::StaticClass();
	}
	struct Z_Construct_UClass_UElimAnnouncement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElimAnnouncement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElimAnnouncement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ElimAnnouncement.h" },
		{ "ModuleRelativePath", "HUD/ElimAnnouncement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ElimAnnouncement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementBox = { "AnnouncementBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimAnnouncement, AnnouncementBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementBox_MetaData), Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ElimAnnouncement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimAnnouncement, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementText_MetaData), Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElimAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimAnnouncement_Statics::NewProp_AnnouncementText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElimAnnouncement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElimAnnouncement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UElimAnnouncement_Statics::ClassParams = {
		&UElimAnnouncement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElimAnnouncement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncement_Statics::Class_MetaDataParams), Z_Construct_UClass_UElimAnnouncement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UElimAnnouncement()
	{
		if (!Z_Registration_Info_UClass_UElimAnnouncement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElimAnnouncement.OuterSingleton, Z_Construct_UClass_UElimAnnouncement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UElimAnnouncement.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UElimAnnouncement>()
	{
		return UElimAnnouncement::StaticClass();
	}
	UElimAnnouncement::UElimAnnouncement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElimAnnouncement);
	UElimAnnouncement::~UElimAnnouncement() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ElimAnnouncement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ElimAnnouncement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UElimAnnouncement, UElimAnnouncement::StaticClass, TEXT("UElimAnnouncement"), &Z_Registration_Info_UClass_UElimAnnouncement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElimAnnouncement), 2600852687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ElimAnnouncement_h_2195569803(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ElimAnnouncement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_ElimAnnouncement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
