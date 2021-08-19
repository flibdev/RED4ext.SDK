#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttack.hpp>

namespace RED4ext
{
namespace game { 
struct Attack_Projectile : game::IAttack
{
    static constexpr const char* NAME = "gameAttack_Projectile";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0xF8 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(Attack_Projectile, 0xF8);
} // namespace game
} // namespace RED4ext