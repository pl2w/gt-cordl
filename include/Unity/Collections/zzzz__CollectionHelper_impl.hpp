#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__CollectionHelper_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__CollectionHelper_DummyJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Log2Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::CollectionHelper::Log2Floor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf03b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"Log2Floor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Align
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Unity::Collections::CollectionHelper::Align)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf03bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"Align", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.IsAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, int32_t)>(&::Unity::Collections::CollectionHelper::IsAligned)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf03be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"IsAligned", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*, int32_t)>(&::Unity::Collections::CollectionHelper::Hash)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf03bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"Hash", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.ShouldDeallocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::CollectionHelper::ShouldDeallocate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf03c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"ShouldDeallocate", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.AssumePositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::CollectionHelper::AssumePositive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf03c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"AssumePositive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::CollectionHelper::Log2Floor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"Log2Floor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::CollectionHelper::Align(int32_t  size, int32_t  alignmentPowerOfTwo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"Align", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size, alignmentPowerOfTwo);
}
inline bool Unity::Collections::CollectionHelper::IsAligned(uint64_t  offset, int32_t  alignmentPowerOfTwo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"IsAligned", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offset, alignmentPowerOfTwo);
}
inline uint32_t Unity::Collections::CollectionHelper::Hash(void*  ptr, int32_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"Hash", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ptr, bytes);
}
inline bool Unity::Collections::CollectionHelper::ShouldDeallocate(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"ShouldDeallocate", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator);
}
inline int32_t Unity::Collections::CollectionHelper::AssumePositive(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                        {"AssumePositive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::CollectionHelper::CollectionHelper()   {
}
