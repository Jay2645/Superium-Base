// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SuperInterface.generated.h"

class USuperpower;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USuperInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * This is an interface inherited by anything with superpowers.
 */
class SUPERPOWERS_API ISuperInterface
{
	GENERATED_BODY()

protected:
	// Pure virtual
	virtual TSet<TSubclassOf<USuperpower>> GetSuperpowerClasses_Implementation() const = 0;
	virtual TArray<USuperpower*> GetSuperpowerComponents_Implementation() const = 0;
	virtual void PlayAnimation_Implementation(class UAnimMontage* PowerAnimation, class USkeletalMeshComponent* PowerMesh = NULL) = 0;
	virtual void PlaySound_Implementation(class USoundBase* PowerSound) = 0;
	virtual USceneComponent* AddNewComponent_Implementation(TSubclassOf<USceneComponent> NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent = NULL, FName AttachTo = NAME_None) = 0;
	virtual USuperpower* AddSuperpower_Implementation(TSubclassOf<USuperpower> NewPower) = 0;
	virtual void RemoveSuperpower_Implementation(int32 Index) = 0;
	virtual USkeletalMeshComponent* GetVisibleMesh_Implementation() const = 0;

	// Have default implementation
	virtual int32 GetSuperpowerIndex_Implementation(TSubclassOf<USuperpower> Power) const;
	virtual USuperpower* GetSuperpowerComponent_Implementation(int32 Index) const;
	virtual void ActivateSuperpower_Implementation(int32 Index);
	virtual void DeactivateSuperpower_Implementation(int32 Index);
	virtual void SetSuperpowerEnabled_Implementation(int32 Index, bool bEnabled);


public:
	// Returns all superpower classes.
	// The array returned is a copy; if you need to modify the array, use the provided
	// helper functions (AddSuperpower and RemoveSuperpower).
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	TSet<TSubclassOf<USuperpower>> GetSuperpowerClasses() const;
	// Returns all superpower components.
	// The array returned is a copy; if you need to modify the array, use the provided
	// helper functions (AddSuperpower and RemoveSuperpower).
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	TArray<USuperpower*> GetSuperpowerComponents() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	USuperpower* GetSuperpowerComponent(int32 Index) const;
	// Activates a superpower. It will tick every so often until the power is deactivated.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void ActivateSuperpower(int32 Index);
	// Deactivates a superpower. This will stop it ticking.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void DeactivateSuperpower(int32 Index);

	// Gets the index of a superpower.
	// If no power exists with the given index, returns -1.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	int32 GetSuperpowerIndex(TSubclassOf<USuperpower> Power) const;

	// Plays a given animation on the superhero.
	// This usually plays on the superhero's mesh.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero")
	void PlayAnimation(class UAnimMontage* PowerAnimation, class USkeletalMeshComponent* PowerMesh = NULL);
	// Plays a sound coming from wherever the superhero is.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero")
	void PlaySound(class USoundBase* PowerSound);
	// Gets the mesh associated with this character.
	// If the character being controlled is in first-person, this 
	// should return the first-person mesh.
	// If it's third-person, this should return the third-person mesh.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero")
	USkeletalMeshComponent* GetVisibleMesh() const;

	// Adds a component to this superhero.
	// This can be useful when attaching meshes and the like.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero")
	USceneComponent* AddNewComponent(TSubclassOf<USceneComponent> NewComponent, FTransform ComponentTransform, USceneComponent* AttachParent = NULL, FName AttachTo = NAME_None);
	// Gives this superhero a new superpower.
	// This will update the array of superpower classes and adds a new superpower component.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	USuperpower* AddSuperpower(TSubclassOf<USuperpower> NewPower);

	// Permanently removes a superpower from a hero.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void RemoveSuperpower(int32 Index);
	// Marks a superpower as enabled or disabled.
	// Disabling an activated superpower will call DeactivateSuperpower.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void SetSuperpowerEnabled(int32 Index, bool bEnabled);
};
