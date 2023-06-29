// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SceneComponent.h"
#include "Components/LightComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/StaticMeshComponent.h"

#include "Components/SkyAtmosphereComponent.h"
#include "Components/TimelineComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstanceConstant.h"
#include "UObject/ConstructorHelpers.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/KismetSystemLibrary.h"

#include "MoonComponent.h"
#include "CompassComponent.h"
#include "DayNightCycleRules.h"

#include "TimerManager.h"

#include "AccurateDayNightGameState.h"

#include "SunPosition.h"

#include "SkyActor.generated.h"


UCLASS()
class ACCURATEDAYNIGHT_API ASkyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASkyActor();

public:

	/**
	 Functions
	*/

	// GameState Listeners
	UFUNCTION()
		void OnDayNightCycleChange(TEnumAsByte<EEDayNightCicle> EDayNightCicle);

	UFUNCTION()
		void OnGameStateTick(FDateTime TickDateTime);

	//
	UFUNCTION(BlueprintCallable)
		void Update(FDateTime CurrentDateTime);

	UFUNCTION(BlueprintPure)
		FTimespan GetSunsetTime();
	
	UFUNCTION(BlueprintPure)
		FTimespan GetSunriseTime();

	UFUNCTION(BlueprintCallable)
		void GetCurrentRotator(FRotator& CurrentRotator, FSunPositionRules& Rules);

	UFUNCTION(BlueprintCallable)
		void UpdateSun(const FRotator& SunRotator);

	UFUNCTION(BlueprintCallable)
		void UpdateMoon(const FRotator& MoonRotator);

	UFUNCTION(BlueprintCallable)
		void UpdateCompass(const FQuat& CompassQuaternion);

	UFUNCTION(BlueprintCallable)
		void UpdateSky();

	UFUNCTION(BlueprintCallable)
		void SetMoonRules(FMoonRules MoonRulesInput);

	UFUNCTION(BlueprintPure)
		bool IsDST(FDayLightSavingsTime DSTStruct);

	//DayNight Cycle Change

	UFUNCTION(BlueprintCallable)
		void OnBeforeSunset(float Modifier, float InverseModifier);

	UFUNCTION(BlueprintCallable)
		void OnSunset(float Modifier, float InverseModifier);

	UFUNCTION(BlueprintCallable)
		void OnNight(float Modifier, float InverseModifier);

	UFUNCTION(BlueprintCallable)
		void OnBeforeSunrise(float Modifier, float InverseModifier);

	UFUNCTION(BlueprintCallable)
		void OnSunrise(float Modifier, float InverseModifier);

	UFUNCTION(BlueprintCallable)
		void OnDay(float Modifier, float InverseModifier);

public:
	virtual void BeginPlay() override;

public:

	/**
	 Components
	*/

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "Default", OverrideNativeName = "Scene"))
		USceneComponent* Scene;

	// Sun
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "SkyLight"))
		USkyLightComponent* SkyLight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "SkyAtmosphere"))
		USkyAtmosphereComponent* SkyAtmosphere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "DirectionalLight"))
		UDirectionalLightComponent* SunDirectionalLight;

	
	//Compass 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "CompassComponent"))
		UCompassComponent* CompassComponent;

	//Moon
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "MoonComponent"))
		UMoonComponent* MoonComponent;

	// Exponential Height Fog
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "ExponentialHeightFog"))
		UExponentialHeightFogComponent* ExponentialHeightFog;

public:

	/**
	 Variables
	*/

	//Location
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "Location"))
		FSunPositionRules SunPositionRules;

	//Date
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		FDayLightSavingsTime DayLightSavingsTime;

	//DateTime Tick Data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "DateTimeTick"))
		UDateTimeTickData* DateTimeTickData;

	UPROPERTY(BlueprintReadWrite)
		FDayNightCycleRules DayNightRules;

	UPROPERTY(BlueprintReadWrite)
		FMoonRules MoonRules;

	UPROPERTY(BlueprintReadOnly)
		bool bIsDay;

private:

	void SetupDefaults();
	void ConstructSubObjects();
	void SetupSubObjects();

	void SmoothUpdate();
	float GetSmoothModifier() const;

	void SetFogAlpha(float FogAlpha);

	void ShowFog();
	void HideFog();


protected:
	const float ALBEDO_COLOR = 0.603827;
	const float MAX_VALUE = 1.0f;
	const float MIN_VALUE = 0.0f;

private:

	AAccurateDayNightGameState* GameState;

	TEnumAsByte<EEDayNightCicle> ECurrentDayNightCicle;

	//FDateTime TickDateTime;
	FDateTime AnimationBeginDateTime;
	float AnimationTotalSeconds;

	float FogDensity;
	float FogMaxOpacity;

};
