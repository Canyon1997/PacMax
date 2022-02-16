// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PacMax/Pawns/Base_Pac.h"
#include "Player_Pac.generated.h"

/**
 * 
 */
UCLASS()
class PACMAX_API APlayer_Pac : public ABase_Pac
{
	GENERATED_BODY()
	
public:
	APlayer_Pac();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

private:
	void Dash();
	void OriginalMovement();

	bool bHasDashed;
	float OriginalSpeed = 0.f;

	UPROPERTY(EditAnywhere)
		float SpeedModifier = 2.f;

	UPROPERTY(EditAnywhere)
		float DashTimer = 1.f;
};
