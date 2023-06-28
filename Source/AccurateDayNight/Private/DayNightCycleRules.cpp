// Fill out your copyright notice in the Description page of Project Settings.


#include "DayNightCycleRules.h"

void UDateTimeTickData::ValidateHash()
{
	float NewHash = (float)TickDateTime.GetMonth();
	NewHash += (float)TickDateTime.GetDay();
	NewHash += GetSolarTime();

	if (HashVal != NewHash)
	{
		HashVal = NewHash;
	}
}

int32 UDateTimeTickData::GetYear() const
{
	return TickDateTime.GetYear();
}

int32 UDateTimeTickData::GetMonth() const
{
	return TickDateTime.GetMonth();
}

int32 UDateTimeTickData::GetDay() const
{
	return TickDateTime.GetDay();
}

int32 UDateTimeTickData::GetHour() const
{
	return TickDateTime.GetHour();
}

int32 UDateTimeTickData::GetMinute() const
{
	return TickDateTime.GetMinute();
}

int32 UDateTimeTickData::GetSecond() const
{
	return TickDateTime.GetSecond();
}

float UDateTimeTickData::GetSolarTime() const
{
	float result = TickDateTime.GetHour();
	result += TickDateTime.GetMinute() / NUM_MINUTES;
	result += TickDateTime.GetSecond() / NUM_SECONDS;
	result += TickDateTime.GetMillisecond() / NUM_MILISECONDS;
	return result;
}