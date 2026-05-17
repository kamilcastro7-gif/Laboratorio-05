// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeGAME.generated.h"

UCLASS()
class FACADE_API AFacadeGAME : public AActor
{
    GENERATED_BODY()

public:
    AFacadeGAME();

    void MoverHorda();
};
