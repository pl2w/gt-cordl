#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocketState.hpp"
#include "WebSocketSharp/zzzz__WebSocketState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::WebSocketState::WebSocketState(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketState::WebSocketState()   {
}
constexpr ::WebSocketSharp::WebSocketState  WebSocketSharp::WebSocketState::Connecting{static_cast<uint16_t>(0x0u)};
constexpr ::WebSocketSharp::WebSocketState  WebSocketSharp::WebSocketState::Open{static_cast<uint16_t>(0x1u)};
constexpr ::WebSocketSharp::WebSocketState  WebSocketSharp::WebSocketState::Closing{static_cast<uint16_t>(0x2u)};
constexpr ::WebSocketSharp::WebSocketState  WebSocketSharp::WebSocketState::Closed{static_cast<uint16_t>(0x3u)};
