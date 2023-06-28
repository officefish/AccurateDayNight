// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDayLightSavingsTime;
struct FMoonRules;
struct FQuat;
struct FRotator;
struct FSunPositionRules;
struct FTimespan;
struct FDateTime;
#ifdef ACCURATEDAYNIGHT_SkyActor_generated_h
#error "SkyActor.generated.h already included, missing '#pragma once' in SkyActor.h"
#endif
#define ACCURATEDAYNIGHT_SkyActor_generated_h

#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_SPARSE_DATA
#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoOnDay); \
	DECLARE_FUNCTION(execDoOnSunrise); \
	DECLARE_FUNCTION(execDoOnBeforeSunrise); \
	DECLARE_FUNCTION(execDoOnNight); \
	DECLARE_FUNCTION(execDoOnSunset); \
	DECLARE_FUNCTION(execDoOnBeforeSunset); \
	DECLARE_FUNCTION(execIsDST); \
	DECLARE_FUNCTION(execGetHMSFromSolarTime); \
	DECLARE_FUNCTION(execSetMoonRules); \
	DECLARE_FUNCTION(execUpdateSky); \
	DECLARE_FUNCTION(execUpdateCompass); \
	DECLARE_FUNCTION(execUpdateMoon); \
	DECLARE_FUNCTION(execUpdateSun); \
	DECLARE_FUNCTION(execGetCurrentRotator); \
	DECLARE_FUNCTION(execGetSunriseTime); \
	DECLARE_FUNCTION(execGetSunsetTime); \
	DECLARE_FUNCTION(execUpdate);


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoOnDay); \
	DECLARE_FUNCTION(execDoOnSunrise); \
	DECLARE_FUNCTION(execDoOnBeforeSunrise); \
	DECLARE_FUNCTION(execDoOnNight); \
	DECLARE_FUNCTION(execDoOnSunset); \
	DECLARE_FUNCTION(execDoOnBeforeSunset); \
	DECLARE_FUNCTION(execIsDST); \
	DECLARE_FUNCTION(execGetHMSFromSolarTime); \
	DECLARE_FUNCTION(execSetMoonRules); \
	DECLARE_FUNCTION(execUpdateSky); \
	DECLARE_FUNCTION(execUpdateCompass); \
	DECLARE_FUNCTION(execUpdateMoon); \
	DECLARE_FUNCTION(execUpdateSun); \
	DECLARE_FUNCTION(execGetCurrentRotator); \
	DECLARE_FUNCTION(execGetSunriseTime); \
	DECLARE_FUNCTION(execGetSunsetTime); \
	DECLARE_FUNCTION(execUpdate);


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkyActor(); \
	friend struct Z_Construct_UClass_ASkyActor_Statics; \
public: \
	DECLARE_CLASS(ASkyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDayNight"), NO_API) \
	DECLARE_SERIALIZER(ASkyActor)


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_INCLASS \
private: \
	static void StaticRegisterNativesASkyActor(); \
	friend struct Z_Construct_UClass_ASkyActor_Statics; \
public: \
	DECLARE_CLASS(ASkyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDayNight"), NO_API) \
	DECLARE_SERIALIZER(ASkyActor)


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyActor(ASkyActor&&); \
	NO_API ASkyActor(const ASkyActor&); \
public:


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyActor(ASkyActor&&); \
	NO_API ASkyActor(const ASkyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASkyActor)


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_32_PROLOG
#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_SPARSE_DATA \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_RPC_WRAPPERS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_INCLASS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_SPARSE_DATA \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATEDAYNIGHT_API UClass* StaticClass<class ASkyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
