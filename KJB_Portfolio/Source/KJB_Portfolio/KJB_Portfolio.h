// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

//#include "CoreMinimal.h"
#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(GameLog, Log, All);
#define ALOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))	//어떤함수의 몇번째줄에서 호출되었는지 로그를 남김
#define ALOG_S(Verbosity) UE_LOG(GameLog, Verbosity, TEXT("%s"), *ALOG_CALLINFO)		//?
#define ALOG(Verbosity, Format, ...) UE_LOG(GameLog, Verbosity, TEXT("%s %s"), *ALOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))