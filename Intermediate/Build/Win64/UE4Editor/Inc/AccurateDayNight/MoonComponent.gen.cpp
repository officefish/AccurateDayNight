// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDayNight/Public/MoonComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonComponent() {}
// Cross Module References
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UMoonComponent_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UMoonComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AccurateDayNight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UMoonComponent::StaticRegisterNativesUMoonComponent()
	{
	}
	UClass* Z_Construct_UClass_UMoonComponent_NoRegister()
	{
		return UMoonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NightSkyMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NightSkyMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoonLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoonLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkySphereMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkySphereMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MoonComponent.h" },
		{ "ModuleRelativePath", "Public/MoonComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoonComponent_Statics::NewProp_NightSkyMaterial_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09\x09""Components\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoonComponent.h" },
		{ "OverrideNativeName", "NightSkyMaterial" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoonComponent_Statics::NewProp_NightSkyMaterial = { "NightSkyMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoonComponent, NightSkyMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoonComponent_Statics::NewProp_NightSkyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoonComponent_Statics::NewProp_NightSkyMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoonComponent_Statics::NewProp_MoonLight_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoonComponent.h" },
		{ "OverrideNativeName", "MoonLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoonComponent_Statics::NewProp_MoonLight = { "MoonLight", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoonComponent, MoonLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoonComponent_Statics::NewProp_MoonLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoonComponent_Statics::NewProp_MoonLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoonComponent_Statics::NewProp_SkySphereMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoonComponent.h" },
		{ "OverrideNativeName", "SkySphereMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoonComponent_Statics::NewProp_SkySphereMesh = { "SkySphereMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoonComponent, SkySphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoonComponent_Statics::NewProp_SkySphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoonComponent_Statics::NewProp_SkySphereMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoonComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoonComponent_Statics::NewProp_NightSkyMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoonComponent_Statics::NewProp_MoonLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoonComponent_Statics::NewProp_SkySphereMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoonComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoonComponent_Statics::ClassParams = {
		&UMoonComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoonComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoonComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMoonComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoonComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoonComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoonComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoonComponent, 2962196976);
	template<> ACCURATEDAYNIGHT_API UClass* StaticClass<UMoonComponent>()
	{
		return UMoonComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoonComponent(Z_Construct_UClass_UMoonComponent, &UMoonComponent::StaticClass, TEXT("/Script/AccurateDayNight"), TEXT("UMoonComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoonComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
