// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_Bed_SaveGame.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMESLICE_API ABP_Bed_SaveGame : public AActor
{
	GENERATED_BODY()
	
public:	
	ABP_Bed_SaveGame();
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		UStaticMeshComponent* MeshComponentBed;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		UStaticMeshComponent* MeshComponentPillow;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OverwriteSaveGame();
	virtual void OverwriteSaveGame_Implementation() {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Saving...")));
	}
};