// Fill out your copyright notice in the Description page of Project Settings.


#include "ShotGun.h"
#include "Engine/SkeletalMeshSocket.h"//
#include "Blaster/Character/BlasterCharacter.h"//
#include "Kismet/GameplayStatics.h"//
#include "Particles/ParticleSystemComponent.h"//
#include "Sound/SoundCue.h"//
#include "Kismet/KismetMathLibrary.h"//
#include "Blaster/BlasterComponent/LagCompensationComponent.h"//
#include "Blaster/PlayerController/BlasterPlayerController.h"//

void AShotGun::ShotGunFire(const TArray<FVector_NetQuantize>& HitTargets)
{
	AWeapon::Fire(FVector());

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)return;
	AController* InstigatorController = OwnerPawn->GetController();

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	if (MuzzleFlashSocket)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector Start = SocketTransform.GetLocation();

		TMap<ABlasterCharacter*, uint32>HitMap;
		TMap<ABlasterCharacter*, uint32>HeadShotMap;

		for (const FVector_NetQuantize& HitTarget : HitTargets)
		{
			FHitResult FireHit;
			WeaponTraceHit(Start, HitTarget, FireHit);

			ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(FireHit.GetActor());
			if (BlasterCharacter)
			{

				bool bHeadShot = FireHit.BoneName == FName("head");

				if (bHeadShot)
				{
					if (HeadShotMap.Contains(BlasterCharacter))HeadShotMap[BlasterCharacter]++;
					else HeadShotMap.Emplace(BlasterCharacter, 1);
				}
				else
				{
					if (HitMap.Contains(BlasterCharacter))HitMap[BlasterCharacter]++;
					else HitMap.Emplace(BlasterCharacter, 1);
				}
				
				if (ImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						ImpactParticles,
						FireHit.ImpactPoint,
						FireHit.ImpactNormal.Rotation());
				}
				if (HitSound)
				{
					UGameplayStatics::PlaySoundAtLocation(
						this,
						HitSound,
						FireHit.ImpactPoint,
						.5f,
						FMath::RandRange(-.5f, .5f));
				}
			}
		}

		TArray<ABlasterCharacter*>HitCharacters;
		TMap<ABlasterCharacter*, uint32>DamageMap;

		for (auto& HitPair : HitMap)
		{
			if (HitPair.Key)
			{
				DamageMap.Emplace(HitPair.Key, HitPair.Value * Damage);
			}	
		}

		for (auto& HeadShotPair : HeadShotMap)
		{
			if (HeadShotPair.Key)
			{
				if (DamageMap.Contains(HeadShotPair.Key))DamageMap[HeadShotPair.Key] += HeadShotPair.Value * HeadShotDamage;
				else DamageMap.Emplace(HeadShotPair.Key, HeadShotPair.Value * HeadShotDamage);
			}
		}

		for (auto& DamagePair : DamageMap)
		{
			if (DamagePair.Key && InstigatorController)
			{
				bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
				if (HasAuthority() && bCauseAuthDamage)
				{
					UGameplayStatics::ApplyDamage(
						DamagePair.Key,
						DamagePair.Value,
						InstigatorController,
						this,
						UDamageType::StaticClass());
				}
			}
			HitCharacters.Add(DamagePair.Key);
		}

		if (!HasAuthority() && bUseServerSideRewind)
		{
			OwnerCharacter = OwnerCharacter == nullptr ? Cast<ABlasterCharacter>(OwnerPawn) : OwnerCharacter;
			OwnerController = OwnerController == nullptr ? Cast<ABlasterPlayerController>(InstigatorController) : OwnerController;

			if (OwnerCharacter && OwnerCharacter->GetLagCompensationComponent() && OwnerController && OwnerCharacter->IsLocallyControlled())
			{
				OwnerCharacter->GetLagCompensationComponent()->ShotGunServerScoreRequest(
					HitCharacters,
					Start,
					HitTargets,
					OwnerController->GetServerTime() - OwnerController->SingleTripTime);
			}
		}

	}
}

void AShotGun::ShotGunTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
{
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	if (MuzzleFlashSocket == nullptr)return;

	const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
	const FVector Start = SocketTransform.GetLocation();

	const FVector ToTargetNormalized = (HitTarget - Start).GetSafeNormal();
	const FVector SphereCenter = Start + ToTargetNormalized * DistanceToSphere;
	
	for (uint32 i = 0; i < NumberOfPellets; ++i)
	{
		const FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
		const FVector EndLoc = SphereCenter + RandVec;
		const FVector ToEndLoc = EndLoc - Start;

		FVector RandomHitTarget = Start + ToEndLoc * TRACE_LENGTH / ToEndLoc.Size();

		HitTargets.Add(RandomHitTarget);
	}
}