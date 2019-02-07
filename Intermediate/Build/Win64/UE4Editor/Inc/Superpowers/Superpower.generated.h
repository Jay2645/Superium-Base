// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef SUPERPOWERS_Superpower_generated_h
#error "Superpower.generated.h already included, missing '#pragma once' in Superpower.h"
#endif
#define SUPERPOWERS_Superpower_generated_h

#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_RPC_WRAPPERS \
	virtual void TickPower_Implementation(); \
	virtual void DeactivatePower_Implementation(); \
	virtual void ActivatePower_Implementation(); \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Enable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickPower_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivatePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivatePower_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePower_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperheroCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetSuperheroCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerTick(); \
		P_NATIVE_END; \
	}


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Enable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickPower_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivatePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivatePower_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePower_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSuperheroCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetSuperheroCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerTick(); \
		P_NATIVE_END; \
	}


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_EVENT_PARMS
#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_CALLBACK_WRAPPERS
#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSuperpower(); \
	friend struct Z_Construct_UClass_USuperpower_Statics; \
public: \
	DECLARE_CLASS(USuperpower, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Superpowers"), NO_API) \
	DECLARE_SERIALIZER(USuperpower)


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSuperpower(); \
	friend struct Z_Construct_UClass_USuperpower_Statics; \
public: \
	DECLARE_CLASS(USuperpower, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Superpowers"), NO_API) \
	DECLARE_SERIALIZER(USuperpower)


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USuperpower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuperpower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuperpower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuperpower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USuperpower(USuperpower&&); \
	NO_API USuperpower(const USuperpower&); \
public:


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USuperpower(USuperpower&&); \
	NO_API USuperpower(const USuperpower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuperpower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuperpower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USuperpower)


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Superhero() { return STRUCT_OFFSET(USuperpower, Superhero); } \
	FORCEINLINE static uint32 __PPO__PowerTickTime() { return STRUCT_OFFSET(USuperpower, PowerTickTime); } \
	FORCEINLINE static uint32 __PPO__PowerCooldownTime() { return STRUCT_OFFSET(USuperpower, PowerCooldownTime); } \
	FORCEINLINE static uint32 __PPO__bIsPassivePower() { return STRUCT_OFFSET(USuperpower, bIsPassivePower); } \
	FORCEINLINE static uint32 __PPO__bIsPowerEnabled() { return STRUCT_OFFSET(USuperpower, bIsPowerEnabled); } \
	FORCEINLINE static uint32 __PPO__bIsPowerActive() { return STRUCT_OFFSET(USuperpower, bIsPowerActive); }


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_14_PROLOG \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_EVENT_PARMS


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_PRIVATE_PROPERTY_OFFSET \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_RPC_WRAPPERS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_CALLBACK_WRAPPERS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_INCLASS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_PRIVATE_PROPERTY_OFFSET \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_CALLBACK_WRAPPERS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_INCLASS_NO_PURE_DECLS \
	Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Superium_Plugins_Superpowers_Source_Superpowers_Public_Superpower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
