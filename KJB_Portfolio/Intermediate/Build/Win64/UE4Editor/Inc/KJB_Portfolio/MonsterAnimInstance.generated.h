// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KJB_PORTFOLIO_MonsterAnimInstance_generated_h
#error "MonsterAnimInstance.generated.h already included, missing '#pragma once' in MonsterAnimInstance.h"
#endif
#define KJB_PORTFOLIO_MonsterAnimInstance_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_Anim_End); \
	DECLARE_FUNCTION(execAnimNotify_AttackHit);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_Anim_End); \
	DECLARE_FUNCTION(execAnimNotify_AttackHit);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonsterAnimInstance(); \
	friend struct Z_Construct_UClass_UMonsterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnimInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMonsterAnimInstance(); \
	friend struct Z_Construct_UClass_UMonsterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnimInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnimInstance(UMonsterAnimInstance&&); \
	NO_API UMonsterAnimInstance(const UMonsterAnimInstance&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnimInstance(UMonsterAnimInstance&&); \
	NO_API UMonsterAnimInstance(const UMonsterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMonsterAnimInstance)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UMonsterAnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(UMonsterAnimInstance, IsDead); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UMonsterAnimInstance, AttackMontage); } \
	FORCEINLINE static uint32 __PPO__DamagedMontage() { return STRUCT_OFFSET(UMonsterAnimInstance, DamagedMontage); }


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_15_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class UMonsterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_MonsterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
