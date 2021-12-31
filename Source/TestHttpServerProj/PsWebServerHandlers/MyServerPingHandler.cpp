// Fill out your copyright notice in the Description page of Project Settings.


#include "MyServerPingHandler.h"
#include "PsWebServerDefines.h"

/*
 * Check that request has valid json encoded body and return its copy in response
 */
void UMyServerPingHandler::ProcessRequest_Implementation(const FGuid& RequestUniqueId, const FString& RequestData)
{
	ProcessRequestFinish(RequestUniqueId, TEXT("SERVER WORKS!"));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
	UE_LOG(LogTemp, Warning, TEXT("Some debug message!"));
}