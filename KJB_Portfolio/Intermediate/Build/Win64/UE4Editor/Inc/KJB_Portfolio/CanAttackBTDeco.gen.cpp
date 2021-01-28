// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/CanAttackBTDeco.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanAttackBTDeco() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UCanAttackBTDeco_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UCanAttackBTDeco();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void UCanAttackBTDeco::StaticRegisterNativesUCanAttackBTDeco()
	{
	}
	UClass* Z_Construct_UClass_UCanAttackBTDeco_NoRegister()
	{
		return UCanAttackBTDeco::StaticClass();
	}
	struct Z_Construct_UClass_UCanAttackBTDeco_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanAttackBTDeco_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanAttackBTDeco_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CanAttackBTDeco.h" },
		{ "ModuleRelativePath", "Public/CanAttackBTDeco.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanAttackBTDeco_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanAttackBTDeco>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanAttackBTDeco_Statics::ClassParams = {
		&UCanAttackBTDeco::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCanAttackBTDeco_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanAttackBTDeco_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanAttackBTDeco()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanAttackBTDeco_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanAttackBTDeco, 3714497853);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UCanAttackBTDeco>()
	{
		return UCanAttackBTDeco::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanAttackBTDeco(Z_Construct_UClass_UCanAttackBTDeco, &UCanAttackBTDeco::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UCanAttackBTDeco"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanAttackBTDeco);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
