#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketHelpers_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketHelpers.ParseCloseCodeEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Net::NativeWebSocket::WebSocketCloseCode (*)(int32_t)>(&::Meta::Net::NativeWebSocket::WebSocketHelpers::ParseCloseCodeEnum)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9e011bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketHelpers*>(),
                        {"ParseCloseCodeEnum", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Meta::Net::NativeWebSocket::WebSocketCloseCode Meta::Net::NativeWebSocket::WebSocketHelpers::ParseCloseCodeEnum(int32_t  closeCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketHelpers*>(),
                        {"ParseCloseCodeEnum", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Net::NativeWebSocket::WebSocketCloseCode>(nullptr, ___internal_method, closeCode);
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketHelpers::WebSocketHelpers()   {
}
