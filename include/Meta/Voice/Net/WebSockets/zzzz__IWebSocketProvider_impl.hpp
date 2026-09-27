#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWebSocketProvider.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWebSocketProvider_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWebSocket_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocketProvider.GetWebSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWebSocket* (::Meta::Voice::Net::WebSockets::IWebSocketProvider::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Voice::Net::WebSockets::IWebSocketProvider::GetWebSocket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocketProvider*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocketProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Net::WebSockets::IWebSocket* Meta::Voice::Net::WebSockets::IWebSocketProvider::GetWebSocket(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocketProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWebSocket*>(this, ___internal_method, url, headers);
}
