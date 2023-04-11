#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotItemAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WeaponType.hpp>

namespace RED4ext
{
namespace work
{
struct EquipInventoryWeaponAction : work::IWorkspotItemAction
{
    static constexpr const char* NAME = "workEquipInventoryWeaponAction";
    static constexpr const char* ALIAS = NAME;

    work::WeaponType weaponType; // 30
    bool keepEquippedAfterExit; // 34
    uint8_t unk35[0x38 - 0x35]; // 35
    TweakDBID fallbackItem; // 38
    TweakDBID fallbackSlot; // 40
};
RED4EXT_ASSERT_SIZE(EquipInventoryWeaponAction, 0x48);
} // namespace work
using workEquipInventoryWeaponAction = work::EquipInventoryWeaponAction;
} // namespace RED4ext

// clang-format on
