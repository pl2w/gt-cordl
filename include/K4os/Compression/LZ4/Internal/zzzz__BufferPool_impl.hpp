#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/BufferPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "K4os/Compression/LZ4/Internal/zzzz__BufferPool_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::BufferPool.ShouldBePooled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::K4os::Compression::LZ4::Internal::BufferPool::ShouldBePooled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cba664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"ShouldBePooled", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::BufferPool.Rent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, bool)>(&::K4os::Compression::LZ4::Internal::BufferPool::Rent)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9cba670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"Rent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::BufferPool.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, bool)>(&::K4os::Compression::LZ4::Internal::BufferPool::Alloc)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9cba7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::BufferPool.IsPooled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::K4os::Compression::LZ4::Internal::BufferPool::IsPooled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cba854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"IsPooled", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::BufferPool.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::K4os::Compression::LZ4::Internal::BufferPool::Free)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cba870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"Free", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool K4os::Compression::LZ4::Internal::BufferPool::ShouldBePooled(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"ShouldBePooled", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, length);
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::Internal::BufferPool::Rent(int32_t  size, bool  zero)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"Rent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, size, zero);
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::Internal::BufferPool::Alloc(int32_t  size, bool  zero)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, size, zero);
}
inline bool K4os::Compression::LZ4::Internal::BufferPool::IsPooled(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"IsPooled", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
inline void K4os::Compression::LZ4::Internal::BufferPool::Free(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::BufferPool*>(),
                        {"Free", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Internal::BufferPool::BufferPool()   {
}
