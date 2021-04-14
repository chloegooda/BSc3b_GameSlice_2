// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Weapon.generated.h"

UENUM(Blueprintable)
enum class WeaponType : uint8 {
	Sword,
	Shield,
	Staff,
	Axe,
	Mace,
	Bow,
	Knife
};

UENUM(Blueprintable)
enum class WeaponMaterial : uint8 {
	Wood,
	Iron,
	Steel,
	Silver
};

USTRUCT(Blueprintable)
struct FWeaponInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		WeaponType weaponType = WeaponType::Sword;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		WeaponMaterial material = WeaponMaterial::Wood;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int durability;
};

UCLASS()
class GAMESLICE_API AWeapon : public ABaseItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponInfo WeaponInfo;
	
};
