// Fill out your copyright notice in the Description page of Project Settings.

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SunPosition.h" 
#include "DayNightCycleRules.generated.h"

UCLASS()
class UDateTimeTickData : public UObject
{
	GENERATED_BODY()

public:

	int32 GetYear() const;
	int32 GetMonth() const;
	int32 GetDay() const;
	int32 GetHour() const;
	int32 GetMinute() const;
	int32 GetSecond() const;
	float GetSolarTime() const;
	void ValidateHash();

protected:

	const float NUM_MINUTES = 59.99f;
	const float NUM_SECONDS = 3599.99f;
	const float NUM_MILISECONDS = 3599999.99f;


public:

	//DateTime
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		FDateTime TickDateTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		float HashVal;

};


USTRUCT(BlueprintType)
struct FDayLightSavingsTime
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		bool bEnable; //UseDaylightSavingsTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		int32 StartMonth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		int32 StartDay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		int32 EndMonth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		int32 EndDay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		int32 SwitchHours;
};

USTRUCT(BlueprintType)
struct FMoonRules
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
		bool Moon;

	UPROPERTY(BlueprintReadWrite)
		float MoonLightStrength;

	UPROPERTY(BlueprintReadWrite)
		float MoonDistance;

	UPROPERTY(BlueprintReadWrite)
		float MoonSize;

	UPROPERTY(BlueprintReadWrite)
		float MoonEnable;

};


USTRUCT(BlueprintType)
struct FDayNightCycleRules
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
		int myNumber;

	UPROPERTY(BlueprintReadWrite)
		FDateTime RealWorld_StaticStartTime;

	UPROPERTY(BlueprintReadWrite)
		FDateTime GameWorld_StaticStartTime;

	UPROPERTY(BlueprintReadWrite)
		FTimespan RealWorldTimeInGameTime;

	UPROPERTY(BlueprintReadWrite)
		float Latitude;

	UPROPERTY(BlueprintReadWrite)
		float Longitude;

	UPROPERTY(BlueprintReadWrite)
		float TimeZone;

	UPROPERTY(BlueprintReadWrite)
		float NorthOffset;
};

USTRUCT(BlueprintType)
struct FSunPositionRules 
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "Location"))
		float Latitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "Location"))
		float Longitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "Location"))
		float TimeZone;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "Location"))
		float NorthOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "Location"))
		FSunPositionData Data;
};