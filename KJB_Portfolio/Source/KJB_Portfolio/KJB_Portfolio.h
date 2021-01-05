// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

//#include "CoreMinimal.h"
#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(GameLog, Log, All);
#define ALOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))	//��Լ��� ���°�ٿ��� ȣ��Ǿ����� �α׸� ����
#define ALOG_S(Verbosity) UE_LOG(GameLog, Verbosity, TEXT("%s"), *ALOG_CALLINFO)		//?
#define ALOG(Verbosity, Format, ...) UE_LOG(GameLog, Verbosity, TEXT("%s %s"), *ALOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))