// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Weapon.h"
#include "GI_Main.h"
#include "SaveGameFile.generated.h"

USTRUCT(BlueprintType)
struct FSkillPointInfo
{
	GENERATED_BODY();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumSpeedPotionsUsed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumAttackPotionsUsed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumHealthPotionsUsed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumItemsBought;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumItemsSold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumDummiesKilled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumEnemiesKilled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BeckyCollected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ChloeCollected;
};

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int> UnlockedSkillsIDList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int> UnlockedSkillPointsIDList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSkillPointInfo SkillPointInfo;
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
