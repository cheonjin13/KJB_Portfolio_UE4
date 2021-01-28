// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/AttackBTTNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackBTTNode() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UAttackBTTNode_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UAttackBTTNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void UAttackBTTNode::StaticRegisterNativesUAttackBTTNode()
	{
	}
	UClass* Z_Construct_UClass_UAttackBTTNode_NoRegister()
	{
		return UAttackBTTNode::StaticClass();
	}
	struct Z_Construct_UClass_UAttackBTTNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackBTTNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackBTTNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AttackBTTNode.h" },
		{ "ModuleRelativePath", "Public/AttackBTTNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackBTTNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackBTTNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackBTTNode_Statics::ClassParams = {
		&UAttackBTTNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttackBTTNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackBTTNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackBTTNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackBTTNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackBTTNode, 39787768);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UAttackBTTNode>()
	{
		return UAttackBTTNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackBTTNode(Z_Construct_UClass_UAttackBTTNode, &UAttackBTTNode::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UAttackBTTNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackBTTNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
