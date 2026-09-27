#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket_WebSocketReceiveResultGetter.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_WebSocketReceiveResultGetter_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketReceiveResult* (::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter::*)(int32_t, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>, ::StringW)>(&::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter::GetResult)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xace86b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter>(),
                        {"GetResult", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::WebSockets::WebSocketReceiveResult* GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter::GetResult(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter>(),
                        {"GetResult", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketReceiveResult*>(*this, ___internal_method, count, messageType, endOfMessage, closeStatus, closeDescription);
}
/// @brief Convert operator to "::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
constexpr  GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter::operator ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*()  {
return static_cast<::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
constexpr ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>* GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter::i___System__Net__WebSockets__ManagedWebSocket_IWebSocketReceiveResultGetter_1___System__Net__WebSockets__WebSocketReceiveResult__()  {
return static_cast<::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter::ManagedWebSocket_WebSocketReceiveResultGetter()   {
}
