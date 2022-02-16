// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAX_Base_Pac_generated_h
#error "Base_Pac.generated.h already included, missing '#pragma once' in Base_Pac.h"
#endif
#define PACMAX_Base_Pac_generated_h

#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_SPARSE_DATA
#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_RPC_WRAPPERS
#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Pac(); \
	friend struct Z_Construct_UClass_ABase_Pac_Statics; \
public: \
	DECLARE_CLASS(ABase_Pac, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMax"), NO_API) \
	DECLARE_SERIALIZER(ABase_Pac)


#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABase_Pac(); \
	friend struct Z_Construct_UClass_ABase_Pac_Statics; \
public: \
	DECLARE_CLASS(ABase_Pac, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMax"), NO_API) \
	DECLARE_SERIALIZER(ABase_Pac)


#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase_Pac(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase_Pac) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Pac); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Pac); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Pac(ABase_Pac&&); \
	NO_API ABase_Pac(const ABase_Pac&); \
public:


#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Pac(ABase_Pac&&); \
	NO_API ABase_Pac(const ABase_Pac&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Pac); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Pac); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Pac)


#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(ABase_Pac, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(ABase_Pac, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ABase_Pac, BaseMesh); }


#define PacMax_Source_PacMax_Pawns_Base_Pac_h_9_PROLOG
#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_SPARSE_DATA \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_RPC_WRAPPERS \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_INCLASS \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMax_Source_PacMax_Pawns_Base_Pac_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_SPARSE_DATA \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_INCLASS_NO_PURE_DECLS \
	PacMax_Source_PacMax_Pawns_Base_Pac_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAX_API UClass* StaticClass<class ABase_Pac>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMax_Source_PacMax_Pawns_Base_Pac_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
