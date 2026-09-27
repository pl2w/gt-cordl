#pragma once
// IWYU pragma private; include "WebSocketSharp/CompressionMethod.hpp"
#include "WebSocketSharp/zzzz__CompressionMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::CompressionMethod::CompressionMethod(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::CompressionMethod::CompressionMethod()   {
}
constexpr ::WebSocketSharp::CompressionMethod  WebSocketSharp::CompressionMethod::None{static_cast<uint8_t>(0x0u)};
constexpr ::WebSocketSharp::CompressionMethod  WebSocketSharp::CompressionMethod::Deflate{static_cast<uint8_t>(0x1u)};
