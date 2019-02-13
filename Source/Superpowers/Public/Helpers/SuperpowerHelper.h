// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Superpower.h"

#include "SuperpowerHelper.generated.h"


/**
 * Contains a variety of helper functions for various superpowers.
 */
UCLASS()
class SUPERPOWERS_API USuperpowerHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	// Returns a list of all loaded Superpower classes that can be spawned.
	// Will not return any abstract or deprecated classes.
	// Any Superpowers created by mods will be automatically placed inside this array
	// when the game is first loaded.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Game|Character|Superhero|Powers")
	static TArray<TSubclassOf<USuperpower>>& FindSuperpowerClasses();

	// Returns an array of UI data regarding each superpower.
	// Each index in this array will match up with the array given by FindSuperpowerClasses.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Game|Character|Superhero|Powers|UI")
	static TArray<FSuperpowerUIData> GetSuperpowerUIData();
};
