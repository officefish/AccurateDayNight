// Fill out your copyright notice in the Description page of Project Settings.


#include "SkyActor.h"

// Sets default values
ASkyActor::ASkyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	// Setup default values for class fields
	SetupDefaults();

	// Construct Timelines
	ConstructTimeLines();

	// Construct Subobjects
	ConstructSubObjects();

	// Setup Subobjects
	SetupSubObjects();

}


void ASkyActor::SetupDefaults()
{
	//UpdateSkySpamPrevention = true;

	//SunPositionRules Config
	FSunPositionData SunPositionData;
	SunPositionData.Elevation = 0.0f;
	SunPositionData.CorrectedElevation = 0.0f;
	SunPositionData.Azimuth = 0.0f;

	FSunPositionRules MakeSP_Rules;
	MakeSP_Rules.NorthOffset = 0.0f;
	MakeSP_Rules.Latitude = 45.0f;
	MakeSP_Rules.Longitude = -73.0f;
	MakeSP_Rules.TimeZone = -5.0f;
	MakeSP_Rules.Data = SunPositionData;

	SunPositionRules = MakeSP_Rules;
	
	// DayLightSavingsTime Config
	FDayLightSavingsTime MakeDSTS;

	MakeDSTS.bEnable = true;
	MakeDSTS.StartMonth = 3;
	MakeDSTS.StartDay = 10;
	MakeDSTS.EndMonth = 11;
	MakeDSTS.EndDay = 3;
	MakeDSTS.SwitchHours = 2;

	DayLightSavingsTime = MakeDSTS;

	/* Moon rules */
	FMoonRules MoonMake;
	MoonMake.Moon = true;
	MoonMake.MoonEnable = 1.0f;
	MoonMake.MoonLightStrength = 0.1f;
	MoonMake.MoonDistance = 0.0f;
	MoonMake.MoonSize = 0.005f;
	MoonRules = MoonMake;

	/* DayNightCycleRules */
	FDayNightCycleRules Make;
	FDateTime gw_sst = FDateTime(2009, 1, 20, 18, 0, 0, 0);
	FTimespan rwtigt = FTimespan(0, 1, 0);
	Make.RealWorld_StaticStartTime = FDateTime::UtcNow();
	Make.GameWorld_StaticStartTime = gw_sst;
	Make.RealWorldTimeInGameTime = rwtigt;
	DayNightRules = Make;

	//MaxStarsBrightness = 1.5f;
	//BeginDay = 0;

	//tickfirst_timer_on = false;

	//Enable replication for this class
	//bReplicates = true;


}

void ASkyActor::ConstructTimeLines()
{
	//Timelines
	/*const ConstructorHelpers::FObjectFinder<UCurveFloat> Curve_StarsOn(TEXT("CurveFloat'/Game/StarsOnCurve.StarsOnCurve'"));
	StarsOnTimeline = FTimeline{};

	FOnTimelineFloat progressFunction_one{};
	progressFunction_one.BindUFunction(this, "StarsOnHelper");
	StarsOnTimeline.AddInterpFloat(Curve_StarsOn.Object, progressFunction_one, FName{ TEXT("EFFECTFADE") });

	const ConstructorHelpers::FObjectFinder<UCurveFloat> Curve_StarsOff(TEXT("CurveFloat'/Game/StarsOffCurve.StarsOffCurve'"));
	StarsOffTimeline = FTimeline{};

	FOnTimelineFloat progressFunction_two{};
	progressFunction_two.BindUFunction(this, "StarsOffHelper");
	StarsOffTimeline.AddInterpFloat(Curve_StarsOff.Object, progressFunction_two, FName{ TEXT("EFFECTFADE") });*/
}

void ASkyActor::ConstructSubObjects()
{
	DateTimeTickData = CreateDefaultSubobject<UDateTimeTickData>(TEXT("DateTimeTick"));

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	
	SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
	SunDirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLight"));
	SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
	
	ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ExponentialHeightFog"));

	CompassComponent = CreateDefaultSubobject<UCompassComponent>(TEXT("CompassComponent"));

	MoonComponent = CreateDefaultSubobject<UMoonComponent>(TEXT("MoonComponent"));

	RootComponent = Scene;
}

void ASkyActor::SetupSubObjects()
{
	Scene->CreationMethod = EComponentCreationMethod::Native;
	Scene->Mobility = EComponentMobility::Type::Static;

	//Exponential Height fog / Only in Editor mode
	FLinearColor albedofogcolor = FLinearColor(ALBEDO_COLOR, ALBEDO_COLOR, ALBEDO_COLOR, 1.0f);

	ExponentialHeightFog->FogDensity = 0.005f;
	ExponentialHeightFog->SetVolumetricFog(true);
	ExponentialHeightFog->VolumetricFogScatteringDistribution = 0.9f;
	ExponentialHeightFog->VolumetricFogAlbedo = albedofogcolor.ToFColor(false);
	ExponentialHeightFog->VolumetricFogExtinctionScale = 15.0f;
	ExponentialHeightFog->SetHiddenInGame(true);

	//Skylight
	SkyLight->SetMobility(EComponentMobility::Movable);
	SkyLight->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	SkyLight->SourceType = ESkyLightSourceType::SLS_CapturedScene;
	SkyLight->SamplesPerPixel = 2;

	//DirectionalLight
	SunDirectionalLight->SetMobility(EComponentMobility::Movable);
	SunDirectionalLight->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	SunDirectionalLight->Intensity = 10;
	SunDirectionalLight->ULightComponent::SetIntensity(10.000000);
	//Comment this one in UE5 Preview2
	SunDirectionalLight->bUsedAsAtmosphereSunLight = true;
	//Uncomment this one in UE5 Preview2
	//DirectionalLight->bAtmosphereSunLight = true;
	SunDirectionalLight->LightSourceAngle = 0.500000f;
	SunDirectionalLight->DynamicShadowCascades = 5;
	SunDirectionalLight->CascadeDistributionExponent = 1.400000f;

	//SkyAtmosphere
	SkyAtmosphere->SetMobility(EComponentMobility::Movable);
	SkyAtmosphere->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	//CompassMesh
	CompassComponent->SetMobility(EComponentMobility::Movable);
	CompassComponent->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	//Moon
	MoonComponent->SetMobility(EComponentMobility::Movable);
	MoonComponent->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
	SetMoonRules(MoonRules);
}




// Called when the game starts or when spawned
void ASkyActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASkyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASkyActor::Update(FDateTime CurrentDateTime)
{
	DateTimeTickData->TickDateTime = CurrentDateTime;

	//DateTimeTickData.ValidateHash();

	FRotator MainRotator;
	GetCurrentRotator(MainRotator, SunPositionRules);

	if (bIsDay) {
		UpdateSun(MainRotator);
		UpdateSky();
	} else {
		FRotator MoonRotator = MainRotator;
		MoonRotator.Pitch = MainRotator.Pitch - 180;
		UpdateMoon(MainRotator);
	}
	
	UpdateCompass(FRotator(0, SunPositionRules.NorthOffset + 90, 0).Quaternion());
	
}

void ASkyActor::GetCurrentRotator(FRotator& CurrentRotator, FSunPositionRules& Rules)
{
	bool bIsDST = false;
	FSunPositionData SunPositionDt;

	bIsDST = IsDST(DayLightSavingsTime);

	USunPositionFunctionLibrary::GetSunPosition(
		Rules.Latitude, Rules.Longitude, Rules.TimeZone,
		bIsDST,
		DateTimeTickData->GetYear(), DateTimeTickData->GetMonth(), DateTimeTickData->GetDay(),
		DateTimeTickData->GetHour(), DateTimeTickData->GetMinute(), DateTimeTickData->GetSecond(),
		SunPositionDt);

	Rules.Data.Elevation = SunPositionDt.Elevation;
	Rules.Data.CorrectedElevation = SunPositionDt.CorrectedElevation;
	Rules.Data.Azimuth = SunPositionDt.Azimuth;
	Rules.Data.SunriseTime = SunPositionDt.SunriseTime;
	Rules.Data.SunsetTime = SunPositionDt.SunsetTime;
	Rules.Data.SolarNoon = SunPositionDt.SolarNoon;

	CurrentRotator = FRotator(Rules.Data.CorrectedElevation, Rules.Data.Azimuth + Rules.NorthOffset, 0.0f);
}

void ASkyActor::UpdateSky()
{
	if (::IsValid(SkyLight))
	{
		SkyLight->USkyLightComponent::RecaptureSky();
	}
}


void ASkyActor::UpdateSun(const FRotator& SunRotator)
{
	if (::IsValid(SunDirectionalLight) &&
		SunDirectionalLight->Mobility.GetValue() == EComponentMobility::Movable
		)
	{
		SunDirectionalLight->SetWorldRotation(SunRotator);
	}
}


void ASkyActor::UpdateMoon(const FRotator& MoonRotator)
{
	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetMoonRotation(MoonRotator);
		MoonComponent->MoveMoon();
	}
}

void ASkyActor::UpdateCompass(const FQuat& CompassQuaternion)
{
	if (::IsValid(CompassComponent))
	{
		CompassComponent->SetMeshRotation(CompassQuaternion);
	}
}

void ASkyActor::SetMoonRules(FMoonRules MoonRulesInput) {
	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetMoonRules(MoonRulesInput);
	}
}

FTimespan ASkyActor::GetSunsetTime()
{
	return SunPositionRules.Data.SunsetTime;
	
}

FTimespan ASkyActor::GetSunriseTime()
{
	return SunPositionRules.Data.SunriseTime;
}



void ASkyActor::GetHMSFromSolarTime(float SolarTime_loc, int32& Hour, int32& Minute, int32& Second)
{
	Hour = FMath::TruncToInt(SolarTime_loc) % 24;
	Minute = FMath::TruncToInt((60 * (SolarTime_loc - (float)Hour))) % 60;
	Second = FMath::TruncToInt((3600 * ((SolarTime_loc - Hour) - (Minute / 60))) + 0.5f) % 60;
}

bool ASkyActor::IsDST(FDayLightSavingsTime DSTStruct)
{
	
	FDateTime Time_A = DateTimeTickData->TickDateTime;
	FDateTime Time_B = FDateTime(DateTimeTickData->GetYear(), DSTStruct.StartMonth, DSTStruct.StartDay, DSTStruct.SwitchHours, 0, 0, 0);
	FDateTime Time_C = FDateTime(DateTimeTickData->GetYear(), DSTStruct.EndMonth, DSTStruct.EndMonth, DSTStruct.SwitchHours, 0, 0, 0);

	if (Time_A >= Time_B && Time_A <= Time_C && DSTStruct.bEnable)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// DayNight Cycle Change

void ASkyActor::DoOnBeforeSunset()
{
	UE_LOG(LogTemp, Warning, TEXT("DoOnBeforeSunset"));

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetMoonIntensity(MoonRules.MoonLightStrength);
		MoonComponent->SetMoonEnable(1.0f);
	}

	ExponentialHeightFog->SetHiddenInGame(false);
}

void ASkyActor::DoOnSunset()
{
	UE_LOG(LogTemp, Warning, TEXT("DoOnSunset"));
	
}

void ASkyActor::DoOnNight()
{
	UE_LOG(LogTemp, Warning, TEXT("DoOnNight"));

	bIsDay = false;
	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(0.0f);
	}
	
}

void ASkyActor::DoOnBeforeSunrise()
{
	UE_LOG(LogTemp, Warning, TEXT("DoOnBeforeSunrise"));
	
	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(10.0f);
	}
		
}

void ASkyActor::DoOnSunrise()
{
	UE_LOG(LogTemp, Warning, TEXT("DoOnSunrise"));
}

void ASkyActor::DoOnDay()
{
	UE_LOG(LogTemp, Warning, TEXT("DoOnDay"));
	bIsDay = true;

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetMoonIntensity(0.0f);
		MoonComponent->SetMoonEnable(0.0f);
	}

	ExponentialHeightFog->SetHiddenInGame(true);
}

