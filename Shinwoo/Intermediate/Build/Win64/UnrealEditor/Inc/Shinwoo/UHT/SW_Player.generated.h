// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SW_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHINWOO_SW_Player_generated_h
#error "SW_Player.generated.h already included, missing '#pragma once' in SW_Player.h"
#endif
#define SHINWOO_SW_Player_generated_h

#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASW_Player(); \
	friend struct Z_Construct_UClass_ASW_Player_Statics; \
public: \
	DECLARE_CLASS(ASW_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shinwoo"), NO_API) \
	DECLARE_SERIALIZER(ASW_Player)


#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASW_Player(ASW_Player&&); \
	ASW_Player(const ASW_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASW_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASW_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASW_Player) \
	NO_API virtual ~ASW_Player();


#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h_9_PROLOG
#define FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h_12_INCLASS_NO_PURE_DECLS \
	FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHINWOO_API UClass* StaticClass<class ASW_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
