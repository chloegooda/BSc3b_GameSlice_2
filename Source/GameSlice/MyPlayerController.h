// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "MyPlayerController.generated.h"

class APlayerControllerTeam;

UCLASS()
class GAMESLICE_API AMyPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	AMyPlayerController();

private:
	//Implement the generic team interface
	FGenericTeamId TeamId;
	FGenericTeamId GetGenericTeamId() const;
	
};
