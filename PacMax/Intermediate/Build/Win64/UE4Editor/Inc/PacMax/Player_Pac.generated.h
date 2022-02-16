// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAX_Player_Pac_generated_h
#error "Player_Pac.generated.h already included, missing '#pragma once' in Player_Pac.h"
#endif
#define PACMAX_Player_Pac_generated_h

#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_SPARSE_DATA
#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_RPC_WRAPPERS
#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Pac(); \
	friend struct Z_Construct_UClass_APlayer_Pac_Statics; \
public: \
	DECLARE_CLASS(APlayer_Pac, ABase_Pac, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMax"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Pac)


#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Pac(); \
	friend struct Z_Construct_UClass_APlayer_Pac_Statics; \
public: \
	DECLARE_CLASS(APlayer_Pac, ABase_Pac, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMax"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Pac)


#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Pac(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Pac) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Pac); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Pac); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Pac(APlayer_Pac&&); \
	NO_API APlayer_Pac(const APlayer_Pac&); \
public:


#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Pac(APlayer_Pac&&); \
	NO_API APlayer_Pac(const APlayer_Pac&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Pac); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Pac); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Pac)


#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpeedModifier() { return STRUCT_OFFSET(APlayer_Pac, SpeedModifier); } \
	FORCEINLINE static uint32 __PPO__DashTimer() { return STRUCT_OFFSET(APlayer_Pac, DashTimer); }


#define PacMax_Source_PacMax_Pawns_Player_Pac_h_12_PROLOG
#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_PRIVATE_PROPERTY_OFFSET \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_SPARSE_DATA \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_RPC_WRAPPERS \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_INCLASS \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMax_Source_PacMax_Pawns_Player_Pac_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_PRIVATE_PROPERTY_OFFSET \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_SPARSE_DATA \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_INCLASS_NO_PURE_DECLS \
	PacMax_Source_PacMax_Pawns_Player_Pac_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAX_API UClass* StaticClass<class APlayer_Pac>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMax_Source_PacMax_Pawns_Player_Pac_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
