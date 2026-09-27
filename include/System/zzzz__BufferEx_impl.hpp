#pragma once
// IWYU pragma private; include "System/BufferEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__BufferEx_def.hpp"
//  Writing Method size for method: ::System::BufferEx.ZeroMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint32_t)>(&::System::BufferEx::ZeroMemory)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb993c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::BufferEx*>(),
                        {"ZeroMemory", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BufferEx.Memcpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::BufferEx::Memcpy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb993c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::BufferEx*>(),
                        {"Memcpy", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::BufferEx::ZeroMemory(uint8_t*  dest, uint32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::BufferEx*>(),
                        {"ZeroMemory", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, len);
}
inline void System::BufferEx::Memcpy(uint8_t*  dest, uint8_t*  src, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::BufferEx*>(),
                        {"Memcpy", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, len);
}
// Ctor Parameters []
constexpr ::System::BufferEx::BufferEx()   {
}
