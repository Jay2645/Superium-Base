// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Superpowers.h"
#include "IPlatformFilePak.h"
#include "PlatformFilemanager.h"
#include "Superpower.h"
#include "Class.h"
#include "UObjectIterator.h"
#if WITH_EDITOR
#include "KismetEditorUtilities.h"
#endif
#include "AssetRegistryModule.h"
#include "IAssetRegistry.h"
#include "ArrayReader.h"
#include "FileHelper.h"
#include "Engine/StreamableManager.h"

#define LOCTEXT_NAMESPACE "FSuperpowersModule"

TArray<TSubclassOf<USuperpower>> FSuperpowersModule::AllSuperpowers = TArray<TSubclassOf<USuperpower>>();

void FSuperpowersModule::RegisterPaks(TArray<FString> &ContentPaths)
{
	ContentPaths.Add(TEXT("/Game"));
	ContentPaths.Add(TEXT("/Superpowers"));
#if !WITH_EDITOR
	// The game will automatically load any Pak placed inside the Content/Paks directory
	// However, it doesn't automatically register it internally
	// This adds a mountpoint to the Pak so files inside of it can be properly loaded
	FPakPlatformFile* Pak = (FPakPlatformFile*)FPlatformFileManager::Get().FindPlatformFile(TEXT("PakFile"));
	check(Pak);
	TArray<FString> ExistingPaks;
	Pak->GetMountedPakFilenames(ExistingPaks);
	for (int i = 1; i < ExistingPaks.Num(); i++)
	{
		// First Pak is the engine Pak, so we start at 1
		FString path;
		FString pakName;
		FString pakExtension;
		FPaths::Split(ExistingPaks[i], path, pakName, pakExtension);
		FString contentDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("Plugins"), pakName, TEXT("Content/"));
		UE_LOG(LogTemp, Log, TEXT("Pak path: %s; Filename: %s; Extension: %s. Placing into %s."), *path, *pakName, *pakExtension, *contentDir);
		FPackageName::RegisterMountPoint("/" + pakName + "/", contentDir);
		ContentPaths.Add("/" + pakName);
		AddAssetRegistry(FPaths::Combine(path, pakName));
	}
#endif
}

void FSuperpowersModule::AddAssetRegistry(const FString& PakFilename)
{
	// This adds our Pak file to the asset registry
	// Without this, we won't be able to load any of our classes
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	// Ensure the Pak filename doesn't have any dashes
	FString DashlessPakFilename;
	int32 DashPosition = PakFilename.Find(TEXT("-"), ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	if (DashPosition != -1)
	{
		DashlessPakFilename = PakFilename.Left(DashPosition);
	}
	else
	{
		DashlessPakFilename = PakFilename;
	}

	// Load the asset registry file
	FString AssetRegistryName = DashlessPakFilename + TEXT("-AssetRegistry.bin");
	FArrayReader SerializedAssetData;
	if (FFileHelper::LoadFileToArray(SerializedAssetData, *AssetRegistryName))
	{
		// serialize the data with the memory reader (will convert FStrings to FNames, etc)
		AssetRegistryModule.Get().Serialize(SerializedAssetData);
		UE_LOG(LogTemp, Log, TEXT("%s merged into the asset registry"), *AssetRegistryName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s could not be found"), *AssetRegistryName);
	}
}

void FSuperpowersModule::FindCPPSubclasses(UClass* Base, TArray<TSubclassOf<USuperpower>>& Subclasses)
{
	for (TObjectIterator< UClass > ClassIt; ClassIt; ++ClassIt)
	{
		UClass* Class = *ClassIt;

		// Only interested in native C++ classes
		if (!Class->IsNative())
		{
			continue;
		}

		// Ignore deprecated
		if (Class->HasAnyClassFlags(CLASS_Deprecated | CLASS_Abstract | CLASS_NewerVersionExists))
		{
			continue;
		}

		// Check this class is a subclass of our base class
		if (!Class->IsChildOf(Base))
		{
			continue;
		}

		// Add this class
		Subclasses.Add(Class);
	}
}

UObject* FSuperpowersModule::GetAssetFromData(FString& AssetPath)
{
	UObject* asset = FindObject<UObject>(NULL, *AssetPath);
	if (asset == NULL)
	{
		UObject* InOuter = NULL;
		ResolveName(InOuter, AssetPath, true, true);

		if (InOuter)
		{
			asset = StaticFindObjectFast(UObject::StaticClass(), InOuter, *AssetPath);
		}
		if (asset)
		{
			return asset;
		}

		asset = StaticLoadObject(UClass::StaticClass(), NULL, *AssetPath);
		if (asset)
		{
			return asset;
		}

		asset = LoadObject<UClass>(NULL, *AssetPath);
		if (asset)
		{
			return asset;
		}

		asset = StaticLoadObject(UObject::StaticClass(), NULL, *AssetPath);
		if (asset)
		{
			return asset;
		}

		asset = LoadObject<UObject>(NULL, *AssetPath);
		if (asset)
		{
			return asset;
		}
	}

	return asset;
}

void FSuperpowersModule::FindGeneratedClass(const FAssetData &Asset, const TSet<FName> &DerivedNames, TArray<TSubclassOf<USuperpower>> &OutSubclasses)
{
	// Get the the class this blueprint generates (this is stored as a full path)
	if (auto generatedClassPathPtr = Asset.TagsAndValues.Find(TEXT("GeneratedClass")))
	{
		// Convert path to just the name part
		FString classObjectPath = FPackageName::ExportTextPathToObjectPath(*generatedClassPathPtr);
		FString className = FPackageName::ObjectPathToObjectName(classObjectPath);

		// Check if this class is in the derived set
		if (!DerivedNames.Contains(*className))
		{
			// This class isn't derived from the class we're looking for
			return;
		}

		// Load the class from the object path
		// This *should* always return a valid UBlueprintGeneratedClass (since it's a Blueprint)
		// However, we just need the base type (UClass)
		UClass* loadedClass = Cast<UClass>(GetAssetFromData(classObjectPath));
		if (loadedClass != NULL)
		{
			// Verify that we can use this class
			if (loadedClass->HasAnyClassFlags(CLASS_Deprecated | CLASS_Abstract | CLASS_NewerVersionExists))
			{
				return;
			}

			// Add it to the list of valid subclasses
			OutSubclasses.Add(loadedClass);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Could not load class for path: %s; class name: %s"), *classObjectPath, *className);
		}
	}
}

void FSuperpowersModule::FindBlueprintSubclasses(const TArray<FString>& ContentPaths, UClass* Base, TArray<TSubclassOf<USuperpower>>& Subclasses)
{
	// Load the asset registry module
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked< FAssetRegistryModule >(FName("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	AssetRegistry.ScanPathsSynchronous(ContentPaths);

	FName BaseClassName = Base->GetFName();

	// Use the asset registry to get the set of all class names deriving from Base
	TSet<FName> DerivedNames;
	{
		// Everything in this block will get added to derived names via witchcraft
		TArray<FName> BaseNames;
		BaseNames.Add(BaseClassName);

		TSet<FName> Excluded;
		AssetRegistry.GetDerivedClassNames(BaseNames, Excluded, DerivedNames);
	}

	for (const FString& Path : ContentPaths)
	{
		UE_LOG(LogTemp, Log, TEXT("Checking file path: %s"), *Path);

		FARFilter Filter;
		Filter.ClassNames.Add(UBlueprint::StaticClass()->GetFName());
		Filter.bRecursiveClasses = true;
		if (!Path.IsEmpty())
		{
			Filter.PackagePaths.Add(*Path);
		}
		Filter.bRecursivePaths = true;

		TArray< FAssetData > AssetList;
		AssetRegistry.GetAssets(Filter, AssetList);

		// Iterate over retrieved blueprint assets
		for (const FAssetData& Asset : AssetList)
		{
			FindGeneratedClass(Asset, DerivedNames, Subclasses);
		}
	}
}

void FSuperpowersModule::LoadPaks()
{
	TArray<FString> ContentPaths;
	RegisterPaks(ContentPaths);

	UClass* Base = USuperpower::StaticClass();
	AllSuperpowers.Empty();
	FindCPPSubclasses(Base, AllSuperpowers);
	FindBlueprintSubclasses(ContentPaths, Base, AllSuperpowers);

	for (const TSubclassOf<USuperpower>& subclass : AllSuperpowers)
	{
		if (subclass == NULL)
		{
			UE_LOG(LogTemp, Warning, TEXT("A subclass was null!"));
			continue;
		}
		UE_LOG(LogTemp, Log, TEXT("Power: %s"), *subclass->GetName());
	}
}



void FSuperpowersModule::StartupModule()
{
	// Load all Paks.
	LoadPaks();
}

void FSuperpowersModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSuperpowersModule, Superpowers)