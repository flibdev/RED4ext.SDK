#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
// #include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>
#include <RED4ext/Scripting/Natives/vehicleAirControlAxis.hpp>

namespace RED4ext
{
namespace vehicle { 
struct BaseObject;

#pragma pack(push, 1)
struct AirControl
{
    static constexpr const char* NAME = "vehicleAirControl";
    static constexpr const char* ALIAS = NAME;

    // 1.6  RVA: 0x1D108A0 / 30476448
    // 1.61 RVA: 0x1D10C60
    // 1.61hf1 RVA: 0x1D11360
    /// @pattern 48 89 5C 24 20 56 48 83 EC 60 0F 29 74 24 50 48 8B F1 0F 57 F6 44 0F 29 44 24 30 0F 2E 71 08 44
    void __fastcall Process(float a2);

    // 1.6  RVA: 0x1D0EDC0 / 30469568
    /// @pattern 48 8B C4 56 48 81 EC 00 01 00 00 44 0F 29 60 88 48 89 58 08 8B DA 48 89 78 10 48 8B F9 48 8B 09
    void __fastcall ApplyTorque(uint32_t axis, float timeDelta);

    // 1.6  RVA: 0x1D0FC00 / 30473216
    /// @pattern 48 83 EC 28 0F 29 74 24 10 0F 29 3C 24 45 85 C0 0F 85 D6 00 00 00 41 0F 10 61 10 48 8B C2 0F 28
    RED4ext::Vector3 *__fastcall GetAngularVelocity(RED4ext::Vector3 *angVel, int a3, void *a4);

    // 1.6  RVA: 0x1D0F510 / 30471440
    /// @pattern 48 8B C4 F3 0F 11 50 18 53 56 57 41 56 41 57 48 81 EC 10 01 00 00 F3 0F 10 05 CA C5 3C 01 48 8B
    // void __fastcall ProcessAngularVelocity(uint32_t axis, float timeDelta);

    // 1.6 RVA: 0x1D11050 / 30478416
    /// @pattern 48 89 5C 24 08 57 48 83 EC 30 41 8B C0 4C 69 C0 B0 00 00 00 0F 29 74 24 20 0F 28 F3 49 8D 04 08
    // void __fastcall ProcessAxisVector4(bool dl0, unsigned int axis, float timeDelta);

    // 1.6  RVA: 0x1D0FBC0 / 30473152
    /// @pattern 40 53 48 83 EC 20 0F 57 C0 48 8B D9 0F 2F 81 40 02 00 00 73 16 48 8B 09 E8 43 A2 F6 FF F3 0F 5E
    // float __fastcall GetMassFactor();

    // 1.6  RVA: 0x1D10C70 / 30477424
    /// @pattern 48 89 74 24 20 57 48 81 EC A0 00 00 00 F3 0F 10 05 73 AE 3C 01 33 F6 0F 2F 81 64 02 00 00 48 8B
    // void __fastcall ClassDecisions(float timeDelta);

    // 1.6  RVA: 0x1D105C0 / 30475712
    /// @pattern 40 57 41 56 48 83 EC 28 F3 0F 10 05 28 B5 3C 01 44 8B F2 0F 2F 81 64 02 00 00 48 8B F9 73 0A 32
    // bool __fastcall BikeCarStuff(uint32_t axis);

    BaseObject * vehicle;
    float unk08;
    AirControlAxis pitch;
    AirControlAxis yaw;
    AirControlAxis roll;
    Vector3 anglePID;
    Vector3 velocityPID;
    Vector3 flippedOverRecoveryPID;
    float massReference;
    PID unk244;
    RED4ext::Vector4 unk264;
    float unk274;
    float unk278;
    float unk27C;
    float unk280;
};
#pragma pack(pop)
RED4EXT_ASSERT_SIZE(AirControl, 0x290);
} // namespace vehicle
} // namespace RED4ext