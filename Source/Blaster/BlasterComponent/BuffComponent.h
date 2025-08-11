// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UBuffComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	friend class ABlasterCharacter;

	void Heal(float HealAmount, float HealTime);

	void SpeedBuff(float BaseSpeed, float CrouchSpeed, float BuffTime);
	void SetInitialSpeed(float BaseSpeed, float CrouchSpeed);

	void JumpBuff(float JumpZVelocity, float BuffTime);
	void SetInitialJumpZVelocity(float ZVelocity);

	void ShieldRecover(float ShieldAmount, float RecoverTime);

protected:
	
	virtual void BeginPlay() override;

	void HealthRampUp(float DeltaTime);
	void ShieldRampup(float DeltaTime);

private:

	UPROPERTY()
	class ABlasterCharacter* Character;

	/*Heal*/
	bool bHealing = false;
	float HealRate = 0.f;
	float AmountToHeal = 0.f;

	/*Shiled*/
	bool bShieldRecover = false;
	float ShieldRecoverRate = 0.f;
	float AmountToShieldRecover = 0.f;

	/*Speed Buff*/
	FTimerHandle SpeedBuffTimer;
	void ResetSpeed();

	float InitialBaseSpeed;
	float InitialCrouchSpeed;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpeedBuff(float BaseSpeed, float CrouchSpeed);

	/*JumpBuff*/
	FTimerHandle JumpBuffHandle;
	void ResetJump();

	float InitialJumpZVelocity;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastJumpBuff(float ZVelocity);

public:	

};