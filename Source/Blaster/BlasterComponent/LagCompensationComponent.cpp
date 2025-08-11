// Fill out your copyright notice in the Description page of Project Settings.


#include "LagCompensationComponent.h"
#include "Blaster/Character/BlasterCharacter.h"//
#include "Components/BoxComponent.h"//
#include "DrawDebugHelpers.h"//
#include "Kismet/GameplayStatics.h"//
#include "Blaster/Weapon/Weapon.h"//
#include "Blaster/Blaster.h"//

ULagCompensationComponent::ULagCompensationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULagCompensationComponent::BeginPlay()
{
	Super::BeginPlay();
}

void ULagCompensationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TickSaveFramePackage();
}

void ULagCompensationComponent::SaveFramePackage(FFramePackage& Package)
{
	Character = Character == nullptr ? Cast<ABlasterCharacter>(GetOwner()) : Character;
	if (Character)
	{
		Package.Time = GetWorld()->GetTimeSeconds();
		Package.Character = Character;

		for (auto& BoxPair : Character->HitCollisionBoxes)
		{
			FBoxInfomation BoxInfomation;
			BoxInfomation.Location = BoxPair.Value->GetComponentLocation();
			BoxInfomation.Rotation = BoxPair.Value->GetComponentRotation();
			BoxInfomation.BoxExtent = BoxPair.Value->GetScaledBoxExtent();

			Package.BoxInfo.Add(BoxPair.Key, BoxInfomation);
		}
	}
}

void ULagCompensationComponent::TickSaveFramePackage()
{
	if (Character == nullptr || !Character->HasAuthority())return;

	if (FrameHistory.Num() <= 1)
	{
		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);
	}
	else
	{
		float HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;

		while (HistoryLength > MaxRecordTime)
		{
			FrameHistory.RemoveNode(FrameHistory.GetTail());
			HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		}

		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);

		//ShowFramePackage(ThisFrame, FColor::Red);
	}
}

void ULagCompensationComponent::ShowFramePackage(const FFramePackage& Package, const FColor& Color)
{
	for (auto& BoxInfo : Package.BoxInfo)
	{
		DrawDebugBox(GetWorld(),
			BoxInfo.Value.Location,
			BoxInfo.Value.BoxExtent,
			FQuat(BoxInfo.Value.Rotation),
			Color,
			false,
			4.f);
	}
}

FServerSideRewindResult ULagCompensationComponent::ServerSideRewind(
	ABlasterCharacter* HitCharacter, 
	const FVector_NetQuantize& TraceStart,
	const FVector_NetQuantize& HitLocation, 
	float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	return ConfirmHit(FrameToCheck, HitCharacter, TraceStart, HitLocation);
}

void ULagCompensationComponent::ServerScoreRequest_Implementation(
	ABlasterCharacter* HitCharacter,
	const FVector_NetQuantize& TraceStart,
	const FVector_NetQuantize& HitLocation,
	float HitTime)
{
	FServerSideRewindResult Result;
	Result = ServerSideRewind(HitCharacter, TraceStart, HitLocation, HitTime);

	if (Character && Character->GetEquippedWeapon() && HitCharacter && Result.bConfirmedHit)
	{
		const float Damage = Result.bHeadShot ? Character->GetEquippedWeapon()->GetHeadShotDamage() : Character->GetEquippedWeapon()->GetDamage();

		UGameplayStatics::ApplyDamage(
			HitCharacter,
			Damage,
			Character->Controller,
			Character->GetEquippedWeapon(),
			UDamageType::StaticClass());
	}
}

FShotGunServerSideRewindResult ULagCompensationComponent::ShotGunServerSideRewind(
	const TArray<ABlasterCharacter*>& HitCharacters, 
	const FVector_NetQuantize& TraceStart, 
	const TArray<FVector_NetQuantize>& HitLocations, 
	float HitTime)
{
	TArray<FFramePackage>FramesToCheck;
	for (ABlasterCharacter* HitCharacter : HitCharacters)
	{
		FramesToCheck.Add(GetFrameToCheck(HitCharacter, HitTime));
	}

	return ShotGunConfirmHit(FramesToCheck, TraceStart, HitLocations);
}

void ULagCompensationComponent::ShotGunServerScoreRequest_Implementation(
	const TArray<ABlasterCharacter*>& HitCharacters, 
	const FVector_NetQuantize& TraceStart, 
	const TArray<FVector_NetQuantize>& HitLocations, 
	float HitTime)
{
	FShotGunServerSideRewindResult Result = ShotGunServerSideRewind(HitCharacters, TraceStart, HitLocations, HitTime);

	for (ABlasterCharacter* HitCharacter : HitCharacters)
	{
		if (HitCharacter == nullptr || Character == nullptr || Character->GetEquippedWeapon() == nullptr)return;

		float TotalDamage = 0.f;

		if (Result.HeadShots.Contains(HitCharacter))
		{
			float HeadShotDamage = Result.HeadShots[HitCharacter] * HitCharacter->GetEquippedWeapon()->GetHeadShotDamage();
			TotalDamage += HeadShotDamage;
		}
		if (Result.BodyShots.Contains(HitCharacter))
		{
			float BodyShotDamage = Result.BodyShots[HitCharacter] * HitCharacter->GetEquippedWeapon()->GetDamage();
			TotalDamage += BodyShotDamage;
		}
		
		UGameplayStatics::ApplyDamage(
			HitCharacter, 
			TotalDamage, 
			Character->Controller, 
			Character->GetEquippedWeapon(), 
			UDamageType::StaticClass());
	}
}

FServerSideRewindResult ULagCompensationComponent::ProjectileServerSideRewind(
	ABlasterCharacter* HitCharacter, 
	const FVector_NetQuantize& TraceStart, 
	const FVector_NetQuantize100& InitialVelocity, 
	float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	return ProjectileConfirmHit(FrameToCheck, HitCharacter, TraceStart, InitialVelocity, HitTime);
}

void ULagCompensationComponent::ProjectileServerScoreRequest_Implementation(
	ABlasterCharacter* HitCharacter, 
	const FVector_NetQuantize& TraceStart, 
	const FVector_NetQuantize100& InitialVelocity, 
	float HitTime)
{
	FServerSideRewindResult Result;
	Result = ProjectileServerSideRewind(HitCharacter, TraceStart, InitialVelocity, HitTime);

	if (Character && Character->GetEquippedWeapon() && HitCharacter && Result.bConfirmedHit)
	{
		const float Damage = Result.bHeadShot ? Character->GetEquippedWeapon()->GetHeadShotDamage() : Character->GetEquippedWeapon()->GetDamage();

		UGameplayStatics::ApplyDamage(
			HitCharacter,
			Damage,
			Character->Controller,
			HitCharacter->GetEquippedWeapon(),
			UDamageType::StaticClass());
	}
}

FFramePackage ULagCompensationComponent::GetFrameToCheck(ABlasterCharacter* HitCharacter, float HitTime)
{
	bool bReturn = HitCharacter == nullptr ||
		HitCharacter->GetLagCompensationComponent() == nullptr ||
		HitCharacter->GetLagCompensationComponent()->FrameHistory.GetHead() == nullptr ||
		HitCharacter->GetLagCompensationComponent()->FrameHistory.GetTail() == nullptr;

	if (bReturn)return FFramePackage();

	//FramPackage that we check to verify a hit
	FFramePackage FrameToCheck;

	bool bShouldInterpolate = true;

	//FrameHistory of the HitCharacter;
	const TDoubleLinkedList<FFramePackage>& History = HitCharacter->GetLagCompensationComponent()->FrameHistory;

	float OldestHistoryTime = History.GetTail()->GetValue().Time;
	float NewestHistoryTime = History.GetHead()->GetValue().Time;

	if (OldestHistoryTime > HitTime)
	{
		//To far back - To laggy to do ServerSideCheck
		return FFramePackage();
	}

	if (OldestHistoryTime == HitTime)
	{
		FrameToCheck = History.GetTail()->GetValue();
		bShouldInterpolate = false;
	}

	if (NewestHistoryTime <= HitTime)
	{
		FrameToCheck = History.GetHead()->GetValue();
		bShouldInterpolate = false;
	}

	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Younger = History.GetHead();
	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Older = Younger;

	while (Older->GetValue().Time > HitTime)//If OlderTime still younger than HitTime
	{
		//Back if OlderTime < HitTime < YoungerTime

		if (Older->GetNextNode() == nullptr)break;

		Older = Older->GetNextNode();

		if (Older->GetValue().Time > HitTime)
		{
			Younger = Older;
		}
	}

	if (Older->GetValue().Time == HitTime)//Highly unlikely, but we found our frame to check
	{
		FrameToCheck = Older->GetValue();
		bShouldInterpolate = false;
	}

	if (bShouldInterpolate)
	{
		//Interpolate between Younger and Older
		FrameToCheck = InterpBetweenFrames(Older->GetValue(), Younger->GetValue(), HitTime);
	}

	FrameToCheck.Character = HitCharacter;

	return FrameToCheck;
}

FFramePackage ULagCompensationComponent::InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime)
{
	const float Distance = YoungerFrame.Time - OlderFrame.Time;
	const float InterpFraction = FMath::Clamp(HitTime - OlderFrame.Time, 0.f, 1.f);

	FFramePackage InterpFramePackage;
	InterpFramePackage.Time = HitTime;
	InterpFramePackage.Character = OlderFrame.Character;

	for (auto& Pair : YoungerFrame.BoxInfo)
	{
		const FName& BoxInfoName = Pair.Key;

		const FBoxInfomation& OlderBoxInfo = OlderFrame.BoxInfo[BoxInfoName];
		const FBoxInfomation& YoungerBoxInfo = YoungerFrame.BoxInfo[BoxInfoName];

		FBoxInfomation InterpBoxInfo;

		InterpBoxInfo.Location = FMath::VInterpTo(OlderBoxInfo.Location, YoungerBoxInfo.Location, 1.f, InterpFraction);
		InterpBoxInfo.Rotation = FMath::RInterpTo(OlderBoxInfo.Rotation, YoungerBoxInfo.Rotation, 1.f, InterpFraction);
		InterpBoxInfo.BoxExtent = YoungerBoxInfo.BoxExtent;

		InterpFramePackage.BoxInfo.Add(BoxInfoName, InterpBoxInfo);
	}

	return InterpFramePackage;
}

FServerSideRewindResult ULagCompensationComponent::ConfirmHit(
	const FFramePackage& FrameToCheck,
	ABlasterCharacter* HitCharacter, 
	const FVector_NetQuantize& TraceStart,
	const FVector_NetQuantize& HitLocation)
{
	if (HitCharacter == nullptr)return FServerSideRewindResult();

	FFramePackage CurrentFrame;
	CachedBoxPosition(HitCharacter, CurrentFrame);

	MoveBoxes(HitCharacter, FrameToCheck);
	EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::NoCollision);

	// Enable collision for the head first
	UBoxComponent* HeadBox = HitCharacter->HitCollisionBoxes[FName("head")];
	HeadBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);

	FHitResult ComfirmHitResult;
	const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;

	UWorld* World = GetWorld();
	if (World)
	{
		World->LineTraceSingleByChannel(
			ComfirmHitResult,
			TraceStart,
			TraceEnd, 
			ECC_HitBox);

		if (ComfirmHitResult.bBlockingHit)
		{
			if (ComfirmHitResult.Component.IsValid())
			{
				UBoxComponent* Box = Cast<UBoxComponent>(ComfirmHitResult.Component.Get());
				if (Box)
				{
					DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Red, false, 8.f);
				}
			}

			ResetBoxes(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::QueryAndPhysics);
			return FServerSideRewindResult{ true,true };
		}
		else //Didn't hit head, check the rest of the boxes
		{
			for (auto& Pair : HitCharacter->HitCollisionBoxes)
			{
				if (Pair.Value != nullptr)
				{
					Pair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					Pair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
				}
			}

			World->LineTraceSingleByChannel(
				ComfirmHitResult,
				TraceStart,
				TraceEnd,
				ECC_HitBox);

			if (ComfirmHitResult.bBlockingHit)
			{
				if (ComfirmHitResult.Component.IsValid())
				{
					UBoxComponent* Box = Cast<UBoxComponent>(ComfirmHitResult.Component.Get());
					if (Box)
					{
						DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Blue, false, 8.f);
					}
				}

				ResetBoxes(HitCharacter, CurrentFrame);
				EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::QueryAndPhysics);
				return FServerSideRewindResult{ true,false };
			}
		}
	}

	ResetBoxes(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::QueryAndPhysics);
	return FServerSideRewindResult{ false,false };
}

FShotGunServerSideRewindResult ULagCompensationComponent::ShotGunConfirmHit(
	const TArray<FFramePackage>& FramesToCheck, 
	const FVector_NetQuantize& TraceStart, 
	const TArray<FVector_NetQuantize>& HitLocations)
{
	for (auto& Frame : FramesToCheck)
	{
		if (Frame.Character == nullptr)return FShotGunServerSideRewindResult();
	}

	FShotGunServerSideRewindResult ShotGunResult;

	TArray<FFramePackage>CurrentFrames;
	for (auto& Frame : FramesToCheck)
	{
		FFramePackage CurrentFrame;
		CurrentFrame.Character = Frame.Character;
		CachedBoxPosition(Frame.Character, CurrentFrame);

		MoveBoxes(Frame.Character, Frame);
		EnableCharacterMeshCollison(Frame.Character, ECollisionEnabled::NoCollision);
		CurrentFrames.Add(CurrentFrame);
	}

	for (auto& Frame : FramesToCheck)
	{
		//Enable collision for the head first
		UBoxComponent* HeadBox = Frame.Character->HitCollisionBoxes[FName("head")];
		HeadBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
	}

	//Check for HeadShots
	UWorld* World = GetWorld();
	for (const FVector& HitLocation : HitLocations)
	{
		FHitResult ComfirmHitResult;
		const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;

		if(World)
		{
			World->LineTraceSingleByChannel(
				ComfirmHitResult,
				TraceStart,
				TraceEnd,
				ECC_HitBox);
		}

		ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(ComfirmHitResult.GetActor());
		if (HitCharacter)
		{
			if (ComfirmHitResult.Component.IsValid())
			{
				UBoxComponent* Box = Cast<UBoxComponent>(ComfirmHitResult.Component);
				if (Box)
				{
					DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Red, false, 8.f);
				}
			}

			if (ShotGunResult.HeadShots.Contains(HitCharacter))
			{
				++ShotGunResult.HeadShots[HitCharacter];
			}
			else
			{
				ShotGunResult.HeadShots.Emplace(HitCharacter, 1);
			}
		}
	}

	//Enable collision for all boxes, then disable for head box
	for (auto& Frame : FramesToCheck)
	{
		for (auto& Pair : Frame.Character->HitCollisionBoxes)
		{
			if (Pair.Value != nullptr)
			{
				Pair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				Pair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
			}
		}
		UBoxComponent* HeadBox = Frame.Character->HitCollisionBoxes[FName("head")];
		HeadBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	// check for BodyShots
	for (const FVector& HitLocation : HitLocations)
	{
		FHitResult ComfirmHitResult;
		const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;

		if (World)
		{
			World->LineTraceSingleByChannel(
				ComfirmHitResult,
				TraceStart,
				TraceEnd,
				ECC_HitBox);
		}

		ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(ComfirmHitResult.GetActor());
		if (HitCharacter)
		{
			if (ComfirmHitResult.Component.IsValid())
			{
				UBoxComponent* Box = Cast<UBoxComponent>(ComfirmHitResult.Component.Get());
				if (Box)
				{
					DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Blue, false, 8.f);
				}
			}

			if (ShotGunResult.HeadShots.Contains(HitCharacter))
			{
				++ShotGunResult.BodyShots[HitCharacter];
			}
			else
			{
				ShotGunResult.BodyShots.Emplace(HitCharacter, 1);
			}
		}
	}

	for (auto& Frame : CurrentFrames)
	{
		ResetBoxes(Frame.Character, Frame);
		EnableCharacterMeshCollison(Frame.Character, ECollisionEnabled::QueryAndPhysics);
	}

	return ShotGunResult;
}

FServerSideRewindResult ULagCompensationComponent::ProjectileConfirmHit(const FFramePackage& FrameToCheck, ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialVelocity, float HitTime)
{
	FFramePackage CurrentFrame;
	CachedBoxPosition(HitCharacter, CurrentFrame);

	MoveBoxes(HitCharacter, FrameToCheck);
	EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::NoCollision);

	// Enable collision for the head first
	UBoxComponent* HeadBox = HitCharacter->HitCollisionBoxes[FName("head")];
	HeadBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);

	FPredictProjectilePathParams Params;
	Params.ActorsToIgnore.Add(GetOwner());
	Params.bTraceWithCollision = true;
	Params.LaunchVelocity = InitialVelocity;
	Params.MaxSimTime = MaxRecordTime;
	Params.ProjectileRadius = 5.f;
	Params.SimFrequency = 15.f;
	Params.StartLocation = TraceStart;
	Params.TraceChannel = ECC_HitBox;

	Params.DrawDebugTime = 5.f;
	Params.DrawDebugType = EDrawDebugTrace::ForDuration;

	FPredictProjectilePathResult Result;

	UGameplayStatics::PredictProjectilePath(this, Params, Result);

	if (Result.HitResult.bBlockingHit)//We hit the head, return early
	{
		if (Result.HitResult.Component.IsValid())
		{
			UBoxComponent* Box = Cast<UBoxComponent>(Result.HitResult.Component.Get());
			if (Box)
			{
				DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Red, false, 8.f);
			}
		}

		ResetBoxes(HitCharacter, CurrentFrame);
		EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::QueryAndPhysics);
		return FServerSideRewindResult{ true,true };
	}
	else//Didn't hit head, check the rest of the boxes
	{
		for (auto& Pair : HitCharacter->HitCollisionBoxes)
		{
			if (Pair.Value != nullptr)
			{
				Pair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				Pair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
			}
		}

		UGameplayStatics::PredictProjectilePath(this, Params, Result);

		if (Result.HitResult.bBlockingHit)
		{
			if (Result.HitResult.Component.IsValid())
			{
				UBoxComponent* Box = Cast<UBoxComponent>(Result.HitResult.Component.Get());
				if (Box)
				{
					DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Red, false, 8.f);
				}
			}

			ResetBoxes(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::QueryAndPhysics);
			return FServerSideRewindResult{ true,false };
		}
	}

	ResetBoxes(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollison(HitCharacter, ECollisionEnabled::QueryAndPhysics);
	return FServerSideRewindResult{ false,false };
}

void ULagCompensationComponent::CachedBoxPosition(ABlasterCharacter* HitCharacter, FFramePackage& OutPackage)
{
	if (HitCharacter == nullptr)return;

	for (auto& Pair : HitCharacter->HitCollisionBoxes)
	{
		if (Pair.Value != nullptr)
		{
			FBoxInfomation BoxInfo;
	
			BoxInfo.Location = Pair.Value->GetComponentLocation();
			BoxInfo.Rotation = Pair.Value->GetComponentRotation();
			BoxInfo.BoxExtent = Pair.Value->GetScaledBoxExtent();

			OutPackage.BoxInfo.Add(Pair.Key, BoxInfo);
		}
	}
}

void ULagCompensationComponent::MoveBoxes(ABlasterCharacter* HitCharacter, const FFramePackage& FrameToCheck)
{
	if (HitCharacter == nullptr)return;

	for (auto& Pair : HitCharacter->HitCollisionBoxes)
	{
		if (Pair.Value != nullptr)
		{
			const FBoxInfomation* BoxValue = FrameToCheck.BoxInfo.Find(Pair.Key);

			Pair.Value->SetWorldLocation(BoxValue->Location);
			Pair.Value->SetWorldRotation(BoxValue->Rotation);
			Pair.Value->SetBoxExtent(BoxValue->BoxExtent);
		}
	}
}

void ULagCompensationComponent::ResetBoxes(ABlasterCharacter* HitCharacter, const FFramePackage& Package)
{
	if (HitCharacter == nullptr)return;

	for (auto& Pair : HitCharacter->HitCollisionBoxes)
	{
		if (Pair.Value != nullptr)
		{
			const FBoxInfomation* BoxValue = Package.BoxInfo.Find(Pair.Key);

			Pair.Value->SetWorldLocation(BoxValue->Location);
			Pair.Value->SetWorldRotation(BoxValue->Rotation);
			Pair.Value->SetBoxExtent(BoxValue->BoxExtent);
			Pair.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

void ULagCompensationComponent::EnableCharacterMeshCollison(ABlasterCharacter* InCharacter, ECollisionEnabled::Type CollisionEnabled)
{
	if (InCharacter && InCharacter->GetMesh())
	{
		InCharacter->GetMesh()->SetCollisionEnabled(CollisionEnabled);
	}
}