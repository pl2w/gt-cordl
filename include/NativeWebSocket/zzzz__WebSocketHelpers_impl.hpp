#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketHelpers_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketHelpers.ParseCloseCodeEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NativeWebSocket::WebSocketCloseCode (*)(int32_t)>(&::NativeWebSocket::WebSocketHelpers::ParseCloseCodeEnum)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f34c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketHelpers*>(),
                        {"ParseCloseCodeEnum", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketHelpers.GetErrorMessageFromCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NativeWebSocket::WebSocketException* (*)(int32_t, ::System::Exception*)>(&::NativeWebSocket::WebSocketHelpers::GetErrorMessageFromCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f34d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketHelpers*>(),
                        {"GetErrorMessageFromCode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::NativeWebSocket::WebSocketCloseCode NativeWebSocket::WebSocketHelpers::ParseCloseCodeEnum(int32_t  closeCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketHelpers*>(),
                        {"ParseCloseCodeEnum", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NativeWebSocket::WebSocketCloseCode>(nullptr, ___internal_method, closeCode);
}
inline ::NativeWebSocket::WebSocketException* NativeWebSocket::WebSocketHelpers::GetErrorMessageFromCode(int32_t  errorCode, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketHelpers*>(),
                        {"GetErrorMessageFromCode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NativeWebSocket::WebSocketException*>(nullptr, ___internal_method, errorCode, inner);
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketHelpers::WebSocketHelpers()   {
}
