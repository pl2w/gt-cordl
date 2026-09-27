#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketFactory_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketFactory.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NativeWebSocket::WebSocket* (*)(::StringW)>(&::NativeWebSocket::WebSocketFactory::CreateInstance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f38f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketFactory*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::NativeWebSocket::WebSocket* NativeWebSocket::WebSocketFactory::CreateInstance(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketFactory*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NativeWebSocket::WebSocket*>(nullptr, ___internal_method, url);
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketFactory::WebSocketFactory()   {
}
