// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureTheFlagGameMode.h"
#include "Blaster/Weapon/Flag.h"//
#include "Blaster/Zone/FlagZone.h"//
#include "Blaster/GameState/BlasterGameState.h"//

void ACaptureTheFlagGameMode::PlayerEliminated(ABlasterCharacter* ElimmedCharacetr, ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController)
{
	ABlasterGameMode::PlayerEliminated(ElimmedCharacetr, VictimController, AttackerController);
}

void ACaptureTheFlagGameMode::FlagCaptured(AFlag* Flag, AFlagZone* FlagZone)
{
	bool bValidCaptured = Flag->GetTeam() != FlagZone->Team;

	ABlasterGameState* BlasterGameState = Cast<ABlasterGameState>(GameState);

	if (bValidCaptured && GameState)
	{
		if (FlagZone->Team == ETeam::ET_BlueTeam)
		{
			BlasterGameState->BlueTeamScores();
		}
		if (FlagZone->Team == ETeam::ET_RedTeam)
		{
			BlasterGameState->RedTeamScores();
		}
	}
}