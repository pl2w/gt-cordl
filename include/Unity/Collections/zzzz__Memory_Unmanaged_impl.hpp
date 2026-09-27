#pragma once
// IWYU pragma private; include "Unity/Collections/Memory_Unmanaged.hpp"
#include "Unity/Collections/zzzz__Memory_Unmanaged_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__Memory_Unmanaged_Array_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Memory_Unmanaged.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int32_t, ::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::GlobalNamespace::Memory_Unmanaged::Allocate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf035cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Memory_Unmanaged>(),
                        {"Allocate", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Memory_Unmanaged.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::GlobalNamespace::Memory_Unmanaged::Free)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf035e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Memory_Unmanaged>(),
                        {"Free", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void* GlobalNamespace::Memory_Unmanaged::Allocate(int64_t  size, int32_t  align, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Memory_Unmanaged>(),
                        {"Allocate", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size, align, allocator);
}
inline void GlobalNamespace::Memory_Unmanaged::Free(void*  pointer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Memory_Unmanaged>(),
                        {"Free", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, allocator);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::Memory_Unmanaged::Free(T*  pointer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Memory_Unmanaged>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Memory_Unmanaged::Memory_Unmanaged()   {
}
