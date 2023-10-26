// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/ObjectiveWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MYPROJECT2_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem();
	MYPROJECT2_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UObjectiveWorldSubsystem::StaticRegisterNativesUObjectiveWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectiveWorldSubsystem);
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem_NoRegister()
	{
		return UObjectiveWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ObjectiveWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::ClassParams = {
		&UObjectiveWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UObjectiveWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectiveWorldSubsystem.OuterSingleton, Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectiveWorldSubsystem.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UObjectiveWorldSubsystem>()
	{
		return UObjectiveWorldSubsystem::StaticClass();
	}
	UObjectiveWorldSubsystem::UObjectiveWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveWorldSubsystem);
	UObjectiveWorldSubsystem::~UObjectiveWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_MyProject2_MyProject2_Source_MyProject2_Public_ObjectiveWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_MyProject2_Source_MyProject2_Public_ObjectiveWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectiveWorldSubsystem, UObjectiveWorldSubsystem::StaticClass, TEXT("UObjectiveWorldSubsystem"), &Z_Registration_Info_UClass_UObjectiveWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectiveWorldSubsystem), 3607457554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_MyProject2_Source_MyProject2_Public_ObjectiveWorldSubsystem_h_1319643501(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_MyProject2_Source_MyProject2_Public_ObjectiveWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_MyProject2_Source_MyProject2_Public_ObjectiveWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
