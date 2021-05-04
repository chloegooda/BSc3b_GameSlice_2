// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Weapon.h"
#include "GI_Main.h"
#include "SaveGameFile.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSaveInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int gold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int currentSkillPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int currentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<WeaponClass> UnlockedWeaponClasses;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FInventorySlot> ItemList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FInventorySlot> KeyItemList;
};


UCLASS()
class GAMESLICE_API USaveGameFile : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
		FPlayerSaveInfo PlayerSaveInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
		FString SaveSlotName;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
		int UserIndex;

	USaveGameFile();
};
