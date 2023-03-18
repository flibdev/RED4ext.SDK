#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/entEffectSpawnerComponent.hpp>

namespace RED4ext
{
namespace ent { struct EffectDesc; }

namespace ent { 
// struct EffectSpawnerComponent : ent::IVisualComponent
// {
//     static constexpr const char* NAME = "entEffectSpawnerComponent";
//     static constexpr const char* ALIAS = NAME;

//     DynArray<Handle<ent::EffectDesc>> effectDescs; // 140
//     DynArray<void *> activeEffects; // 150
//     DynArray<RaRef<world::Effect>> resources; // 160
//     uint8_t unk150[0x220 - 0x170]; // 170
// };
RED4EXT_ASSERT_SIZE(EffectSpawnerComponent, 0x220);
} // namespace ent
} // namespace RED4ext

// clang-format on
