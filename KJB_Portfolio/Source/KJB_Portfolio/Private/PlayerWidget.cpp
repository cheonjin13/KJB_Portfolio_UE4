// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWidget.h"
#include "MyPlayerState.h"
#include "MyCharacterDataComponent.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPlayerWidget::BindCharacterStat(class UMyCharacterDataComponent* NewDataStat)
{
	if (NewDataStat == nullptr) return;

	CurrentCharacterStat = NewDataStat;
	CurrentCharacterStat->OnHPChange.AddUObject(this, &UPlayerWidget::UpdateHPWidget);
}

void UPlayerWidget::BindPlayerState(AMyPlayerState * PlayerState)
{
	if (PlayerState == nullptr) return;
	CurrentPlayerState = PlayerState;
	CurrentPlayerState->OnPlayerStateChanged.AddUObject(this, &UPlayerWidget::UpdatePlayerState);
}

void UPlayerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_PlayerHP")));
	if (HPProgressBar == nullptr) return;
	UpdateHPWidget();

	ExpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_PlayerExp")));
	if (ExpBar == nullptr) return;

	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName(TEXT("Txt_Level")));
	if (PlayerLevel == nullptr) return;

	ExpPercent = Cast<UTextBlock>(GetWidgetFromName(TEXT("Txt_ExpPercent")));
	if (ExpPercent == nullptr) return;


	
}
void UPlayerWidget::UpdateHPWidget()
{
	if (CurrentCharacterStat.IsValid())
	{
		if (HPProgressBar != nullptr)
		{
			HPProgressBar->SetPercent(CurrentCharacterStat->GetHPRatio());
		}
	}
}

void UPlayerWidget::UpdatePlayerState()
{
	if (CurrentPlayerState.IsValid())
	{
		ExpBar->SetPercent(CurrentPlayerState->GetExpRatio());
		ExpPercent->SetText(FText::FromString(FString::SanitizeFloat(CurrentPlayerState->GetExpRatio()*100.0f)+"%"));
		PlayerLevel->SetText(FText::FromString("Lv." + FString::FromInt(CurrentPlayerState->GetCharacterLevel())));

	}
}
