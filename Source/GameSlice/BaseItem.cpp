// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem.h"
#include "ConstructorHelpers.h"
#include "UObject/UObjectGlobals.h"
#include "Components/BoxComponent.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// generate mesh component and set as root
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComponent"));
    this->RootComponent = this->MeshComponent;
}

