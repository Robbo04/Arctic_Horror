// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPP_SetPerceptionRange.generated.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SetHearingPerceptionRad.generated.h"
#include "AIController.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AISense.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig.h"


UCLASS()
class GAME_API SetHearingPerceptionRad : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()


    static UAISenseConfig* GetPerceptionSenseConfig(AAIController* Controller, TSubclassOf<UAISense> SenseClass);

    UFUNCTION(BlueprintCallable)
    static bool SetHearingRange(AAIController* Controller, float HearingRange);

};
