// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/MyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayerController::execGetHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
		P_NATIVE_END;
	}
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
		UClass* Class = AMyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHUDWidget", &AMyPlayerController::execGetHUDWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics
	{
		struct MyPlayerController_eventGetHUDWidget_Parms
		{
			UPlayerWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, sizeof(MyPlayerController_eventGetHUDWidget_Parms), Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_GetHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_GetHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerController_GetHUDWidget, "GetHUDWidget" }, // 2427840292
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState = { "MyPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, MyPlayerState), Z_Construct_UClass_AMyPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, HUDWidget), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, HUDWidgetClass), Z_Construct_UClass_UPlayerWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerController, 1835490584);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerController(Z_Construct_UClass_AMyPlayerController, &AMyPlayerController::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("AMyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
