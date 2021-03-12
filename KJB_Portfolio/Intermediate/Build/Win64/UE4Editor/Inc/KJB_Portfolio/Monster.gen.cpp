// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/Monster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AMonster();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_ADamageWidgetActor_NoRegister();
	KJB_PORTFOLIO_API UEnum* Z_Construct_UEnum_KJB_Portfolio_ECharacterState();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UMonsterAnimInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UMonsterDataComponent_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UItem_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UDamageWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMonster::execOnAttackMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void AMonster::StaticRegisterNativesAMonster()
	{
		UClass* Class = AMonster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackMontageEnded", &AMonster::execOnAttackMontageEnded },
			{ "TakeDamage", &AMonster::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics
	{
		struct Monster_eventOnAttackMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((Monster_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Monster_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "OnAttackMontageEnded", nullptr, nullptr, sizeof(Monster_eventOnAttackMontageEnded_Parms), Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_OnAttackMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_OnAttackMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_TakeDamage_Statics
	{
		struct Monster_eventTakeDamage_Parms
		{
			float DamageAmount;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_TakeDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Monster_eventTakeDamage_Parms), Z_Construct_UFunction_AMonster_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonster_NoRegister()
	{
		return AMonster::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemActorBPClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemActorBPClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageWidgetActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageWidgetActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDamaged_MetaData[];
#endif
		static void NewProp_IsDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBarWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPBarWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonsterStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonsterStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnItemArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnItemArray;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnItemArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonster_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 2037423833
		{ &Z_Construct_UFunction_AMonster_TakeDamage, "TakeDamage" }, // 3503688654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster.h" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_ItemRandom_MetaData[] = {
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_ItemRandom = { "ItemRandom", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, ItemRandom), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_ItemRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_ItemRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_ItemActorBPClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_ItemActorBPClass = { "ItemActorBPClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, ItemActorBPClass), Z_Construct_UClass_AItemActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_ItemActorBPClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_ItemActorBPClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetActorClass = { "DamageWidgetActorClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, DamageWidgetActorClass), Z_Construct_UClass_ADamageWidgetActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_DeadTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_DeadTimer = { "DeadTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, DeadTimer), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_DeadTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_DeadTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000022815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, CurrentState), Z_Construct_UEnum_KJB_Portfolio_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged_SetBit(void* Obj)
	{
		((AMonster*)Obj)->IsDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged = { "IsDamaged", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster), &Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, AttackRadius), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_AttackRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_AttackRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_AttackRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((AMonster*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster), &Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_MyAnim_MetaData[] = {
		{ "Comment", "//????\n" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_MyAnim = { "MyAnim", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, MyAnim), Z_Construct_UClass_UMonsterAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_MyAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_MyAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_HPBarWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_HPBarWidget = { "HPBarWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, HPBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_HPBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_HPBarWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_MonsterStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "//????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_MonsterStat = { "MonsterStat", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, MonsterStat), Z_Construct_UClass_UMonsterDataComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_MonsterStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_MonsterStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray = { "SpawnItemArray", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, SpawnItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray_Inner = { "SpawnItemArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetClass = { "DamageWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, DamageWidgetClass), Z_Construct_UClass_UDamageWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_ItemRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_ItemActorBPClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_DeadTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_IsDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_AttackRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_MyAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_HPBarWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_MonsterStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_SpawnItemArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_DamageWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_Statics::ClassParams = {
		&AMonster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster, 1585873286);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<AMonster>()
	{
		return AMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster(Z_Construct_UClass_AMonster, &AMonster::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("AMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
