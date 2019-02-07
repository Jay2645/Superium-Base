// Fill out your copyright notice in the Description page of Project Settings.

#include "SuperInterface.h"
#include "Superpower.h"

int32 ISuperInterface::GetSuperpowerIndex_Implementation(TSubclassOf<USuperpower> Power) const
{
	if (Power == NULL)
	{
		return -1;
	}

	TArray<USuperpower*> powers = GetSuperpowerComponents();
	for (int i = 0; i < powers.Num(); i++)
	{
		if (powers[i] == NULL)
		{
			continue;
		}
		if (powers[i]->GetClass() == Power)
		{
			return i;
		}
	}
	return -1;
}

USuperpower* ISuperInterface::GetSuperpowerComponent_Implementation(int32 Index) const
{
	TArray<USuperpower*> components = GetSuperpowerComponents();
	if (!components.IsValidIndex(Index))
	{
		return NULL;
	}
	return components[Index];
}

void ISuperInterface::ActivateSuperpower_Implementation(int32 Index)
{
	USuperpower* superpower = GetSuperpowerComponent(Index);
	if (superpower == NULL)
	{
		return;
	}
	superpower->ActivatePower();
}

void ISuperInterface::DeactivateSuperpower_Implementation(int32 Index)
{
	USuperpower* superpower = GetSuperpowerComponent(Index);
	if (superpower == NULL)
	{
		return;
	}
	superpower->DeactivatePower();
}

void ISuperInterface::SetSuperpowerEnabled_Implementation(int32 Index, bool bEnabled)
{
	USuperpower* superpower = GetSuperpowerComponent(Index);
	if (superpower == NULL)
	{
		return;
	}
	superpower->SetEnabled(bEnabled);
}