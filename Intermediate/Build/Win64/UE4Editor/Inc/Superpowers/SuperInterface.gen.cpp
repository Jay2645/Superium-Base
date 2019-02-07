// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Superpowers/Public/SuperInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperInterface() {}
// Cross Module References
	SUPERPOWERS_API UClass* Z_Construct_UClass_USuperInterface_NoRegister();
	SUPERPOWERS_API UClass* Z_Construct_UClass_USuperInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Superpowers();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_ActivateSuperpower();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_AddNewComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_AddSuperpower();
	SUPERPOWERS_API UClass* Z_Construct_UClass_USuperpower_NoRegister();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_DeactivateSuperpower();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_PlayAnimation();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_PlaySound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_RemoveSuperpower();
	SUPERPOWERS_API UFunction* Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled();
// End Cross Module References
	void ISuperInterface::ActivateSuperpower(int32 Index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActivateSuperpower instead.");
	}
	USceneComponent* ISuperInterface::AddNewComponent(TSubclassOf<USceneComponent>  NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent, FName AttachTo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddNewComponent instead.");
		SuperInterface_eventAddNewComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	USuperpower* ISuperInterface::AddSuperpower(TSubclassOf<USuperpower>  NewPower)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddSuperpower instead.");
		SuperInterface_eventAddSuperpower_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISuperInterface::DeactivateSuperpower(int32 Index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeactivateSuperpower instead.");
	}
	TSet<TSubclassOf<USuperpower> > ISuperInterface::GetSuperpowerClasses() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSuperpowerClasses instead.");
		SuperInterface_eventGetSuperpowerClasses_Parms Parms;
		return Parms.ReturnValue;
	}
	USuperpower* ISuperInterface::GetSuperpowerComponent(int32 Index) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSuperpowerComponent instead.");
		SuperInterface_eventGetSuperpowerComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	TArray<USuperpower*> ISuperInterface::GetSuperpowerComponents() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSuperpowerComponents instead.");
		SuperInterface_eventGetSuperpowerComponents_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ISuperInterface::GetSuperpowerIndex(TSubclassOf<USuperpower>  Power) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSuperpowerIndex instead.");
		SuperInterface_eventGetSuperpowerIndex_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISuperInterface::PlayAnimation(UAnimMontage* PowerAnimation, USkeletalMeshComponent* PowerMesh)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayAnimation instead.");
	}
	void ISuperInterface::PlaySound(USoundBase* PowerSound)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlaySound instead.");
	}
	void ISuperInterface::RemoveSuperpower(int32 Index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveSuperpower instead.");
	}
	void ISuperInterface::SetSuperpowerEnabled(int32 Index, bool bEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSuperpowerEnabled instead.");
	}
	void USuperInterface::StaticRegisterNativesUSuperInterface()
	{
		UClass* Class = USuperInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSuperpower", &ISuperInterface::execActivateSuperpower },
			{ "AddNewComponent", &ISuperInterface::execAddNewComponent },
			{ "AddSuperpower", &ISuperInterface::execAddSuperpower },
			{ "DeactivateSuperpower", &ISuperInterface::execDeactivateSuperpower },
			{ "GetSuperpowerClasses", &ISuperInterface::execGetSuperpowerClasses },
			{ "GetSuperpowerComponent", &ISuperInterface::execGetSuperpowerComponent },
			{ "GetSuperpowerComponents", &ISuperInterface::execGetSuperpowerComponents },
			{ "GetSuperpowerIndex", &ISuperInterface::execGetSuperpowerIndex },
			{ "PlayAnimation", &ISuperInterface::execPlayAnimation },
			{ "PlaySound", &ISuperInterface::execPlaySound },
			{ "RemoveSuperpower", &ISuperInterface::execRemoveSuperpower },
			{ "SetSuperpowerEnabled", &ISuperInterface::execSetSuperpowerEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventActivateSuperpower_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Activates a superpower. It will tick every so often until the power is deactivated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "ActivateSuperpower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventActivateSuperpower_Parms), Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_ActivateSuperpower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_ActivateSuperpower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentTransform;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddNewComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachTo = { UE4CodeGen_Private::EPropertyClass::Name, "AttachTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddNewComponent_Parms, AttachTo), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachParent = { UE4CodeGen_Private::EPropertyClass::Object, "AttachParent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddNewComponent_Parms, AttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachParent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ComponentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddNewComponent_Parms, ComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_NewComponent = { UE4CodeGen_Private::EPropertyClass::Class, "NewComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddNewComponent_Parms, NewComponent), Z_Construct_UClass_USceneComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_ComponentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::NewProp_NewComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero" },
		{ "CPP_Default_AttachParent", "None" },
		{ "CPP_Default_AttachTo", "None" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Adds a component to this superhero.\nThis can be useful when attaching meshes and the like." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "AddNewComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(SuperInterface_eventAddNewComponent_Parms), Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_AddNewComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_AddNewComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddSuperpower_Parms, ReturnValue), Z_Construct_UClass_USuperpower_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_NewPower = { UE4CodeGen_Private::EPropertyClass::Class, "NewPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventAddSuperpower_Parms, NewPower), Z_Construct_UClass_USuperpower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::NewProp_NewPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Gives this superhero a new superpower.\nThis will update the array of superpower classes and adds a new superpower component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "AddSuperpower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventAddSuperpower_Parms), Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_AddSuperpower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_AddSuperpower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventDeactivateSuperpower_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Deactivates a superpower. This will stop it ticking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "DeactivateSuperpower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventDeactivateSuperpower_Parms), Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_DeactivateSuperpower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_DeactivateSuperpower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics
	{
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Set, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventGetSuperpowerClasses_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::NewProp_ReturnValue_ElementProp = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_USuperpower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::NewProp_ReturnValue_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Returns all superpower classes.\nThe array returned is a copy; if you need to modify the array, use the provided\nhelper functions (AddSuperpower and RemoveSuperpower)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "GetSuperpowerClasses", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(SuperInterface_eventGetSuperpowerClasses_Parms), Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventGetSuperpowerComponent_Parms, ReturnValue), Z_Construct_UClass_USuperpower_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventGetSuperpowerComponent_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "GetSuperpowerComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(SuperInterface_eventGetSuperpowerComponent_Parms), Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000588, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventGetSuperpowerComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuperpower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Returns all superpower components.\nThe array returned is a copy; if you need to modify the array, use the provided\nhelper functions (AddSuperpower and RemoveSuperpower)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "GetSuperpowerComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(SuperInterface_eventGetSuperpowerComponents_Parms), Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventGetSuperpowerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::NewProp_Power = { UE4CodeGen_Private::EPropertyClass::Class, "Power", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventGetSuperpowerIndex_Parms, Power), Z_Construct_UClass_USuperpower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::NewProp_Power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Gets the index of a superpower.\nIf no power exists with the given index, returns -1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "GetSuperpowerIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(SuperInterface_eventGetSuperpowerIndex_Parms), Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PowerMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventPlayAnimation_Parms, PowerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerMesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "PowerAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventPlayAnimation_Parms, PowerAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::NewProp_PowerAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero" },
		{ "CPP_Default_PowerMesh", "None" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Plays a given animation on the superhero.\nThis usually plays on the superhero's mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "PlayAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventPlayAnimation_Parms), Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_PlaySound_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuperInterface_PlaySound_Statics::NewProp_PowerSound = { UE4CodeGen_Private::EPropertyClass::Object, "PowerSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventPlaySound_Parms, PowerSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_PlaySound_Statics::NewProp_PowerSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_PlaySound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Plays a sound coming from wherever the superhero is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "PlaySound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventPlaySound_Parms), Z_Construct_UFunction_USuperInterface_PlaySound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_PlaySound_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_PlaySound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_PlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_PlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_PlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventRemoveSuperpower_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Permanently removes a superpower from a hero." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "RemoveSuperpower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventRemoveSuperpower_Parms), Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_RemoveSuperpower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_RemoveSuperpower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SuperInterface_eventSetSuperpowerEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SuperInterface_eventSetSuperpowerEnabled_Parms), &Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuperInterface_eventSetSuperpowerEnabled_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Character|Superhero|Powers" },
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
		{ "ToolTip", "Marks a superpower as enabled or disabled.\nDisabling an activated superpower will call DeactivateSuperpower." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuperInterface, "SetSuperpowerEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(SuperInterface_eventSetSuperpowerEnabled_Parms), Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USuperInterface_NoRegister()
	{
		return USuperInterface::StaticClass();
	}
	struct Z_Construct_UClass_USuperInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuperInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Superpowers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USuperInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USuperInterface_ActivateSuperpower, "ActivateSuperpower" }, // 3666066091
		{ &Z_Construct_UFunction_USuperInterface_AddNewComponent, "AddNewComponent" }, // 174903947
		{ &Z_Construct_UFunction_USuperInterface_AddSuperpower, "AddSuperpower" }, // 4064141083
		{ &Z_Construct_UFunction_USuperInterface_DeactivateSuperpower, "DeactivateSuperpower" }, // 2742761098
		{ &Z_Construct_UFunction_USuperInterface_GetSuperpowerClasses, "GetSuperpowerClasses" }, // 2950586370
		{ &Z_Construct_UFunction_USuperInterface_GetSuperpowerComponent, "GetSuperpowerComponent" }, // 3917080392
		{ &Z_Construct_UFunction_USuperInterface_GetSuperpowerComponents, "GetSuperpowerComponents" }, // 2650995981
		{ &Z_Construct_UFunction_USuperInterface_GetSuperpowerIndex, "GetSuperpowerIndex" }, // 2461055580
		{ &Z_Construct_UFunction_USuperInterface_PlayAnimation, "PlayAnimation" }, // 2777117130
		{ &Z_Construct_UFunction_USuperInterface_PlaySound, "PlaySound" }, // 3582788955
		{ &Z_Construct_UFunction_USuperInterface_RemoveSuperpower, "RemoveSuperpower" }, // 2803564553
		{ &Z_Construct_UFunction_USuperInterface_SetSuperpowerEnabled, "SetSuperpowerEnabled" }, // 3564695002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SuperInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuperInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISuperInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuperInterface_Statics::ClassParams = {
		&USuperInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USuperInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USuperInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuperInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuperInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuperInterface, 1117603168);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuperInterface(Z_Construct_UClass_USuperInterface, &USuperInterface::StaticClass, TEXT("/Script/Superpowers"), TEXT("USuperInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuperInterface);
	static FName NAME_USuperInterface_ActivateSuperpower = FName(TEXT("ActivateSuperpower"));
	void ISuperInterface::Execute_ActivateSuperpower(UObject* O, int32 Index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventActivateSuperpower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_ActivateSuperpower);
		if (Func)
		{
			Parms.Index=Index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			I->ActivateSuperpower_Implementation(Index);
		}
	}
	static FName NAME_USuperInterface_AddNewComponent = FName(TEXT("AddNewComponent"));
	USceneComponent* ISuperInterface::Execute_AddNewComponent(UObject* O, TSubclassOf<USceneComponent>  NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent, FName AttachTo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventAddNewComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_AddNewComponent);
		if (Func)
		{
			Parms.NewComponent=NewComponent;
			Parms.ComponentTransform=ComponentTransform;
			Parms.AttachParent=AttachParent;
			Parms.AttachTo=AttachTo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			Parms.ReturnValue = I->AddNewComponent_Implementation(NewComponent,ComponentTransform,AttachParent,AttachTo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USuperInterface_AddSuperpower = FName(TEXT("AddSuperpower"));
	USuperpower* ISuperInterface::Execute_AddSuperpower(UObject* O, TSubclassOf<USuperpower>  NewPower)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventAddSuperpower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_AddSuperpower);
		if (Func)
		{
			Parms.NewPower=NewPower;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			Parms.ReturnValue = I->AddSuperpower_Implementation(NewPower);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USuperInterface_DeactivateSuperpower = FName(TEXT("DeactivateSuperpower"));
	void ISuperInterface::Execute_DeactivateSuperpower(UObject* O, int32 Index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventDeactivateSuperpower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_DeactivateSuperpower);
		if (Func)
		{
			Parms.Index=Index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			I->DeactivateSuperpower_Implementation(Index);
		}
	}
	static FName NAME_USuperInterface_GetSuperpowerClasses = FName(TEXT("GetSuperpowerClasses"));
	TSet<TSubclassOf<USuperpower> > ISuperInterface::Execute_GetSuperpowerClasses(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventGetSuperpowerClasses_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_GetSuperpowerClasses);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSuperpowerClasses_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USuperInterface_GetSuperpowerComponent = FName(TEXT("GetSuperpowerComponent"));
	USuperpower* ISuperInterface::Execute_GetSuperpowerComponent(const UObject* O, int32 Index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventGetSuperpowerComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_GetSuperpowerComponent);
		if (Func)
		{
			Parms.Index=Index;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSuperpowerComponent_Implementation(Index);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USuperInterface_GetSuperpowerComponents = FName(TEXT("GetSuperpowerComponents"));
	TArray<USuperpower*> ISuperInterface::Execute_GetSuperpowerComponents(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventGetSuperpowerComponents_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_GetSuperpowerComponents);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSuperpowerComponents_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USuperInterface_GetSuperpowerIndex = FName(TEXT("GetSuperpowerIndex"));
	int32 ISuperInterface::Execute_GetSuperpowerIndex(const UObject* O, TSubclassOf<USuperpower>  Power)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventGetSuperpowerIndex_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_GetSuperpowerIndex);
		if (Func)
		{
			Parms.Power=Power;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSuperpowerIndex_Implementation(Power);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USuperInterface_PlayAnimation = FName(TEXT("PlayAnimation"));
	void ISuperInterface::Execute_PlayAnimation(UObject* O, UAnimMontage* PowerAnimation, USkeletalMeshComponent* PowerMesh)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventPlayAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_PlayAnimation);
		if (Func)
		{
			Parms.PowerAnimation=PowerAnimation;
			Parms.PowerMesh=PowerMesh;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			I->PlayAnimation_Implementation(PowerAnimation,PowerMesh);
		}
	}
	static FName NAME_USuperInterface_PlaySound = FName(TEXT("PlaySound"));
	void ISuperInterface::Execute_PlaySound(UObject* O, USoundBase* PowerSound)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventPlaySound_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_PlaySound);
		if (Func)
		{
			Parms.PowerSound=PowerSound;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			I->PlaySound_Implementation(PowerSound);
		}
	}
	static FName NAME_USuperInterface_RemoveSuperpower = FName(TEXT("RemoveSuperpower"));
	void ISuperInterface::Execute_RemoveSuperpower(UObject* O, int32 Index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventRemoveSuperpower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_RemoveSuperpower);
		if (Func)
		{
			Parms.Index=Index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			I->RemoveSuperpower_Implementation(Index);
		}
	}
	static FName NAME_USuperInterface_SetSuperpowerEnabled = FName(TEXT("SetSuperpowerEnabled"));
	void ISuperInterface::Execute_SetSuperpowerEnabled(UObject* O, int32 Index, bool bEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuperInterface::StaticClass()));
		SuperInterface_eventSetSuperpowerEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuperInterface_SetSuperpowerEnabled);
		if (Func)
		{
			Parms.Index=Index;
			Parms.bEnabled=bEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuperInterface*)(O->GetNativeInterfaceAddress(USuperInterface::StaticClass())))
		{
			I->SetSuperpowerEnabled_Implementation(Index,bEnabled);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
