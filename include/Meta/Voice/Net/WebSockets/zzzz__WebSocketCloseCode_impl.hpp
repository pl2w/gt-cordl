#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WebSocketCloseCode.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WebSocketCloseCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode::WebSocketCloseCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode::WebSocketCloseCode()   {
}
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::NotSet{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::Normal{static_cast<int32_t>(0x3e8)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::Away{static_cast<int32_t>(0x3e9)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::ProtocolError{static_cast<int32_t>(0x3ea)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::UnsupportedData{static_cast<int32_t>(0x3eb)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::Undefined{static_cast<int32_t>(0x3ec)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::NoStatus{static_cast<int32_t>(0x3ed)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::Abnormal{static_cast<int32_t>(0x3ee)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::InvalidData{static_cast<int32_t>(0x3ef)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::PolicyViolation{static_cast<int32_t>(0x3f0)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::TooBig{static_cast<int32_t>(0x3f1)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::MandatoryExtension{static_cast<int32_t>(0x3f2)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::ServerError{static_cast<int32_t>(0x3f3)};
constexpr ::Meta::Voice::Net::WebSockets::WebSocketCloseCode  Meta::Voice::Net::WebSockets::WebSocketCloseCode::TlsHandshakeFailure{static_cast<int32_t>(0x3f7)};
