// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Pac.h"

APlayer_Pac::APlayer_Pac()
{

}


void APlayer_Pac::BeginPlay()
{
	Super::BeginPlay();

	OriginalSpeed = MoveSpeed;
}


void APlayer_Pac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayer_Pac::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Dash"), EInputEvent::IE_Pressed, this, &APlayer_Pac::Dash);
}


void APlayer_Pac::Dash()
{
	if (!bHasDashed)
	{
		MoveSpeed *= SpeedModifier;

		FTimerHandle DashTimerHandle;
		GetWorldTimerManager().SetTimer(DashTimerHandle, this, &APlayer_Pac::OriginalMovement, DashTimer);
		bHasDashed = true;
	}
}


void APlayer_Pac::OriginalMovement()
{
	MoveSpeed = OriginalSpeed;
	bHasDashed = false;
}