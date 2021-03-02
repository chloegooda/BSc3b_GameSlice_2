// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	// TeamId = FGenericTeamId(10);
	TeamId = FGenericTeamId(5);
}

FGenericTeamId AMyPlayerController::GetGenericTeamId() const
{
	return TeamId;
}

