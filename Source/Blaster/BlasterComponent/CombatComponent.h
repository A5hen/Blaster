// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Blaster/HUD/BlasterHUD.h"//
#include "Blaster/Weapon/WeaponTypes.h"//
#include "Blaster/CombatState.h"//
#include "CombatComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UCombatComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;

	friend class ABlasterCharacter;

	void FireButtonPressed(bool bPressed);

	void EquipWeapon(class AWeapon* WeaponToEquip);

	void SwapWeapon();

	UFUNCTION(BlueprintCallable)
	void FinishSwap();

	UFUNCTION(BlueprintCallable)
	void FinishSwapWeapons();

	void Reload();

	UFUNCTION(BlueprintCallable)
	void FinishReload();

	UFUNCTION(BlueprintCallable)
	void ShotGunShellReload();

	void JumpToShotGunEnd();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenadeFinished();

	UFUNCTION(BlueprintCallable)
	void LaunchGrenade();

	UFUNCTION(Server, Reliable)
	void ServerLaunchGrenade(const FVector_NetQuantize& Target);

	void PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount);

	bool bLocallyReloading = false;

protected:

	virtual void BeginPlay() override;

	/*Aim*/
	void SetAimming(bool bIsAimming);

	UFUNCTION(Server, Reliable)
	void ServerSetAimming(bool bIsAimming);

	/*Fire*/
	void Fire();

	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotGunWeapon();

	/**/
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	/**/
	void LocalShotGunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerShotGunFire(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShotGunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	/*Crosshair*/
	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	void SetHUDCrosshairs(float DeltaTime);

	/*Grenade*/
	UFUNCTION(Server, Reliable)
	void ServerReload();

	void HandleReload();

	int32 AmountToReload();

	/*Throw*/
	void ThrowGrenade();

	UFUNCTION(Server, Reliable)
	void ServerThrowGrenade();

	void ShowGrenadeMesh(bool bShow);

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectile>GrenadeClass;

	void DropEquippedWeapon();
	void AttachWeaponToRightHand(AActor* ActorToAttach);
	void AttachWeaponToLeftHand(AActor* ActorToAttach);
	void AttachFlagToLeftHand(AWeapon* Flag);
	void AttachWeaponToBackpackHand(AActor* ActorToAttach);
	void UpdateCarriedAmmo();
	void PlayEquipWeaponSound(AWeapon* WeaponToEquip);
	void ReloadEmptyWeapon();

	void EquipPrimaryWeapon(AWeapon* WeaponToEquip);
	void EquipSecondaryWeapon(AWeapon* WeaponToEquip);

private:

	UPROPERTY()
	class ABlasterCharacter* Character;
	UPROPERTY()
	class ABlasterPlayerController* Controller;
	UPROPERTY()
	class ABlasterHUD* HUD;

	UPROPERTY(ReplicatedUsing = OnRep_EquipWeapon)
	AWeapon* EquippedWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
	AWeapon* SecondaryWeapon;

	UFUNCTION()
	void OnRep_EquipWeapon();

	UFUNCTION()
	void OnRep_SecondaryWeapon();

	UPROPERTY(ReplicatedUsing = OnRep_Aimming)
	bool bAimming = false;

	bool bAimButtonPressed = false;

	UFUNCTION()
	void OnRep_Aimming();

	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;

	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;

	bool bFireButtonPressed;

	/*HUD and Crosshair Spread Factor*/
	FHUDPackage Package;

	float CrosshairVelocityFactor;
	float CrosshairInAirFactor;
	float CrosshairAimFactor;
	float CrosshairShootingFactor;

	FVector HitTarget;

	/*Aimming FOV*/
	// Field of view when not Aiming; set to the camera's base FOV in BeginPlay
	float DefaultFOV;

	float CurrentFOV;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float ZoomedFOV = 30.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float ZoomedInterpSpeed = 20.f;

	void InterpFOV(float DeltaTime);

	/*Automatic fire*/
	FTimerHandle FireHandle;

	bool bCanFire = true;

	void StartFireTimer();
	void FireTimerFinished();

	bool CanFire();

	/*Carried Ammo*/
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo);
	int32 CarriedAmmo;

	UFUNCTION()
	void OnRep_CarriedAmmo();

	TMap<EWeaponType, int32>CarriedAmmoMap;

	UPROPERTY(EditAnywhere)
	int32 MaxCarriedAmmo = 300;

	UPROPERTY(EditAnywhere)
	int32 ARAmmo = 30;

	UPROPERTY(EditAnywhere)
	int32 RocketAmmo = 4;

	UPROPERTY(EditAnywhere)
	int32 PistolAmmo = 20;

	UPROPERTY(EditAnywhere)
	int32 SubmachineGunAmmo = 40;

	UPROPERTY(EditAnywhere)
	int32 ShotGunAmmo = 10;

	UPROPERTY(EditAnywhere)
	int32 SniperRifleAmmo = 5;

	UPROPERTY(EditAnywhere)
	int32 GrenadeLauncherAmmo = 4;

	void InitializeCarriedAmmo();

	void UpdateAmmoValue();
	void UpdateShotGunAmmoValue();

	UPROPERTY(EditAnywhere)
	int32 MaxGrenades = 4;

	UPROPERTY(ReplicatedUsing = OnRep_Grenades);
	int32 Grenades = 4;

	UFUNCTION()
	void OnRep_Grenades();

	void UpdateHUDGrenades();

	/*Combat State*/
	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;

	UFUNCTION()
	void OnRep_CombatState();

	UPROPERTY(ReplicatedUsing = OnRep_HoldingTheFlag)
	bool bHoldingTheFlag = false;

	UFUNCTION()
	void OnRep_HoldingTheFlag();

	UPROPERTY()
	AWeapon* TheFlag;

public:	

	FORCEINLINE int32 GetGrenades()const { return Grenades; }
	bool ShouldSwapWeapon();
};