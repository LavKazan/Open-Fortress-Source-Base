// ========= Copyright Open Fortress Developers, CC-BY-NC-SA ============
// Purpose: General definitions
// Author(s): ficool2, Fenteale, Kay, Ms
//

#include "shareddefs.h"

// OFSTATUS: INCOMPLETE  ( labeling )
enum OF_Collision_Group_t
{
	OF_COLLISION_GROUP_UNKNOWN20 = LAST_SHARED_COLLISION_GROUP,
	OF_COLLISION_GROUP_UNKNOWN21,
	OF_COLLISION_GROUP_UNKNOWN22,
	OF_COLLISION_GROUP_UNKNOWN23,
	// OFINFO: labelled as "TFCOLLISION_GROUP_ROCKETS" in public SDK code, shared/particlesystemquery.cpp
	OF_COLLISION_GROUP_ROCKETS,
	OF_COLLISION_GROUP_UNKNOWN25,
	OF_COLLISION_GROUP_PUMPKIN_BOMB,
	// OFINFO: this is called in FireRocket + FireArrow in CPointWeaponMimic, guessing its for projectiles?
	OF_COLLISION_GROUP_PROJECTILE,
};


// Sourced from sourcemod API
#define DMG_CRIT                DMG_ACID        // < Crits and minicrits
#define DMG_RADIUS_MAX          DMG_ENERGYBEAM  // < No damage falloff 
#define DMG_NOCLOSEDISTANCEMOD  DMG_POISON      // < Don't do damage falloff too close 
#define DMG_HALF_FALLOFF        DMG_RADIATION   // < 50% damage falloff
#define DMG_USEDISTANCEMOD      DMG_SLOWBURN    // < Do damage falloff 
#define DMG_IGNITE              DMG_PLASMA      // < Ignite victim 
#define DMG_USE_HITLOCATIONS    DMG_AIRBOAT     // < Do hit location damage (sniper rifle) 

enum
{
	OF_TEAM_RED = FIRST_GAME_TEAM,
	OF_TEAM_BLUE,
	OF_TEAM_MERCENARY,

	OF_TEAM_COUNT
};

// Needs to match the array below
#define AMMONAME_FIRST 1
#define AMMONAME_LAST 7

//OFHACK: g_aAmmoNames should probably be an extern + defined somewhere but isn't
// (oh well, just bloats the exe a bit)

// No longer the case, did it properly and moved it to of_shareddefs.cpp now - Kay
extern const char *g_aAmmoNames[AMMONAME_LAST];
extern const char *g_aTeamNames[OF_TEAM_COUNT];
extern const char* s_ValveMaps[][3];
extern const char* s_CommunityMaps[][3];

#define TF_DAMAGE_CRIT_MULTIPLIER	3
#define TF_GAMETYPE_ESCORT			3