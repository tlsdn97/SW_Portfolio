// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SW_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHINWOO_SW_PlayerController_generated_h
#error "SW_PlayerController.generated.h already included, missing '#pragma once' in SW_PlayerController.h"
#endif
#define SHINWOO_SW_PlayerController_generated_h

#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASW_PlayerController(); \
	friend struct Z_Construct_UClass_ASW_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ASW_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shinwoo"), NO_API) \
	DECLARE_SERIALIZER(ASW_PlayerController)


#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASW_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASW_PlayerController(ASW_PlayerController&&); \
	ASW_PlayerController(const ASW_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASW_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASW_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASW_PlayerController) \
	NO_API virtual ~ASW_PlayerController();


#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h_12_PROLOG
#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHINWOO_API UClass* StaticClass<class ASW_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
