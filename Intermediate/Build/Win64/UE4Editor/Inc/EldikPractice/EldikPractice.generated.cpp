// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EldikPractice.h"
#include "EldikPractice.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1EldikPractice() {}
	void AEldikPracticeGameModeBase::StaticRegisterNativesAEldikPracticeGameModeBase()
	{
	}
	IMPLEMENT_CLASS(AEldikPracticeGameModeBase, 2700325806);
	void UUserProfile::StaticRegisterNativesUUserProfile()
	{
	}
	IMPLEMENT_CLASS(UUserProfile, 1277904932);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	ELDIKPRACTICE_API class UClass* Z_Construct_UClass_AEldikPracticeGameModeBase_NoRegister();
	ELDIKPRACTICE_API class UClass* Z_Construct_UClass_AEldikPracticeGameModeBase();
	ELDIKPRACTICE_API class UClass* Z_Construct_UClass_UUserProfile_NoRegister();
	ELDIKPRACTICE_API class UClass* Z_Construct_UClass_UUserProfile();
	ELDIKPRACTICE_API class UPackage* Z_Construct_UPackage__Script_EldikPractice();
	UClass* Z_Construct_UClass_AEldikPracticeGameModeBase_NoRegister()
	{
		return AEldikPracticeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEldikPracticeGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_EldikPractice();
			OuterClass = AEldikPracticeGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EldikPracticeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EldikPracticeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEldikPracticeGameModeBase(Z_Construct_UClass_AEldikPracticeGameModeBase, &AEldikPracticeGameModeBase::StaticClass, TEXT("AEldikPracticeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEldikPracticeGameModeBase);
	UClass* Z_Construct_UClass_UUserProfile_NoRegister()
	{
		return UUserProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_UUserProfile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EldikPractice();
			OuterClass = UUserProfile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UserProfile.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UserProfile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserProfile(Z_Construct_UClass_UUserProfile, &UUserProfile::StaticClass, TEXT("UUserProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserProfile);
	UPackage* Z_Construct_UPackage__Script_EldikPractice()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/EldikPractice")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x45E529F0;
			Guid.B = 0x4C2EEF93;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
