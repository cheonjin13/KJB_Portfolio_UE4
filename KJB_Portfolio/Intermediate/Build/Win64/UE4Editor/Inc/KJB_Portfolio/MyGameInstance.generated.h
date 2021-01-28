// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KJB_PORTFOLIO_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define KJB_PORTFOLIO_MyGameInstance_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStatData_Statics; \
	KJB_PORTFOLIO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> KJB_PORTFOLIO_API UScriptStruct* StaticStruct<struct FPlayerStatData>();

#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMonsterStatData_Statics; \
	KJB_PORTFOLIO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> KJB_PORTFOLIO_API UScriptStruct* StaticStruct<struct FMonsterStatData>();

#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_RPC_WRAPPERS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerStatTable() { return STRUCT_OFFSET(UMyGameInstance, PlayerStatTable); } \
	FORCEINLINE static uint32 __PPO__MonsterStatTable() { return STRUCT_OFFSET(UMyGameInstance, MonsterStatTable); }


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_57_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
