// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageWidget.h"
#include "Components/TextBlock.h"
#include "Animation/WidgetAnimation.h"


void UDamageWidget::NativeConstruct()
{
	Super::NativeConstruct();
	DamageText = Cast<UTextBlock>(GetWidgetFromName(TEXT("DamageText")));
	PlayAnimation(Fade);
}

void UDamageWidget::UpdateDamageBlock(FText text)
{
	DamageText->SetText(text);
}