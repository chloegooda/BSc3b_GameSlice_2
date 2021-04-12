// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinItem.h"
#include "ConstructorHelpers.h"
#include "UObject/UObjectGlobals.h"
#include "Components/BoxComponent.h"

// Sets default values
ACoinItem::ACoinItem()
{
    // generate mesh component and set as root
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComponent"));
    this->RootComponent = this->MeshComponent;
}

