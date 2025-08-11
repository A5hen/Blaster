// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LagCompensationComponent.generated.h"

USTRUCT(BlueprintType)
struct FBoxInfomation
{
	GENERATED_BODY();

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FRotator Rotation;

	UPROPERTY()
	FVector BoxExtent;
};

USTRUCT(BlueprintType)
struct FFramePackage
{
	GENERATED_BODY();

	UPROPERTY()
	float Time;

	UPROPERTY()
	TMap<FName, FBoxInfomation> BoxInfo;

	UPROPERTY()
	ABlasterCharacter* Character;
};

USTRUCT(BlueprintType)
struct FServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	bool bConfirmedHit;

	UPROPERTY()
	bool bHeadShot;
};

USTRUCT(BlueprintType)
struct FShotGunServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<ABlasterCharacter*, uint32>HeadShots;

	UPROPERTY()
	TMap<ABlasterCharacter*, uint32>BodyShots;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API ULagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	ULagCompensationComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	friend class ABlasterCharacter;

	/*HitScan*/
	FServerSideRewindResult ServerSideRewind(
		class ABlasterCharacter* HitCharacter, 
		const FVector_NetQuantize& TraceStart, 
		const FVector_NetQuantize& HitLocation, 
		float HitTime);

	UFUNCTION(Server, Reliable)
	void ServerScoreRequest(
		ABlasterCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart, 
		const FVector_NetQuantize& HitLocation, 
		float HitTime);

	/*ShotGun*/
	FShotGunServerSideRewindResult ShotGunServerSideRewind(
		const TArray<ABlasterCharacter*>& HitCharacters,
		const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations,
		float HitTime);

	UFUNCTION(Server, Reliable)
	void ShotGunServerScoreRequest(
		const TArray<ABlasterCharacter*>& HitCharacters,
		const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations,
		float HitTime);

	/*Projectile*/
	FServerSideRewindResult ProjectileServerSideRewind(
		ABlasterCharacter* HitCharacter, 
		const FVector_NetQuantize& TraceStart, 
		const FVector_NetQuantize100& InitialVelocity, 
		float HitTime);

	UFUNCTION(Server, Reliable)
	void ProjectileServerScoreRequest(
		ABlasterCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity,
		float HitTime);

protected:
	
	virtual void BeginPlay() override;

	void SaveFramePackage(FFramePackage& Package);
	void TickSaveFramePackage();
	void ShowFramePackage(const FFramePackage& Package, const FColor& Color);

	FFramePackage GetFrameToCheck(ABlasterCharacter* HitCharacter, float HitTime);

	FFramePackage InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime);

	FServerSideRewindResult ConfirmHit(
		const FFramePackage& FrameToCheck,
		ABlasterCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize& HitLocation);

	FShotGunServerSideRewindResult ShotGunConfirmHit(
		const TArray<FFramePackage>& FramesToCheck,
		const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations);

	FServerSideRewindResult ProjectileConfirmHit(
		const FFramePackage& FrameToCheck,
		ABlasterCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity, 
		float HitTime);

	void CachedBoxPosition(ABlasterCharacter* HitCharacter, FFramePackage& OutPackage);
	void MoveBoxes(ABlasterCharacter* HitCharacter, const FFramePackage& FrameToCheck);
	void ResetBoxes(ABlasterCharacter* HitCharacter, const FFramePackage& Package);
	void EnableCharacterMeshCollison(ABlasterCharacter* InCharacter, ECollisionEnabled::Type CollisionEnabled);

private:	
	
	UPROPERTY();
	class ABlasterCharacter* Character;

	UPROPERTY()
	class ABlasterPlayerController* Controller;

	TDoubleLinkedList<FFramePackage>FrameHistory;

	UPROPERTY(EditAnywhere)
	float MaxRecordTime = 4.f;
};