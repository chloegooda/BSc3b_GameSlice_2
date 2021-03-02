// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamAIController.h"

ATeamAIController::ATeamAIController()
{
	SetGenericTeamId(FGenericTeamId(5));
}


ETeamAttitude::Type ATeamAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (const APawn* OtherPawn = Cast<APawn>(&Other)) {
		// DEFAULT BEHAVIOUR
		if (const IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			return Super::GetTeamAttitudeTowards(*OtherPawn->GetController());
		}

		// CUTOM BEHAVIOUR
		if (const IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			// This will create an allience with any Team with Id 10 and set all other teams to hostile
			FGenericTeamId OtherTeamId = TeamAgent->GetGenericTeamId();
			if (OtherTeamId == 10) {
				return ETeamAttitude::Neutral;
			}
			else {
				return ETeamAttitude::Hostile;
			}
		}
	}

	return ETeamAttitude::Neutral;
}
