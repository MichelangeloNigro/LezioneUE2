// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LEZIONE2_FP_FirstPersonCharacter_generated_h
#error "FP_FirstPersonCharacter.generated.h already included, missing '#pragma once' in FP_FirstPersonCharacter.h"
#endif
#define LEZIONE2_FP_FirstPersonCharacter_generated_h

#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_15_DELEGATE \
static inline void FReloadEvent_DelegateWrapper(const FMulticastScriptDelegate& ReloadEvent) \
{ \
	ReloadEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_14_DELEGATE \
struct _Script_Lezione2_eventPLayerEventTwo_Parms \
{ \
	AActor* HitActor; \
	bool bHit; \
}; \
static inline void FPLayerEventTwo_DelegateWrapper(const FMulticastScriptDelegate& PLayerEventTwo, AActor* HitActor, bool bHit) \
{ \
	_Script_Lezione2_eventPLayerEventTwo_Parms Parms; \
	Parms.HitActor=HitActor; \
	Parms.bHit=bHit ? true : false; \
	PLayerEventTwo.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_SPARSE_DATA
#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_RPC_WRAPPERS
#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_EVENT_PARMS \
	struct FP_FirstPersonCharacter_eventPlayerHasShoot_Parms \
	{ \
		AActor* actor; \
		bool hasHitSomething; \
	};


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_CALLBACK_WRAPPERS
#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFP_FirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFP_FirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFP_FirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lezione2"), NO_API) \
	DECLARE_SERIALIZER(AFP_FirstPersonCharacter)


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFP_FirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFP_FirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFP_FirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lezione2"), NO_API) \
	DECLARE_SERIALIZER(AFP_FirstPersonCharacter)


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFP_FirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFP_FirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFP_FirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFP_FirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFP_FirstPersonCharacter(AFP_FirstPersonCharacter&&); \
	NO_API AFP_FirstPersonCharacter(const AFP_FirstPersonCharacter&); \
public:


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFP_FirstPersonCharacter(AFP_FirstPersonCharacter&&); \
	NO_API AFP_FirstPersonCharacter(const AFP_FirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFP_FirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFP_FirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFP_FirstPersonCharacter)


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFP_FirstPersonCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFP_FirstPersonCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFP_FirstPersonCharacter, FirstPersonCameraComponent); }


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_17_PROLOG \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_EVENT_PARMS


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_SPARSE_DATA \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_RPC_WRAPPERS \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_CALLBACK_WRAPPERS \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_INCLASS \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_SPARSE_DATA \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_CALLBACK_WRAPPERS \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEZIONE2_API UClass* StaticClass<class AFP_FirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lezione2_Source_Lezione2_FP_FirstPerson_FP_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
