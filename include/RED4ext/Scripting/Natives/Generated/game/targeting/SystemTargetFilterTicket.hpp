#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct SystemTargetFilterTicket
{
    static constexpr const char* NAME = "gametargetingSystemTargetFilterTicket";
    static constexpr const char* ALIAS = "TargetFilterTicket";

    uint8_t unk00[0x4 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SystemTargetFilterTicket, 0x4);
} // namespace game::targeting
using gametargetingSystemTargetFilterTicket = game::targeting::SystemTargetFilterTicket;
using TargetFilterTicket = game::targeting::SystemTargetFilterTicket;
} // namespace RED4ext

// clang-format on
