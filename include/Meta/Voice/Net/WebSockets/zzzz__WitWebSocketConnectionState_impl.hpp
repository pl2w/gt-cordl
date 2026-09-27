#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketConnectionState.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState::WitWebSocketConnectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState::WitWebSocketConnectionState()   {
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  Meta::Voice::Net::WebSockets::WitWebSocketConnectionState::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  Meta::Voice::Net::WebSockets::WitWebSocketConnectionState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  Meta::Voice::Net::WebSockets::WitWebSocketConnectionState::Connected{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  Meta::Voice::Net::WebSockets::WitWebSocketConnectionState::Disconnecting{static_cast<int32_t>(0x3)};
