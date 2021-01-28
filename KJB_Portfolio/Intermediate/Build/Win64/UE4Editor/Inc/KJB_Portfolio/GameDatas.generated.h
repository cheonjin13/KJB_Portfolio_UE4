// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KJB_PORTFOLIO_GameDatas_generated_h
#error "GameDatas.generated.h already included, missing '#pragma once' in GameDatas.h"
#endif
#define KJB_PORTFOLIO_GameDatas_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	KJB_PORTFOLIO_API static class UScriptStruct* StaticStruct();


template<> KJB_PORTFOLIO_API UScriptStruct* StaticStruct<struct FItemData>();

#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_RPC_WRAPPERS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameDatas(); \
	friend struct Z_Construct_UClass_UGameDatas_Statics; \
public: \
	DECLARE_CLASS(UGameDatas, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UGameDatas)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUGameDatas(); \
	friend struct Z_Construct_UClass_UGameDatas_Statics; \
public: \
	DECLARE_CLASS(UGameDatas, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UGameDatas)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDatas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDatas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDatas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDatas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDatas(UGameDatas&&); \
	NO_API UGameDatas(const UGameDatas&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDatas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDatas(UGameDatas&&); \
	NO_API UGameDatas(const UGameDatas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDatas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDatas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDatas)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_PRIVATE_PROPERTY_OFFSET
#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_45_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class UGameDatas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_GameDatas_h


#define FOREACH_ENUM_EITEMTYPES(op) \
	op(EItemTypes::ITEM_NONE) \
	op(EItemTypes::ITEM_USEABLE) \
	op(EItemTypes::ITEM_Equipment) 

enum class EItemTypes : uint8;
template<> KJB_PORTFOLIO_API UEnum* StaticEnum<EItemTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
