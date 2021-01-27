// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterWidget.h"
#include "MyCharacterDataComponent.h"
#include "MonsterDataComponent.h"
#include "Components/ProgressBar.h"
#include "Components/EditableTextBox.h"


void UCharacterWidget::BindCharacterStat(class UMyCharacterDataComponent* NewDataStat)
{
	if (NewDataStat == nullptr) return;

	CurrentCharacterStat = NewDataStat;
	CurrentCharacterStat->OnHPChange.AddUObject(this, &UCharacterWidget::UpdateHPWidget);
}
void UCharacterWidget::BindMonsterStat(UMonsterDataComponent * NewDataStat)
{
	if (NewDataStat == nullptr) return;
	CurrentMonsterStat = NewDataStat;
	CurrentMonsterStat->OnHPChange.AddUObject(this, &UCharacterWidget::UpdateHPWidget);
}
void UCharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBar")));
	if (HPProgressBar == nullptr) return;
	UpdateHPWidget();
}
void UCharacterWidget::UpdateHPWidget()
{
	if (CurrentCharacterStat.IsValid())
	{
		if (HPProgressBar != nullptr)
		{
			HPProgressBar->SetPercent(CurrentCharacterStat->GetHPRatio());
		}
	}
	if (CurrentMonsterStat.IsValid())
	{
		if (HPProgressBar != nullptr)
		{
			HPProgressBar->SetPercent(CurrentMonsterStat->GetHPRatio());
		}
	}
}