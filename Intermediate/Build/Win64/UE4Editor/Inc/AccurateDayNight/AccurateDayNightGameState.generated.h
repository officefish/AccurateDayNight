// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
enum class EEGameSpeed : uint8;
enum class EEDayNightSchedule : uint8;
enum class EEDayNightCicle : uint8;
struct FTimespan;
#ifdef ACCURATEDAYNIGHT_AccurateDayNightGameState_generated_h
#error "AccurateDayNightGameState.generated.h already included, missing '#pragma once' in AccurateDayNightGameState.h"
#endif
#define ACCURATEDAYNIGHT_AccurateDayNightGameState_generated_h

#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_53_DELEGATE \
static inline void FNewDayDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewDayDelegate) \
{ \
	NewDayDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_51_DELEGATE \
struct _Script_AccurateDayNight_eventGameStateTickDelegate_Parms \
{ \
	FDateTime TickDateTime; \
}; \
static inline void FGameStateTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameStateTickDelegate, FDateTime TickDateTime) \
{ \
	_Script_AccurateDayNight_eventGameStateTickDelegate_Parms Parms; \
	Parms.TickDateTime=TickDateTime; \
	GameStateTickDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_50_DELEGATE \
struct _Script_AccurateDayNight_eventGameSpeedDelegate_Parms \
{ \
	EEGameSpeed EGameSpeed; \
}; \
static inline void FGameSpeedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameSpeedDelegate, EEGameSpeed EGameSpeed) \
{ \
	_Script_AccurateDayNight_eventGameSpeedDelegate_Parms Parms; \
	Parms.EGameSpeed=EGameSpeed; \
	GameSpeedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_49_DELEGATE \
struct _Script_AccurateDayNight_eventDayNightScheduleDelegate_Parms \
{ \
	EEDayNightSchedule EDayNightSchedule; \
}; \
static inline void FDayNightScheduleDelegate_DelegateWrapper(const FMulticastScriptDelegate& DayNightScheduleDelegate, EEDayNightSchedule EDayNightSchedule) \
{ \
	_Script_AccurateDayNight_eventDayNightScheduleDelegate_Parms Parms; \
	Parms.EDayNightSchedule=EDayNightSchedule; \
	DayNightScheduleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_48_DELEGATE \
struct _Script_AccurateDayNight_eventDayNightCicleDelegate_Parms \
{ \
	EEDayNightCicle EDayNightCycle; \
}; \
static inline void FDayNightCicleDelegate_DelegateWrapper(const FMulticastScriptDelegate& DayNightCicleDelegate, EEDayNightCicle EDayNightCycle) \
{ \
	_Script_AccurateDayNight_eventDayNightCicleDelegate_Parms Parms; \
	Parms.EDayNightCycle=EDayNightCycle; \
	DayNightCicleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_SPARSE_DATA
#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetGameStartDateTime); \
	DECLARE_FUNCTION(execGetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameSpeed); \
	DECLARE_FUNCTION(execGetGameSolarTime); \
	DECLARE_FUNCTION(execGetGameCurrentDaySeconds); \
	DECLARE_FUNCTION(execGameSpeedDown); \
	DECLARE_FUNCTION(execGameSpeedUp);


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetGameStartDateTime); \
	DECLARE_FUNCTION(execGetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameSpeed); \
	DECLARE_FUNCTION(execGetGameSolarTime); \
	DECLARE_FUNCTION(execGetGameCurrentDaySeconds); \
	DECLARE_FUNCTION(execGameSpeedDown); \
	DECLARE_FUNCTION(execGameSpeedUp);


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAccurateDayNightGameState(); \
	friend struct Z_Construct_UClass_AAccurateDayNightGameState_Statics; \
public: \
	DECLARE_CLASS(AAccurateDayNightGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDayNight"), NO_API) \
	DECLARE_SERIALIZER(AAccurateDayNightGameState)


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_INCLASS \
private: \
	static void StaticRegisterNativesAAccurateDayNightGameState(); \
	friend struct Z_Construct_UClass_AAccurateDayNightGameState_Statics; \
public: \
	DECLARE_CLASS(AAccurateDayNightGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDayNight"), NO_API) \
	DECLARE_SERIALIZER(AAccurateDayNightGameState)


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAccurateDayNightGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAccurateDayNightGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAccurateDayNightGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAccurateDayNightGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAccurateDayNightGameState(AAccurateDayNightGameState&&); \
	NO_API AAccurateDayNightGameState(const AAccurateDayNightGameState&); \
public:


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAccurateDayNightGameState(AAccurateDayNightGameState&&); \
	NO_API AAccurateDayNightGameState(const AAccurateDayNightGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAccurateDayNightGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAccurateDayNightGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAccurateDayNightGameState)


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_58_PROLOG
#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_SPARSE_DATA \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_RPC_WRAPPERS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_INCLASS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_SPARSE_DATA \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATEDAYNIGHT_API UClass* StaticClass<class AAccurateDayNightGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_AccurateDayNightGameState_h


#define FOREACH_ENUM_EEDAYNIGHTSCHEDULE(op) \
	op(EEDayNightSchedule::Night) \
	op(EEDayNightSchedule::LateNight) \
	op(EEDayNightSchedule::Morning) \
	op(EEDayNightSchedule::LateMorning) \
	op(EEDayNightSchedule::Day) \
	op(EEDayNightSchedule::LateDay) \
	op(EEDayNightSchedule::Evening) \
	op(EEDayNightSchedule::LateEvening) 

enum class EEDayNightSchedule : uint8;
template<> ACCURATEDAYNIGHT_API UEnum* StaticEnum<EEDayNightSchedule>();

#define FOREACH_ENUM_EEDAYNIGHTCICLE(op) \
	op(EEDayNightCicle::BeforeSunsetStart) \
	op(EEDayNightCicle::SunsetStart) \
	op(EEDayNightCicle::NightStart) \
	op(EEDayNightCicle::BeforeSunriseStart) \
	op(EEDayNightCicle::SunriseStart) \
	op(EEDayNightCicle::DayStart) 

enum class EEDayNightCicle : uint8;
template<> ACCURATEDAYNIGHT_API UEnum* StaticEnum<EEDayNightCicle>();

#define FOREACH_ENUM_EEGAMESPEED(op) \
	op(EEGameSpeed::Pause) \
	op(EEGameSpeed::SlowMotion) \
	op(EEGameSpeed::RealTime) \
	op(EEGameSpeed::GameTime) \
	op(EEGameSpeed::GameTimeX2) \
	op(EEGameSpeed::GameTimeX5) \
	op(EEGameSpeed::GameTimeX50) \
	op(EEGameSpeed::GameTimeX500) 

enum class EEGameSpeed : uint8;
template<> ACCURATEDAYNIGHT_API UEnum* StaticEnum<EEGameSpeed>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
