// Fill out your copyright notice in the Description page of Project Settings.

#include "GameSlice.h"
#include "SaveGameFile.h"

USaveGameFile::USaveGameFile()
{
	SaveSlotName = TEXT("DefaultSaveSlot");
	UserIndex = 0;
}