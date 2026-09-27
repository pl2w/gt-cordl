#pragma once
// IWYU pragma private; include "GlobalNamespace/ActiveWebSocket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ActiveWebSocket_def.hpp"
#include "GlobalNamespace/zzzz__MothershipOpenWebSocketEventArgs_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ActiveWebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActiveWebSocket::*)()>(&::GlobalNamespace::ActiveWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c2f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActiveWebSocket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NativeWebSocket::WebSocket*& GlobalNamespace::ActiveWebSocket::__cordl_internal_get_websocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___websocket;
}
constexpr ::NativeWebSocket::WebSocket* const& GlobalNamespace::ActiveWebSocket::__cordl_internal_get_websocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___websocket;
}
constexpr void GlobalNamespace::ActiveWebSocket::__cordl_internal_set_websocket(::NativeWebSocket::WebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___websocket = value;
}
constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs*& GlobalNamespace::ActiveWebSocket::__cordl_internal_get_requestData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestData;
}
constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs* const& GlobalNamespace::ActiveWebSocket::__cordl_internal_get_requestData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestData;
}
constexpr void GlobalNamespace::ActiveWebSocket::__cordl_internal_set_requestData(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestData = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*& GlobalNamespace::ActiveWebSocket::__cordl_internal_get_resetSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetSocket;
}
constexpr ::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>* const& GlobalNamespace::ActiveWebSocket::__cordl_internal_get_resetSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetSocket;
}
constexpr void GlobalNamespace::ActiveWebSocket::__cordl_internal_set_resetSocket(::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetSocket = value;
}
inline void GlobalNamespace::ActiveWebSocket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActiveWebSocket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ActiveWebSocket* GlobalNamespace::ActiveWebSocket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ActiveWebSocket*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActiveWebSocket::ActiveWebSocket()   {
}
