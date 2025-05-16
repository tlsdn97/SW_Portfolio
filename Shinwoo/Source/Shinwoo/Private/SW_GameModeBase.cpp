// Fill out your copyright notice in the Description page of Project Settings.


#include "SW_GameModeBase.h"
#include "SW_Player.h"

ASW_GameModeBase::ASW_GameModeBase()
{
	static ConstructorHelpers::FClassFinder<ASW_Player> pawn

	(TEXT("/Script/Engine.Blueprint'/Game/BluePrint/BP_Player.BP_Player_C'"));

	if (pawn.Succeeded())
	{
		DefaultPawnClass = pawn.Class;
	}
}
