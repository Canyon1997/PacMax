// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Base_Pac.generated.h"

UCLASS()
class PACMAX_API ABase_Pac : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABase_Pac();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Died();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(EditAnywhere)
		class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditAnywhere)
		float MoveSpeed = 5.f;

	bool isMoveUp = false;
	bool isMoveDown = false;
	bool isMoveLeft = false;
	bool isMoveRight = false;

		void MoveUpPressed();
		void MoveDownPressed();
		void MoveLeftPressed();
		void MoveRightPressed();

		void MoveUp();
		void MoveDown();
		void MoveLeft();
		void MoveRight();

};
