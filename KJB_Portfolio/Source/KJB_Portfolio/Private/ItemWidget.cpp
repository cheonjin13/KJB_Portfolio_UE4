// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemWidget.h"
#include "Components/TextBlock.h"


void UItemWidget::SetItemText(FText text)
{
	if (ItemName != nullptr) 
	{ 
		ItemName->SetText(text); 
	}
}


void UItemWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
