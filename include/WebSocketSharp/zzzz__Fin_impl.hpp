#pragma once
// IWYU pragma private; include "WebSocketSharp/Fin.hpp"
#include "WebSocketSharp/zzzz__Fin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::Fin::Fin(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Fin::Fin()   {
}
constexpr ::WebSocketSharp::Fin  WebSocketSharp::Fin::More{static_cast<uint8_t>(0x0u)};
constexpr ::WebSocketSharp::Fin  WebSocketSharp::Fin::Final{static_cast<uint8_t>(0x1u)};
