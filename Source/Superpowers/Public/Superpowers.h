// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class Superpower;

class FSuperpowersModule : public IModuleInterface
{
public:
	static TArray<TSubclassOf<USuperpower>> AllSuperpowers;

private:
	// Populates the passed-in array with the mountpoint for all Paks at Content/Paks.
	// Will also include mount points for /Game/ and this plugin.
	// Does not load any Paks; relies on Unreal's built-in Pak loading system.
	void RegisterPaks(TArray<FString>& ContentPaths);
	// Finds an AssetRegistry for the given Pak.
	// File name should be the complete path to the Pak minus extension.
	// Will load the AssetRegistry into the system.
	void AddAssetRegistry(const FString& PakFilename);
	// Finds all subclasses deriving from base that have been created in C++.
	void FindCPPSubclasses(UClass* Base, TArray<TSubclassOf<USuperpower>>& OutSubclasses);
	// Loads the asset at a given path.
	// The path should be registered with Unreal through the AssetRegistry.
	// Will return either a UClass (for Blueprints, code, etc.) or a UObject (everything else).
	UObject* GetAssetFromData(FString& AssetPath);
	// Finds the Blueprint class located within the given AssetData.
	// Ensures that the class derives from the given set of derived names and is valid to spawn (not abstract).
	// Will place the valid class (if one is found) inside the OutSubclasses array.
	void FindGeneratedClass(const FAssetData &Asset, const TSet<FName> &DerivedNames, TArray<TSubclassOf<USuperpower>>& OutSubclasses);
	// Finds all Blueprint subclasses of Base.
	// Will search in each path specified by ContentPaths. These paths should be registered with the AssetRegistry.
	// Found classes are placed inside the OutSubclasses array.
	void FindBlueprintSubclasses(const TArray<FString>& ContentPaths, UClass* Base, TArray<TSubclassOf<USuperpower>>& OutSubclasses);

	// Loads all Paks in the Content/Paks folder.
	// Populates the AllSuperpowers array.
	void LoadPaks();

public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;

	virtual void ShutdownModule() override;
};

