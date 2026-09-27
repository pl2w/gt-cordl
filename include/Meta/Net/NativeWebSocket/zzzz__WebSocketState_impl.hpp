#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketState.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Net::NativeWebSocket::WebSocketState::WebSocketState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketState::WebSocketState()   {
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketState  Meta::Net::NativeWebSocket::WebSocketState::Connecting{static_cast<int32_t>(0x0)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketState  Meta::Net::NativeWebSocket::WebSocketState::Open{static_cast<int32_t>(0x1)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketState  Meta::Net::NativeWebSocket::WebSocketState::Closing{static_cast<int32_t>(0x2)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketState  Meta::Net::NativeWebSocket::WebSocketState::Closed{static_cast<int32_t>(0x3)};
