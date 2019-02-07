// Fill out your copyright notice in the Description page of Project Settings.

#include "Superpower.h"
#include "SuperInterface.h"
#include "Engine/World.h"
#include "TimerManager.h"

USuperpower::USuperpower()
{
	bIsPowerEnabled = true;
}

void USuperpower::PowerTick()
{
	// This function exists because for some reason the Blueprint
	// implementation wasn't getting called via timer
	TickPower();
}

// Called when the game starts
void USuperpower::BeginPlay()
{
	Super::BeginPlay();

	UObject* superhero = Superhero.GetObject();
	if (superhero == NULL)
	{
		Superhero.SetObject((UObject*)GetOwner());
	}

	InitializePowers();
}

void USuperpower::ActivatePower_Implementation()
{
	if (!bIsPowerEnabled)
	{
		return;
	}

	if (PowerTickTime > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(PowerTickHandle, this, &USuperpower::PowerTick, PowerTickTime, true, 0.0f);
	}
	else
	{
		PowerTick();
	}
	bIsPowerActive = true;
}

void USuperpower::DeactivatePower_Implementation()
{
	if (!bIsPowerActive)
	{
		return;
	}

	GetWorld()->GetTimerManager().ClearTimer(PowerTickHandle);
	bIsPowerActive = false;

	if (PowerCooldownTime > 0.0f)
	{
		Disable();
		GetWorld()->GetTimerManager().SetTimer(PowerCooldownHandle, this, &USuperpower::Enable, PowerCooldownTime, false);
	}
}

void USuperpower::TickPower_Implementation()
{
	// Do nothing
}

ACharacter* USuperpower::GetSuperheroCharacter() const
{
	UObject* superhero = Superhero.GetObject();
	return Cast<ACharacter>(superhero);
}

void USuperpower::SetEnabled(bool bIsEnabled)
{
	if (bIsPowerEnabled == bIsEnabled)
	{
		return;
	}

	bIsPowerEnabled = bIsEnabled;
	if (!bIsPowerEnabled && bIsPowerActive)
	{
		DeactivatePower();
	}
}

void USuperpower::Disable()
{
	SetEnabled(false);
}

void USuperpower::Enable()
{
	SetEnabled(true);
}

bool USuperpower::IsEnabled() const
{
	return bIsPowerEnabled;
}
