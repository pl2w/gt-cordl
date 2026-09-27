#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketCloseCode.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode::WebSocketCloseCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode::WebSocketCloseCode()   {
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::NotSet{static_cast<int32_t>(0x0)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::Normal{static_cast<int32_t>(0x3e8)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::Away{static_cast<int32_t>(0x3e9)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::ProtocolError{static_cast<int32_t>(0x3ea)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::UnsupportedData{static_cast<int32_t>(0x3eb)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::Undefined{static_cast<int32_t>(0x3ec)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::NoStatus{static_cast<int32_t>(0x3ed)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::Abnormal{static_cast<int32_t>(0x3ee)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::InvalidData{static_cast<int32_t>(0x3ef)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::PolicyViolation{static_cast<int32_t>(0x3f0)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::TooBig{static_cast<int32_t>(0x3f1)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::MandatoryExtension{static_cast<int32_t>(0x3f2)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::ServerError{static_cast<int32_t>(0x3f3)};
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseCode  Meta::Net::NativeWebSocket::WebSocketCloseCode::TlsHandshakeFailure{static_cast<int32_t>(0x3f7)};
