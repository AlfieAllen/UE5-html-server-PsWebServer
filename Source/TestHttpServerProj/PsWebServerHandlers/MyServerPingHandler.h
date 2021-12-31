// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PsWebServerHandler.h"
#include "MyServerPingHandler.generated.h"

/**
 * 
 */
UCLASS()
class TESTHTTPSERVERPROJ_API UMyServerPingHandler : public UPsWebServerHandler
{
	GENERATED_BODY()

public:
	/** Override to implement your custom logic of request processing */
	virtual void ProcessRequest_Implementation(const FGuid& RequestUniqueId, const FString& RequestData) override;
	
};
