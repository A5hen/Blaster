// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blaster/TurningInPlace.h"//
#include "Blaster/Interface/InteractWithCrosshairInterface.h"//
#include "Components/TimelineComponent.h"//
#include "Blaster/CombatState.h"//
#include "Blaster/Team.h"//
#include "BlasterCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);

class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

UCLASS()
class BLASTER_API ABlasterCharacter : public ACharacter, public IInteractWithCrosshairInterface
{
	GENERATED_BODY()

public:

	ABlasterCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;
	virtual void PostInitializeComponents()override;

	void PlayFireMontage(bool bAimming);
	void PlayReloadMontage();
	void PlayHitReactMontage();
	void PlayElimMontage();
	void PlayGrenadeMontage();
	void PlaySwapMontage();

	virtual void OnRep_ReplicatedMovement()override;

	void Elim(bool bPlayerLeftGame);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastElim(bool bPlayerLeftGame);

	UFUNCTION(Server, Reliable)
	void ServerLeaveGame();

	FOnLeftGame OnLeftGame;

	virtual void Destroyed()override;

	UPROPERTY(Replicated)
	bool bDisableGameplay = false;

	UFUNCTION(BlueprintImplementableEvent)
	void ShowSniperScopeWidget(bool bShowScope);

	void UpdateHUDHealth();
	void UpdateHUDShield();
	void UpdateHUDAmmo();

	void SpawnDefaultWeapon();

	UPROPERTY()
	TMap<FName, class UBoxComponent*>HitCollisionBoxes;

	bool bFinishedSwaping = false;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastGainedTheLead();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastLostTheLead();

	void SetTeamColor(ETeam Team);

protected:

	virtual void BeginPlay() override;

	void AimOffset(float DeltaTime);
	void CalculateAO_Pitch();
	void SimProxiesTurn();

	void RotateInPlace(float DeltaTime);

	virtual void Jump()override;

	UFUNCTION()
	void ReceiveDmage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void SetSpawnPoint();
	void OnPlayerStateInitialized();

	// Poll for any relelvant classes and initialize our HUD
	void PollInit();

	void DropOrDestroyWeapon(AWeapon* Weapon);
	void DropOrDestroyWeapons();

	/*Hit boxes used for server-side rewind*/
	UPROPERTY(EditAnywhere)
	class UBoxComponent* head;

	UPROPERTY(EditAnywhere)
	UBoxComponent* pelvis;

	UPROPERTY(EditAnywhere)
	UBoxComponent* spine_02;

	UPROPERTY(EditAnywhere)
	UBoxComponent* spine_03;

	UPROPERTY(EditAnywhere)
	UBoxComponent* upperarm_l;

	UPROPERTY(EditAnywhere)
	UBoxComponent* upperarm_r;

	UPROPERTY(EditAnywhere)
	UBoxComponent* lowerarm_l;

	UPROPERTY(EditAnywhere)
	UBoxComponent* lowerarm_r;

	UPROPERTY(EditAnywhere)
	UBoxComponent* hand_l;

	UPROPERTY(EditAnywhere)
	UBoxComponent* hand_r;

	UPROPERTY(EditAnywhere)
	UBoxComponent* backpack;

	UPROPERTY(EditAnywhere)
	UBoxComponent* blanket;

	UPROPERTY(EditAnywhere)
	UBoxComponent* thigh_l;

	UPROPERTY(EditAnywhere)
	UBoxComponent* thigh_r;

	UPROPERTY(EditAnywhere)
	UBoxComponent* calf_l;

	UPROPERTY(EditAnywhere)
	UBoxComponent* calf_r;

	UPROPERTY(EditAnywhere)
	UBoxComponent* foot_l;

	UPROPERTY(EditAnywhere)
	UBoxComponent* foot_r;

private:

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class UCameraComponent* FollowCamera;

	/*Input*/
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext>InputContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> CameraMoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> EquipAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> CrouchAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> AimAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> FireAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> ReloadAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> ThrowGrenadeAction;

	void Move(const FInputActionValue& InputActionValue);
	void CameraMove(const FInputActionValue& InputActionValue);
	void EquipButtonPressed(const FInputActionValue& InputActionValue);
	void CrouchButtonPressed(const FInputActionValue& InputActionValue);
	void AimButtonPressed(const FInputActionValue& InputActionValue);
	void AimButtonReleased(const FInputActionValue& InputActionValue);
	void FireButtonPressed(const FInputActionValue& InputActionValue);
	void FireButtonReleased(const FInputActionValue& InputActionValue);
	void ReloadButtonReleased(const FInputActionValue& InputActionValue);
	void ThrowGrenadeButtonPressed(const FInputActionValue& InputActionValue);

	UFUNCTION(Server, Reliable)
	void ServerEquipButtonPressed();
	/*Input*/

	UPROPERTY()
	class ABlasterPlayerController* BlasterPlayerController;

	UPROPERTY()
	class ABlasterPlayerState* BlasterPlayerState;

	UPROPERTY()
	class ABlasterGameMode* BlasterGameMode;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	class UWidgetComponent* OverHeadWidget;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	class AWeapon* OverlappingWeapon;

	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon* LastWeapon);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = rute))
	class UCombatComponent* Combat;

	UPROPERTY(VisibleAnywhere)
	class UBuffComponent* Buff;

	UPROPERTY(VisibleAnywhere)
	class ULagCompensationComponent* LagCompensation;

	/*Turn In Place*/
	float AO_Yaw;
	float InterpAO_Yaw;
	float AO_Pitch;
	FRotator StartingAimRotation;
	
	ETurningInPlace TurningInPlace;
	void TurnInPlace(float DeltaTime);

	/*Montage*/
	UPROPERTY(EditAnywhere, Category = "Combat")
	class UAnimMontage* FireWeaponMotage;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UAnimMontage* ElimMontage;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UAnimMontage* GrenadeThrowMontage;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UAnimMontage* SwapMontage;

	/*Hide Camera*/
	void HideCameraIfCharacterClose();

	UPROPERTY(EditAnywhere)
	float CameraThreshold = 200.f;

	/*Rotate on SimulateProxy*/
	bool bRotateRootBone;
	float TurnThreshold = 0.f;
	FRotator ProxyRotationLastFrame;
	FRotator ProxyRotation;
	float ProxyYaw;
	float TimeSinceLastMovementReplication;
	float CalculateSpeed();

	/*Health*/
	UPROPERTY(EditAnywhere, Category = "PlayerStats")
	float MaxHealth = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "PlayerStats")
	float Health = 100.f;

	UFUNCTION()
	void OnRep_Health(float LastHealth);

	/*Shield*/
	UPROPERTY(EditAnywhere, Category = "PlayerStats")
	float MaxShield = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Shield, VisibleAnywhere, Category = "PlayerStats")
	float Shield = 0.f;

	UFUNCTION()
	void OnRep_Shield(float LastShield);

	/*Elim*/
	bool bElimmed = false;

	FTimerHandle ElimHandle;

	UPROPERTY()
	float ElimDelay = 3.f;

	void ElimTimerFinished();

	bool bLeftGame = false;

	/*Dissolve Effect*/
	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;

	FOnTimelineFloat DissolveTrack;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DissolveCurve;

	void StartDissolve();

	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);

	// Dynamic instance that we can change at runtime
	UPROPERTY(VisibleAnywhere, Category = Elim)
	UMaterialInstanceDynamic* DynamicDissolveMaterialInstance;

	// Material instance set on the Blueprint, used with the dynamic material instance
	UPROPERTY(VisibleAnywhere, Category = Elim)
	UMaterialInstance* DissolveMaterialInstance;

	/*Team Colors*/
	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* RedDissolveMatIns;

	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* RedMaterial;

	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* BlueDissolveMatIns;

	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* BlueMaterial;

	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* OriginalMaterial;

	/*Elim Effect*/
	UPROPERTY(EditAnywhere)
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere)
	class USoundCue* ElimBotSound;

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* CrownSystem;

	UPROPERTY()
	class UNiagaraComponent* CrownComponent;

	/*GrenadeMesh*/
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GrenadeMesh;

	/*Default Weapon*/
	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeapon>DefaultWeaponClass;

public:

	void SetOverlappingWeapon(AWeapon* Weapon);

	bool IsWeaponEquipped();
	bool IsAimming();

	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }

	AWeapon* GetEquippedWeapon();

	FORCEINLINE ETurningInPlace GetTurningInPlace() { return TurningInPlace; }

	FVector GetHitTarget();

	FORCEINLINE UCameraComponent* GetFollowCamera() { return FollowCamera; }

	FORCEINLINE bool ShouldRotateRootBone() { return bRotateRootBone; }

	FORCEINLINE bool IsElimmed() { return bElimmed; }

	FORCEINLINE float GetHealth()const { return Health; }
	FORCEINLINE void SetHealth(float Amount) { Health = Amount; }
	FORCEINLINE float GetMaxHealth()const { return MaxHealth; }

	FORCEINLINE float GetShiled()const { return Shield; }
	FORCEINLINE void SetShield(float Amount) { Shield = Amount; }
	FORCEINLINE float GetMaxShield()const { return MaxShield; }

	ECombatState GetCombatState()const;

	FORCEINLINE UCombatComponent* GetCombatComponent()const { return Combat; }
	FORCEINLINE UBuffComponent* GetBuffComponent()const { return Buff; }
	FORCEINLINE ULagCompensationComponent* GetLagCompensationComponent()const { return LagCompensation; }

	FORCEINLINE bool GetDisableGameplay()const { return bDisableGameplay; }

	FORCEINLINE UAnimMontage* GetReloadMontage()const { return ReloadMontage; }

	FORCEINLINE UStaticMeshComponent* GetGrenadeMesh()const { return GrenadeMesh; }

	bool IsLocallyReloading();

	FORCEINLINE bool IsHoldingTheFlag()const;
	void SetHoldingTheFlag(bool bHolding);

	ETeam GetTeam();
};