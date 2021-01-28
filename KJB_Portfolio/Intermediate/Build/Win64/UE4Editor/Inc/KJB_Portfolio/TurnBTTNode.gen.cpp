// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/TurnBTTNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBTTNode() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UTurnBTTNode_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UTurnBTTNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	void UTurnBTTNode::StaticRegisterNativesUTurnBTTNode()
	{
	}
	UClass* Z_Construct_UClass_UTurnBTTNode_NoRegister()
	{
		return UTurnBTTNode::StaticClass();
	}
	struct Z_Construct_UClass_UTurnBTTNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnBTTNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnBTTNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TurnBTTNode.h" },
		{ "ModuleRelativePath", "Public/TurnBTTNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnBTTNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnBTTNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTurnBTTNode_Statics::ClassParams = {
		&UTurnBTTNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTurnBTTNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnBTTNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnBTTNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTurnBTTNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTurnBTTNode, 722134893);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UTurnBTTNode>()
	{
		return UTurnBTTNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTurnBTTNode(Z_Construct_UClass_UTurnBTTNode, &UTurnBTTNode::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UTurnBTTNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnBTTNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
