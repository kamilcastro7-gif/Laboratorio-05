// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemigo_Aereo.h"

AEnemigo_Aereo::AEnemigo_Aereo()
{
	PrimaryActorTick.bCanEverTick = true;
	Tags.Add(FName("Enemigo"));

	MallaAE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaAE"));
	RootComponent = MallaAE;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MllAEAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (MllAEAsset.Succeeded()) {
		MallaAE->SetStaticMesh(MllAEAsset.Object);
	}
}

void AEnemigo_Aereo::moverEA()
{

	float Oscilacion = FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) * 5.0f;
	AddActorLocalOffset(FVector(0.0f, 0.0f, Oscilacion));
}
