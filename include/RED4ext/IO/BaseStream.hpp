#pragma once

#include <Windows.h>
#include <cstdint>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace Memory
{
struct EngineAllocator;
}

struct BaseStream
{
    enum class Flags : int32_t {
      // write?
      unk1 = 0x1,
      // if not set, instance calls sub_A0 & sub_A8 in sub_40
      unk2 = 0x2,
      unk80000 = 0x80000,
      // used by CMesh in its sub_40
      unk100000 = 0x100000
    };

    BaseStream(int32_t aFlags = 0);

    virtual Memory::EngineAllocator* GetAllocator(); // 00
    virtual ~BaseStream() = default;                 // 08

    virtual void* ReadWrite(void* aBuffer, uint32_t aLength) = 0; // 10
    virtual size_t GetPointerPosition() = 0;                      // 18
    virtual size_t GetLength() = 0;                               // 20
    virtual bool Seek(size_t aDistance) = 0;                      // 28
    virtual bool Flush() = 0;                                     // 30
    virtual void sub_38();                                        // 38
    virtual const char* GetFileName();                            // 40

    template<typename T>
    inline void* ReadWriteEx(T* aBuffer)
    {
        return ReadWrite(aBuffer, sizeof(T));
    }

    // 4 byte value written/read for CMeshMaterialEntry
    // 1.6  RVA: 0x710E90 / 7409296
    /// @pattern 40 55 53 57 48 8B EC 48 83 EC 60 F6 41 08 01 48 8B DA 48 8B F9 0F 84 8A 00 00 00 48 8B 49 10 C7
    void __fastcall ReadWriteHandleID(void *handle);

    int32_t flags; // 08
    int32_t unkC;  // 0C
    // involved in handle resolving
    /*struct
    {
        // writes handle ID into id
        virtual void sub_18(void * handle, uint32_t id);
        // resolves handle from ID
        virtual void sub_48(uint32_t id, void * handle);
    } * unk10; // 10
    */
    int64_t unk10; // 10
    int64_t unk18; // 18
};
RED4EXT_ASSERT_SIZE(BaseStream, 0x20);
RED4EXT_ASSERT_OFFSET(BaseStream, flags, 0x8);
RED4EXT_ASSERT_OFFSET(BaseStream, unkC, 0xC);
RED4EXT_ASSERT_OFFSET(BaseStream, unk10, 0x10);
RED4EXT_ASSERT_OFFSET(BaseStream, unk18, 0x18);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/IO/BaseStream-inl.hpp>
#endif
