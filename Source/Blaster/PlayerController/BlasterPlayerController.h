// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BlasterPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighPingDelegate, bool, bHighPing);

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	void SetHealth(float Health, float MaxHealth);
	void SetShield(float Shield, float MaxShield);
	void SetScore(float ScoreValue);
	void SetDefeat(int32 DefeatValue);
	void SetWeaponAmmo(int32 AmmoValue);
	void SetCarriedAmmo(int32 CarriedAmmoValue);
	void SetMatchCountdown(float CountdownTime);
	void SetAnnouncementCountdown(float CountdownTime);
	void SetGrenades(int32 Value);
	void SetHUDRedTeamScore(float RedScore);
	void SetHUDBlueTeamScore(float BlueScore);
	void HideTeamScore();
	void InitTeamScore();

	virtual void OnPossess(APawn* InPawn)override;
	virtual void Tick(float DeltaTime)override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	virtual float GetServerTime();
	virtual void ReceivedPlayer()override;// Sync with server time as soon as possible

	void OnMatchStateSet(FName State, bool bTeamsMatch = false);

	void HandleMatchHasStarted(bool bTeamsMatch = false);
	void HandleCooldown();

	float SingleTripTime = 0.f;

	FHighPingDelegate HighPingDelegate;

	void BroadcastElim(APlayerState* Attacker, APlayerState* Victim);
	
protected:

	virtual void BeginPlay()override;
	virtual void SetupInputComponent()override;

	void SetHUDTime();

	void PollInit();

	/*Sync time between Server and Client*/
	//Requests the current Server time, passing in the Client's time when the request was sent
	UFUNCTION(Server, Reliable)
	void ServerRequstServerTime(float ClientRequstTime);

	//Reports the current Server time to the Client in response to ServerRequstServerTime
	UFUNCTION(Client, Reliable)
	void ClientReportServerTime(float ClientRequstTime, float ServerReceivedClientRequestTime);

	float ServerClientDelta = 0.f;//Difference between Server and Client Time

	UPROPERTY(EditAnywhere, Category = "Time")
	float TimeSyncFrequency = 5.f;

	float TimeSyncRunningTime = 0.f;

	void CheckTimeSync(float DeltaTime);

	UFUNCTION(Server, Reliable)
	void ServerCheckMatchState();

	UFUNCTION(Client, Reliable)
	void ClientJoinMidGame(FName StateOfMatch, float Warmup, float Match, float Cooldown, float StartTime);

	void HighPingWarning();
	void StopHighPingWarning();
	void CheckPing(float DeltaTime);

	UFUNCTION(Client, Reliable)
	void ClientElimAnnouncement(APlayerState* Attacker, APlayerState* Victim);

	UPROPERTY(ReplicatedUsing = OnRep_ShowTeamScores)
	bool bShowTeamScores = false;

	UFUNCTION()
	void OnRep_ShowTeamScores();

	FString GetInfoText(const TArray<class ABlasterPlayerState*>TopPlayers);
	FString GetTeamInfoText(class ABlasterGameState* BlasterGameState);

private:

	UPROPERTY()
	class ABlasterHUD* BlasterHUD;

	UPROPERTY()
	class ABlasterGameMode* BlasterGameMode;

	float LevelStartTime = 0.f;
	float WarmupTime = 0.f;
	float MatchTime = 0.f;
	float CooldownTime = 0.f;
	uint32 CountdownInt = 0;

	UPROPERTY(ReplicatedUsing = OnRep_MatchState)
	FName MatchState;

	UFUNCTION()
	void OnRep_MatchState();

	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;

	bool bInitializeHealth = false;
	float HUDHealth;
	float HUDMaxHealth;

	bool bInitializeShield = false;
	float HUDShield;
	float HUDMaxShield;

	bool bInitializeScore = false;
	float HUDScore;

	bool bInitializeDefeat = false;
	int32 HUDDefeat;

	bool bInitializeGrenades = false;
	int32 HUDGrenades;

	bool bInitializeAmmo = false;
	int32 HUDAmmo;

	bool bInitializeCarriedAmmo = false;
	int32 HUDCarriedAmmo;

	/*Ping*/
	float HighPingRunningTime = 0.f;

	UPROPERTY(EditAnywhere)
	float HighPingDuration = 5.f;

	float PingAnimationRunningTime = 0.f;

	UPROPERTY(EditAnywhere)
	float CheckPingFrequency = 20.f;

	UPROPERTY(EditAnywhere)
	float HighPingThreshold = 50.f;

	UFUNCTION(Server, Reliable)
	void ServerReportPingStatus(bool bHighPing);

	/*Input*/
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext>InputContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> ReturnAction;

	void ReturnButtonPressed(const FInputActionValue& InputActionValue);

	/*Return to MainMenu*/
	UPROPERTY(EditAnywhere, Category = "HUD")
	TSubclassOf<class UUserWidget>ReturnToMainMenuWidgetClass;

	class UReturnToMainMenu* ReturnToMainMenuWidget;

	bool bReturnToMainMenuOpen = false;
};