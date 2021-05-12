// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "CoinItem.generated.h"

UENUM(BlueprintType)
enum class CoinType : uint8 {
	SingleCoin,
	SmallHeap,
	LargeHeap,
	SmallStack,
	LargeStack,
	AlmostEmptyBag,
	Bag,
	FullBag
};

USTRUCT(BlueprintType)
struct FCoinInfo : public FTableRowBase
{
	GENERATED_BODY();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		CoinType cointype = CoinType::SingleCoin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* mesh;
};

UCLASS()
class GAMESLICE_API ACoinItem : public AActor
{
	GENERATED_BODY()
	
public:	

	ACoinItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FCoinInfo CoinInfo;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		UStaticMeshComponent* MeshComponent;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void PickUpItem();
	virtual void PickUpItem_Implementation() {
		this->SetActorHiddenInGame(true);
		this->SetActorEnableCollision(false);
	}
};
