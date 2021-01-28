// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/UICustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUICustom() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UUICustom_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UUICustom();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void UUICustom::StaticRegisterNativesUUICustom()
	{
	}
	UClass* Z_Construct_UClass_UUICustom_NoRegister()
	{
		return UUICustom::StaticClass();
	}
	struct Z_Construct_UClass_UUICustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUICustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUICustom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UICustom.h" },
		{ "ModuleRelativePath", "Public/UICustom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUICustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUICustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUICustom_Statics::ClassParams = {
		&UUICustom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUICustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUICustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUICustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUICustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUICustom, 3738926986);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UUICustom>()
	{
		return UUICustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUICustom(Z_Construct_UClass_UUICustom, &UUICustom::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UUICustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUICustom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
