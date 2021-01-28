// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/DamageWidgetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageWidgetActor() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_ADamageWidgetActor_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_ADamageWidgetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void ADamageWidgetActor::StaticRegisterNativesADamageWidgetActor()
	{
	}
	UClass* Z_Construct_UClass_ADamageWidgetActor_NoRegister()
	{
		return ADamageWidgetActor::StaticClass();
	}
	struct Z_Construct_UClass_ADamageWidgetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestroyTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageWidgetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageWidgetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageWidgetActor.h" },
		{ "ModuleRelativePath", "Public/DamageWidgetActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DestroyTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/DamageWidgetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DestroyTimer = { "DestroyTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageWidgetActor, DestroyTimer), METADATA_PARAMS(Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DestroyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DestroyTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DamageWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DamageWidgetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DamageWidget = { "DamageWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageWidgetActor, DamageWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DamageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DamageWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageWidgetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DestroyTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageWidgetActor_Statics::NewProp_DamageWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageWidgetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageWidgetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageWidgetActor_Statics::ClassParams = {
		&ADamageWidgetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADamageWidgetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageWidgetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageWidgetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageWidgetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageWidgetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageWidgetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageWidgetActor, 1550148975);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<ADamageWidgetActor>()
	{
		return ADamageWidgetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageWidgetActor(Z_Construct_UClass_ADamageWidgetActor, &ADamageWidgetActor::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("ADamageWidgetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageWidgetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
