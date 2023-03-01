#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleDriveModelData_Record.hpp>

namespace RED4ext
{
namespace vehicle { 
struct BaseObject;
struct PhysicsData
{
    static constexpr const char* NAME = "vehiclePhysicsData";
    static constexpr const char* ALIAS = NAME;

    // 1.52 RVA: 0x1CE1550 / 30283088
    /// @pattern 0F B6 81 B8 01 00 00 C3
    bool __fastcall UsesAlternativeChassisMass();

    // 1.52 RVA: 0x1CE2020 / 30285856
    /// @pattern 40 53 48 83 EC 20 F2 0F 10 02 48 8B D9 F2 0F 11 81 50 01 00 00 8B 42 08 89 81 58 01 00 00 0F 10
    // double __fastcall ResetWithWorldTransform(WorldTransform* worldTransform);

    // 1.52 RVA: 0x1CE1560 / 30283104
    /// @pattern 48 8D 81 B4 01 00 00 48 8D 54 24 08 48 3B D0 74 08 F3 0F 11 08 C6 40 04 01 E9 D2 F6 FF FF
    // void __fastcall SetUsesAlternativeChassisMass(float);

    // 1.52 RVA: 0x1CE0F90 / 30281616
    /// @pattern C6 81 B8 01 00 00 00 E9 B4 FC FF FF
    void __fastcall SetUsesNormalChassisMass();

    // 1.52 RVA: 0x1CE0C50 / 30280784
    /// @pattern 48 83 EC 38 4C 8B 81 80 01 00 00 0F 57 C0 F3 0F 7F 44 24 20 49 8B 80 D8 02 00 00 48 85 C0 0F 84
    void __fastcall UpdateChassis();

    // 1.52 RVA: 0x1CE1E60 / 30285408
    /// @pattern 4C 8B 02 4C 8B D1 F3 0F 10 05 AA B8 39 01 4C 8B DA 41 0F B7 80 C0 00 00 00 45 0F B6 88 C2 00 00
    // void __fastcall LoadPhysicsStructFromTweaks(Handle<game::data::VehicleDriveModelData_Record> *a2);

    // adds to force & computes torque
    // 1.6  RVA: 0x1D0D2E0 / 30462688
    // 1.62 RVA: 0x1D0DDA0 / 30465440
    /// @pattern 48 83 EC 28 F3 41 0F 10 00 F3 0F 58 01 F3 0F 10 0D ? ? ? 01 0F 29 74 24 10 C7 44 24 0C 00 00
    void __fastcall ApplyForceAtPosition(RED4ext::Vector3 *position, RED4ext::Vector3 *force);

    // 1.6  RVA: 0x1D0CCE0 / 30461152
    // 1.62 RVA: 0x1D0D7A0 / 30463904
    /// @pattern 48 83 EC 28 F3 0F 10 42 08 F3 0F 5C 81 78 01 00 00 F3 0F 10 1A F3 0F 5C 99 70 01 00 00 F3 0F 10
    void __fastcall ApplyTorqueAtPosition(RED4ext::Vector3 *position, RED4ext::Vector3 *torque);


    // add vector to torque
    // 1.6  RVA: 0x1D0D4C0
    // 1.61 RVA: 0x1D0D880
    /// @pattern F3 0F 10 41 0C F3 0F 58 02 F3 0F 11 41 0C F3 0F 10 4A 04 F3 0F 58 49 10 F3 0F 11 49 10 F3 0F 10
    void __fastcall AddTorque(RED4ext::Vector3 *torque);

    Vector3 force;
    Vector3 torque;
    Vector3 velocity;
    Vector3 angularVelocity;
    Quaternion orientation;
    float inverseMass;
    uint32_t unk48[3];
    Matrix localInertiaTensor;
    Matrix worldInertiaTensor;
    Matrix invertedLocalInertiaTensor;
    Matrix invertedWorldInertiaTensor;
    WorldTransform currentTransform;
    Vector4 worldPosition;
    BaseObject* vehicle;
    uint64_t unk188;
    Box bounds;
    // gravity enabled
    uint8_t unk1B0;
    uint8_t unk1B1;
    uint8_t unk1B2;
    uint8_t unk1B3;
    // set to 100000.0 in a function
    float alternativeChassisMass; // 1B4
    uint8_t usesAlternativeChassisMass;
    uint8_t unk1B9;
    uint8_t unk1BA;
    uint8_t unk1BB;
    float total_mass;
    float chassis_mass; // 1C0
    uint8_t usesInertiaTensor;
    uint8_t unk1C5;
    uint8_t unk1C6;
    uint8_t unk1C7;
    Vector3 momentOfInertiaScale;
    Vector3 centerOfMass;
};
RED4EXT_ASSERT_SIZE(PhysicsData, 0x1E0);
} // namespace vehicle
} // namespace RED4ext
