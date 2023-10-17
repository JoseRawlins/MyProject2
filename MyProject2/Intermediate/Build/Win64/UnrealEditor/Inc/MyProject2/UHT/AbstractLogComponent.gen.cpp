// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/AbstractLogComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractLogComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPROJECT2_API UClass* Z_Construct_UClass_UAbstractLogComponent();
	MYPROJECT2_API UClass* Z_Construct_UClass_UAbstractLogComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UAbstractLogComponent::StaticRegisterNativesUAbstractLogComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbstractLogComponent);
	UClass* Z_Construct_UClass_UAbstractLogComponent_NoRegister()
	{
		return UAbstractLogComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractLogComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractLogComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractLogComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbstractLogComponent.h" },
		{ "ModuleRelativePath", "Public/AbstractLogComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString_MetaData[] = {
		{ "Category", "AbstractLogComponent" },
		{ "ModuleRelativePath", "Public/AbstractLogComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString = { "DataString", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbstractLogComponent, DataString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString_MetaData), Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractLogComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractLogComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbstractLogComponent_Statics::ClassParams = {
		&UAbstractLogComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbstractLogComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbstractLogComponent()
	{
		if (!Z_Registration_Info_UClass_UAbstractLogComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbstractLogComponent.OuterSingleton, Z_Construct_UClass_UAbstractLogComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbstractLogComponent.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UAbstractLogComponent>()
	{
		return UAbstractLogComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractLogComponent);
	UAbstractLogComponent::~UAbstractLogComponent() {}
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_AbstractLogComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_AbstractLogComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbstractLogComponent, UAbstractLogComponent::StaticClass, TEXT("UAbstractLogComponent"), &Z_Registration_Info_UClass_UAbstractLogComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbstractLogComponent), 1995448657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_AbstractLogComponent_h_3724561245(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_AbstractLogComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_AbstractLogComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
