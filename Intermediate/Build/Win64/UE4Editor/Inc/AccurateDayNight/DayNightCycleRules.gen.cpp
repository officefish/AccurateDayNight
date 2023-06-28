// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDayNight/Public/DayNightCycleRules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDayNightCycleRules() {}
// Cross Module References
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSunPositionRules();
	UPackage* Z_Construct_UPackage__Script_AccurateDayNight();
	SUNPOSITION_API UScriptStruct* Z_Construct_UScriptStruct_FSunPositionData();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDayNightCycleRules();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMoonRules();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDayLightSavingsTime();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UDateTimeTickData_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UDateTimeTickData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSunPositionRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATEDAYNIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSunPositionRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSunPositionRules, Z_Construct_UPackage__Script_AccurateDayNight(), TEXT("SunPositionRules"), sizeof(FSunPositionRules), Get_Z_Construct_UScriptStruct_FSunPositionRules_Hash());
	}
	return Singleton;
}
template<> ACCURATEDAYNIGHT_API UScriptStruct* StaticStruct<FSunPositionRules>()
{
	return FSunPositionRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSunPositionRules(FSunPositionRules::StaticStruct, TEXT("/Script/AccurateDayNight"), TEXT("SunPositionRules"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateDayNight_StaticRegisterNativesFSunPositionRules
{
	FScriptStruct_AccurateDayNight_StaticRegisterNativesFSunPositionRules()
	{
		UScriptStruct::DeferCppStructOps<FSunPositionRules>(FName(TEXT("SunPositionRules")));
	}
} ScriptStruct_AccurateDayNight_StaticRegisterNativesFSunPositionRules;
	struct Z_Construct_UScriptStruct_FSunPositionRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NorthOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NorthOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSunPositionRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSunPositionRules, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSunPositionRules, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_TimeZone_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSunPositionRules, TimeZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_TimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_TimeZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_NorthOffset_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_NorthOffset = { "NorthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSunPositionRules, NorthOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_NorthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_NorthOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSunPositionRules, Data), Z_Construct_UScriptStruct_FSunPositionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSunPositionRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_TimeZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_NorthOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionRules_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSunPositionRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
		nullptr,
		&NewStructOps,
		"SunPositionRules",
		sizeof(FSunPositionRules),
		alignof(FSunPositionRules),
		Z_Construct_UScriptStruct_FSunPositionRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSunPositionRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSunPositionRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateDayNight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SunPositionRules"), sizeof(FSunPositionRules), Get_Z_Construct_UScriptStruct_FSunPositionRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSunPositionRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSunPositionRules_Hash() { return 782627356U; }
class UScriptStruct* FDayNightCycleRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATEDAYNIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDayNightCycleRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDayNightCycleRules, Z_Construct_UPackage__Script_AccurateDayNight(), TEXT("DayNightCycleRules"), sizeof(FDayNightCycleRules), Get_Z_Construct_UScriptStruct_FDayNightCycleRules_Hash());
	}
	return Singleton;
}
template<> ACCURATEDAYNIGHT_API UScriptStruct* StaticStruct<FDayNightCycleRules>()
{
	return FDayNightCycleRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDayNightCycleRules(FDayNightCycleRules::StaticStruct, TEXT("/Script/AccurateDayNight"), TEXT("DayNightCycleRules"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateDayNight_StaticRegisterNativesFDayNightCycleRules
{
	FScriptStruct_AccurateDayNight_StaticRegisterNativesFDayNightCycleRules()
	{
		UScriptStruct::DeferCppStructOps<FDayNightCycleRules>(FName(TEXT("DayNightCycleRules")));
	}
} ScriptStruct_AccurateDayNight_StaticRegisterNativesFDayNightCycleRules;
	struct Z_Construct_UScriptStruct_FDayNightCycleRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_myNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealWorld_StaticStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealWorld_StaticStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWorld_StaticStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameWorld_StaticStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealWorldTimeInGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealWorldTimeInGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NorthOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NorthOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDayNightCycleRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_myNumber_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_myNumber = { "myNumber", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, myNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_myNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_myNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorld_StaticStartTime_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorld_StaticStartTime = { "RealWorld_StaticStartTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, RealWorld_StaticStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorld_StaticStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorld_StaticStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_GameWorld_StaticStartTime_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_GameWorld_StaticStartTime = { "GameWorld_StaticStartTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, GameWorld_StaticStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_GameWorld_StaticStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_GameWorld_StaticStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorldTimeInGameTime_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorldTimeInGameTime = { "RealWorldTimeInGameTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, RealWorldTimeInGameTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorldTimeInGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorldTimeInGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_TimeZone_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, TimeZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_TimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_TimeZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_NorthOffset_MetaData[] = {
		{ "Category", "DayNightCycleRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_NorthOffset = { "NorthOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayNightCycleRules, NorthOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_NorthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_NorthOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_myNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorld_StaticStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_GameWorld_StaticStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_RealWorldTimeInGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_TimeZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::NewProp_NorthOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
		nullptr,
		&NewStructOps,
		"DayNightCycleRules",
		sizeof(FDayNightCycleRules),
		alignof(FDayNightCycleRules),
		Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDayNightCycleRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDayNightCycleRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateDayNight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DayNightCycleRules"), sizeof(FDayNightCycleRules), Get_Z_Construct_UScriptStruct_FDayNightCycleRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDayNightCycleRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDayNightCycleRules_Hash() { return 3821525215U; }
class UScriptStruct* FMoonRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATEDAYNIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMoonRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoonRules, Z_Construct_UPackage__Script_AccurateDayNight(), TEXT("MoonRules"), sizeof(FMoonRules), Get_Z_Construct_UScriptStruct_FMoonRules_Hash());
	}
	return Singleton;
}
template<> ACCURATEDAYNIGHT_API UScriptStruct* StaticStruct<FMoonRules>()
{
	return FMoonRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoonRules(FMoonRules::StaticStruct, TEXT("/Script/AccurateDayNight"), TEXT("MoonRules"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateDayNight_StaticRegisterNativesFMoonRules
{
	FScriptStruct_AccurateDayNight_StaticRegisterNativesFMoonRules()
	{
		UScriptStruct::DeferCppStructOps<FMoonRules>(FName(TEXT("MoonRules")));
	}
} ScriptStruct_AccurateDayNight_StaticRegisterNativesFMoonRules;
	struct Z_Construct_UScriptStruct_FMoonRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Moon_MetaData[];
#endif
		static void NewProp_Moon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonLightStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoonLightStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoonDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoonSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonEnable_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoonEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoonRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoonRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon_MetaData[] = {
		{ "Category", "MoonRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon_SetBit(void* Obj)
	{
		((FMoonRules*)Obj)->Moon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon = { "Moon", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMoonRules), &Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonLightStrength_MetaData[] = {
		{ "Category", "MoonRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonLightStrength = { "MoonLightStrength", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoonRules, MoonLightStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonLightStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonLightStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonDistance_MetaData[] = {
		{ "Category", "MoonRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonDistance = { "MoonDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoonRules, MoonDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonSize_MetaData[] = {
		{ "Category", "MoonRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonSize = { "MoonSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoonRules, MoonSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonEnable_MetaData[] = {
		{ "Category", "MoonRules" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonEnable = { "MoonEnable", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoonRules, MoonEnable), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoonRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_Moon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonLightStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonRules_Statics::NewProp_MoonEnable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoonRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
		nullptr,
		&NewStructOps,
		"MoonRules",
		sizeof(FMoonRules),
		alignof(FMoonRules),
		Z_Construct_UScriptStruct_FMoonRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoonRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoonRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoonRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateDayNight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoonRules"), sizeof(FMoonRules), Get_Z_Construct_UScriptStruct_FMoonRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoonRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoonRules_Hash() { return 2389728576U; }
class UScriptStruct* FDayLightSavingsTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATEDAYNIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDayLightSavingsTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDayLightSavingsTime, Z_Construct_UPackage__Script_AccurateDayNight(), TEXT("DayLightSavingsTime"), sizeof(FDayLightSavingsTime), Get_Z_Construct_UScriptStruct_FDayLightSavingsTime_Hash());
	}
	return Singleton;
}
template<> ACCURATEDAYNIGHT_API UScriptStruct* StaticStruct<FDayLightSavingsTime>()
{
	return FDayLightSavingsTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDayLightSavingsTime(FDayLightSavingsTime::StaticStruct, TEXT("/Script/AccurateDayNight"), TEXT("DayLightSavingsTime"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateDayNight_StaticRegisterNativesFDayLightSavingsTime
{
	FScriptStruct_AccurateDayNight_StaticRegisterNativesFDayLightSavingsTime()
	{
		UScriptStruct::DeferCppStructOps<FDayLightSavingsTime>(FName(TEXT("DayLightSavingsTime")));
	}
} ScriptStruct_AccurateDayNight_StaticRegisterNativesFDayLightSavingsTime;
	struct Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMonth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartMonth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMonth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndMonth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchHours_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SwitchHours;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDayLightSavingsTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDayLightSavingsTime*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDayLightSavingsTime), &Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartMonth_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "Comment", "//UseDaylightSavingsTime;\n" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
		{ "ToolTip", "UseDaylightSavingsTime;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartMonth = { "StartMonth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayLightSavingsTime, StartMonth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartMonth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartMonth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartDay_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartDay = { "StartDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayLightSavingsTime, StartDay), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndMonth_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndMonth = { "EndMonth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayLightSavingsTime, EndMonth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndMonth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndMonth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndDay_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndDay = { "EndDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayLightSavingsTime, EndDay), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_SwitchHours_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_SwitchHours = { "SwitchHours", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDayLightSavingsTime, SwitchHours), METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_SwitchHours_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_SwitchHours_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartMonth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_StartDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndMonth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_EndDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::NewProp_SwitchHours,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
		nullptr,
		&NewStructOps,
		"DayLightSavingsTime",
		sizeof(FDayLightSavingsTime),
		alignof(FDayLightSavingsTime),
		Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDayLightSavingsTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDayLightSavingsTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateDayNight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DayLightSavingsTime"), sizeof(FDayLightSavingsTime), Get_Z_Construct_UScriptStruct_FDayLightSavingsTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDayLightSavingsTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDayLightSavingsTime_Hash() { return 3639246738U; }
	void UDateTimeTickData::StaticRegisterNativesUDateTimeTickData()
	{
	}
	UClass* Z_Construct_UClass_UDateTimeTickData_NoRegister()
	{
		return UDateTimeTickData::StaticClass();
	}
	struct Z_Construct_UClass_UDateTimeTickData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HashVal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HashVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDateTimeTickData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeTickData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DayNightCycleRules.h" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_TickDateTime_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "Comment", "//DateTime\n" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
		{ "ToolTip", "DateTime" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_TickDateTime = { "TickDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDateTimeTickData, TickDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_TickDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_TickDateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_HashVal_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "ModuleRelativePath", "Public/DayNightCycleRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_HashVal = { "HashVal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDateTimeTickData, HashVal), METADATA_PARAMS(Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_HashVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_HashVal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDateTimeTickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_TickDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimeTickData_Statics::NewProp_HashVal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDateTimeTickData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDateTimeTickData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDateTimeTickData_Statics::ClassParams = {
		&UDateTimeTickData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDateTimeTickData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeTickData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDateTimeTickData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeTickData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDateTimeTickData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDateTimeTickData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDateTimeTickData, 2825502575);
	template<> ACCURATEDAYNIGHT_API UClass* StaticClass<UDateTimeTickData>()
	{
		return UDateTimeTickData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDateTimeTickData(Z_Construct_UClass_UDateTimeTickData, &UDateTimeTickData::StaticClass, TEXT("/Script/AccurateDayNight"), TEXT("UDateTimeTickData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDateTimeTickData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
