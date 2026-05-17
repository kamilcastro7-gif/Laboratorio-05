// Copyright Epic Games, Inc. All Rights Reserved.

#include "FacadeGameMode.h"
#include "Enemigo_Terrestre.h"
#include "Enemigo_Aereo.h"
#include "Enemigo_Acuatico.h"

AFacadeGameMode::AFacadeGameMode()
{
    PrimaryActorTick.bCanEverTick = true;

    ClaseTerrestre = AEnemigo_Terrestre::StaticClass();
    ClaseAereo = AEnemigo_Aereo::StaticClass();
    ClaseAcuatico = AEnemigo_Acuatico::StaticClass();
}

void AFacadeGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (World)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        World->SpawnActor<AEnemigo_Terrestre>(ClaseTerrestre, FVector(500, -200, 200), FRotator::ZeroRotator, SpawnParams);
        World->SpawnActor<AEnemigo_Aereo>(ClaseAereo, FVector(500, 400, 450), FRotator::ZeroRotator, SpawnParams);
        World->SpawnActor<AEnemigo_Acuatico>(ClaseAcuatico, FVector(400, 100, 120), FRotator::ZeroRotator, SpawnParams);

        FacadeActor = World->SpawnActor<AFacadeGAME>(AFacadeGAME::StaticClass());
    }
}

void AFacadeGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (FacadeActor)
    {
        FacadeActor->MoverHorda();
    }
}

