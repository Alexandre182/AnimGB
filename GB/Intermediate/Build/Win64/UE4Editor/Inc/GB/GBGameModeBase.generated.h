// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GB_GBGameModeBase_generated_h
#error "GBGameModeBase.generated.h already included, missing '#pragma once' in GBGameModeBase.h"
#endif
#define GB_GBGameModeBase_generated_h

#define GB_Source_GB_GBGameModeBase_h_15_RPC_WRAPPERS
#define GB_Source_GB_GBGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GB_Source_GB_GBGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGBGameModeBase(); \
	friend struct Z_Construct_UClass_AGBGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGBGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GB"), NO_API) \
	DECLARE_SERIALIZER(AGBGameModeBase)


#define GB_Source_GB_GBGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGBGameModeBase(); \
	friend struct Z_Construct_UClass_AGBGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGBGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GB"), NO_API) \
	DECLARE_SERIALIZER(AGBGameModeBase)


#define GB_Source_GB_GBGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGBGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGBGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGBGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGBGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGBGameModeBase(AGBGameModeBase&&); \
	NO_API AGBGameModeBase(const AGBGameModeBase&); \
public:


#define GB_Source_GB_GBGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGBGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGBGameModeBase(AGBGameModeBase&&); \
	NO_API AGBGameModeBase(const AGBGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGBGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGBGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGBGameModeBase)


#define GB_Source_GB_GBGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define GB_Source_GB_GBGameModeBase_h_12_PROLOG
#define GB_Source_GB_GBGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GB_Source_GB_GBGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	GB_Source_GB_GBGameModeBase_h_15_RPC_WRAPPERS \
	GB_Source_GB_GBGameModeBase_h_15_INCLASS \
	GB_Source_GB_GBGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GB_Source_GB_GBGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GB_Source_GB_GBGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	GB_Source_GB_GBGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GB_Source_GB_GBGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	GB_Source_GB_GBGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GB_API UClass* StaticClass<class AGBGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GB_Source_GB_GBGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
