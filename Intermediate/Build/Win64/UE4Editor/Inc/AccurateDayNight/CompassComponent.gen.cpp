// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDayNight/Public/CompassComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompassComponent() {}
// Cross Module References
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UCompassComponent_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_UCompassComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AccurateDayNight();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UCompassComponent::StaticRegisterNativesUCompassComponent()
	{
	}
	UClass* Z_Construct_UClass_UCompassComponent_NoRegister()
	{
		return UCompassComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCompassComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompassMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompassMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompassComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompassComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CompassComponent.h" },
		{ "ModuleRelativePath", "Public/CompassComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompassComponent_Statics::NewProp_CompassMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "Comment", "/* Components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompassComponent.h" },
		{ "OverrideNativeName", "CompassMesh" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompassComponent_Statics::NewProp_CompassMesh = { "CompassMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompassComponent, CompassMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompassComponent_Statics::NewProp_CompassMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompassComponent_Statics::NewProp_CompassMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompassComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompassComponent_Statics::NewProp_CompassMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompassComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompassComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompassComponent_Statics::ClassParams = {
		&UCompassComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompassComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompassComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCompassComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompassComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompassComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompassComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompassComponent, 1668414082);
	template<> ACCURATEDAYNIGHT_API UClass* StaticClass<UCompassComponent>()
	{
		return UCompassComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompassComponent(Z_Construct_UClass_UCompassComponent, &UCompassComponent::StaticClass, TEXT("/Script/AccurateDayNight"), TEXT("UCompassComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompassComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
