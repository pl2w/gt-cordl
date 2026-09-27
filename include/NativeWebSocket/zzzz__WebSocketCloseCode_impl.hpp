#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketCloseCode.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::NativeWebSocket::WebSocketCloseCode::WebSocketCloseCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketCloseCode::WebSocketCloseCode()   {
}
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::NotSet{static_cast<int32_t>(0x0)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::Normal{static_cast<int32_t>(0x3e8)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::Away{static_cast<int32_t>(0x3e9)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::ProtocolError{static_cast<int32_t>(0x3ea)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::UnsupportedData{static_cast<int32_t>(0x3eb)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::Undefined{static_cast<int32_t>(0x3ec)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::NoStatus{static_cast<int32_t>(0x3ed)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::Abnormal{static_cast<int32_t>(0x3ee)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::InvalidData{static_cast<int32_t>(0x3ef)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::PolicyViolation{static_cast<int32_t>(0x3f0)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::TooBig{static_cast<int32_t>(0x3f1)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::MandatoryExtension{static_cast<int32_t>(0x3f2)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::ServerError{static_cast<int32_t>(0x3f3)};
constexpr ::NativeWebSocket::WebSocketCloseCode  NativeWebSocket::WebSocketCloseCode::TlsHandshakeFailure{static_cast<int32_t>(0x3f7)};
