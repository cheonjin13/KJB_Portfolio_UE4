// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class KJB_PORTFOLIO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
protected:
	enum class EControlMode
	{
		PLAYER, NPC
	};
	EControlMode CurrentControlMode = EControlMode::PLAYER;
public:
	// Sets default values for this character's properties
	AMyCharacter();
	void Attack();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SetControlMode(EControlMode newControlMode);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public: //변수
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* Camera;

private: //함수
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void Turn(float NewAxisValue);
	void LookUp(float NewAxisValue);

	void AttackCheck();
private:
	UPROPERTY()
	class UMyAnimInstance* MyAnim;

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	float AttackRange;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	float AttackRadius;
};
