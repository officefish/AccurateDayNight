// Fill out your copyright notice in the Description page of Project Settings.


#include "SkyActor.h"

// Sets default values
ASkyActor::ASkyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup default values for class fields
	SetupDefaults();

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
	MoonMake.MoonLightStrength = 0.01f;
	MoonMake.MoonDistance = 0.0f;
	MoonMake.MoonSize = 0.005f;
	MoonMake.MaxStarsBrightness = 3.5f;

	MoonRules = MoonMake;

	/* DayNightCycleRules */
	FDayNightCycleRules Make;
	FDateTime gw_sst = FDateTime(2009, 1, 20, 18, 0, 0, 0);
	FTimespan rwtigt = FTimespan(0, 1, 0);
	Make.RealWorld_StaticStartTime = FDateTime::UtcNow();
	Make.GameWorld_StaticStartTime = gw_sst;
	Make.RealWorldTimeInGameTime = rwtigt;
	DayNightRules = Make;

	AnimationBeginDateTime = FDateTime{};
	AnimationTotalSeconds = 1;
	
	//BeginDay = 0;

	//tickfirst_timer_on = false;

	//Enable replication for this class
	//bReplicates = true;


}

void ASkyActor::ConstructSubObjects()
{
	DateTimeTickData = CreateDefaultSubobject<UDateTimeTickData>(TEXT("DateTimeTick"));

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	
	SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
	SunDirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLight"));
	SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
	
	CompassComponent = CreateDefaultSubobject<UCompassComponent>(TEXT("CompassComponent"));

	MoonComponent = CreateDefaultSubobject<UMoonComponent>(TEXT("MoonComponent"));

	RootComponent = Scene;
}

void ASkyActor::SetupSubObjects()
{
	Scene->CreationMethod = EComponentCreationMethod::Native;
	Scene->Mobility = EComponentMobility::Type::Static;

	ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ExponentialHeightFog"));

	FLinearColor albedofogcolor = FLinearColor(ALBEDO_COLOR, ALBEDO_COLOR, ALBEDO_COLOR, 1.0f);

	ExponentialHeightFog->FogDensity = 0.0005f;
	ExponentialHeightFog->FogMaxOpacity = 0.3f;
	ExponentialHeightFog->SetVolumetricFog(true);
	ExponentialHeightFog->VolumetricFogScatteringDistribution = 0.9f;
	ExponentialHeightFog->VolumetricFogAlbedo = albedofogcolor.ToFColor(false);
	ExponentialHeightFog->VolumetricFogExtinctionScale = 15.0f;

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

void ASkyActor::BeginPlay()
{
	Super::BeginPlay();

	GameState = ::IsValid(GetWorld()) ?
		GetWorld()->GetGameState<AAccurateDayNightGameState>()
		: nullptr;

	if (::IsValid(GameState)) {
		GameState->OnGameStateTickDelegate.AddDynamic(this, &ASkyActor::OnGameStateTick);
		GameState->OnDayNightCycleChangeDelegate.AddDynamic(this, &ASkyActor::OnDayNightCycleChange);
	
		ECurrentDayNightCicle = GameState->EDayNightCycle;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("GameState is not detected"));
	}


}

void ASkyActor::OnDayNightCycleChange(TEnumAsByte<EEDayNightCicle> EDayNightCicle)
{
	UE_LOG(LogTemp, Warning, TEXT("OnDayNightCicleChange"));

	ECurrentDayNightCicle = EDayNightCicle;
	if (::IsValid(GameState)) {
		AnimationTotalSeconds = GameState->DayNightTransitionTime.GetTotalSeconds();
		AnimationBeginDateTime = GameState->FullDateTime;		
	}

}

void ASkyActor::OnGameStateTick(FDateTime TickDateTime)
{
	Update(TickDateTime);
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
		FRotator MoonRotator;
		MoonRotator.Roll = MainRotator.Roll;
		MoonRotator.Yaw = MainRotator.Yaw;
		MoonRotator.Pitch = MainRotator.Pitch - 180;
		UpdateMoon(MoonRotator);
	}
	
	UpdateCompass(FRotator(0, SunPositionRules.NorthOffset + 90, 0).Quaternion());

	SmoothUpdate();
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


void ASkyActor::SmoothUpdate()
{

	float Modifier = GetSmoothModifier();
	float InverseModifier = 1 - Modifier;
	
	switch (ECurrentDayNightCicle)
	{
	case EEDayNightCicle::BeforeSunsetStart:
	{
		OnBeforeSunset(Modifier, InverseModifier);
		break;
	}
	case EEDayNightCicle::SunsetStart:
	{
		OnSunset(Modifier, InverseModifier);
		break;
	}
	case EEDayNightCicle::NightStart:
	{
		OnNight(Modifier, InverseModifier);
		break;
	}
	case EEDayNightCicle::BeforeSunriseStart:
	{
		OnBeforeSunrise(Modifier, InverseModifier);
		break;
	}
	case EEDayNightCicle::SunriseStart:
	{
		OnSunrise(Modifier, InverseModifier);
		break;
	}
	case EEDayNightCicle::DayStart:
	{
		OnDay(Modifier, InverseModifier);
		break;
	}
	}
}

float ASkyActor::GetSmoothModifier() const
{
	FTimespan TickTimespan = DateTimeTickData->TickDateTime - AnimationBeginDateTime;

	float TickSeconds = TickTimespan.GetTotalSeconds();
	float Modifier = TickSeconds / AnimationTotalSeconds;

	return FMath::Clamp(Modifier, 0.0f, 1.0f);
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

// DayNight Cycle Change Animations
void ASkyActor::OnBeforeSunset(float Modifier, float InverseModifier)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnBeforeSunset"));

	bIsDay = true;

	ShowFog();
	SetFogAlpha(Modifier * 0.5);

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetStarsBrightness(Modifier);
		MoonComponent->SetMoonIntensity(MIN_VALUE);
		MoonComponent->SetMoonEnable(MIN_VALUE);
	}

	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(10.0f);
	}
}

void ASkyActor::OnSunset(float Modifier, float InverseModifier)
{

	UE_LOG(LogTemp, Warning, TEXT("OnSunset"));
	bIsDay = false;

	ShowFog();
	SetFogAlpha(Modifier * 0.5);

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetStarsBrightness(MAX_VALUE);
		MoonComponent->SetMoonIntensity(MIN_VALUE);
		MoonComponent->SetMoonEnable(MIN_VALUE);		
	}

	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(10.0f);
	}
}

void ASkyActor::OnNight(float Modifier, float InverseModifier)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnNight"));
	bIsDay = false;
	
	ShowFog();
	SetFogAlpha(Modifier * 0.5 + 0.5);

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetStarsBrightness(MAX_VALUE);
		MoonComponent->SetMoonIntensity(Modifier);
		MoonComponent->SetMoonEnable(Modifier);
		
	}

	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(InverseModifier * 10.0f);
	}
}

void ASkyActor::OnBeforeSunrise(float Modifier, float InverseModifier)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnBeforeSunrise"));

	bIsDay = false;

	SetFogAlpha(InverseModifier * 0.5f + 0.5f);
	ShowFog();

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetStarsBrightness(InverseModifier);
		MoonComponent->SetMoonIntensity(InverseModifier);
		MoonComponent->SetMoonEnable(MIN_VALUE);
	}

	if (::IsValid(SunDirectionalLight))
	{
		float SunIntensity = Modifier * 10.0f;
		SunDirectionalLight->SetIntensity(SunIntensity);
	}

}

void ASkyActor::OnSunrise(float Modifier, float InverseModifier)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnSunrise"));

	bIsDay = true;

	SetFogAlpha(0.5f * InverseModifier);
	ShowFog();

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetStarsBrightness(MIN_VALUE);
		MoonComponent->SetMoonIntensity(MIN_VALUE);
		MoonComponent->SetMoonEnable(MIN_VALUE);
	}

	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(10.0f);
	}
}

void ASkyActor::OnDay(float Modifier, float InverseModifier)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnDay"));

	bIsDay = true;

	SetFogAlpha(MIN_VALUE);
	HideFog();

	if (::IsValid(MoonComponent))
	{
		MoonComponent->SetStarsBrightness(MIN_VALUE);
		MoonComponent->SetMoonIntensity(MIN_VALUE);
		MoonComponent->SetMoonEnable(MIN_VALUE);
	}

	if (::IsValid(SunDirectionalLight))
	{
		SunDirectionalLight->SetIntensity(10.0f);
	}
}


void ASkyActor::ShowFog()
{
	if (::IsValid(ExponentialHeightFog))
	{		
		ExponentialHeightFog->SetHiddenInGame(false);
	}
}

void ASkyActor::HideFog()
{
	if (::IsValid(ExponentialHeightFog))
	{
		ExponentialHeightFog->SetHiddenInGame(true);
	}
}

void ASkyActor::SetFogAlpha(float FogAlpha) {

	if (::IsValid(ExponentialHeightFog))
	{
		ExponentialHeightFog->SetFogDensity(0.0005f * FogAlpha);
		ExponentialHeightFog->SetFogMaxOpacity(0.2f * FogAlpha);
	}
}
