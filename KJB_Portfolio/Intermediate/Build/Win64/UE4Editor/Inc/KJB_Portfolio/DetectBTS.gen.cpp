// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/DetectBTS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectBTS() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UDetectBTS_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UDetectBTS();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void UDetectBTS::StaticRegisterNativesUDetectBTS()
	{
	}
	UClass* Z_Construct_UClass_UDetectBTS_NoRegister()
	{
		return UDetectBTS::StaticClass();
	}
	struct Z_Construct_UClass_UDetectBTS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetectBTS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectBTS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DetectBTS.h" },
		{ "ModuleRelativePath", "Public/DetectBTS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetectBTS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectBTS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetectBTS_Statics::ClassParams = {
		&UDetectBTS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDetectBTS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectBTS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetectBTS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetectBTS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetectBTS, 1705879689);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UDetectBTS>()
	{
		return UDetectBTS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetectBTS(Z_Construct_UClass_UDetectBTS, &UDetectBTS::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UDetectBTS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectBTS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
