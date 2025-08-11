// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterComponent/LagCompensationComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLagCompensationComponent() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ULagCompensationComponent();
	BLASTER_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();
	BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FBoxInfomation();
	BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FFramePackage();
	BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult();
	BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FShotGunServerSideRewindResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxInfomation;
class UScriptStruct* FBoxInfomation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxInfomation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxInfomation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxInfomation, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("BoxInfomation"));
	}
	return Z_Registration_Info_UScriptStruct_BoxInfomation.OuterSingleton;
}
template<> BLASTER_API UScriptStruct* StaticStruct<FBoxInfomation>()
{
	return FBoxInfomation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxInfomation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInfomation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxInfomation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxInfomation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxInfomation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxInfomation, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_BoxExtent_MetaData), Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_BoxExtent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxInfomation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewProp_BoxExtent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxInfomation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
		nullptr,
		&NewStructOps,
		"BoxInfomation",
		Z_Construct_UScriptStruct_FBoxInfomation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInfomation_Statics::PropPointers),
		sizeof(FBoxInfomation),
		alignof(FBoxInfomation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInfomation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxInfomation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInfomation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoxInfomation()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxInfomation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxInfomation.InnerSingleton, Z_Construct_UScriptStruct_FBoxInfomation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxInfomation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FramePackage;
class UScriptStruct* FFramePackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFramePackage, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("FramePackage"));
	}
	return Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton;
}
template<> BLASTER_API UScriptStruct* StaticStruct<FFramePackage>()
{
	return FFramePackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFramePackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxInfo_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoxInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoxInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFramePackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFramePackage, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_ValueProp = { "BoxInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBoxInfomation, METADATA_PARAMS(0, nullptr) }; // 1018669526
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_Key_KeyProp = { "BoxInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo = { "BoxInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFramePackage, BoxInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_MetaData), Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_MetaData) }; // 1018669526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFramePackage, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData), Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_BoxInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
		nullptr,
		&NewStructOps,
		"FramePackage",
		Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers),
		sizeof(FFramePackage),
		alignof(FFramePackage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFramePackage()
	{
		if (!Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton, Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerSideRewindResult;
class UScriptStruct* FServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSideRewindResult, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton;
}
template<> BLASTER_API UScriptStruct* StaticStruct<FServerSideRewindResult>()
{
	return FServerSideRewindResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConfirmedHit_MetaData[];
#endif
		static void NewProp_bConfirmedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConfirmedHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeadShot_MetaData[];
#endif
		static void NewProp_bHeadShot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeadShot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSideRewindResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit_SetBit(void* Obj)
	{
		((FServerSideRewindResult*)Obj)->bConfirmedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit = { "bConfirmedHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit_MetaData), Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_SetBit(void* Obj)
	{
		((FServerSideRewindResult*)Obj)->bHeadShot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot = { "bHeadShot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_MetaData), Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bConfirmedHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
		nullptr,
		&NewStructOps,
		"ServerSideRewindResult",
		Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers),
		sizeof(FServerSideRewindResult),
		alignof(FServerSideRewindResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult;
class UScriptStruct* FShotGunServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShotGunServerSideRewindResult, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ShotGunServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult.OuterSingleton;
}
template<> BLASTER_API UScriptStruct* StaticStruct<FShotGunServerSideRewindResult>()
{
	return FShotGunServerSideRewindResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HeadShots_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadShots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadShots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HeadShots;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyShots_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyShots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyShots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BodyShots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShotGunServerSideRewindResult>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_ValueProp = { "HeadShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_Key_KeyProp = { "HeadShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots = { "HeadShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotGunServerSideRewindResult, HeadShots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_MetaData), Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_ValueProp = { "BodyShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_Key_KeyProp = { "BodyShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots = { "BodyShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotGunServerSideRewindResult, BodyShots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_MetaData), Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_HeadShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewProp_BodyShots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
		nullptr,
		&NewStructOps,
		"ShotGunServerSideRewindResult",
		Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::PropPointers),
		sizeof(FShotGunServerSideRewindResult),
		alignof(FShotGunServerSideRewindResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FShotGunServerSideRewindResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult.InnerSingleton;
	}
	DEFINE_FUNCTION(ULagCompensationComponent::execProjectileServerScoreRequest)
	{
		P_GET_OBJECT(ABlasterCharacter,Z_Param_HitCharacter);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_InitialVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileServerScoreRequest_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_InitialVelocity,Z_Param_HitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULagCompensationComponent::execShotGunServerScoreRequest)
	{
		P_GET_TARRAY(ABlasterCharacter*,Z_Param_HitCharacters);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_TARRAY(FVector_NetQuantize,Z_Param_HitLocations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShotGunServerScoreRequest_Implementation(Z_Param_HitCharacters,Z_Param_TraceStart,Z_Param_HitLocations,Z_Param_HitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULagCompensationComponent::execServerScoreRequest)
	{
		P_GET_OBJECT(ABlasterCharacter,Z_Param_HitCharacter);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_HitLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerScoreRequest_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_HitLocation,Z_Param_HitTime);
		P_NATIVE_END;
	}
	struct LagCompensationComponent_eventProjectileServerScoreRequest_Parms
	{
		ABlasterCharacter* HitCharacter;
		FVector_NetQuantize TraceStart;
		FVector_NetQuantize100 InitialVelocity;
		float HitTime;
	};
	struct LagCompensationComponent_eventServerScoreRequest_Parms
	{
		ABlasterCharacter* HitCharacter;
		FVector_NetQuantize TraceStart;
		FVector_NetQuantize HitLocation;
		float HitTime;
	};
	struct LagCompensationComponent_eventShotGunServerScoreRequest_Parms
	{
		TArray<ABlasterCharacter*> HitCharacters;
		FVector_NetQuantize TraceStart;
		TArray<FVector_NetQuantize> HitLocations;
		float HitTime;
	};
	static FName NAME_ULagCompensationComponent_ProjectileServerScoreRequest = FName(TEXT("ProjectileServerScoreRequest"));
	void ULagCompensationComponent::ProjectileServerScoreRequest(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialVelocity, float HitTime)
	{
		LagCompensationComponent_eventProjectileServerScoreRequest_Parms Parms;
		Parms.HitCharacter=HitCharacter;
		Parms.TraceStart=TraceStart;
		Parms.InitialVelocity=InitialVelocity;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagCompensationComponent_ProjectileServerScoreRequest),&Parms);
	}
	static FName NAME_ULagCompensationComponent_ServerScoreRequest = FName(TEXT("ServerScoreRequest"));
	void ULagCompensationComponent::ServerScoreRequest(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime)
	{
		LagCompensationComponent_eventServerScoreRequest_Parms Parms;
		Parms.HitCharacter=HitCharacter;
		Parms.TraceStart=TraceStart;
		Parms.HitLocation=HitLocation;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagCompensationComponent_ServerScoreRequest),&Parms);
	}
	static FName NAME_ULagCompensationComponent_ShotGunServerScoreRequest = FName(TEXT("ShotGunServerScoreRequest"));
	void ULagCompensationComponent::ShotGunServerScoreRequest(TArray<ABlasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime)
	{
		LagCompensationComponent_eventShotGunServerScoreRequest_Parms Parms;
		Parms.HitCharacters=HitCharacters;
		Parms.TraceStart=TraceStart;
		Parms.HitLocations=HitLocations;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagCompensationComponent_ShotGunServerScoreRequest),&Parms);
	}
	void ULagCompensationComponent::StaticRegisterNativesULagCompensationComponent()
	{
		UClass* Class = ULagCompensationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectileServerScoreRequest", &ULagCompensationComponent::execProjectileServerScoreRequest },
			{ "ServerScoreRequest", &ULagCompensationComponent::execServerScoreRequest },
			{ "ShotGunServerScoreRequest", &ULagCompensationComponent::execShotGunServerScoreRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, HitCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart_MetaData) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitialVelocity_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitialVelocity_MetaData) }; // 2131173936
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, HitTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitialVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ProjectileServerScoreRequest", nullptr, nullptr, Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers), sizeof(LagCompensationComponent_eventProjectileServerScoreRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(LagCompensationComponent_eventProjectileServerScoreRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData) }; // 561190916
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ServerScoreRequest", nullptr, nullptr, Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers), sizeof(LagCompensationComponent_eventServerScoreRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(LagCompensationComponent_eventServerScoreRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitCharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitLocations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters_Inner = { "HitCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters = { "HitCharacters", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotGunServerScoreRequest_Parms, HitCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotGunServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_TraceStart_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_TraceStart_MetaData) }; // 561190916
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations_Inner = { "HitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations = { "HitLocations", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotGunServerScoreRequest_Parms, HitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations_MetaData), Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations_MetaData) }; // 561190916
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotGunServerScoreRequest_Parms, HitTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ShotGunServerScoreRequest", nullptr, nullptr, Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::PropPointers), sizeof(LagCompensationComponent_eventShotGunServerScoreRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(LagCompensationComponent_eventShotGunServerScoreRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULagCompensationComponent);
	UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister()
	{
		return ULagCompensationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULagCompensationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULagCompensationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest, "ProjectileServerScoreRequest" }, // 2711600437
		{ &Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest, "ServerScoreRequest" }, // 2248013659
		{ &Z_Construct_UFunction_ULagCompensationComponent_ShotGunServerScoreRequest, "ShotGunServerScoreRequest" }, // 2539908062
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlasterComponent/LagCompensationComponent.h" },
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULagCompensationComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character_MetaData), Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULagCompensationComponent, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller_MetaData), Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime_MetaData[] = {
		{ "Category", "LagCompensationComponent" },
		{ "ModuleRelativePath", "BlasterComponent/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime = { "MaxRecordTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULagCompensationComponent, MaxRecordTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime_MetaData), Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULagCompensationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULagCompensationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams = {
		&ULagCompensationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULagCompensationComponent()
	{
		if (!Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton, Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ULagCompensationComponent>()
	{
		return ULagCompensationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULagCompensationComponent);
	ULagCompensationComponent::~ULagCompensationComponent() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics::ScriptStructInfo[] = {
		{ FBoxInfomation::StaticStruct, Z_Construct_UScriptStruct_FBoxInfomation_Statics::NewStructOps, TEXT("BoxInfomation"), &Z_Registration_Info_UScriptStruct_BoxInfomation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxInfomation), 1018669526U) },
		{ FFramePackage::StaticStruct, Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps, TEXT("FramePackage"), &Z_Registration_Info_UScriptStruct_FramePackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFramePackage), 2761608288U) },
		{ FServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps, TEXT("ServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_ServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerSideRewindResult), 332082105U) },
		{ FShotGunServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FShotGunServerSideRewindResult_Statics::NewStructOps, TEXT("ShotGunServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_ShotGunServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShotGunServerSideRewindResult), 3460708472U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULagCompensationComponent, ULagCompensationComponent::StaticClass, TEXT("ULagCompensationComponent"), &Z_Registration_Info_UClass_ULagCompensationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULagCompensationComponent), 2255772938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_514694210(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_BlasterComponent_LagCompensationComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
