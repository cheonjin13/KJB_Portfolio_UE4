// Fill out your copyright notice in the Description page of Project Settings.


#include "RpgHUD.h"
#include "Engine/Canvas.h"


ARpgHUD::ARpgHUD()
{
	//Texture2D'/Game/MyContents/Resoruces/ch2rs.ch2rs'
	static ConstructorHelpers::FObjectFinder<UTexture2D> TEXTURE(TEXT("/Game/MyContents/Resoruces/ch2rs.ch2rs"));
	if (TEXTURE.Succeeded())
	{
		CrossHair = TEXTURE.Object;
	}
}

void ARpgHUD::DrawHUD()
{
	Super::DrawHUD();
	FVector2D center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
	FVector2D drawPoint(center.X - (CrossHair->GetSurfaceWidth() * 0.5f), center.Y - (CrossHair->GetSurfaceHeight() * 0.5f));

	FCanvasTileItem TileItem(drawPoint, CrossHair->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);
}

