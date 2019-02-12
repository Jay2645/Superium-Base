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
	void RegisterPaks(TArray<FString>& ContentPaths);
	void AddAssetRegistry(const FString& PakFilename);
	void FindCPPSubclasses(UClass* Base, TArray<TSubclassOf<USuperpower>>& OutSubclasses);
	UObject* GetAssetFromData(FString& AssetPath);
	void FindGeneratedClass(const FAssetData &Asset, const TSet<FName> &DerivedNames, TArray<TSubclassOf<USuperpower>>& OutSubclasses);
	void FindBlueprintSubclasses(const TArray<FString>& ContentPaths, UClass* Base, TArray<TSubclassOf<USuperpower>>& OutSubclasses);

public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

