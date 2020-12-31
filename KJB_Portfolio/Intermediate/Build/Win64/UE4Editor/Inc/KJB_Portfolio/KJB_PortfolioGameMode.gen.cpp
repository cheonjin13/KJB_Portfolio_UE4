// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/KJB_PortfolioGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKJB_PortfolioGameMode() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AKJB_PortfolioGameMode_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AKJB_PortfolioGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void AKJB_PortfolioGameMode::StaticRegisterNativesAKJB_PortfolioGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKJB_PortfolioGameMode_NoRegister()
	{
		return AKJB_PortfolioGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKJB_PortfolioGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KJB_PortfolioGameMode.h" },
		{ "ModuleRelativePath", "KJB_PortfolioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKJB_PortfolioGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::ClassParams = {
		&AKJB_PortfolioGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKJB_PortfolioGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKJB_PortfolioGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKJB_PortfolioGameMode, 2154883091);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<AKJB_PortfolioGameMode>()
	{
		return AKJB_PortfolioGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKJB_PortfolioGameMode(Z_Construct_UClass_AKJB_PortfolioGameMode, &AKJB_PortfolioGameMode::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("AKJB_PortfolioGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKJB_PortfolioGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
