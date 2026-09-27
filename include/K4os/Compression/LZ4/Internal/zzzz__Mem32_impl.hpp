#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/Mem32.hpp"
#include "K4os/Compression/LZ4/Internal/zzzz__Mem_impl.hpp"
#include "K4os/Compression/LZ4/Internal/zzzz__Mem32_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem32.PeekW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*)>(&::K4os::Compression::LZ4::Internal::Mem32::PeekW)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cbb558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"PeekW", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem32.Copy16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Internal::Mem32::Copy16)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cbb5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"Copy16", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem32.Copy18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Internal::Mem32::Copy18)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cbb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"Copy18", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem32.WildCopy8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, void*)>(&::K4os::Compression::LZ4::Internal::Mem32::WildCopy8)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9cbb7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"WildCopy8", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t K4os::Compression::LZ4::Internal::Mem32::PeekW(void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"PeekW", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, p);
}
inline void K4os::Compression::LZ4::Internal::Mem32::Copy16(uint8_t*  target, uint8_t*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"Copy16", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source);
}
inline void K4os::Compression::LZ4::Internal::Mem32::Copy18(uint8_t*  target, uint8_t*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"Copy18", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source);
}
inline void K4os::Compression::LZ4::Internal::Mem32::WildCopy8(uint8_t*  target, uint8_t*  source, void*  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem32*>(),
                        {"WildCopy8", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source, limit);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Internal::Mem32::Mem32()   {
}
