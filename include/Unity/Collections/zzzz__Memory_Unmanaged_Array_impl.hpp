#pragma once
// IWYU pragma private; include "Unity/Collections/Memory_Unmanaged_Array.hpp"
#include "Unity/Collections/zzzz__Memory_Unmanaged_Array_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Unmanaged_Memory_Array.IsCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::GlobalNamespace::Unmanaged_Memory_Array::IsCustom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf06ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                        {"IsCustom", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Unmanaged_Memory_Array.CustomResize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int64_t, int64_t, ::GlobalNamespace::AllocatorManager_AllocatorHandle, int64_t, int32_t)>(&::GlobalNamespace::Unmanaged_Memory_Array::CustomResize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaf06bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                        {"CustomResize", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Unmanaged_Memory_Array.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int64_t, int64_t, ::GlobalNamespace::AllocatorManager_AllocatorHandle, int64_t, int32_t)>(&::GlobalNamespace::Unmanaged_Memory_Array::Resize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf06ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                        {"Resize", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Unmanaged_Memory_Array::IsCustom(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                        {"IsCustom", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator);
}
inline void* GlobalNamespace::Unmanaged_Memory_Array::CustomResize(void*  oldPointer, int64_t  oldCount, int64_t  newCount, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator, int64_t  size, int32_t  align)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                        {"CustomResize", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, oldPointer, oldCount, newCount, allocator, size, align);
}
inline void* GlobalNamespace::Unmanaged_Memory_Array::Resize(void*  oldPointer, int64_t  oldCount, int64_t  newCount, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator, int64_t  size, int32_t  align)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                        {"Resize", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, oldPointer, oldCount, newCount, allocator, size, align);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* GlobalNamespace::Unmanaged_Memory_Array::Resize(T*  oldPointer, int64_t  oldCount, int64_t  newCount, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Unmanaged_Memory_Array>(),
                    {"Resize", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, oldPointer, oldCount, newCount, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Unmanaged_Memory_Array::Unmanaged_Memory_Array()   {
}
