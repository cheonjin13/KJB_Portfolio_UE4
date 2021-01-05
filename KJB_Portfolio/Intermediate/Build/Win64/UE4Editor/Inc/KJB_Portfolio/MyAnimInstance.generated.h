// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KJB_PORTFOLIO_MyAnimInstance_generated_h
#error "MyAnimInstance.generated.h already included, missing '#pragma once' in MyAnimInstance.h"
#endif
#define KJB_PORTFOLIO_MyAnimInstance_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHit);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHit);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyAnimInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UMyAnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UMyAnimInstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UMyAnimInstance, AttackMontage); }


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_14_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class UMyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_MyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
