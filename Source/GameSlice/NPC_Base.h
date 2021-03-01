// Fill out your copyright notice in the Description page of Project Settings.                                                         

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPC_Base.generated.h"

UCLASS(Blueprintable)
class GAMESLICE_API ANPC_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC_Base();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mechanics") // Creation of a variable
		float Speed; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Characters") 
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Characters") 
		FString Type;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*UFUNCTION(BlueprintCallable, Category = "Mechanics") // Creation of a function
	float SpeedTimesTen();
	*/
};
