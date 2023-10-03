#pragma once

#include <Windows.h>
#include <cstdint>

namespace RED4ext
{
class RelocBase
{
public:
    inline static uintptr_t GetImageBase()
    {
        static const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
        return base;
    }
};

template<typename T>
class RelocFuncBase : private RelocBase
{
public:
    RelocFuncBase(uintptr_t aOffset)
        : m_address(reinterpret_cast<T>(aOffset + GetImageBase()))
    {
    }

    RelocFuncBase(uintptr_t aVftOffset, uintptr_t aOffset)
        : m_address(*reinterpret_cast<T*>(aVftOffset + aOffset + GetImageBase()))
    {
    }

    inline operator T() const
    {
        return m_address;
    }

private:
    T m_address;
};

/**
 * @brief Represent a native function, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class RelocFunc
{
};

template<typename R, typename... Args>
class RelocFunc<R (*)(Args...)> : public RelocFuncBase<R (*)(Args...)>
{
    using RelocFuncBase<R (*)(Args...)>::RelocFuncBase;
};

template<typename C, typename R, typename... Args>
class RelocFunc<R (C::*)(Args...)> : public RelocFuncBase<R (*)(C*, Args...)>
{
    using RelocFuncBase<R (*)(C*, Args...)>::RelocFuncBase;
};

/**
 * @brief Represent a native virtual member function, use this to relocate its address at runtime.
 * @tparam T The type.
 */
//template<typename T>
//class RelocVirtualFunc : private RelocBase
//{
//public:
//    RelocVirtualFunc(uintptr_t aVftOffset, uintptr_t aOffset)
//        : m_address(*reinterpret_cast<T*>(aVftOffset + aOffset + GetImageBase()))
//    {
//    }
//
//    inline operator T() const
//    {
//        return m_address;
//    }
//
//private:
//    T m_address;
//};

//template<typename T>
//class RelocVirtualFunc
//{
//};
//
//template<typename C, typename R, typename... Args>
//class RelocVirtualFunc<R (C::*)(Args...)> : public RelocFuncBase<R (*)(C*, Args...)>
//{
//    using RelocFuncBase<R (*)(C*, Args...)>::RelocFuncBase;
//};


/**
 * @brief Represent a native struct, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class RelocFundamental : private RelocBase
{
public:
    RelocFundamental(uintptr_t aOffset)
        : m_address(aOffset + GetImageBase())
    {
        m_pointer = reinterpret_cast<T*>(malloc(sizeof(T)));
        memset(m_pointer, 0, sizeof(T));
        // assign m_address to vft
        *(uintptr_t*)m_pointer = m_address;
    }

    ~RelocFundamental() {
        free(m_pointer);
    }

    inline operator T*() const
    {
        return m_pointer;
    }

    inline T* operator->() const
    {
        return m_pointer;
    }

private:
    uintptr_t m_address;
    T * m_pointer;
};

/**
 * @brief Represent a native pointer, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class RelocPtr : private RelocBase
{
public:
    RelocPtr(uintptr_t aOffset)
        : m_address(reinterpret_cast<T*>(aOffset + GetImageBase()))
    {
    }

    inline operator T() const
    {
        return *m_address;
    }

    inline T* GetAddr() const
    {
        return m_address;
    }

private:
    T* m_address;
};

/**
 * @brief Represent a native virtual table, use this to relocate its address at runtime.
 * @tparam T The type.
 */
class RelocVtbl : private RelocBase
{
public:
    RelocVtbl(uintptr_t aOffset)
        : m_address(reinterpret_cast<uintptr_t*>(aOffset + GetImageBase()))
    {
    }

    inline operator uintptr_t*() const
    {
        return m_address;
    }

private:
    uintptr_t* m_address;
};

template<typename T>
class [[deprecated("Use 'RelocFunc' instead.")]] REDfunc : public RelocFunc<T>
{
    using RelocFunc<T>::RelocFunc;
};

template<typename T>
class [[deprecated("Use 'RelocPtr' instead.")]] REDptr : public RelocPtr<T>
{
    using RelocPtr<T>::RelocPtr;
};
} // namespace RED4ext
