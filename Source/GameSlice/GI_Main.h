// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameSlice/BaseItem.h"
#include "GameSlice/KeyItem.h"
#include "Containers/Array.h"
#include "Engine/GameInstance.h"
#include "Components/AudioComponent.h"
#include "GI_Main.generated.h"

USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Stack;
};


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMESLICE_API UGI_Main : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FInventorySlot> ItemList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FInventorySlot> KeyItemList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int playerGold = 500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxPlayerHealth = 12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CurrentPlayerHealth = 12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Component")
		UAudioComponent* SoundManager;

	UFUNCTION(BlueprintCallable)
		void AddItemToInventory(struct FItemInfo NewItem);

	UFUNCTION(BlueprintCallable)
		void AddKeyItem(struct FKeyItemInfo NewKeyItem);

	UFUNCTION(BlueprintCallable)
		void IncreasePlayerGold(int valueToAdd);

	UFUNCTION(BlueprintCallable)
		void RemoveItemFromInventory(struct FItemInfo ItemToRemove);

	UFUNCTION(BlueprintCallable)
		void RemoveKeyItem(struct FKeyItemInfo KeyItemToRemove);
};