#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterDouble.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineConsumableParameterDouble : game::state::MachineActionParameterDouble
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterDouble";
    static constexpr const char* ALIAS = NAME;

    bool consumed; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterDouble, 0x20);
} // namespace game::state
} // namespace RED4ext