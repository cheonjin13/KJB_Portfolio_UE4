// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KJB_PORTFOLIO_PlayerWidget_generated_h
#error "PlayerWidget.generated.h already included, missing '#pragma once' in PlayerWidget.h"
#endif
#define KJB_PORTFOLIO_PlayerWidget_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_RPC_WRAPPERS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerWidget(UPlayerWidget&&); \
	NO_API UPlayerWidget(const UPlayerWidget&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerWidget(UPlayerWidget&&); \
	NO_API UPlayerWidget(const UPlayerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HPProgressBar() { return STRUCT_OFFSET(UPlayerWidget, HPProgressBar); } \
	FORCEINLINE static uint32 __PPO__ExpBar() { return STRUCT_OFFSET(UPlayerWidget, ExpBar); } \
	FORCEINLINE static uint32 __PPO__PlayerLevel() { return STRUCT_OFFSET(UPlayerWidget, PlayerLevel); } \
	FORCEINLINE static uint32 __PPO__ExpPercent() { return STRUCT_OFFSET(UPlayerWidget, ExpPercent); }


#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_12_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class UPlayerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_PlayerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
