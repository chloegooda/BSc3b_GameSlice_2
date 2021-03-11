// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Ranged.h"

AEnemy_Ranged::AEnemy_Ranged()
{
	Damage = 3;
	MaxHealth = 5;
	Speed = 7;
	Range = 10;
	IsGruntClass = false;
	CurrentHealth = MaxHealth;
}