// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UAnimMontage;
class UItem;
#ifdef KJB_PORTFOLIO_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define KJB_PORTFOLIO_MyCharacter_generated_h

#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_11_DELEGATE \
static inline void FOnPlayerLevelUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerLevelUpDelegate) \
{ \
	OnPlayerLevelUpDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_SPARSE_DATA
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitCheckOverlapBegin); \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execUseItem);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitCheckOverlapBegin); \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execUseItem);


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KJB_Portfolio"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AMyCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__MyAnim() { return STRUCT_OFFSET(AMyCharacter, MyAnim); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AMyCharacter, AttackRange); } \
	FORCEINLINE static uint32 __PPO__AttackRadius() { return STRUCT_OFFSET(AMyCharacter, AttackRadius); } \
	FORCEINLINE static uint32 __PPO__CanNextCombo() { return STRUCT_OFFSET(AMyCharacter, CanNextCombo); } \
	FORCEINLINE static uint32 __PPO__IsComboInputOn() { return STRUCT_OFFSET(AMyCharacter, IsComboInputOn); } \
	FORCEINLINE static uint32 __PPO__CurrentCombo() { return STRUCT_OFFSET(AMyCharacter, CurrentCombo); } \
	FORCEINLINE static uint32 __PPO__MaxCombo() { return STRUCT_OFFSET(AMyCharacter, MaxCombo); } \
	FORCEINLINE static uint32 __PPO__DeadTimer() { return STRUCT_OFFSET(AMyCharacter, DeadTimer); } \
	FORCEINLINE static uint32 __PPO__MyPlayerController() { return STRUCT_OFFSET(AMyCharacter, MyPlayerController); } \
	FORCEINLINE static uint32 __PPO__IsShowInventory() { return STRUCT_OFFSET(AMyCharacter, IsShowInventory); }


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_14_PROLOG
#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_RPC_WRAPPERS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_INCLASS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_SPARSE_DATA \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_INCLASS_NO_PURE_DECLS \
	KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KJB_PORTFOLIO_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KJB_Portfolio_Source_KJB_Portfolio_Public_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
