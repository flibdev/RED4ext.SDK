#pragma once

// This file is generated by Jack

#include <RED4ext/Common.hpp>
#include <cstdint>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/physicsProxyID.hpp>
#include <RED4ext/Scripting/Natives/physicsProxyCache.hpp>

namespace RED4ext::physics {
// previously GeoThing
struct ProxyHelper
{
    inline ProxyHelper(ProxyID proxyID) {
        Create(this, proxyID);
    }

    // 1.6  RVA: 0x44C410 / 4506640
    /// @pattern 48 89 5C 24 18 48 89 74 24 20 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9 41
    /// @nth 1/2
    // 2.1
    /// @pattern 48 8B C4 88 50 10 53 48 83 EC 50 48 8B 11 48 8B D9 C6 40 E8 00 C7 40 E0 01 00 00 00 48 8D 40 10
    ProxyHelper *__fastcall SetSimulationShape(bool enabled, uint32_t bodyIndex, unsigned int shapeIndex);
    
    // 1.6  RVA: 0x44DB40 / 4512576
    /// @pattern 48 89 5C 24 18 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 85 C9 0F 85 9D
    /// @nth 6/7
    ProxyHelper *__fastcall SetCCD(bool enabled, int bodyIndex);

    // 1.6  RVA: 0x44D480 / 4510848
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9
    /// @nth 3/4
    ProxyHelper* __fastcall SetSimulationFilterData(void* simulationFilter, int bodyIndex, int shapeIndex);

    // 1.6  RVA: 0x44D080 / 4509824
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9
    /// @nth 1/4 
    ProxyHelper* __fastcall SetQueryFilterData(void* queryFilter, uint32_t bodyIndex, unsigned int shapeIndex);

    // 1.6  RVA: 0x44C300 / 4506368
    /// @pattern 48 89 5C 24 18 48 89 74 24 20 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9 41
    /// @nth 0/2
    // 2.1
    /// @pattern 48 8B C4 88 50 10 53 48 83 EC 50 4C 8B 41 08 48 8B D9 48 8B 11 8B 49 10 C6 40 E8 00 C7 40 E0 01
    ProxyHelper* __fastcall SetIsQueryable(bool enabled, uint32_t bodyIndex, unsigned int shapeIndex);

    // 1.6  RVA: 0x44C620 / 4507168
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 8B F2 48 85
    /// @nth 3/10
    ProxyHelper* __fastcall SetLinearDamping(float* linearDamping, uint32_t bodyIndex);

    // 1.6  RVA: 0x44B7D0 / 4503504
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 8B F2 48 85
    /// @nth 0/10
    ProxyHelper* __fastcall SetAngularDamping(float* angularDamp, uint32_t bodyIndex);

    // 1.6  RVA: 0x44C100 / 4505856
    /// @pattern 48 89 5C 24 18 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 85 C9 0F 85 9D
    /// @nth 1/7
    ProxyHelper* __fastcall SetGravity(bool flag, uint32_t bodyIndex);

    // 1.6  RVA: 0x44C820 / 4507680
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 8B F2 48 85
    ProxyHelper* __fastcall SetCMassLocalPose(Transform* transform, uint32_t bodyIndex);

    // 1.6  RVA: 0x446D10 / 4484368
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 33 C0 48 8B FA 48 89 01 48 8B D9 48 89 41 08 8B 02 89 41 10 8B 02
    // 2.1
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 48 83 21 00 48 8B F9 48 83 61 08 00 8B DA 89 51 10 48 8B 0D
    static ProxyHelper *__fastcall Create(ProxyHelper * proxyHelper, ProxyID proxyID);

    // 1.6  RVA: 0x446C80 / 4484224
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 8B 02 49 8B D8 48 8D 54 24 30 89 44 24 30 48 8B F9 E8 70 00 00 00
    ProxyHelper* __fastcall GetThingWithLock(ProxyID* proxyID, SharedMutex* a3);

    // 1.6  RVA: 0x44CA20 / 4508192
    /// @pattern 48 89 5C 24 08 48 89 74 24 18 F3 0F 11 4C 24 10 57 48 83 EC 50 8B 41 10 41 0F B6 F9 40 80 F7 01
    ProxyHelper* __fastcall SetMassAndUpdateInertia(float chassisMass, uint32_t bodyIndex, bool shouldWake);

    // 1.6  RVA: 0x44D980 / 4512128
    /// @pattern 4C 8B DC 49 89 5B 08 49 89 73 10 57 48 83 EC 70 F3 0F 10 05 08 E5 C8 02 41 0F B6 F9 66 0F 6E 12
    ProxyHelper* __fastcall UpdateGlobalPose(WorldTransform* a2, int bodyIndex, bool shouldWake);

    // assigns proxyCacheEntry to the proxyID in manager
    // 1.6  RVA: 0x447AF0 / 4487920
    // 2.1
    /// @pattern 40 53 48 83 EC 20 48 8B ? 08 48 8B D9 48 85 ? 74 ? 8B ? 48 8B
    bool __fastcall UpdateProxyCache();

    // 2.1
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 48 83 21 00 48 8B F9 48 83 61 08 00 8B DA 89 51 10 48 8B 0D
    RED4ext::physics::ProxyHelper *__fastcall Lock(RED4ext::physics::ProxyID a2);

    // 1.6  RVA: 0x446D90 / 4484496
    // 2.1 switches the order of some instructions in the ?
    /// @pattern 48 8B 51 18 ? ? ? ? ? ? ? 86 02 C3
    __int64 __fastcall Unlock();

    ProxyCache * proxyCache;
    ProxyCacheEntry * proxyCacheEntry;
    ProxyID proxyID;
    uint32_t unk14;
    // 0x18
    // assigned on creation, usually stored in the component struct
    RED4ext::SharedMutex * mutex;
};
}