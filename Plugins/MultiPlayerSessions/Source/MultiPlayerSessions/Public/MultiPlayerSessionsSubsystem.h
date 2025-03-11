// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"//
#include "MultiPlayerSessionsSubsystem.generated.h"

//
//Declare our own custom delegates for the menu class to bind callbacks to
//
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiPlayerOnCreateSessionComplete, bool, bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiPlayerOnFindSessionsComplete, const TArray<FOnlineSessionSearchResult>& SearchResult, bool bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_OneParam(FMultiPlayerOnJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiPlayerOnStartSessionComplete, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiPlayerOnDestroySessionComplete, bool, bWasSuccessful);

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMultiPlayerSessionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:

	UMultiPlayerSessionsSubsystem();

	//
	//To handle session functionality.The menu class will call these
	//

	void CreateSession(int32 NumPublicConnections, FString MatchType);
	void FindSessions(int32 MaxSearchResult);
	void JoinSession(const FOnlineSessionSearchResult& Result);
	void StartSession();
	void DestroySession();

	//
	//Our own custom delegate for the menu class to bind callbacks to
	//
	FMultiPlayerOnCreateSessionComplete MultiPlayerOnCreateSessionComplete;
	FMultiPlayerOnFindSessionsComplete MultiPlayerOnFindSessionsComplete;
	FMultiPlayerOnJoinSessionComplete MultiPlayerOnJoinSessionComplete;
	FMultiPlayerOnStartSessionComplete MultiPlayerOnStartSessionComplete;
	FMultiPlayerOnDestroySessionComplete MultiPlayerOnDestroySessionComplete;

protected:

	//
	//Internal callbacks for the delegates we'll add to the Online Session Interface delegate list.
	//These don't need to be called outside this class.
	//

	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);
	void OnFindSessionsComplete(bool bWasSuccessful);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnStartSessionComplete(FName SessionName, bool bWasSuccessful);
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);

private:

	IOnlineSessionPtr OnlineSessionInterface;
	TSharedPtr<FOnlineSessionSettings>LastSessionSettings;
	TSharedPtr<FOnlineSessionSearch>LastSessionSearch;

	//
	//To add to the Online Session Interface delegate list
	//We'll bind MultiPlayerSessionSubsystem internal callbacks to these
	//

	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	FDelegateHandle CreateSessionCompleteDelegateHandle;

	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	FDelegateHandle FindSessionsCompleteDelegateHandle;

	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;
	FDelegateHandle JoinSessionCompleteDelegateHandle;

	FOnStartSessionCompleteDelegate StartSessionCompleteDelegate;
	FDelegateHandle StartSessionCompleteDelegateHandle;

	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	FDelegateHandle DestroySessionCompleteDelegateHandle;

	bool bCreateSessionOnDestroy{ false };
	int32 LastNumPublicConnections;
	FString LastTypeToMatch;
};