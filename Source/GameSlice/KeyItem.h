// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "KeyItem.generated.h"

USTRUCT(BlueprintType)
struct FKeyItemInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString questName;
};

UCLASS()
class GAMESLICE_API AKeyItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AKeyItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FKeyItemInfo KeyItemInfo;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		UStaticMeshComponent* MeshComponent;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void PickUpItem();
	virtual void PickUpItem_Implementation() {
		this->SetActorEnableCollision(false);
		this->SetActorHiddenInGame(true);
	}

};
