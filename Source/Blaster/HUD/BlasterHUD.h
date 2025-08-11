// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlasterHUD.generated.h"

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY();

public:
	class UTexture2D* CrosshairsCenter;
	UTexture2D* CrosshairsLeft;
	UTexture2D* CrosshairsRight;
	UTexture2D* CrosshairsTop;
	UTexture2D* CrosshairsBottom;
	float CorsshairSpread;
	FLinearColor CrossharisColor;
};
/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	virtual void DrawHUD()override;

	/*Overlay*/
	UPROPERTY(EditAnywhere, Category = "PlayerStats")
	TSubclassOf<class UUserWidget>CharacterOverlayClass;

	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;

	void AddCharacterOverlay();

	/*Announcement*/
	UPROPERTY(EditAnywhere, Category = "Announcement")
	TSubclassOf<class UUserWidget>AnnouncementClass;

	UPROPERTY()
	class UAnouncement* Announcement;

	void AddAnnouncement();

	/*ElimAnnouncement*/
	UPROPERTY(EditAnywhere, Category = "ElimAnnouncement")
	TSubclassOf<class UElimAnnouncement>ElimAnnouncementClass;

	void AddElimAnnouncement(FString Attacker, FString Victim);

	UPROPERTY(EditAnywhere)
	float ElimAnnouncementTime = 2.5f;

	UFUNCTION()
	void ElimAnnouncementTimerFinished(UElimAnnouncement* MsgToRemove);

	UPROPERTY()
	TArray<UElimAnnouncement*>ElimMessages;

protected:

	virtual void BeginPlay()override;

private:

	UPROPERTY()
	class APlayerController* OwningPlayer;

	/*Handle Crosshair*/
	FHUDPackage HUDPackage;

	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FVector2D Spread, FLinearColor CrossharisColor);

	UPROPERTY(EditAnywhere)
	float CrosshairSpreadMax = 16.f;

public:

	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }
};