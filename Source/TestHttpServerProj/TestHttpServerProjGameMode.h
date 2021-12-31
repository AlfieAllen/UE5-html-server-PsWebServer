// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PsWebServer.h"
#include "GameFramework/GameModeBase.h"
#include "PsWebServerHandlers/MyServerPingHandler.h"
#include "TestHttpServerProjGameMode.generated.h"

UCLASS(minimalapi)
class ATestHttpServerProjGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestHttpServerProjGameMode();

	virtual void BeginPlay() override;

	UPROPERTY()
	UPsWebServer* WebServer;

	UPROPERTY()
	UMyServerPingHandler* PingHandler;
};