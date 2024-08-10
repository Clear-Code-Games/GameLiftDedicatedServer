// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DedicatedServerGameMode.generated.h"

USTRUCT()
struct FStartGameSessionState
{
	GENERATED_BODY();

	UPROPERTY()
	bool Status;

	FStartGameSessionState() {
		Status = false;
	}
};


USTRUCT()
struct FUpdateGameSessionState
{
	GENERATED_BODY();

	FUpdateGameSessionState() {

	}
};

USTRUCT()
struct FProcessTerminateState
{
	GENERATED_BODY();

	UPROPERTY();
	bool Status;

	long TerminationTime;

	FProcessTerminateState() {
		Status = false;
	}
};

USTRUCT()
struct FHealthCheckState
{
	GENERATED_BODY();
	
	UPROPERTY()
	bool Status;

	FHealthCheckState() {
		Status = false;
	}
};

UCLASS(minimalapi)
class ADedicatedServerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADedicatedServerGameMode();
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	FStartGameSessionState StartGameSessionState;

	UPROPERTY()
	FUpdateGameSessionState UpdateGameSessionState;

	UPROPERTY()
	FProcessTerminateState ProcessTerminateState;

	UPROPERTY()
	FHealthCheckState HealthCheckState;

	void InitGameLift();
};



