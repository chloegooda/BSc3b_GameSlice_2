// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Base.h"

// Sets default values
ANPC_Base::ANPC_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 0; // This sets a default value for the variable
	Type = "NPC";

}

// Called when the game starts or when spawned
void ANPC_Base::BeginPlay()
{
	Super::BeginPlay();

	// Speed = 100; // This will override the default value

	// UE_LOG(LogTemp, Warning, TEXT("ANPC_Base::BeginPlay: 10 times speed = %f"), SpeedTimesTen()); // This created a print in the output log (Useful for debug)
}

// Called every frame
void ANPC_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*float ANPC_Base::SpeedTimesTen()
{
	return Speed * 10; // Functionality of the SpeedTimesTen function made in the header file
}
*/
