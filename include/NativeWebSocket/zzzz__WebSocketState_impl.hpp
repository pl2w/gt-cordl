#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketState.hpp"
#include "NativeWebSocket/zzzz__WebSocketState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::NativeWebSocket::WebSocketState::WebSocketState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketState::WebSocketState()   {
}
constexpr ::NativeWebSocket::WebSocketState  NativeWebSocket::WebSocketState::Connecting{static_cast<int32_t>(0x0)};
constexpr ::NativeWebSocket::WebSocketState  NativeWebSocket::WebSocketState::Open{static_cast<int32_t>(0x1)};
constexpr ::NativeWebSocket::WebSocketState  NativeWebSocket::WebSocketState::Closing{static_cast<int32_t>(0x2)};
constexpr ::NativeWebSocket::WebSocketState  NativeWebSocket::WebSocketState::Closed{static_cast<int32_t>(0x3)};
