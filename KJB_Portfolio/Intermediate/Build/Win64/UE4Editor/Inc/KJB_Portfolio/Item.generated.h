// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyCharacter;
#ifdef KJB_PORTFOLIO_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define KJB_PORTFOLIO_Item_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_RPC_WRAPPERS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_EVENT_PARMS \
	struct Item_eventOnUse_Parms \
	{ \
		AMyCharacter* Character; \
	};


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_CALLBACK_WRAPPERS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_PRIVATE_PROPERTY_OFFSET
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_21_PROLOG \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_EVENT_PARMS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_CALLBACK_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_CALLBACK_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::ITEM_NONE) \
	op(EItemType::ITEM_USABLE) \
	op(EItemType::ITEM_EQUIPMENT) 

enum class EItemType : uint8;
template<> KJB_PORTFOLIO_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
