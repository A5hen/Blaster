// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"
#include "Blaster/Character/BlasterCharacter.h"//
#include "GameFramework/CharacterMovementComponent.h"//

UBuffComponent::UBuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HealthRampUp(DeltaTime);
	ShieldRampup(DeltaTime);
}

void UBuffComponent::Heal(float HealAmount, float HealTime)
{
	bHealing = true;
	HealRate = HealAmount / HealTime;
	AmountToHeal += HealAmount;
}

void UBuffComponent::HealthRampUp(float DeltaTime)
{
	if (!bHealing || Character == nullptr || Character->IsElimmed())return;

	const float HealEveryFrame = HealRate * DeltaTime;

	Character->SetHealth(FMath::Clamp(Character->GetHealth() + HealEveryFrame, 0.f, Character->GetMaxHealth()));
	Character->UpdateHUDHealth();

	AmountToHeal -= HealEveryFrame;

	if (AmountToHeal <= 0.f || Character->GetHealth() >= Character->GetMaxHealth())
	{
		bHealing = false;
		AmountToHeal = 0.f;
	}
}

void UBuffComponent::ShieldRecover(float ShieldAmount, float RecoverTime)
{
	bShieldRecover = true;
	ShieldRecoverRate = ShieldAmount / RecoverTime;
	AmountToShieldRecover += ShieldAmount;
}

void UBuffComponent::ShieldRampup(float DeltaTime)
{
	if (!bHealing || Character == nullptr || Character->IsElimmed())return;

	const float RecoverEveryFrame = ShieldRecoverRate * DeltaTime;

	Character->SetShield(FMath::Clamp(Character->GetHealth() + RecoverEveryFrame, 0.f, Character->GetMaxHealth()));
	Character->UpdateHUDShield();

	AmountToShieldRecover -= RecoverEveryFrame;

	if (AmountToShieldRecover <= 0.f || Character->GetShiled() >= Character->GetMaxShield())
	{
		bShieldRecover = false;
		AmountToShieldRecover = 0.f;
	}
}

void UBuffComponent::SpeedBuff(float BaseSpeed, float CrouchSpeed, float BuffTime)
{
	if (Character == nullptr)return;

	Character->GetWorldTimerManager().SetTimer(
		SpeedBuffTimer, 
		this, 
		&UBuffComponent::ResetSpeed, 
		BuffTime);

	MulticastSpeedBuff(BaseSpeed, CrouchSpeed);
}

void UBuffComponent::SetInitialSpeed(float BaseSpeed, float CrouchSpeed)
{
	InitialBaseSpeed = BaseSpeed;
	InitialCrouchSpeed = CrouchSpeed;
}

void UBuffComponent::ResetSpeed()
{
	MulticastSpeedBuff(InitialBaseSpeed, InitialCrouchSpeed);
}

void UBuffComponent::MulticastSpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed)
{
	if (Character && Character->GetCharacterMovement())
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = BaseSpeed;
		Character->GetCharacterMovement()->MaxWalkSpeedCrouched = CrouchSpeed;
	}
}

void UBuffComponent::JumpBuff(float JumpZVelocity, float BuffTime)
{
	if (Character == nullptr)return;

	Character->GetWorldTimerManager().SetTimer(
		JumpBuffHandle,
		this,
		&UBuffComponent::ResetJump,
		BuffTime);

	MulticastJumpBuff(JumpZVelocity);
}

void UBuffComponent::SetInitialJumpZVelocity(float ZVelocity)
{
	InitialJumpZVelocity = ZVelocity;
}

void UBuffComponent::ResetJump()
{
	MulticastJumpBuff(InitialJumpZVelocity);
}

void UBuffComponent::MulticastJumpBuff_Implementation(float ZVelocity)
{
	if (Character && Character->GetCharacterMovement())
	{
		Character->GetCharacterMovement()->JumpZVelocity = ZVelocity;
	}
}