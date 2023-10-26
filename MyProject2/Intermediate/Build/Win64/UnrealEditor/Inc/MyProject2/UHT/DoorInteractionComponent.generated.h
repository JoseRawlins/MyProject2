// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DoorInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_DoorInteractionComponent_generated_h
#error "DoorInteractionComponent.generated.h already included, missing '#pragma once' in DoorInteractionComponent.h"
#endif
#define MYPROJECT2_DoorInteractionComponent_generated_h

#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_SPARSE_DATA
#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_ACCESSORS
#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorInteractionComponent) \
	NO_API virtual ~UDoorInteractionComponent();


#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_22_PROLOG
#define FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_SPARSE_DATA \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_ACCESSORS \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class UDoorInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_MyProject2_Source_MyProject2_Public_DoorInteractionComponent_h


#define FOREACH_ENUM_EDOORSTATE(op) \
	op(EDoorState::DS_Closed) \
	op(EDoorState::DS_Opening) \
	op(EDoorState::DS_Open) \
	op(EDoorState::DS_Locked) 

enum class EDoorState;
template<> struct TIsUEnumClass<EDoorState> { enum { Value = true }; };
template<> MYPROJECT2_API UEnum* StaticEnum<EDoorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
