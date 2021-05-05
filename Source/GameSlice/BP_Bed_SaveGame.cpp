// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Bed_SaveGame.h"

// Sets default values
ABP_Bed_SaveGame::ABP_Bed_SaveGame()
{
    // generate mesh component and set as root
    this->MeshComponentBed = CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComponentBed"));
    this->MeshComponentPillow = CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComponentPillow"));
    this->RootComponent = this->MeshComponentBed;
}

/*
void ABP_Bed_SaveGame::OverwriteGameSave(int playerGold)
{
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::FromInt(playerGold));
}
*/
