#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileCollision_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct StopAndStick_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataStopAndStick_Record";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StopAndStick_Record, 0x58);
} // namespace game::data
} // namespace RED4ext