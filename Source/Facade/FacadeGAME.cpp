// Fill out your copyright notice in the Description page of Project Settings.

#include "FacadeGAME.h"
#include "Enemigo_Terrestre.h"
#include "Enemigo_Aereo.h"
#include "Enemigo_Acuatico.h"
#include "Kismet/GameplayStatics.h"

AFacadeGAME::AFacadeGAME()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AFacadeGAME::MoverHorda()
{
    UWorld* Mundo = GetWorld();
    if (!Mundo) return;

    TArray<AActor*> Encontrados;

    UGameplayStatics::GetAllActorsWithTag(Mundo, TEXT("Enemigo"), Encontrados);

    for (AActor* Actor : Encontrados)
    {
        if (auto* ET = Cast<AEnemigo_Terrestre>(Actor)) { ET->moverET(); }
        if (auto* EA = Cast<AEnemigo_Aereo>(Actor)) { EA->moverEA(); }
        if (auto* EAC = Cast<AEnemigo_Acuatico>(Actor)) { EAC->moverEAC(); }
    }
}

