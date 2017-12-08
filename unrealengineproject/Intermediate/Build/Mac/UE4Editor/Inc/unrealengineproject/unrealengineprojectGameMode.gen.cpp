// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "unrealengineprojectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrealengineprojectGameMode() {}
// Cross Module References
	UNREALENGINEPROJECT_API UClass* Z_Construct_UClass_AunrealengineprojectGameMode_NoRegister();
	UNREALENGINEPROJECT_API UClass* Z_Construct_UClass_AunrealengineprojectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_unrealengineproject();
// End Cross Module References
	void AunrealengineprojectGameMode::StaticRegisterNativesAunrealengineprojectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AunrealengineprojectGameMode_NoRegister()
	{
		return AunrealengineprojectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AunrealengineprojectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_unrealengineproject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "unrealengineprojectGameMode.h" },
				{ "ModuleRelativePath", "unrealengineprojectGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AunrealengineprojectGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AunrealengineprojectGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AunrealengineprojectGameMode, 4029007321);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AunrealengineprojectGameMode(Z_Construct_UClass_AunrealengineprojectGameMode, &AunrealengineprojectGameMode::StaticClass, TEXT("/Script/unrealengineproject"), TEXT("AunrealengineprojectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AunrealengineprojectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
