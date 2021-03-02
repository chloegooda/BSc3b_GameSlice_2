// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GenericTeamAgentInterface.h"
#include "TeamAIController.generated.h"
//#include "SightAIController.generated.h"


UCLASS()
class GAMESLICE_API ATeamAIController : public AAIController
{
	GENERATED_BODY()
	ATeamAIController();
	//ASightAIController();

public:
	// Override this function
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override; 
};


