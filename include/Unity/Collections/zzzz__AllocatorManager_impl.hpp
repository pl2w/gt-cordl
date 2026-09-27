#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array32768_1_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_TableEntry_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array16_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array256_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array32768_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array4096_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Block_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Range_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_TableEntry_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AllocatorManager_AllocatorHandle, void*)>(&::Unity::Collections::AllocatorManager::Free)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf03120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"Free", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Unity::Collections::AllocatorManager::CheckDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf031a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"CheckDelegate", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.UseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Collections::AllocatorManager::UseDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf031b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"UseDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.allocate_block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::allocate_block)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf03200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"allocate_block", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.forward_mono_allocate_block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::AllocatorManager_Block>, ::by_ref<int32_t>)>(&::Unity::Collections::AllocatorManager::forward_mono_allocate_block)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaf03330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"forward_mono_allocate_block", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.LegacyOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (*)(::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager::LegacyOf)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf03444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"LegacyOf", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.TryLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::TryLegacy)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xaf03458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"TryLegacy", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Try
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::Try)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf03608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"Try", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager::setStaticF_Invalid(::GlobalNamespace::AllocatorManager_AllocatorHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "Invalid", ::Unity::Collections::AllocatorManager*>(std::forward<::GlobalNamespace::AllocatorManager_AllocatorHandle>(value));
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "Invalid", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_None(::GlobalNamespace::AllocatorManager_AllocatorHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "None", ::Unity::Collections::AllocatorManager*>(std::forward<::GlobalNamespace::AllocatorManager_AllocatorHandle>(value));
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_None()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "None", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_Temp(::GlobalNamespace::AllocatorManager_AllocatorHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "Temp", ::Unity::Collections::AllocatorManager*>(std::forward<::GlobalNamespace::AllocatorManager_AllocatorHandle>(value));
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Temp()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "Temp", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_TempJob(::GlobalNamespace::AllocatorManager_AllocatorHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "TempJob", ::Unity::Collections::AllocatorManager*>(std::forward<::GlobalNamespace::AllocatorManager_AllocatorHandle>(value));
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_TempJob()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "TempJob", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_Persistent(::GlobalNamespace::AllocatorManager_AllocatorHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "Persistent", ::Unity::Collections::AllocatorManager*>(std::forward<::GlobalNamespace::AllocatorManager_AllocatorHandle>(value));
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Persistent()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "Persistent", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_AudioKernel(::GlobalNamespace::AllocatorManager_AllocatorHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "AudioKernel", ::Unity::Collections::AllocatorManager*>(std::forward<::GlobalNamespace::AllocatorManager_AllocatorHandle>(value));
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_AudioKernel()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AllocatorManager_AllocatorHandle, "AudioKernel", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_NumGlobalScratchAllocators(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "NumGlobalScratchAllocators", ::Unity::Collections::AllocatorManager*>(std::forward<uint16_t>(value));
}
inline uint16_t Unity::Collections::AllocatorManager::getStaticF_NumGlobalScratchAllocators()  {
return ::cordl_internals::getStaticField<uint16_t, "NumGlobalScratchAllocators", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_MaxNumGlobalAllocators(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "MaxNumGlobalAllocators", ::Unity::Collections::AllocatorManager*>(std::forward<uint16_t>(value));
}
inline uint16_t Unity::Collections::AllocatorManager::getStaticF_MaxNumGlobalAllocators()  {
return ::cordl_internals::getStaticField<uint16_t, "MaxNumGlobalAllocators", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_GlobalAllocatorBaseIndex(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "GlobalAllocatorBaseIndex", ::Unity::Collections::AllocatorManager*>(std::forward<uint32_t>(value));
}
inline uint32_t Unity::Collections::AllocatorManager::getStaticF_GlobalAllocatorBaseIndex()  {
return ::cordl_internals::getStaticField<uint32_t, "GlobalAllocatorBaseIndex", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_FirstGlobalScratchpadAllocatorIndex(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "FirstGlobalScratchpadAllocatorIndex", ::Unity::Collections::AllocatorManager*>(std::forward<uint32_t>(value));
}
inline uint32_t Unity::Collections::AllocatorManager::getStaticF_FirstGlobalScratchpadAllocatorIndex()  {
return ::cordl_internals::getStaticField<uint32_t, "FirstGlobalScratchpadAllocatorIndex", ::Unity::Collections::AllocatorManager*>();
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::AllocatorManager_Block Unity::Collections::AllocatorManager::AllocateBlock(::by_ref<T>  t, int32_t  sizeOf, int32_t  alignOf, int32_t  items)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"AllocateBlock", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AllocatorManager_Block>(nullptr, ___internal_method, t, sizeOf, alignOf, items);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Unity::Collections::AllocatorManager::Allocate(::by_ref<T>  t, int32_t  sizeOf, int32_t  alignOf, int32_t  items)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"Allocate", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, t, sizeOf, alignOf, items);
}
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline U* Unity::Collections::AllocatorManager::Allocate(::by_ref<T>  t, U  u, int32_t  items)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"Allocate", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<U>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<U*>(nullptr, ___internal_method, t, u, items);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::AllocatorManager::FreeBlock(::by_ref<T>  t, ::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"FreeBlock", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, block);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::AllocatorManager::Free(::by_ref<T>  t, void*  pointer, int32_t  sizeOf, int32_t  alignOf, int32_t  items)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, pointer, sizeOf, alignOf, items);
}
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline void Unity::Collections::AllocatorManager::Free(::by_ref<T>  t, U*  pointer, int32_t  items)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"Free", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<U*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, pointer, items);
}
inline void Unity::Collections::AllocatorManager::Free(::GlobalNamespace::AllocatorManager_AllocatorHandle  handle, void*  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"Free", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, pointer);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::AllocatorManager::Free(::GlobalNamespace::AllocatorManager_AllocatorHandle  handle, T*  pointer, int32_t  items)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, pointer, items);
}
inline void Unity::Collections::AllocatorManager::CheckDelegate(::by_ref<bool>  useDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"CheckDelegate", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useDelegate);
}
inline bool Unity::Collections::AllocatorManager::UseDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"UseDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager::allocate_block(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"allocate_block", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block);
}
inline void Unity::Collections::AllocatorManager::forward_mono_allocate_block(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block, ::by_ref<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"forward_mono_allocate_block", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, error);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager::LegacyOf(::GlobalNamespace::AllocatorManager_AllocatorHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"LegacyOf", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Collections::AllocatorManager::TryLegacy(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"TryLegacy", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager::Try(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                        {"Try", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager::AllocatorManager()   {
}
inline void Unity::Collections::AllocatorManager_Managed::setStaticF_TryFunctionDelegates(::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunctionDelegates", ::Unity::Collections::AllocatorManager_Managed*>(std::forward<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>>(value));
}
inline ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*> Unity::Collections::AllocatorManager_Managed::getStaticF_TryFunctionDelegates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunctionDelegates", ::Unity::Collections::AllocatorManager_Managed*>();
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_Managed::AllocatorManager_Managed()   {
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_SharedStatics::AllocatorManager_SharedStatics()   {
}
inline void Unity::Collections::SharedStatics_AllocatorManager_TableEntry::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>>, "Ref", ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>(std::forward<::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>> Unity::Collections::SharedStatics_AllocatorManager_TableEntry::getStaticF_Ref()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>>, "Ref", ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>();
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::SharedStatics_AllocatorManager_TableEntry()   {
}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.Try
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_IAllocator::*)(::by_ref<::GlobalNamespace::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_IAllocator::Try)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(),
                    {::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_IAllocator::*)()>(&::Unity::Collections::AllocatorManager_IAllocator::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(),
                    {::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 1}
                ));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::AllocatorManager_IAllocator::Try(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, block);
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_IAllocator::get_Handle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AllocatorManager_AllocatorHandle>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Collections::AllocatorManager_IAllocator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_IAllocator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_TryFunction::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Collections::AllocatorManager_TryFunction::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaf037a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_TryFunction::*)(::System::IntPtr, ::by_ref<::GlobalNamespace::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_TryFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf03848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(),
                    {::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_TryFunction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Unity::Collections::AllocatorManager_TryFunction::Invoke(::System::IntPtr  allocatorState, ::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allocatorState, block);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_TryFunction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::AllocatorManager_TryFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_TryFunction::AllocatorManager_TryFunction()   {
}
