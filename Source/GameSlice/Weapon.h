// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Weapon.generated.h"

UENUM(Blueprintable)
enum class WeaponType : uint8 {
	None,
	Shield,
	Sword,
	Staff,
	Axe,
	Mace,
	Bow,
	Knife
};

UENUM(Blueprintable)
enum class WeaponClass : uint8 {
	None,
	Sword,
	Shield,
	Light,
	Heavy
};

USTRUCT(Blueprintable)
struct FWeaponInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		WeaponType weaponType = WeaponType::Sword;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		WeaponClass weaponClass = WeaponClass::Sword;
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
