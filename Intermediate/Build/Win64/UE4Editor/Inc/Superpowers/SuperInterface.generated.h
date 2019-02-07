// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USuperpower;
class USceneComponent;
struct FTransform;
class USoundBase;
class UAnimMontage;
class USkeletalMeshComponent;
#ifdef SUPERPOWERS_SuperInterface_generated_h
#error "SuperInterface.generated.h already included, missing '#pragma once' in SuperInterface.h"
#endif
#define SUPERPOWERS_SuperInterface_generated_h

#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_RPC_WRAPPERS \
	virtual void SetSuperpowerEnabled_Implementation(int32 Index, bool bEnabled) {}; \
	virtual void RemoveSuperpower_Implementation(int32 Index) {}; \
	virtual USuperpower* AddSuperpower_Implementation(TSubclassOf<USuperpower>  NewPower) { return NULL; }; \
	virtual USceneComponent* AddNewComponent_Implementation(TSubclassOf<USceneComponent>  NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent, FName AttachTo) { return NULL; }; \
	virtual void PlaySound_Implementation(USoundBase* PowerSound) {}; \
	virtual void PlayAnimation_Implementation(UAnimMontage* PowerAnimation, USkeletalMeshComponent* PowerMesh) {}; \
	virtual int32 GetSuperpowerIndex_Implementation(TSubclassOf<USuperpower>  Power) const { return 0; }; \
	virtual void DeactivateSuperpower_Implementation(int32 Index) {}; \
	virtual void ActivateSuperpower_Implementation(int32 Index) {}; \
	virtual USuperpower* GetSuperpowerComponent_Implementation(int32 Index) const { return NULL; }; \
	virtual TArray<USuperpower*> GetSuperpowerComponents_Implementation() const { return TArray<USuperpower*>(); }; \
	virtual TSet<TSubclassOf<USuperpower> > GetSuperpowerClasses_Implementation() const { return TSet<TSubclassOf<USuperpower> >(); }; \
 \
	DECLARE_FUNCTION(execSetSuperpowerEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSuperpowerEnabled_Implementation(Z_Param_Index,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSuperpower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSuperpower_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSuperpower) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USuperpower**)Z_Param__Result=P_THIS->AddSuperpower_Implementation(Z_Param_NewPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddNewComponent) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewComponent); \
		P_GET_STRUCT(FTransform,Z_Param_ComponentTransform); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->AddNewComponent_Implementation(Z_Param_NewComponent,Z_Param_ComponentTransform,Z_Param_AttachParent,Z_Param_AttachTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_PowerSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySound_Implementation(Z_Param_PowerSound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_PowerAnimation); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_PowerMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnimation_Implementation(Z_Param_PowerAnimation,Z_Param_PowerMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Power); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSuperpowerIndex_Implementation(Z_Param_Power); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateSuperpower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateSuperpower_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateSuperpower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateSuperpower_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerComponent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USuperpower**)Z_Param__Result=P_THIS->GetSuperpowerComponent_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USuperpower*>*)Z_Param__Result=P_THIS->GetSuperpowerComponents_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerClasses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSet<TSubclassOf<USuperpower> >*)Z_Param__Result=P_THIS->GetSuperpowerClasses_Implementation(); \
		P_NATIVE_END; \
	}


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSuperpowerEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSuperpowerEnabled_Implementation(Z_Param_Index,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSuperpower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSuperpower_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSuperpower) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USuperpower**)Z_Param__Result=P_THIS->AddSuperpower_Implementation(Z_Param_NewPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddNewComponent) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewComponent); \
		P_GET_STRUCT(FTransform,Z_Param_ComponentTransform); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->AddNewComponent_Implementation(Z_Param_NewComponent,Z_Param_ComponentTransform,Z_Param_AttachParent,Z_Param_AttachTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_PowerSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySound_Implementation(Z_Param_PowerSound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_PowerAnimation); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_PowerMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAnimation_Implementation(Z_Param_PowerAnimation,Z_Param_PowerMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerIndex) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Power); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSuperpowerIndex_Implementation(Z_Param_Power); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateSuperpower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateSuperpower_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateSuperpower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateSuperpower_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerComponent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USuperpower**)Z_Param__Result=P_THIS->GetSuperpowerComponent_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USuperpower*>*)Z_Param__Result=P_THIS->GetSuperpowerComponents_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperpowerClasses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSet<TSubclassOf<USuperpower> >*)Z_Param__Result=P_THIS->GetSuperpowerClasses_Implementation(); \
		P_NATIVE_END; \
	}


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_EVENT_PARMS \
	struct SuperInterface_eventActivateSuperpower_Parms \
	{ \
		int32 Index; \
	}; \
	struct SuperInterface_eventAddNewComponent_Parms \
	{ \
		TSubclassOf<USceneComponent>  NewComponent; \
		FTransform ComponentTransform; \
		USceneComponent* AttachParent; \
		FName AttachTo; \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SuperInterface_eventAddNewComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SuperInterface_eventAddSuperpower_Parms \
	{ \
		TSubclassOf<USuperpower>  NewPower; \
		USuperpower* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SuperInterface_eventAddSuperpower_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SuperInterface_eventDeactivateSuperpower_Parms \
	{ \
		int32 Index; \
	}; \
	struct SuperInterface_eventGetSuperpowerClasses_Parms \
	{ \
		TSet<TSubclassOf<USuperpower> > ReturnValue; \
	}; \
	struct SuperInterface_eventGetSuperpowerComponent_Parms \
	{ \
		int32 Index; \
		USuperpower* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SuperInterface_eventGetSuperpowerComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SuperInterface_eventGetSuperpowerComponents_Parms \
	{ \
		TArray<USuperpower*> ReturnValue; \
	}; \
	struct SuperInterface_eventGetSuperpowerIndex_Parms \
	{ \
		TSubclassOf<USuperpower>  Power; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SuperInterface_eventGetSuperpowerIndex_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SuperInterface_eventPlayAnimation_Parms \
	{ \
		UAnimMontage* PowerAnimation; \
		USkeletalMeshComponent* PowerMesh; \
	}; \
	struct SuperInterface_eventPlaySound_Parms \
	{ \
		USoundBase* PowerSound; \
	}; \
	struct SuperInterface_eventRemoveSuperpower_Parms \
	{ \
		int32 Index; \
	}; \
	struct SuperInterface_eventSetSuperpowerEnabled_Parms \
	{ \
		int32 Index; \
		bool bEnabled; \
	};


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_CALLBACK_WRAPPERS
#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUPERPOWERS_API USuperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuperInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUPERPOWERS_API, USuperInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuperInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUPERPOWERS_API USuperInterface(USuperInterface&&); \
	SUPERPOWERS_API USuperInterface(const USuperInterface&); \
public:


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUPERPOWERS_API USuperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUPERPOWERS_API USuperInterface(USuperInterface&&); \
	SUPERPOWERS_API USuperInterface(const USuperInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUPERPOWERS_API, USuperInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuperInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuperInterface)


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSuperInterface(); \
	friend struct Z_Construct_UClass_USuperInterface_Statics; \
public: \
	DECLARE_CLASS(USuperInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Superpowers"), SUPERPOWERS_API) \
	DECLARE_SERIALIZER(USuperInterface)


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISuperInterface() {} \
public: \
	typedef USuperInterface UClassType; \
	typedef ISuperInterface ThisClass; \
	static void Execute_ActivateSuperpower(UObject* O, int32 Index); \
	static USceneComponent* Execute_AddNewComponent(UObject* O, TSubclassOf<USceneComponent>  NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent, FName AttachTo); \
	static USuperpower* Execute_AddSuperpower(UObject* O, TSubclassOf<USuperpower>  NewPower); \
	static void Execute_DeactivateSuperpower(UObject* O, int32 Index); \
	static TSet<TSubclassOf<USuperpower> > Execute_GetSuperpowerClasses(const UObject* O); \
	static USuperpower* Execute_GetSuperpowerComponent(const UObject* O, int32 Index); \
	static TArray<USuperpower*> Execute_GetSuperpowerComponents(const UObject* O); \
	static int32 Execute_GetSuperpowerIndex(const UObject* O, TSubclassOf<USuperpower>  Power); \
	static void Execute_PlayAnimation(UObject* O, UAnimMontage* PowerAnimation, USkeletalMeshComponent* PowerMesh); \
	static void Execute_PlaySound(UObject* O, USoundBase* PowerSound); \
	static void Execute_RemoveSuperpower(UObject* O, int32 Index); \
	static void Execute_SetSuperpowerEnabled(UObject* O, int32 Index, bool bEnabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~ISuperInterface() {} \
public: \
	typedef USuperInterface UClassType; \
	typedef ISuperInterface ThisClass; \
	static void Execute_ActivateSuperpower(UObject* O, int32 Index); \
	static USceneComponent* Execute_AddNewComponent(UObject* O, TSubclassOf<USceneComponent>  NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent, FName AttachTo); \
	static USuperpower* Execute_AddSuperpower(UObject* O, TSubclassOf<USuperpower>  NewPower); \
	static void Execute_DeactivateSuperpower(UObject* O, int32 Index); \
	static TSet<TSubclassOf<USuperpower> > Execute_GetSuperpowerClasses(const UObject* O); \
	static USuperpower* Execute_GetSuperpowerComponent(const UObject* O, int32 Index); \
	static TArray<USuperpower*> Execute_GetSuperpowerComponents(const UObject* O); \
	static int32 Execute_GetSuperpowerIndex(const UObject* O, TSubclassOf<USuperpower>  Power); \
	static void Execute_PlayAnimation(UObject* O, UAnimMontage* PowerAnimation, USkeletalMeshComponent* PowerMesh); \
	static void Execute_PlaySound(UObject* O, USoundBase* PowerSound); \
	static void Execute_RemoveSuperpower(UObject* O, int32 Index); \
	static void Execute_SetSuperpowerEnabled(UObject* O, int32 Index, bool bEnabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_12_PROLOG \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_EVENT_PARMS


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_RPC_WRAPPERS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_CALLBACK_WRAPPERS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_CALLBACK_WRAPPERS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Superium_Plugins_Superpowers_Source_Superpowers_Public_SuperInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
