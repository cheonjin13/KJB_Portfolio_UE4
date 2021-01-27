// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

UCLASS()
class KJB_PORTFOLIO_API AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonster();
	void Attack();
	FOnAttackEndDelegate OnAttackEnd;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UDamageWidget> DamageWidgetClass;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	
	void SetCharacterState(ECharacterState NewState);
	ECharacterState GetCharacterState() const;

	int32 GetExp() const;

public: //변수
	UPROPERTY(VisibleAnywhere, Category = "Stat")
	class UMonsterDataComponent* MonsterStat;
	UPROPERTY(VisibleAnywhere, Category = "UI")
	class UWidgetComponent* HPBarWidget;
private: //함수
	void AttackCheck();
	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

private: //변수
	UPROPERTY()
	class UMonsterAnimInstance* MyAnim;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Attack", meta = (AllowPrivateAccess = true))
	bool IsAttacking;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	float AttackRange;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	float AttackRadius;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Attack", meta = (AllowPrivateAccess = true))
	bool IsDamaged;

	UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, Category = "State", meta = (AllowPrivateAccess = true))
		ECharacterState CurrentState;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State", meta = (AllowPrivateAccess = true))
	float DeadTimer;
	FTimerHandle DeadTimerHandle = {};

	UPROPERTY()
	TSubclassOf<class ADamageWidgetActor> DamageWidgetActorClass;
};
