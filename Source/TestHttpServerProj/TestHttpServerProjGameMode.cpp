// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestHttpServerProjGameMode.h"
#include "TestHttpServerProjCharacter.h"
#include "PsWebServerHandlers/MyServerPingHandler.h"
#include "UObject/ConstructorHelpers.h"

ATestHttpServerProjGameMode::ATestHttpServerProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ATestHttpServerProjGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Launch web server
	WebServer = NewObject<UPsWebServer>(this);
	WebServer->StartServer();

	// Create and register api handler
	PingHandler = NewObject<UMyServerPingHandler>(this);
	PingHandler->SetHeader(TEXT("Server"), TEXT("Unreal Engine 5 via PsWebServer"));     // Optional header set
	WebServer->AddHandler(PingHandler, TEXT("/api/ping"));
}