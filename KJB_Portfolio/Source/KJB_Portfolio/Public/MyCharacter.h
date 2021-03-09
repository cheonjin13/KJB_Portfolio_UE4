// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"



DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

UCLASS()
class KJB_PORTFOLIO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	AMyCharacter();
	void Attack();	

	FOnAttackEndDelegate OnAttackEnd;

	UFUNCTION(BlueprintCallable, Category = "Items")
	void UseItem(class UItem* Item);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	
public: //변수
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Stat")
	class UMyCharacterDataComponent* CharacterStat;
	UPROPERTY(VisibleAnywhere, Category = "UI")
	class UWidgetComponent* HPBarWidget;

	UPROPERTY()
	class UParticleSystem* HitEffect;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class UCapsuleComponent* HitCheck;

	//Item Inventory
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UInventoryComponent* InventoryComp;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> InventoryBPClass;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "UI")
	UUserWidget* InventoryWidget;

	UPROPERTY()
	bool IsPossibleItemRoot;


private: //함수
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void Turn(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Running();
	void ShowInventory();

	void AttackCheck();
	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	void AttackStartComboState();
	void AttackEndComboState();

	void UpdateCharacterStat();

	UFUNCTION()
	void HitCheckOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
private:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Attack", meta = (AllowPrivateAccess = true))
	bool IsAttacking;

	UPROPERTY()
	class UMyAnimInstance* MyAnim;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	float AttackRange;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	float AttackRadius;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	bool CanNextCombo;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	bool IsComboInputOn;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	int32 CurrentCombo;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	int32 MaxCombo;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State", meta = (AllowPrivateAccess = true))
	float DeadTimer;
	FTimerHandle DeadTimerHandle = {};
	UPROPERTY()
	class AMyPlayerController* MyPlayerController;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UI", meta = (AllowPrivateAccess = true))
	bool IsShowInventory;
};
