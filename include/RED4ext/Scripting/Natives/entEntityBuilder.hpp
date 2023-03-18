#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityTemplate.hpp>

namespace RED4ext { 

namespace ent {

struct EntityBuilder
{
    struct Unk10
    {
        Handle<Unk10> self;
        uint16_t unk10;
        uint16_t unk12;
        uint16_t unk14;
        uint16_t unk16;
        void *unk18;
        void *unk20;
        void *unk28;
        void *unk30;
        void *unk38;
        char *nameString;
        void *unk48;
        char *dependencyStrings;
        void *unk58;
        uint32_t unk60;
        uint32_t unk64;
        DynArray<void*> unk68;
        uint64_t unk78;
        uint64_t unk80;
        uint64_t unk88;
        uint64_t unk90;
        uint64_t unk98;
        HashMap<uint64_t, Handle<ISerializable>> *resources;
        DynArray<Handle<ISerializable>> buffer;
        uint64_t unkB8;
        DynArray<Handle<ISerializable>> bufferAndHandles;
        DynArray<void*> unkD0;
        DynArray<void*> unkE0;
        void *unkF0;
        void *unkF8;
        void *unk100;
        void *unk108;
        void *unk110;
        void *unk118;
    };

    Handle<EntityBuilder> self;
    Handle<Unk10> unk10;
    uint64_t unk20[4];
    Handle<Unk10> unk40;
    uint64_t unk50[6];
    DynArray<void*> unk80;
    EntityTemplate *entEntityTemplate;
    void *unk98;
    WorldTransform *transform;
    void *unkA8;
    Handle<Entity> entity;
    DynArray<Handle<IComponent>> components;
    DynArray<ResourceReference<CResource>> resolvedDependencies;
    DynArray<void*> unkE0;
    uint64_t unkF0;
    red::TagList tags;
    void *unk108;
    uint64_t unk110;
};

}
}
