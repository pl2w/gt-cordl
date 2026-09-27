#pragma once
// IWYU pragma private; include "WebSocketSharp/Opcode.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::Opcode::Opcode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Opcode::Opcode()   {
}
constexpr ::WebSocketSharp::Opcode  WebSocketSharp::Opcode::Cont{static_cast<uint8_t>(0x0u)};
constexpr ::WebSocketSharp::Opcode  WebSocketSharp::Opcode::Text{static_cast<uint8_t>(0x1u)};
constexpr ::WebSocketSharp::Opcode  WebSocketSharp::Opcode::Binary{static_cast<uint8_t>(0x2u)};
constexpr ::WebSocketSharp::Opcode  WebSocketSharp::Opcode::Close{static_cast<uint8_t>(0x8u)};
constexpr ::WebSocketSharp::Opcode  WebSocketSharp::Opcode::Ping{static_cast<uint8_t>(0x9u)};
constexpr ::WebSocketSharp::Opcode  WebSocketSharp::Opcode::Pong{static_cast<uint8_t>(0xau)};
