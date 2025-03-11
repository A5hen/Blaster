// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiPlayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"//
#include "OnlineSessionSettings.h"//

UMultiPlayerSessionsSubsystem::UMultiPlayerSessionsSubsystem():
	CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &UMultiPlayerSessionsSubsystem::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &UMultiPlayerSessionsSubsystem::OnFindSessionsComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &UMultiPlayerSessionsSubsystem::OnJoinSessionComplete)),
	StartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this, &UMultiPlayerSessionsSubsystem::OnStartSessionComplete)),
	DestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &UMultiPlayerSessionsSubsystem::OnDestroySessionComplete))
{
	IOnlineSubsystem* System = IOnlineSubsystem::Get();
	if (System)
	{
		OnlineSessionInterface = System->GetSessionInterface();
	}
}

void UMultiPlayerSessionsSubsystem::CreateSession(int32 NumPublicConnections, FString MatchType)
{
	if (!OnlineSessionInterface.IsValid())return;

	auto ExistSession = OnlineSessionInterface->GetNamedSession(NAME_GameSession);
	if (ExistSession != nullptr)
	{
		bCreateSessionOnDestroy = true;
		LastNumPublicConnections = NumPublicConnections;
		LastTypeToMatch = MatchType;
		
		DestroySession();
	}

	//Store a delegate handle in a FDelegateHandle, so We can later remove it from delegate list
	CreateSessionCompleteDelegateHandle = OnlineSessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegate);

	LastSessionSettings = MakeShareable(new FOnlineSessionSettings());
	LastSessionSettings->bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == FName("NULL") ? true : false;
	LastSessionSettings->NumPublicConnections = NumPublicConnections;
	LastSessionSettings->bAllowJoinInProgress = true;
	LastSessionSettings->bAllowJoinViaPresence = true;
	LastSessionSettings->bUsesPresence = true;
	LastSessionSettings->bShouldAdvertise = true;
	LastSessionSettings->bUseLobbiesIfAvailable = true;
	LastSessionSettings->Set(FName("MatchType"), MatchType, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	LastSessionSettings->BuildUniqueId = 1;

	ULocalPlayer* Player = GetWorld()->GetFirstLocalPlayerFromController();

	if (!OnlineSessionInterface->CreateSession(*Player->GetPreferredUniqueNetId(), NAME_GameSession, *LastSessionSettings))
	{
		OnlineSessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegateHandle);
		MultiPlayerOnCreateSessionComplete.Broadcast(false);
	}
}

void UMultiPlayerSessionsSubsystem::FindSessions(int32 MaxSearchResult)
{
	if (!OnlineSessionInterface.IsValid())return;

	FindSessionsCompleteDelegateHandle = OnlineSessionInterface->AddOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegate);

	LastSessionSearch = MakeShareable(new FOnlineSessionSearch());
	LastSessionSearch->bIsLanQuery = IOnlineSubsystem::Get()->GetSubsystemName() == FName("NULL") ? true : false;
	LastSessionSearch->MaxSearchResults = MaxSearchResult;
	LastSessionSearch->QuerySettings.Set(FName(TEXT("PRESENCESEARCH")), true, EOnlineComparisonOp::Equals);

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();

	if (!OnlineSessionInterface->FindSessions(*LocalPlayer->GetPreferredUniqueNetId(), LastSessionSearch.ToSharedRef()))
	{
		OnlineSessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegateHandle);
		MultiPlayerOnFindSessionsComplete.Broadcast(TArray<FOnlineSessionSearchResult>(), false);
	}
}

void UMultiPlayerSessionsSubsystem::JoinSession(const FOnlineSessionSearchResult& Result)
{
	if (!OnlineSessionInterface.IsValid())
	{
		MultiPlayerOnJoinSessionComplete.Broadcast(EOnJoinSessionCompleteResult::UnknownError);
		return;
	}

	JoinSessionCompleteDelegateHandle = OnlineSessionInterface->AddOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegate);

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();

	if (!OnlineSessionInterface->JoinSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession, Result))
	{
		OnlineSessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegateHandle);
		MultiPlayerOnJoinSessionComplete.Broadcast(EOnJoinSessionCompleteResult::UnknownError);
	}
}

void UMultiPlayerSessionsSubsystem::StartSession()
{
}

void UMultiPlayerSessionsSubsystem::DestroySession()
{
	if (!OnlineSessionInterface.IsValid())
	{
		MultiPlayerOnDestroySessionComplete.Broadcast(false);
		return;
	}

	DestroySessionCompleteDelegateHandle = OnlineSessionInterface->AddOnDestroySessionCompleteDelegate_Handle(DestroySessionCompleteDelegate);

	if (!OnlineSessionInterface->DestroySession(NAME_GameSession))
	{
		OnlineSessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(DestroySessionCompleteDelegateHandle);
		MultiPlayerOnDestroySessionComplete.Broadcast(false);
	}
}

void UMultiPlayerSessionsSubsystem::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (OnlineSessionInterface)
	{
		OnlineSessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegateHandle);		
	}
	MultiPlayerOnCreateSessionComplete.Broadcast(bWasSuccessful);
}

void UMultiPlayerSessionsSubsystem::OnFindSessionsComplete(bool bWasSuccessful)
{
	if (OnlineSessionInterface)
	{
		OnlineSessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegateHandle);
	}

	if (LastSessionSearch->SearchResults.Num() <= 0)
	{
		MultiPlayerOnFindSessionsComplete.Broadcast(TArray<FOnlineSessionSearchResult>(), false);
		return;
	}

	MultiPlayerOnFindSessionsComplete.Broadcast(LastSessionSearch->SearchResults, bWasSuccessful);
}

void UMultiPlayerSessionsSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (OnlineSessionInterface)
	{
		OnlineSessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegateHandle);
	}
	MultiPlayerOnJoinSessionComplete.Broadcast(Result);
}

void UMultiPlayerSessionsSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UMultiPlayerSessionsSubsystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (OnlineSessionInterface)
	{
		OnlineSessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(DestroySessionCompleteDelegateHandle);
	}

	if (bWasSuccessful && bCreateSessionOnDestroy)
	{
		bCreateSessionOnDestroy = false;
		CreateSession(LastNumPublicConnections, LastTypeToMatch);
	}
	MultiPlayerOnDestroySessionComplete.Broadcast(bWasSuccessful);
}