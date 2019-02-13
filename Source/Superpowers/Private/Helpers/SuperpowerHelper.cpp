// Fill out your copyright notice in the Description page of Project Settings.

#include "SuperpowerHelper.h"
#include "Superpowers.h"

TArray<TSubclassOf<USuperpower>>& USuperpowerHelper::FindSuperpowerClasses()
{
	return FSuperpowersModule::AllSuperpowers;
}

TArray<FSuperpowerUIData> USuperpowerHelper::GetSuperpowerUIData()
{
	TArray<TSubclassOf<USuperpower>>& superpowers = FindSuperpowerClasses();
	TArray<FSuperpowerUIData> superUI;
	for (TSubclassOf<USuperpower>& power : superpowers)
	{
		if (power == NULL)
		{
			superUI.Add(FSuperpowerUIData());
			continue;
		}
		superUI.Add(power->GetDefaultObject<USuperpower>()->UIData);
	}
	return superUI;
}
