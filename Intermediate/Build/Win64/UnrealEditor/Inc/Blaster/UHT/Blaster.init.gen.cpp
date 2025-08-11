// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlaster_init() {}
	BLASTER_API UFunction* Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature();
	BLASTER_API UFunction* Z_Construct_UDelegateFunction_Blaster_OnLeftGame__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Blaster;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Blaster()
	{
		if (!Z_Registration_Info_UPackage__Script_Blaster.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Blaster_HighPingDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Blaster_OnLeftGame__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Blaster",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1CF8DB84,
				0x88ECDAA6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Blaster.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Blaster.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Blaster(Z_Construct_UPackage__Script_Blaster, TEXT("/Script/Blaster"), Z_Registration_Info_UPackage__Script_Blaster, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1CF8DB84, 0x88ECDAA6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
