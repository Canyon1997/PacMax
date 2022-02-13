// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Pac.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
ABase_Pac::ABase_Pac()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh Component"));
	BaseMesh->SetupAttachment(CapsuleComp);

}

// Called when the game starts or when spawned
void ABase_Pac::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Pac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isMoveUp)
	{
		MoveUp();
	}
	else if (isMoveDown)
	{
		MoveDown();
	}
	else if (isMoveLeft)
	{
		MoveLeft();
	}
	else if (isMoveRight)
	{
		MoveRight();
	}
}

// Called to bind functionality to input
void ABase_Pac::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("MoveUp"), EInputEvent::IE_Pressed, this, &ABase_Pac::MoveUpPressed);
	PlayerInputComponent->BindAction(TEXT("MoveDown"), EInputEvent::IE_Pressed, this, &ABase_Pac::MoveDownPressed);
	PlayerInputComponent->BindAction(TEXT("MoveLeft"), EInputEvent::IE_Pressed, this, &ABase_Pac::MoveLeftPressed);
	PlayerInputComponent->BindAction(TEXT("MoveRight"), EInputEvent::IE_Pressed, this, &ABase_Pac::MoveRightPressed);
}


void ABase_Pac::MoveUpPressed()
{
	isMoveDown = false;
	isMoveLeft = false;
	isMoveRight = false;
	isMoveUp = true;
}


void ABase_Pac::MoveDownPressed()
{
	isMoveUp = false;
	isMoveLeft = false;
	isMoveRight = false;
	isMoveDown = true;
}


void ABase_Pac::MoveLeftPressed()
{
	isMoveUp = false;
	isMoveDown = false;
	isMoveRight = false;
	isMoveLeft = true;
}


void ABase_Pac::MoveRightPressed()
{
	isMoveUp = false;
	isMoveDown = false;
	isMoveLeft = false;
	isMoveRight = true;
}

void ABase_Pac::MoveUp()
{
	AddActorLocalOffset(GetActorForwardVector() * MoveSpeed);
}


void ABase_Pac::MoveDown()
{
	AddActorLocalOffset(GetActorForwardVector() * -MoveSpeed);
}


void ABase_Pac::MoveLeft()
{
	AddActorLocalOffset(GetActorRightVector() * -MoveSpeed);
}


void ABase_Pac::MoveRight()
{
	AddActorLocalOffset(GetActorRightVector() * MoveSpeed);
}


void ABase_Pac::Died()
{
	UE_LOG(LogTemp, Warning, TEXT("You have died"));
}

