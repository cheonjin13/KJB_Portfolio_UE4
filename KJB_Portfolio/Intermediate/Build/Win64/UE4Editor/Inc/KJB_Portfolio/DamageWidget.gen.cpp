// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/DamageWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageWidget() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UDamageWidget_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UDamageWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UDamageWidget::StaticRegisterNativesUDamageWidget()
	{
	}
	UClass* Z_Construct_UClass_UDamageWidget_NoRegister()
	{
		return UDamageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDamageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DamageWidget.h" },
		{ "ModuleRelativePath", "Public/DamageWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageWidget_Statics::NewProp_Fade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/DamageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageWidget_Statics::NewProp_Fade = { "Fade", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageWidget, Fade), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDamageWidget_Statics::NewProp_Fade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageWidget_Statics::NewProp_Fade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageWidget_Statics::NewProp_DamageText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DamageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageWidget_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageWidget, DamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDamageWidget_Statics::NewProp_DamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageWidget_Statics::NewProp_DamageText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageWidget_Statics::NewProp_Fade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageWidget_Statics::NewProp_DamageText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageWidget_Statics::ClassParams = {
		&UDamageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDamageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageWidget, 3888895330);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UDamageWidget>()
	{
		return UDamageWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageWidget(Z_Construct_UClass_UDamageWidget, &UDamageWidget::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UDamageWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
