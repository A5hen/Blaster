// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"
#include "GameFramework/GameStateBase.h"//
#include "MultiPlayerSessionsSubsystem.h"//

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	int32 NumOfPlayers = GameState->PlayerArray.Num();

	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		UMultiPlayerSessionsSubsystem* Subsystem = Cast<UMultiPlayerSessionsSubsystem>(GameInstance);
		check(Subsystem);

		if (NumOfPlayers == Subsystem->DesiredNumPublicConnections)
		{
			UWorld* World = GetWorld();
			if (World)
			{
				FString MatchType = Subsystem->DesiredTypeToMatch;

				bUseSeamlessTravel = true;

				if (MatchType == "FreeForAll")
				{
					World->ServerTravel(FString("/Game/Maps/BlasterMap?listen"));
				}
				if (MatchType == "Team")
				{
					World->ServerTravel(FString("/Game/Maps/TeamMap?listen"));
				}
				if (MatchType == "CaptureTheFlag")
				{
					World->ServerTravel(FString("/Game/Maps/CaptureTheFlagMap?listen"));
				}
			}
		}
	}
}