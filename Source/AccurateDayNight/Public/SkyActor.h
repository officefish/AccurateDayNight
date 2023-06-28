// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SceneComponent.h"
#include "Components/LightComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
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

	UFUNCTION(BlueprintCallable)
		void GetHMSFromSolarTime(float SolarTime_loc, int32& Hour, int32& Minute, int32& Second);

	UFUNCTION(BlueprintPure)
		bool IsDST(FDayLightSavingsTime DSTStruct);

	//DayNight Cycle Change

	UFUNCTION(BlueprintCallable)
		void DoOnBeforeSunset();

	UFUNCTION(BlueprintCallable)
		void DoOnSunset();

	UFUNCTION(BlueprintCallable)
		void DoOnNight();

	UFUNCTION(BlueprintCallable)
		void DoOnBeforeSunrise();

	UFUNCTION(BlueprintCallable)
		void DoOnSunrise();

	UFUNCTION(BlueprintCallable)
		void DoOnDay();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


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

	// Exponential Height Fog
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "ExponentialHeightFog"))
		UExponentialHeightFogComponent* ExponentialHeightFog;

	//Compass 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "CompassComponent"))
		UCompassComponent* CompassComponent;

	//Moon
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Category = "Default", OverrideNativeName = "MoonComponent"))
		UMoonComponent* MoonComponent;

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

protected:

	const float ALBEDO_COLOR = 0.603827;

private:

	void SetupDefaults();
	void ConstructTimeLines();
	void ConstructSubObjects();
	void SetupSubObjects();

};
