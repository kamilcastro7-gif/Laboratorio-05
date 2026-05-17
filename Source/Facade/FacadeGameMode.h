// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FacadeGAME.h"
#include "FacadeGameMode.generated.h"

UCLASS()
class FACADE_API AFacadeGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AFacadeGameMode();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    
    TSubclassOf<class AEnemigo_Terrestre> ClaseTerrestre;
    TSubclassOf<class AEnemigo_Aereo> ClaseAereo;
    TSubclassOf<class AEnemigo_Acuatico> ClaseAcuatico;

private:
    AFacadeGAME* FacadeActor;
};

