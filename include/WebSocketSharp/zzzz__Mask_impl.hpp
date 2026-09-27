#pragma once
// IWYU pragma private; include "WebSocketSharp/Mask.hpp"
#include "WebSocketSharp/zzzz__Mask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::Mask::Mask(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Mask::Mask()   {
}
constexpr ::WebSocketSharp::Mask  WebSocketSharp::Mask::Off{static_cast<uint8_t>(0x0u)};
constexpr ::WebSocketSharp::Mask  WebSocketSharp::Mask::On{static_cast<uint8_t>(0x1u)};
