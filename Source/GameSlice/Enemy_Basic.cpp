// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Basic.h"

AEnemy_Basic::AEnemy_Basic()
{
	Damage = 5;
	MaxHealth = 5;
	Speed = 5;
	Range = 2.5;
	IsGruntClass = false;
	CurrentHealth = MaxHealth;
	EnemyDead = false;
}
