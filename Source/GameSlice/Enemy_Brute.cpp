// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Brute.h"

AEnemy_Brute::AEnemy_Brute()
{
	Damage = 8;
	MaxHealth = 8;
	Speed = 3;
	Range = 4;
	IsGruntClass = false;
	CurrentHealth = MaxHealth;
}