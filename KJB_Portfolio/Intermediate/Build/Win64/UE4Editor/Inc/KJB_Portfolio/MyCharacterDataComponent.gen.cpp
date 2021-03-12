// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KJB_Portfolio/Public/MyCharacterDataComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterDataComponent() {}
// Cross Module References
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UMyCharacterDataComponent_NoRegister();
	KJB_PORTFOLIO_API UClass* Z_Construct_UClass_UMyCharacterDataComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_KJB_Portfolio();
// End Cross Module References
	DEFINE_FUNCTION(UMyCharacterDataComponent::execModifyMP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyMP(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyCharacterDataComponent::execUseMP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseMP(Z_Param_val);
		P_NATIVE_END;
	}
	void UMyCharacterDataComponent::StaticRegisterNativesUMyCharacterDataComponent()
	{
		UClass* Class = UMyCharacterDataComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyMP", &UMyCharacterDataComponent::execModifyMP },
			{ "UseMP", &UMyCharacterDataComponent::execUseMP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics
	{
		struct MyCharacterDataComponent_eventModifyMP_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCharacterDataComponent_eventModifyMP_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacterDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCharacterDataComponent, nullptr, "ModifyMP", nullptr, nullptr, sizeof(MyCharacterDataComponent_eventModifyMP_Parms), Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics
	{
		struct MyCharacterDataComponent_eventUseMP_Parms
		{
			float val;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyCharacterDataComponent_eventUseMP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyCharacterDataComponent_eventUseMP_Parms), &Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCharacterDataComponent_eventUseMP_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacterDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCharacterDataComponent, nullptr, "UseMP", nullptr, nullptr, sizeof(MyCharacterDataComponent_eventUseMP_Parms), Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCharacterDataComponent_UseMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyCharacterDataComponent_UseMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyCharacterDataComponent_NoRegister()
	{
		return UMyCharacterDataComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyCharacterDataComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCharacterDataComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KJB_Portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyCharacterDataComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCharacterDataComponent_ModifyMP, "ModifyMP" }, // 753961294
		{ &Z_Construct_UFunction_UMyCharacterDataComponent_UseMP, "UseMP" }, // 4235905641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterDataComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyCharacterDataComponent.h" },
		{ "ModuleRelativePath", "Public/MyCharacterDataComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentMP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/MyCharacterDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentMP = { "CurrentMP", nullptr, (EPropertyFlags)0x0040000000022801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCharacterDataComponent, CurrentMP), METADATA_PARAMS(Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentMP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentMP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/MyCharacterDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0040000000022801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCharacterDataComponent, CurrentHP), METADATA_PARAMS(Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/MyCharacterDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCharacterDataComponent, Level), METADATA_PARAMS(Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyCharacterDataComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_CurrentHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterDataComponent_Statics::NewProp_Level,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCharacterDataComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCharacterDataComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCharacterDataComponent_Statics::ClassParams = {
		&UMyCharacterDataComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyCharacterDataComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterDataComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCharacterDataComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterDataComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCharacterDataComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCharacterDataComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCharacterDataComponent, 923383316);
	template<> KJB_PORTFOLIO_API UClass* StaticClass<UMyCharacterDataComponent>()
	{
		return UMyCharacterDataComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCharacterDataComponent(Z_Construct_UClass_UMyCharacterDataComponent, &UMyCharacterDataComponent::StaticClass, TEXT("/Script/KJB_Portfolio"), TEXT("UMyCharacterDataComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterDataComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
