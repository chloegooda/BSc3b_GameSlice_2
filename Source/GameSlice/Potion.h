// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Potion.generated.h"

UENUM(Blueprintable)
enum class PotionType : uint8 {
	HealthBoost,
	SpeedBoost,
	Attack
};

USTRUCT(Blueprintable)
struct FPotionInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		PotionType potionType = PotionType::HealthBoost;
};

UCLASS()
class GAMESLICE_API APotion : public ABaseItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FPotionInfo PotionInfo;

};
