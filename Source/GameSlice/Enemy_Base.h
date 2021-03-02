// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy_Base.generated.h"

UCLASS()
class GAMESLICE_API AEnemy_Base : public ACharacter
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this character's properties
	AEnemy_Base();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Stats")
		float Damage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base Stats")
		float Health;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Stats")
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Stats")
		float Range;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Queries")
		bool IsGruntClass;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
