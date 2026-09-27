#pragma once
// IWYU pragma private; include "WebSocketSharp/Rsv.hpp"
#include "WebSocketSharp/zzzz__Rsv_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::Rsv::Rsv(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Rsv::Rsv()   {
}
constexpr ::WebSocketSharp::Rsv  WebSocketSharp::Rsv::Off{static_cast<uint8_t>(0x0u)};
constexpr ::WebSocketSharp::Rsv  WebSocketSharp::Rsv::On{static_cast<uint8_t>(0x1u)};
