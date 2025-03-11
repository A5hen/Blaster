// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/HUD/OverHeadWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverHeadWidget() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_UOverHeadWidget();
	BLASTER_API UClass* Z_Construct_UClass_UOverHeadWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(UOverHeadWidget::execShowPlayerNetRole)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPlayerNetRole(Z_Param_InPawn);
		P_NATIVE_END;
	}
	void UOverHeadWidget::StaticRegisterNativesUOverHeadWidget()
	{
		UClass* Class = UOverHeadWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowPlayerNetRole", &UOverHeadWidget::execShowPlayerNetRole },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics
	{
		struct OverHeadWidget_eventShowPlayerNetRole_Parms
		{
			APawn* InPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverHeadWidget_eventShowPlayerNetRole_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/OverHeadWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverHeadWidget, nullptr, "ShowPlayerNetRole", nullptr, nullptr, Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::OverHeadWidget_eventShowPlayerNetRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::OverHeadWidget_eventShowPlayerNetRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverHeadWidget);
	UClass* Z_Construct_UClass_UOverHeadWidget_NoRegister()
	{
		return UOverHeadWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOverHeadWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverHeadWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverHeadWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOverHeadWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverHeadWidget_ShowPlayerNetRole, "ShowPlayerNetRole" }, // 2078062217
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverHeadWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverHeadWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/OverHeadWidget.h" },
		{ "ModuleRelativePath", "HUD/OverHeadWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverHeadWidget_Statics::NewProp_DisplayText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/OverHeadWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOverHeadWidget_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverHeadWidget, DisplayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverHeadWidget_Statics::NewProp_DisplayText_MetaData), Z_Construct_UClass_UOverHeadWidget_Statics::NewProp_DisplayText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverHeadWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverHeadWidget_Statics::NewProp_DisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverHeadWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverHeadWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverHeadWidget_Statics::ClassParams = {
		&UOverHeadWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOverHeadWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverHeadWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverHeadWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverHeadWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverHeadWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOverHeadWidget()
	{
		if (!Z_Registration_Info_UClass_UOverHeadWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverHeadWidget.OuterSingleton, Z_Construct_UClass_UOverHeadWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverHeadWidget.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UOverHeadWidget>()
	{
		return UOverHeadWidget::StaticClass();
	}
	UOverHeadWidget::UOverHeadWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverHeadWidget);
	UOverHeadWidget::~UOverHeadWidget() {}
	struct Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_OverHeadWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_OverHeadWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverHeadWidget, UOverHeadWidget::StaticClass, TEXT("UOverHeadWidget"), &Z_Registration_Info_UClass_UOverHeadWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverHeadWidget), 3084454131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_OverHeadWidget_h_663580301(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_OverHeadWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiPlayerShooter_Blaster_Source_Blaster_HUD_OverHeadWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
