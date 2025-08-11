// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/HUD/BlasterHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterHUD() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UAnouncement_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UElimAnnouncement_NoRegister();
	BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HUDPackage;
class UScriptStruct* FHUDPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDPackage, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("HUDPackage"));
	}
	return Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton;
}
template<> BLASTER_API UScriptStruct* StaticStruct<FHUDPackage>()
{
	return FHUDPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHUDPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDPackage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
		nullptr,
		&NewStructOps,
		"HUDPackage",
		nullptr,
		0,
		sizeof(FHUDPackage),
		alignof(FHUDPackage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton, Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton;
	}
	DEFINE_FUNCTION(ABlasterHUD::execElimAnnouncementTimerFinished)
	{
		P_GET_OBJECT(UElimAnnouncement,Z_Param_MsgToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElimAnnouncementTimerFinished(Z_Param_MsgToRemove);
		P_NATIVE_END;
	}
	void ABlasterHUD::StaticRegisterNativesABlasterHUD()
	{
		UClass* Class = ABlasterHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ElimAnnouncementTimerFinished", &ABlasterHUD::execElimAnnouncementTimerFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics
	{
		struct BlasterHUD_eventElimAnnouncementTimerFinished_Parms
		{
			UElimAnnouncement* MsgToRemove;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MsgToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MsgToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove = { "MsgToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterHUD_eventElimAnnouncementTimerFinished_Parms, MsgToRemove), Z_Construct_UClass_UElimAnnouncement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove_MetaData), Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterHUD, nullptr, "ElimAnnouncementTimerFinished", nullptr, nullptr, Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::BlasterHUD_eventElimAnnouncementTimerFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::BlasterHUD_eventElimAnnouncementTimerFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterHUD);
	UClass* Z_Construct_UClass_ABlasterHUD_NoRegister()
	{
		return ABlasterHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnnouncementClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Announcement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Announcement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimAnnouncementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ElimAnnouncementClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimAnnouncementTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimAnnouncementTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ElimMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlasterHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished, "ElimAnnouncementTimerFinished" }, // 1343593423
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/BlasterHUD.h" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass_MetaData[] = {
		{ "Category", "PlayerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Overlay*/" },
#endif
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlay" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass = { "CharacterOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CharacterOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementClass_MetaData[] = {
		{ "Category", "Announcement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Announcement*/" },
#endif
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Announcement" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementClass = { "AnnouncementClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, AnnouncementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementClass_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Announcement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Announcement = { "Announcement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, Announcement), Z_Construct_UClass_UAnouncement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Announcement_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Announcement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass_MetaData[] = {
		{ "Category", "ElimAnnouncement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ElimAnnouncement*/" },
#endif
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ElimAnnouncement" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass = { "ElimAnnouncementClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, ElimAnnouncementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UElimAnnouncement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime_MetaData[] = {
		{ "Category", "BlasterHUD" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime = { "ElimAnnouncementTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, ElimAnnouncementTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages_Inner = { "ElimMessages", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UElimAnnouncement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages = { "ElimMessages", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, ElimMessages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax_MetaData[] = {
		{ "Category", "BlasterHUD" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax = { "CrosshairSpreadMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CrosshairSpreadMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax_MetaData), Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Announcement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterHUD_Statics::ClassParams = {
		&ABlasterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlasterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABlasterHUD()
	{
		if (!Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton, Z_Construct_UClass_ABlasterHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterHUD>()
	{
		return ABlasterHUD::StaticClass();
	}
	ABlasterHUD::ABlasterHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterHUD);
	ABlasterHUD::~ABlasterHUD() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics::ScriptStructInfo[] = {
		{ FHUDPackage::StaticStruct, Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps, TEXT("HUDPackage"), &Z_Registration_Info_UScriptStruct_HUDPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHUDPackage), 2935748561U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterHUD, ABlasterHUD::StaticClass, TEXT("ABlasterHUD"), &Z_Registration_Info_UClass_ABlasterHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterHUD), 2581214448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_2275127019(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_BlasterHUD_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
