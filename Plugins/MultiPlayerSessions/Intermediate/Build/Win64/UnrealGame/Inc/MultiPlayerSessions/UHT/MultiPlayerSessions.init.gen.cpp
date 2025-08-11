// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiPlayerSessions_init() {}
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiPlayerSessions_MultiPlayerOnCreateSessionComplete__DelegateSignature();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiPlayerSessions_MultiPlayerOnDestroySessionComplete__DelegateSignature();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiPlayerSessions_MultiPlayerOnStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiPlayerSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiPlayerSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiPlayerSessions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiPlayerSessions_MultiPlayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiPlayerSessions_MultiPlayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiPlayerSessions_MultiPlayerOnStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiPlayerSessions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x090D048C,
				0x6044E437,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiPlayerSessions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiPlayerSessions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiPlayerSessions(Z_Construct_UPackage__Script_MultiPlayerSessions, TEXT("/Script/MultiPlayerSessions"), Z_Registration_Info_UPackage__Script_MultiPlayerSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x090D048C, 0x6044E437));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
