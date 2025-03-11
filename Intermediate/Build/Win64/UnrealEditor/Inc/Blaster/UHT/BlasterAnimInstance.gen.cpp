// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Character/BlasterAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterAnimInstance() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance();
	BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister();
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ETurningInPlace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void UBlasterAnimInstance::StaticRegisterNativesUBlasterAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlasterAnimInstance);
	UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister()
	{
		return UBlasterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBlasterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponEquipped_MetaData[];
#endif
		static void NewProp_bWeaponEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimming_MetaData[];
#endif
		static void NewProp_bAimming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TurningInPlace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurningInPlace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TurningInPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlasterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/BlasterAnimInstance.h" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter = { "BlasterCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, BlasterCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UBlasterAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UBlasterAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit(void* Obj)
	{
		((UBlasterAnimInstance*)Obj)->bWeaponEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped = { "bWeaponEquipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((UBlasterAnimInstance*)Obj)->bIsCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming_SetBit(void* Obj)
	{
		((UBlasterAnimInstance*)Obj)->bAimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming = { "bAimming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, YawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, Lean), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw = { "AO_Yaw", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, AO_Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch = { "AO_Pitch", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, AO_Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/BlasterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace = { "TurningInPlace", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, TurningInPlace), Z_Construct_UEnum_Blaster_ETurningInPlace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_MetaData), Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_MetaData) }; // 3625549696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAimming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlasterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlasterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlasterAnimInstance_Statics::ClassParams = {
		&UBlasterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBlasterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton, Z_Construct_UClass_UBlasterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UBlasterAnimInstance>()
	{
		return UBlasterAnimInstance::StaticClass();
	}
	UBlasterAnimInstance::UBlasterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlasterAnimInstance);
	UBlasterAnimInstance::~UBlasterAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlasterAnimInstance, UBlasterAnimInstance::StaticClass, TEXT("UBlasterAnimInstance"), &Z_Registration_Info_UClass_UBlasterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlasterAnimInstance), 2908142278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterAnimInstance_h_1271161966(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_Character_BlasterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
