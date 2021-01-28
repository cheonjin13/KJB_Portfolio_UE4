// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KJB_PORTFOLIO_Slot_generated_h
#error "Slot.generated.h already included, missing '#pragma once' in Slot.h"
#endif
#define KJB_PORTFOLIO_Slot_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_RPC_WRAPPERS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlot(); \
	friend struct Z_Construct_UClass_USlot_Statics; \
public: \
	DECLARE_CLASS(USlot, UUICustom, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(USlot)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSlot(); \
	friend struct Z_Construct_UClass_USlot_Statics; \
public: \
	DECLARE_CLASS(USlot, UUICustom, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(USlot)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlot(USlot&&); \
	NO_API USlot(const USlot&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlot(USlot&&); \
	NO_API USlot(const USlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlot)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_PRIVATE_PROPERTY_OFFSET
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_24_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class USlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_Slot_h


#define FOREACH_ENUM_ESLOTTYPE(op) \
	op(ESlotType::SLOT_NONE) \
	op(ESlotType::SLOT_ITEM) \
	op(ESlotType::SLOT_SKILL) \
	op(ESlotType::SLOT_Quick) \
	op(ESlotType::SLOT_Q_ITEM) \
	op(ESlotType::SLOT_Q_SKILL) 

enum class ESlotType : uint8;
template<> KJB_PORTFOLIO_API UEnum* StaticEnum<ESlotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
