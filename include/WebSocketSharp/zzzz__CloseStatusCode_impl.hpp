#pragma once
// IWYU pragma private; include "WebSocketSharp/CloseStatusCode.hpp"
#include "WebSocketSharp/zzzz__CloseStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::CloseStatusCode::CloseStatusCode(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::CloseStatusCode::CloseStatusCode()   {
}
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::Normal{static_cast<uint16_t>(0x3e8u)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::Away{static_cast<uint16_t>(0x3e9u)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::ProtocolError{static_cast<uint16_t>(0x3eau)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::UnsupportedData{static_cast<uint16_t>(0x3ebu)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::Undefined{static_cast<uint16_t>(0x3ecu)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::NoStatus{static_cast<uint16_t>(0x3edu)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::Abnormal{static_cast<uint16_t>(0x3eeu)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::InvalidData{static_cast<uint16_t>(0x3efu)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::PolicyViolation{static_cast<uint16_t>(0x3f0u)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::TooBig{static_cast<uint16_t>(0x3f1u)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::MandatoryExtension{static_cast<uint16_t>(0x3f2u)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::ServerError{static_cast<uint16_t>(0x3f3u)};
constexpr ::WebSocketSharp::CloseStatusCode  WebSocketSharp::CloseStatusCode::TlsHandshakeFailure{static_cast<uint16_t>(0x3f7u)};
