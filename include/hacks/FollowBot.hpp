/*
 *
 *
 *
 *
 */

#include "common.hpp"

namespace hacks::shared::followbot
{

// Followed entity, externed for highlight color
extern int follow_target;
extern bool followcart;
extern CatVar followbot;
extern CatVar roambot;
extern CatCommand follow_steam;
extern unsigned steamid;
void DrawTick();
void WorldTick();
int ClassPriority(CachedEntity *ent);
}
