// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BlasterGameMode.generated.h"

namespace MatchState
{
	extern BLASTER_API const FName Cooldown;// Match duration has been reached. Display winner and begin cooldown timer.
}

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:

	ABlasterGameMode();

	virtual void Tick(float DeltaTime)override;

	/*Handle Player Death*/
	virtual void PlayerEliminated(class ABlasterCharacter* ElimmedCharacetr, class ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController);

	virtual void RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController);

	void PlayerLeftGame(class ABlasterPlayerState* PlayerLeaving);

	virtual float CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage);

	/*Time*/
	float LevelStartTime = 0.f;

	UPROPERTY(EditDefaultsOnly)
	float WarmupTime = 10.f;

	UPROPERTY(EditAnywhere)
	float MatchTime = 120.f;

	UPROPERTY(EditAnywhere)
	float CooldownTime = 10.f;

	bool bTeamsMatch = false;

protected:

	virtual void BeginPlay()override;

	virtual void OnMatchStateSet()override;

private:

	float CountdownTime = 0.f;

public:

	FORCEINLINE float GetCountdownTime() { return CountdownTime; }
};