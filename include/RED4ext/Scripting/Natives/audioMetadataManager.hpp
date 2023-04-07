#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>
#include <RED4ext/Map.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioEventMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceTagListResource.hpp>

namespace RED4ext
{
namespace audio
{

// 1.6 RVA: 0x7323E0 / 7545824
/// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F1 0F 29 74 24 30 48 8B 0D 22 1C B0 03 49 8B
void __fastcall UpdateParameterForEntityID(ent::Entity entityID, CName parameterName, float parameterValue);

// not sure what this is now
// 1.6 RVA: 0x2CA1ED0 / 46800592
/// @pattern 48 89 5C 24 08 57 48 83 EC 50 48 8B 05 4F 53 2B 01 4C 8B C1 0F 29 74 24 40 48 8B C8 0F 29 7C 24
// float __fastcall UpdateGameParameter(RED4ext::CName parameterName, RED4ext::CName a2, float value, int type);

// 1.6 RVA: 0x72DC30 / 7527472
/// @pattern 48 89 5C 24 08 57 48 83 EC 40 0F 29 74 24 30 48 8B D9 48 8B 0D D7 63 B0 03 41 8B F9 0F 29 7C 24
float __fastcall UpdateGlobalParameter(RED4ext::CName parameterName, float parameterValue, float updateDuration, int type);

struct ClassName {
    CClass *cls;
    CName name;
};

struct MetadataManager {   

    // 1.6  RVA: 0x371100 / 3608832
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 56 57 41 56 48 83 EC 20 48 8D 05 3F 84 DA 02 4C 8B F1 48 89 01 48
    MetadataManager();

    // 1.6 RVA: 0x371F50 / 3612496
    // 1.61hf1 RVA: 0x372520 / 3613984
    /// @pattern 48 89 5C 24 08 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 30 33 ED 48 8D 05 ? ? DA 02 48 89 01
    virtual ~MetadataManager();

    // 1.6 RVA: 0x372360 / 3613536
    /// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 8B 2D A2 72 DA 02 48 8B F1 48 8B CA
    float __fastcall GetValueInMapForName(Map<CName, uint32_t> *map, CName parameterName);

    // after base\sound\event\eventsmetadata.json
    static constexpr const uintptr_t VFT = 0x3121658;

    static constexpr const uintptr_t SINGLETON = 0x3F5F8F0;

    Map<ClassName, Handle<AudioMetadata>> classNamePresetLookup;
    Map<CName, uint32_t> switchGroupMapping;
    Map<CName, uint32_t> switchMapping;
    Map<CName, uint32_t> stateGroupMapping;
    Map<CName, uint32_t> stateMapping;
    Map<CName, uint32_t> gameParameterMapping;
    Map<CName, uint32_t> busMapping;
    // event name mapping
    RED4ext::Map<CName, AudioEventMetadata> events;
    RED4ext::Handle<RED4ext::loc::VoiceTagListResource> locVoiceTagListResource;
    uint64_t unk158;
    HashMap<uint64_t, uint64_t> unk160;
    RED4ext::DynArray<RED4ext::CName> unk1B0;
    uint64_t unk1A0;
};

} // namespace audio
} // namespace RED4ext