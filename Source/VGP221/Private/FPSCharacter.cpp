// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UE_LOG(LogTemp, Warning, TEXT("FPSCharacter Constructor Called"));
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this &AFPSCharacter::OnMoveForward)
}

void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)

{

	Super::SetupPlayerInputComponent(PlayerInputComponent);



	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::OnMoveRight);
	PlayerInputComponent->BindAxis("LookHorizontal", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookVertical", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::EndJump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACharacter::Jump);

}

