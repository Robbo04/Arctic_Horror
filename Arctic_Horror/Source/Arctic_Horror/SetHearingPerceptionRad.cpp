// Fill out your copyright notice in the Description page of Project Settings.


#include "SetHearingPerceptionRad.h"


UAISenseConfig* SetHearingPerceptionRad::GetPerceptionSenseConfig(AAIController* Controller, TSubclassOf<UAISense> SenseClass)
{
    UAISenseConfig* result = nullptr;

    FAISenseID Id = UAISense::GetSenseID(SenseClass);
    if (!Id.IsValid())
    {

