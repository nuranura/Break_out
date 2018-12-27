// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBrick.h"

// Sets default values
AMyBrick::AMyBrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyBrick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

