// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDayNight/Public/SkyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyActor() {}
// Cross Module References
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_ASkyActor_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_ASkyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AccurateDayNight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSunPositionRules();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDayLightSavingsTime();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMoonRules();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UCompassComponent_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UMoonComponent_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UDateTimeTickData_NoRegister();
	ACCURATEDAYNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDayNightCycleRules();
// End Cross Module References
	DEFINE_FUNCTION(ASkyActor::execDoOnDay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoOnDay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execDoOnSunrise)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoOnSunrise();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execDoOnBeforeSunrise)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoOnBeforeSunrise();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execDoOnNight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoOnNight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execDoOnSunset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoOnSunset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execDoOnBeforeSunset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoOnBeforeSunset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execIsDST)
	{
		P_GET_STRUCT(FDayLightSavingsTime,Z_Param_DSTStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDST(Z_Param_DSTStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execGetHMSFromSolarTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SolarTime_loc);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Hour);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minute);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Second);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHMSFromSolarTime(Z_Param_SolarTime_loc,Z_Param_Out_Hour,Z_Param_Out_Minute,Z_Param_Out_Second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execSetMoonRules)
	{
		P_GET_STRUCT(FMoonRules,Z_Param_MoonRulesInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoonRules(Z_Param_MoonRulesInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execUpdateSky)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSky();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execUpdateCompass)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_CompassQuaternion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCompass(Z_Param_Out_CompassQuaternion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execUpdateMoon)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_MoonRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMoon(Z_Param_Out_MoonRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execUpdateSun)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_SunRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSun(Z_Param_Out_SunRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execGetCurrentRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CurrentRotator);
		P_GET_STRUCT_REF(FSunPositionRules,Z_Param_Out_Rules);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentRotator(Z_Param_Out_CurrentRotator,Z_Param_Out_Rules);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execGetSunriseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetSunriseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execGetSunsetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetSunsetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASkyActor::execUpdate)
	{
		P_GET_STRUCT(FDateTime,Z_Param_CurrentDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_CurrentDateTime);
		P_NATIVE_END;
	}
	void ASkyActor::StaticRegisterNativesASkyActor()
	{
		UClass* Class = ASkyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoOnBeforeSunrise", &ASkyActor::execDoOnBeforeSunrise },
			{ "DoOnBeforeSunset", &ASkyActor::execDoOnBeforeSunset },
			{ "DoOnDay", &ASkyActor::execDoOnDay },
			{ "DoOnNight", &ASkyActor::execDoOnNight },
			{ "DoOnSunrise", &ASkyActor::execDoOnSunrise },
			{ "DoOnSunset", &ASkyActor::execDoOnSunset },
			{ "GetCurrentRotator", &ASkyActor::execGetCurrentRotator },
			{ "GetHMSFromSolarTime", &ASkyActor::execGetHMSFromSolarTime },
			{ "GetSunriseTime", &ASkyActor::execGetSunriseTime },
			{ "GetSunsetTime", &ASkyActor::execGetSunsetTime },
			{ "IsDST", &ASkyActor::execIsDST },
			{ "SetMoonRules", &ASkyActor::execSetMoonRules },
			{ "Update", &ASkyActor::execUpdate },
			{ "UpdateCompass", &ASkyActor::execUpdateCompass },
			{ "UpdateMoon", &ASkyActor::execUpdateMoon },
			{ "UpdateSky", &ASkyActor::execUpdateSky },
			{ "UpdateSun", &ASkyActor::execUpdateSun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "DoOnBeforeSunrise", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DayNight Cycle Change\n" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "ToolTip", "DayNight Cycle Change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "DoOnBeforeSunset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_DoOnDay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_DoOnDay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_DoOnDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "DoOnDay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_DoOnDay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_DoOnDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_DoOnDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_DoOnDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_DoOnNight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_DoOnNight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_DoOnNight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "DoOnNight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_DoOnNight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_DoOnNight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_DoOnNight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_DoOnNight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_DoOnSunrise_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_DoOnSunrise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_DoOnSunrise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "DoOnSunrise", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_DoOnSunrise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_DoOnSunrise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_DoOnSunrise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_DoOnSunrise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_DoOnSunset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_DoOnSunset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_DoOnSunset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "DoOnSunset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_DoOnSunset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_DoOnSunset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_DoOnSunset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_DoOnSunset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics
	{
		struct SkyActor_eventGetCurrentRotator_Parms
		{
			FRotator CurrentRotator;
			FSunPositionRules Rules;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRotator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::NewProp_CurrentRotator = { "CurrentRotator", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetCurrentRotator_Parms, CurrentRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetCurrentRotator_Parms, Rules), Z_Construct_UScriptStruct_FSunPositionRules, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::NewProp_CurrentRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::NewProp_Rules,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "GetCurrentRotator", nullptr, nullptr, sizeof(SkyActor_eventGetCurrentRotator_Parms), Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_GetCurrentRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_GetCurrentRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics
	{
		struct SkyActor_eventGetHMSFromSolarTime_Parms
		{
			float SolarTime_loc;
			int32 Hour;
			int32 Minute;
			int32 Second;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarTime_loc;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hour;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minute;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Second;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_SolarTime_loc = { "SolarTime_loc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetHMSFromSolarTime_Parms, SolarTime_loc), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetHMSFromSolarTime_Parms, Hour), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_Minute = { "Minute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetHMSFromSolarTime_Parms, Minute), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetHMSFromSolarTime_Parms, Second), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_SolarTime_loc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_Hour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_Minute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::NewProp_Second,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "GetHMSFromSolarTime", nullptr, nullptr, sizeof(SkyActor_eventGetHMSFromSolarTime_Parms), Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics
	{
		struct SkyActor_eventGetSunriseTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetSunriseTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "GetSunriseTime", nullptr, nullptr, sizeof(SkyActor_eventGetSunriseTime_Parms), Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_GetSunriseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_GetSunriseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics
	{
		struct SkyActor_eventGetSunsetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventGetSunsetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "GetSunsetTime", nullptr, nullptr, sizeof(SkyActor_eventGetSunsetTime_Parms), Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_GetSunsetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_GetSunsetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_IsDST_Statics
	{
		struct SkyActor_eventIsDST_Parms
		{
			FDayLightSavingsTime DSTStruct;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DSTStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_IsDST_Statics::NewProp_DSTStruct = { "DSTStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventIsDST_Parms, DSTStruct), Z_Construct_UScriptStruct_FDayLightSavingsTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASkyActor_IsDST_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyActor_eventIsDST_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASkyActor_IsDST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyActor_eventIsDST_Parms), &Z_Construct_UFunction_ASkyActor_IsDST_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_IsDST_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_IsDST_Statics::NewProp_DSTStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_IsDST_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_IsDST_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_IsDST_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "IsDST", nullptr, nullptr, sizeof(SkyActor_eventIsDST_Parms), Z_Construct_UFunction_ASkyActor_IsDST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_IsDST_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_IsDST_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_IsDST_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_IsDST()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_IsDST_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics
	{
		struct SkyActor_eventSetMoonRules_Parms
		{
			FMoonRules MoonRulesInput;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoonRulesInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::NewProp_MoonRulesInput = { "MoonRulesInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventSetMoonRules_Parms, MoonRulesInput), Z_Construct_UScriptStruct_FMoonRules, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::NewProp_MoonRulesInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "SetMoonRules", nullptr, nullptr, sizeof(SkyActor_eventSetMoonRules_Parms), Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_SetMoonRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_SetMoonRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_Update_Statics
	{
		struct SkyActor_eventUpdate_Parms
		{
			FDateTime CurrentDateTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_Update_Statics::NewProp_CurrentDateTime = { "CurrentDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventUpdate_Parms, CurrentDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_Update_Statics::NewProp_CurrentDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_Update_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 Functions\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "Update", nullptr, nullptr, sizeof(SkyActor_eventUpdate_Parms), Z_Construct_UFunction_ASkyActor_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics
	{
		struct SkyActor_eventUpdateCompass_Parms
		{
			FQuat CompassQuaternion;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompassQuaternion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompassQuaternion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::NewProp_CompassQuaternion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::NewProp_CompassQuaternion = { "CompassQuaternion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventUpdateCompass_Parms, CompassQuaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::NewProp_CompassQuaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::NewProp_CompassQuaternion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::NewProp_CompassQuaternion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "UpdateCompass", nullptr, nullptr, sizeof(SkyActor_eventUpdateCompass_Parms), Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_UpdateCompass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_UpdateCompass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics
	{
		struct SkyActor_eventUpdateMoon_Parms
		{
			FRotator MoonRotator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoonRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::NewProp_MoonRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::NewProp_MoonRotator = { "MoonRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventUpdateMoon_Parms, MoonRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::NewProp_MoonRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::NewProp_MoonRotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::NewProp_MoonRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "UpdateMoon", nullptr, nullptr, sizeof(SkyActor_eventUpdateMoon_Parms), Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_UpdateMoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_UpdateMoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_UpdateSky_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateSky_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_UpdateSky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "UpdateSky", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateSky_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateSky_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_UpdateSky()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_UpdateSky_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASkyActor_UpdateSun_Statics
	{
		struct SkyActor_eventUpdateSun_Parms
		{
			FRotator SunRotator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SunRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::NewProp_SunRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::NewProp_SunRotator = { "SunRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyActor_eventUpdateSun_Parms, SunRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::NewProp_SunRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::NewProp_SunRotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::NewProp_SunRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyActor, nullptr, "UpdateSun", nullptr, nullptr, sizeof(SkyActor_eventUpdateSun_Parms), Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyActor_UpdateSun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyActor_UpdateSun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASkyActor_NoRegister()
	{
		return ASkyActor::StaticClass();
	}
	struct Z_Construct_UClass_ASkyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyAtmosphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunDirectionalLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SunDirectionalLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExponentialHeightFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompassComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompassComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoonComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunPositionRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SunPositionRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayLightSavingsTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DayLightSavingsTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTimeTickData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DateTimeTickData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayNightRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DayNightRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoonRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDay_MetaData[];
#endif
		static void NewProp_bIsDay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASkyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkyActor_DoOnBeforeSunrise, "DoOnBeforeSunrise" }, // 3829290341
		{ &Z_Construct_UFunction_ASkyActor_DoOnBeforeSunset, "DoOnBeforeSunset" }, // 1490110
		{ &Z_Construct_UFunction_ASkyActor_DoOnDay, "DoOnDay" }, // 625476914
		{ &Z_Construct_UFunction_ASkyActor_DoOnNight, "DoOnNight" }, // 483957783
		{ &Z_Construct_UFunction_ASkyActor_DoOnSunrise, "DoOnSunrise" }, // 953260973
		{ &Z_Construct_UFunction_ASkyActor_DoOnSunset, "DoOnSunset" }, // 718742396
		{ &Z_Construct_UFunction_ASkyActor_GetCurrentRotator, "GetCurrentRotator" }, // 2367590793
		{ &Z_Construct_UFunction_ASkyActor_GetHMSFromSolarTime, "GetHMSFromSolarTime" }, // 3796770403
		{ &Z_Construct_UFunction_ASkyActor_GetSunriseTime, "GetSunriseTime" }, // 1518834674
		{ &Z_Construct_UFunction_ASkyActor_GetSunsetTime, "GetSunsetTime" }, // 434738211
		{ &Z_Construct_UFunction_ASkyActor_IsDST, "IsDST" }, // 4111255987
		{ &Z_Construct_UFunction_ASkyActor_SetMoonRules, "SetMoonRules" }, // 2925490237
		{ &Z_Construct_UFunction_ASkyActor_Update, "Update" }, // 191157715
		{ &Z_Construct_UFunction_ASkyActor_UpdateCompass, "UpdateCompass" }, // 87965991
		{ &Z_Construct_UFunction_ASkyActor_UpdateMoon, "UpdateMoon" }, // 2474060418
		{ &Z_Construct_UFunction_ASkyActor_UpdateSky, "UpdateSky" }, // 673916616
		{ &Z_Construct_UFunction_ASkyActor_UpdateSun, "UpdateSun" }, // 3393920291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkyActor.h" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09 Components\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "Scene" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyLight_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Sun\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "SkyLight" },
		{ "ToolTip", "Sun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyLight = { "SkyLight", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, SkyLight), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyAtmosphere_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "SkyAtmosphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyAtmosphere = { "SkyAtmosphere", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, SkyAtmosphere), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyAtmosphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_SunDirectionalLight_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "DirectionalLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_SunDirectionalLight = { "DirectionalLight", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, SunDirectionalLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_SunDirectionalLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_SunDirectionalLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_ExponentialHeightFog_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Exponential Height Fog\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "ExponentialHeightFog" },
		{ "ToolTip", "Exponential Height Fog" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_ExponentialHeightFog = { "ExponentialHeightFog", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, ExponentialHeightFog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_ExponentialHeightFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_ExponentialHeightFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_CompassComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Compass \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "CompassComponent" },
		{ "ToolTip", "Compass" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_CompassComponent = { "CompassComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, CompassComponent), Z_Construct_UClass_UCompassComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_CompassComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_CompassComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Moon\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "OverrideNativeName", "MoonComponent" },
		{ "ToolTip", "Moon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonComponent = { "MoonComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, MoonComponent), Z_Construct_UClass_UMoonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_SunPositionRules_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 Variables\n\x09*///Location\n" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "ToolTip", "Variables\n//Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_SunPositionRules = { "SunPositionRules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, SunPositionRules), Z_Construct_UScriptStruct_FSunPositionRules, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_SunPositionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_SunPositionRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_DayLightSavingsTime_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "Comment", "//Date\n" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "ToolTip", "Date" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_DayLightSavingsTime = { "DayLightSavingsTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, DayLightSavingsTime), Z_Construct_UScriptStruct_FDayLightSavingsTime, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_DayLightSavingsTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_DayLightSavingsTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_DateTimeTickData_MetaData[] = {
		{ "Category", "DateTimeTick" },
		{ "Comment", "//DateTime Tick Data\n" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
		{ "ToolTip", "DateTime Tick Data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_DateTimeTickData = { "DateTimeTickData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, DateTimeTickData), Z_Construct_UClass_UDateTimeTickData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_DateTimeTickData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_DateTimeTickData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_DayNightRules_MetaData[] = {
		{ "Category", "SkyActor" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_DayNightRules = { "DayNightRules", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, DayNightRules), Z_Construct_UScriptStruct_FDayNightCycleRules, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_DayNightRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_DayNightRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonRules_MetaData[] = {
		{ "Category", "SkyActor" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonRules = { "MoonRules", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyActor, MoonRules), Z_Construct_UScriptStruct_FMoonRules, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay_MetaData[] = {
		{ "Category", "SkyActor" },
		{ "ModuleRelativePath", "Public/SkyActor.h" },
	};
#endif
	void Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay_SetBit(void* Obj)
	{
		((ASkyActor*)Obj)->bIsDay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay = { "bIsDay", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASkyActor), &Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_SkyAtmosphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_SunDirectionalLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_ExponentialHeightFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_CompassComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_SunPositionRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_DayLightSavingsTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_DateTimeTickData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_DayNightRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_MoonRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyActor_Statics::NewProp_bIsDay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASkyActor_Statics::ClassParams = {
		&ASkyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASkyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASkyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkyActor, 3943205443);
	template<> ACCURATEDAYNIGHT_API UClass* StaticClass<ASkyActor>()
	{
		return ASkyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkyActor(Z_Construct_UClass_ASkyActor, &ASkyActor::StaticClass, TEXT("/Script/AccurateDayNight"), TEXT("ASkyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
