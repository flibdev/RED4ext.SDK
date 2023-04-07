#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/actionActionBase.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace action {

#pragma pack(push, 1)
struct ActionInterface {
    virtual ~ActionInterface();

    // 1.52 RVA: 0x1B21550 / 28448080
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B F9 48 8B F2 48 81 C1 EA 00 00 00 E8 AF 9E 01
    // uint8_t __fastcall AddItem(void *);

    // 1.52 RVA: 0x1B216C0 / 28448448
    /// @pattern 48 89 5C 24 10 57 48 83 EC 30 48 8B 41 58 48 8B FA 48 8B 98 28 02 00 00 E8 43 E4 AB FF 4C 8B 03
    // Handle<void> *__fastcall GetActionsFactory(Handle<void> *);

    // 1.52 RVA: 0x1B21870 / 28448880
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 54 41 55 41 56 41 57 48 83 EC 30 0F 29 74 24
    void __fastcall ProcessActions(void * startStruct, bool postPhysics);

    // 1.52 RVA: 0x1B215A0 / 28448160
    // 1.6  RVA: 0x1B4D110 / 28627216
    // 1.61 RVA: 0x1B4D220
    // 1.61hf1 RVA: 0x1B4D910
    /// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 54 41 55 41 56 41 57 48 83 EC 20 48 8D A9 E8
    __int64 __fastcall EndActions();

    // 1.52 RVA: 0x1B4D2E0 / 28627680
    /// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B F1 41 0F B6 F8 48 81 C1 E8 00
    bool __fastcall IsAnimationiActive(action::Type type, uint8_t index);

    struct Lookup {
        DynArray<ActionBase> prePhysics;
        DynArray<ActionBase> postPhysics;
        uint32_t numArrays;
    };

    Lookup lookup;
    uint32_t unk2C;
    Lookup lookup2;
    uint32_t unk54;
    game::Object *gameObject;
    void *listeners[16];
    uint32_t unk60count;
    uint32_t unkE4;
    SharedMutex actionsMutex;
    SharedMutex mutex2;
    SharedMutex listenersMutex;
    uint8_t unkEB;
    uint32_t unkEC;
};
#pragma pack(pop)
RED4EXT_ASSERT_SIZE(ActionInterface, 0xF0);
//char (*__kaboom)[sizeof(ActionInterface)] = 1;
} // namespace action
} // namespace RED4ext
