// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Team.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_Team_generated_h
#error "Team.generated.h already included, missing '#pragma once' in Team.h"
#endif
#define BLASTER_Team_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiPlayerShooter_Blaster_Source_Blaster_Team_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::ET_RedTeam) \
	op(ETeam::ET_BlueTeam) \
	op(ETeam::ET_NoTeam) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
