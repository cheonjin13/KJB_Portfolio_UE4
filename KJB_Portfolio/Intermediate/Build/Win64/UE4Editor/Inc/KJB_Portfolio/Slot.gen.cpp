// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/Slot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlot() {}
// Cross Module References
	KJB_PORTFOLIO_API UEnum* Z_Construct_UEnum_KJB_Portfolio_ESlotType();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_USlot_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_USlot();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UUICustom();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	static UEnum* ESlotType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KJB_Portfolio_ESlotType, Z_Construct_UPackage__Script_KJB_Portfolio(), TEXT("ESlotType"));
		}
		return Singleton;
	}
	template<> KJB_PORTFOLIO_API UEnum* StaticEnum<ESlotType>()
	{
		return ESlotType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlotType(ESlotType_StaticEnum, TEXT("/Script/KJB_Portfolio"), TEXT("ESlotType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KJB_Portfolio_ESlotType_Hash() { return 204704683U; }
	UEnum* Z_Construct_UEnum_KJB_Portfolio_ESlotType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KJB_Portfolio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlotType"), 0, Get_Z_Construct_UEnum_KJB_Portfolio_ESlotType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlotType::SLOT_NONE", (int64)ESlotType::SLOT_NONE },
				{ "ESlotType::SLOT_ITEM", (int64)ESlotType::SLOT_ITEM },
				{ "ESlotType::SLOT_SKILL", (int64)ESlotType::SLOT_SKILL },
				{ "ESlotType::SLOT_Quick", (int64)ESlotType::SLOT_Quick },
				{ "ESlotType::SLOT_Q_ITEM", (int64)ESlotType::SLOT_Q_ITEM },
				{ "ESlotType::SLOT_Q_SKILL", (int64)ESlotType::SLOT_Q_SKILL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "Public/Slot.h" },
				{ "SLOT_ITEM.Comment", "/**\n * \n */" },
				{ "SLOT_ITEM.DisplayName", "Item" },
				{ "SLOT_ITEM.Name", "ESlotType::SLOT_ITEM" },
				{ "SLOT_NONE.Comment", "/**\n * \n */" },
				{ "SLOT_NONE.DisplayName", "None" },
				{ "SLOT_NONE.Name", "ESlotType::SLOT_NONE" },
				{ "SLOT_Q_ITEM.Comment", "/**\n * \n */" },
				{ "SLOT_Q_ITEM.DisplayName", "Q_Item" },
				{ "SLOT_Q_ITEM.Name", "ESlotType::SLOT_Q_ITEM" },
				{ "SLOT_Q_SKILL.Comment", "/**\n * \n */" },
				{ "SLOT_Q_SKILL.DisplayName", "Q_Skill" },
				{ "SLOT_Q_SKILL.Name", "ESlotType::SLOT_Q_SKILL" },
				{ "SLOT_Quick.Comment", "/**\n * \n */" },
				{ "SLOT_Quick.DisplayName", "Quick" },
				{ "SLOT_Quick.Name", "ESlotType::SLOT_Quick" },
				{ "SLOT_SKILL.Comment", "/**\n * \n */" },
				{ "SLOT_SKILL.DisplayName", "Skill" },
				{ "SLOT_SKILL.Name", "ESlotType::SLOT_SKILL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KJB_Portfolio,
				nullptr,
				"ESlotType",
				"ESlotType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USlot::StaticRegisterNativesUSlot()
	{
	}
	UClass* Z_Construct_UClass_USlot_NoRegister()
	{
		return USlot::StaticClass();
	}
	struct Z_Construct_UClass_USlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Img_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Img;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUICustom,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Slot.h" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, DragVisualClass), Z_Construct_UClass_USlot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_CountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_CountText = { "CountText", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, CountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_CountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_CountText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Img_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Img = { "Img", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Img), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Img_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Img_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Type), Z_Construct_UEnum_KJB_Portfolio_ESlotType, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Count), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_SlotNum_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
		{ "UIMax", "31.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_SlotNum = { "SlotNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, SlotNum), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_SlotNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_SlotNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_CountText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Img,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_SlotNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlot_Statics::ClassParams = {
		&USlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlot, 596562451);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<USlot>()
	{
		return USlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlot(Z_Construct_UClass_USlot, &USlot::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("USlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
