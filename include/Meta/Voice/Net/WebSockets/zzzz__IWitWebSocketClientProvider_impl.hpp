#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWitWebSocketClientProvider.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClientProvider_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClient_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider.get_WebSocketClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClient* (::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider::get_WebSocketClient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider::get_WebSocketClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(this, ___internal_method);
}
