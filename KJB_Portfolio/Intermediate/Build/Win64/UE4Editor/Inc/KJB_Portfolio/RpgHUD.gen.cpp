// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/RpgHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpgHUD() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_ARpgHUD_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_ARpgHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ARpgHUD::StaticRegisterNativesARpgHUD()
	{
	}
	UClass* Z_Construct_UClass_ARpgHUD_NoRegister()
	{
		return ARpgHUD::StaticClass();
	}
	struct Z_Construct_UClass_ARpgHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrossHair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARpgHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARpgHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RpgHUD.h" },
		{ "ModuleRelativePath", "Public/RpgHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARpgHUD_Statics::NewProp_CrossHair_MetaData[] = {
		{ "Category", "RpgHUD" },
		{ "ModuleRelativePath", "Public/RpgHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARpgHUD_Statics::NewProp_CrossHair = { "CrossHair", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARpgHUD, CrossHair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARpgHUD_Statics::NewProp_CrossHair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARpgHUD_Statics::NewProp_CrossHair_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARpgHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARpgHUD_Statics::NewProp_CrossHair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARpgHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARpgHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARpgHUD_Statics::ClassParams = {
		&ARpgHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARpgHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARpgHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARpgHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARpgHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARpgHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARpgHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARpgHUD, 2910801397);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<ARpgHUD>()
	{
		return ARpgHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARpgHUD(Z_Construct_UClass_ARpgHUD, &ARpgHUD::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("ARpgHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARpgHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
