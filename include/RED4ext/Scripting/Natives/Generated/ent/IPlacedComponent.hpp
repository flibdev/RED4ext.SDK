#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ITransformBinding.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ITransformAttachment.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>

namespace RED4ext
{

namespace ent {
struct ITransformBinding;
struct __declspec(align(0x10)) IPlacedComponent : IComponent
{
    static constexpr const char* NAME = "entIPlacedComponent";
    static constexpr const char* ALIAS = "IPlacedComponent";

    /// @pattern 48 83 EC 48 4C 8B C9 E8 4C 01 00 00 0F 28 0D ? ? ? ? 48 8D 0D (vft:rel) 49 89 09 48 8D 05
    /// @eval vft
    static constexpr const uintptr_t VFT = entIPlacedComponent_VFT_Addr;

    // creates ent::HardAttachment with this as source, 0x238
    virtual Handle<ent::ITransformAttachment>* CreateTransformAttachment(Handle<ent::ITransformAttachment>* aAttachment, 
                                                                         CName name,
                                                                         Handle<void>* aDestination);
    // debug related? formats name to [%hs]
    virtual void sub_240();
    // get bounding box maybe?
    // debugbreak here
    virtual void sub_248(Box* boundingBox);
    virtual void GetFlags();

    struct UnkA0 {
        uint64_t unk00[4];
    };

    Handle<ITransformBinding> parentTransform; // 90
    // reated to Transform Attachements - double Handle struct
    DynArray<UnkA0> unkA0;
    uint8_t unkB0;
    // set based on arg passed to UpdateBindings
    uint8_t unkB1;
    // related to unkA0 updates?
    // hasUpdate?
    uint8_t unkB2;
    uint8_t unkB3[5];
    uint64_t unkB8;
    WorldTransform localTransform; // C0
    WorldTransform worldTransform; // E0
    Box bounds; // 100
};
RED4EXT_ASSERT_SIZE(IPlacedComponent, 0x120);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, unkB0, 0xB0);
} // namespace ent
using entIPlacedComponent = ent::IPlacedComponent;
using IPlacedComponent = ent::IPlacedComponent;
} // namespace RED4ext

// clang-format on
