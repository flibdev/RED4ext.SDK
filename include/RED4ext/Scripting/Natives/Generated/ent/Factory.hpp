#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ent
{
struct Factory : ISerializable
{
    static constexpr const char* NAME = "entFactory";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(Factory, 0x38);
} // namespace ent
using entFactory = ent::Factory;
} // namespace RED4ext

// clang-format on
