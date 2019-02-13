// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "Internationalization.h"

#include "Superpower.generated.h"


class ISuperInterface;

/**
* Various UI data about this superpower.
* This contains the superpower name, cost, etc.
*/
USTRUCT(BlueprintType)
struct SUPERPOWERS_API FSuperpowerUIData
{
	GENERATED_BODY()

public:
	// The name given to this superpower -- "Super Jump", "X-Ray Vision", etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText FriendlySuperpowerName;
	// A description of the superpower.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SuperpowerDescription;
	// How much this power costs to "buy."
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PowerCost;

	FSuperpowerUIData()
	{
		FriendlySuperpowerName = FText::FromString("Generic Superpower");
		SuperpowerDescription = FText::FromString("This superpower doesn't do anything.");
		PowerCost = 1;
	}
};

/**
* A base type for superpowers.
* All superpowers should inherit from this class.
*/
UCLASS(Abstract, Blueprintable, Transient)
class SUPERPOWERS_API USuperpower : public UActorComponent
{
	GENERATED_BODY()

protected:	
	// A reference to the superhero who has this power.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Super", meta = (AllowPrivateAccess = "true"))
	TScriptInterface<ISuperInterface> Superhero;

	// How often the superpower should tick when it's active.
	// A value <= 0 means it will never tick (only activating once).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (AllowPrivateAccess = "true"))
	float PowerTickTime;
	// How often the superpower should wait between uses.
	// A value <= 0 means it can be used as fast as the user can click.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (AllowPrivateAccess = "true"))
	float PowerCooldownTime;
	// Whether this power has a passive effect, instead of an active one.
	// If a power should have an active AND a passive effect, the passive effect should
	// add the active effect to the hero at the beginning of the match.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (AllowPrivateAccess = "true"))
	bool bIsPassivePower;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Power", meta = (AllowPrivateAccess = "true"))
	bool bIsPowerEnabled;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Power", meta = (AllowPrivateAccess = "true"))
	bool bIsPowerActive;

	FTimerHandle PowerTickHandle;
	FTimerHandle PowerCooldownHandle;

public:
	// All UI data about this superpower, including name, description, cost, etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	FSuperpowerUIData UIData;

public:
	USuperpower();

private:
	UFUNCTION()
	void PowerTick();

protected:
	// Called when the game starts.
	// Initializes the Superhero variable if it wasn't set already.
	// Passive superpowers also get enabled on BeginPlay.
	virtual void BeginPlay() override;

	virtual void ActivatePower_Implementation();
	virtual void DeactivatePower_Implementation();
	virtual void TickPower_Implementation();

	// Allows Blueprints to initialize anything about this power.
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Game|Character|Superhero|Powers")
	void InitializePowers();

	// Attempts to cast our Superhero into a character.
	// If unsuccessful, will return NULL.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Game|Character|Superhero")
	ACharacter* GetSuperheroCharacter() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void ActivatePower();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void DeactivatePower();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Game|Character|Superhero|Powers")
	void TickPower();

	UFUNCTION(BlueprintCallable, Category = "Game|Character|Superhero|Powers")
	void SetEnabled(bool bIsEnabled);
	UFUNCTION(BlueprintCallable, Category = "Game|Character|Superhero|Powers")
	void Disable();
	UFUNCTION(BlueprintCallable, Category = "Game|Character|Superhero|Powers")
	void Enable();


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Game|Character|Superhero|Powers")
	bool IsEnabled() const;
};

#undef LOCTEXT_NAMESPACE