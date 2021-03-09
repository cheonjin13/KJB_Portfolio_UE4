// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/UsableItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUsableItem() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UUsableItem_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UUsableItem();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void UUsableItem::StaticRegisterNativesUUsableItem()
	{
	}
	UClass* Z_Construct_UClass_UUsableItem_NoRegister()
	{
		return UUsableItem::StaticClass();
	}
	struct Z_Construct_UClass_UUsableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPPotionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPPotionPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsableItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UsableItem.h" },
		{ "ModuleRelativePath", "Public/UsableItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsableItem_Statics::NewProp_HPPotionPoint_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/UsableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsableItem_Statics::NewProp_HPPotionPoint = { "HPPotionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUsableItem, HPPotionPoint), METADATA_PARAMS(Z_Construct_UClass_UUsableItem_Statics::NewProp_HPPotionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsableItem_Statics::NewProp_HPPotionPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsableItem_Statics::NewProp_HPPotionPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsableItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUsableItem_Statics::ClassParams = {
		&UUsableItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsableItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsableItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUsableItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUsableItem, 3413026042);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UUsableItem>()
	{
		return UUsableItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUsableItem(Z_Construct_UClass_UUsableItem, &UUsableItem::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UUsableItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsableItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
