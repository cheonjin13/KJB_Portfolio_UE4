// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/SlotDragDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDragDrop() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_USlotDragDrop_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_USlotDragDrop();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	KJB_PORTFOLIO_API UEnum* Z_Construct_UEnum_KJB_Portfolio_ESlotType();
// End Cross Module References
	void USlotDragDrop::StaticRegisterNativesUSlotDragDrop()
	{
	}
	UClass* Z_Construct_UClass_USlotDragDrop_NoRegister()
	{
		return USlotDragDrop::StaticClass();
	}
	struct Z_Construct_UClass_USlotDragDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FromNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDragDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDragDrop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SlotDragDrop.h" },
		{ "ModuleRelativePath", "Public/SlotDragDrop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SlotDragDrop" },
		{ "ModuleRelativePath", "Public/SlotDragDrop.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDragDrop, Type), Z_Construct_UEnum_KJB_Portfolio_ESlotType, METADATA_PARAMS(Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDragDrop_Statics::NewProp_FromNum_MetaData[] = {
		{ "Category", "SlotDragDrop" },
		{ "ModuleRelativePath", "Public/SlotDragDrop.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlotDragDrop_Statics::NewProp_FromNum = { "FromNum", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDragDrop, FromNum), METADATA_PARAMS(Z_Construct_UClass_USlotDragDrop_Statics::NewProp_FromNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDragDrop_Statics::NewProp_FromNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDragDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDragDrop_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDragDrop_Statics::NewProp_FromNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDragDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDragDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDragDrop_Statics::ClassParams = {
		&USlotDragDrop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDragDrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDragDrop_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDragDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDragDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDragDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDragDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDragDrop, 3094972617);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<USlotDragDrop>()
	{
		return USlotDragDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDragDrop(Z_Construct_UClass_USlotDragDrop, &USlotDragDrop::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("USlotDragDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDragDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
