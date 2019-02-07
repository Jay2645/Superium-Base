// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Superpowers/Public/Superpower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperpower() {}
// Cross Module References
	SUPERPOWERS_API UClass* Z_Construct_UClass_USuperpower_NoRegister();
	SUPERPOWERS_API UClass* Z_Construct_UClass_USuperpower();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Superpowers();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_ActivatePower();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_DeactivatePower();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_Disable();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_Enable();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_GetSuperheroCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_InitializePowers();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_IsEnabled();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_PowerTick();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_SetEnabled();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperpower_TickPower();
	SUPERPOWERS_API UClass* Z_Construct_UClass_USuperInterface_NoRegister();
// End Cross Module References
	static FName NAME_USuperpower_ActivatePower = FName(TEXT("ActivatePower"));
	void USuperpower::ActivatePower()
	{
		ProcessEvent(FindFunctionChecked(NAME_USuperpower_ActivatePower),NULL);
	}
	static FName NAME_USuperpower_DeactivatePower = FName(TEXT("DeactivatePower"));
	void USuperpower::DeactivatePower()
	{
		ProcessEvent(FindFunctionChecked(NAME_USuperpower_DeactivatePower),NULL);
	}
	static FName NAME_USuperpower_InitializePowers = FName(TEXT("InitializePowers"));
	void USuperpower::InitializePowers()
	{
		ProcessEvent(FindFunctionChecked(NAME_USuperpower_InitializePowers),NULL);
	}
	static FName NAME_USuperpower_TickPower = FName(TEXT("TickPower"));
	void USuperpower::TickPower()
	{
		ProcessEvent(FindFunctionChecked(NAME_USuperpower_TickPower),NULL);
	}
	void USuperpower::StaticRegisterNativesUSuperpower()
	{
		UClass* Class = USuperpower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePower", &USuperpower::execActivatePower },
			{ "DeactivatePower", &USuperpower::execDeactivatePower },
			{ "Disable", &USuperpower::execDisable },
			{ "Enable", &USuperpower::execEnable },
			{ "GetSuperheroCharacter", &USuperpower::execGetSuperheroCharacter },
			{ "IsEnabled", &USuperpower::execIsEnabled },
			{ "PowerTick", &USuperpower::execPowerTick },
			{ "SetEnabled", &USuperpower::execSetEnabled },
			{ "TickPower", &USuperpower::execTickPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USuperpower_ActivatePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_ActivatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_ActivatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "ActivatePower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_ActivatePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_ActivatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_ActivatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_ActivatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_DeactivatePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_DeactivatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_DeactivatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "DeactivatePower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_DeactivatePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_DeactivatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_DeactivatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_DeactivatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "Disable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_Disable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_Enable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_Enable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics
	{
		struct Superpower_eventGetSuperheroCharacter_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Superpower_eventGetSuperheroCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
		{ "ToolTip", "Attempts to cast our Superhero into a character.\nIf unsuccessful, will return NULL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "GetSuperheroCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(Superpower_eventGetSuperheroCharacter_Parms), Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_GetSuperheroCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_GetSuperheroCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_InitializePowers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_InitializePowers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
		{ "ToolTip", "Allows Blueprints to initialize anything about this power." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_InitializePowers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "InitializePowers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_InitializePowers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_InitializePowers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_InitializePowers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_InitializePowers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_IsEnabled_Statics
	{
		struct Superpower_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USuperpower_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Superpower_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USuperpower_IsEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Superpower_eventIsEnabled_Parms), &Z_Construct_UFunction_USuperpower_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperpower_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperpower_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Superpower_eventIsEnabled_Parms), Z_Construct_UFunction_USuperpower_IsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_IsEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_IsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_PowerTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_PowerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_PowerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "PowerTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_PowerTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_PowerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_PowerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_PowerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_SetEnabled_Statics
	{
		struct Superpower_eventSetEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USuperpower_SetEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((Superpower_eventSetEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USuperpower_SetEnabled_Statics::NewProp_bIsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Superpower_eventSetEnabled_Parms), &Z_Construct_UFunction_USuperpower_SetEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperpower_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperpower_SetEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "SetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Superpower_eventSetEnabled_Parms), Z_Construct_UFunction_USuperpower_SetEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_SetEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_SetEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperpower_TickPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperpower_TickPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperpower_TickPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperpower, "TickPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperpower_TickPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperpower_TickPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperpower_TickPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperpower_TickPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USuperpower_NoRegister()
	{
		return USuperpower::StaticClass();
	}
	struct Z_Construct_UClass_USuperpower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerActive_MetaData[];
#endif
		static void NewProp_bIsPowerActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerEnabled_MetaData[];
#endif
		static void NewProp_bIsPowerEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPassivePower_MetaData[];
#endif
		static void NewProp_bIsPassivePower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPassivePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerTickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerTickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Superhero_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Superhero;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuperpower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Superpowers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USuperpower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USuperpower_ActivatePower, "ActivatePower" }, // 1480920672
		{ &Z_Construct_UFunction_USuperpower_DeactivatePower, "DeactivatePower" }, // 4276063436
		{ &Z_Construct_UFunction_USuperpower_Disable, "Disable" }, // 1505116869
		{ &Z_Construct_UFunction_USuperpower_Enable, "Enable" }, // 2595365831
		{ &Z_Construct_UFunction_USuperpower_GetSuperheroCharacter, "GetSuperheroCharacter" }, // 160592003
		{ &Z_Construct_UFunction_USuperpower_InitializePowers, "InitializePowers" }, // 627786090
		{ &Z_Construct_UFunction_USuperpower_IsEnabled, "IsEnabled" }, // 3978184237
		{ &Z_Construct_UFunction_USuperpower_PowerTick, "PowerTick" }, // 1533932460
		{ &Z_Construct_UFunction_USuperpower_SetEnabled, "SetEnabled" }, // 2132438530
		{ &Z_Construct_UFunction_USuperpower_TickPower, "TickPower" }, // 1871523724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Superpower.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	void Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive_SetBit(void* Obj)
	{
		((USuperpower*)Obj)->bIsPowerActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPowerActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuperpower), &Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
	};
#endif
	void Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled_SetBit(void* Obj)
	{
		((USuperpower*)Obj)->bIsPowerEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPowerEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuperpower), &Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
		{ "ToolTip", "Whether this power has a passive effect, instead of an active one.\nIf a power should have an active AND a passive effect, the passive effect should\nadd the active effect to the hero at the beginning of the match." },
	};
#endif
	void Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower_SetBit(void* Obj)
	{
		((USuperpower*)Obj)->bIsPassivePower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPassivePower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuperpower), &Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower_SetBit, METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::NewProp_PowerCooldownTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
		{ "ToolTip", "How often the superpower should wait between uses.\nA value <= 0 means it can be used as fast as the user can click." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuperpower_Statics::NewProp_PowerCooldownTime = { UE4CodeGen_Private::EPropertyClass::Float, "PowerCooldownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USuperpower, PowerCooldownTime), METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::NewProp_PowerCooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::NewProp_PowerCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::NewProp_PowerTickTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
		{ "ToolTip", "How often the superpower should tick when it's active.\nA value <= 0 means it will never tick (only activating once)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuperpower_Statics::NewProp_PowerTickTime = { UE4CodeGen_Private::EPropertyClass::Float, "PowerTickTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USuperpower, PowerTickTime), METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::NewProp_PowerTickTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::NewProp_PowerTickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperpower_Statics::NewProp_Superhero_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Super" },
		{ "ModuleRelativePath", "Public/Superpower.h" },
		{ "ToolTip", "A reference to the superhero who has this power." },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USuperpower_Statics::NewProp_Superhero = { UE4CodeGen_Private::EPropertyClass::Interface, "Superhero", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000020005, 1, nullptr, STRUCT_OFFSET(USuperpower, Superhero), Z_Construct_UClass_USuperInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::NewProp_Superhero_MetaData, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::NewProp_Superhero_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuperpower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPowerEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperpower_Statics::NewProp_bIsPassivePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperpower_Statics::NewProp_PowerCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperpower_Statics::NewProp_PowerTickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperpower_Statics::NewProp_Superhero,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuperpower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuperpower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuperpower_Statics::ClassParams = {
		&USuperpower::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000ADu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USuperpower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USuperpower_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USuperpower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuperpower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuperpower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuperpower, 3294508293);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuperpower(Z_Construct_UClass_USuperpower, &USuperpower::StaticClass, TEXT("/Script/Superpowers"), TEXT("USuperpower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuperpower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
