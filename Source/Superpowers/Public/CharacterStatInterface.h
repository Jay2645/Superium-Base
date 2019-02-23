// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharacterStatInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCharacterStatInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SUPERPOWERS_API ICharacterStatInterface
{
	GENERATED_BODY()

protected:
	virtual uint8 GetPerserverance_Implementation() const;
	virtual uint8 GetOffense_Implementation() const;
	virtual uint8 GetWillpower_Implementation() const;
	virtual uint8 GetStrength_Implementation() const;
	virtual uint8 GetIntuition_Implementation() const;
	virtual uint8 GetEducation_Implementation() const;
	virtual uint8 GetEstate_Implementation() const;
	virtual uint8 GetDexterity_Implementation() const;
	virtual float GetHealth_Implementation() const;
	virtual float GetMaxHealth_Implementation() const;
	virtual float GetDefense_Implementation() const;
	virtual float GetMaxDefense_Implementation() const;
	virtual float GetDefenseRegenRate_Implementation() const;
	virtual float GetExperienceMultiplier_Implementation() const;
	virtual float GetJumpHeightMultiplier_Implementation() const;
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetPerserverance() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetOffense() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetWillpower() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetStrength() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetIntuition() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetEducation() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetEstate() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	uint8 GetDexterity() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats|Health")
	float GetHealth() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats|Health")
	float GetMaxHealth() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats|Health")
	float GetDefense() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats|Health")
	float GetMaxDefense() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats|Health")
	float GetDefenseRegenRate() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	float GetExperienceMultiplier() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Stats")
	float GetJumpHeightMultiplier() const;
};
