// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FDamageEvent;
class AController;
class AActor;
#ifdef KJB_PORTFOLIO_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define KJB_PORTFOLIO_Monster_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execTakeDamage);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execTakeDamage);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageWidgetClass() { return STRUCT_OFFSET(AMonster, DamageWidgetClass); } \
	FORCEINLINE static uint32 __PPO__SpawnItemArray() { return STRUCT_OFFSET(AMonster, SpawnItemArray); } \
	FORCEINLINE static uint32 __PPO__MyAnim() { return STRUCT_OFFSET(AMonster, MyAnim); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AMonster, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AMonster, AttackRange); } \
	FORCEINLINE static uint32 __PPO__AttackRadius() { return STRUCT_OFFSET(AMonster, AttackRadius); } \
	FORCEINLINE static uint32 __PPO__IsDamaged() { return STRUCT_OFFSET(AMonster, IsDamaged); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(AMonster, CurrentState); } \
	FORCEINLINE static uint32 __PPO__DeadTimer() { return STRUCT_OFFSET(AMonster, DeadTimer); } \
	FORCEINLINE static uint32 __PPO__DamageWidgetActorClass() { return STRUCT_OFFSET(AMonster, DamageWidgetActorClass); } \
	FORCEINLINE static uint32 __PPO__ItemActorBPClass() { return STRUCT_OFFSET(AMonster, ItemActorBPClass); } \
	FORCEINLINE static uint32 __PPO__ItemRandom() { return STRUCT_OFFSET(AMonster, ItemRandom); }


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_11_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class AMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_Monster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
