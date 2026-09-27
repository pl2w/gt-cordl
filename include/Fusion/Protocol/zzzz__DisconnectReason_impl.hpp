#pragma once
// IWYU pragma private; include "Fusion/Protocol/DisconnectReason.hpp"
#include "Fusion/Protocol/zzzz__DisconnectReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::DisconnectReason::DisconnectReason(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::DisconnectReason::DisconnectReason()   {
}
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::None{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::ServerLogic{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::InvalidEventCode{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::InvalidJoinMsgType{static_cast<uint8_t>(0x3u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::InvalidJoinGameMode{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::IncompatibleConfiguration{static_cast<uint8_t>(0x5u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::ServerAlreadyInRoom{static_cast<uint8_t>(0x6u)};
constexpr ::Fusion::Protocol::DisconnectReason  Fusion::Protocol::DisconnectReason::Error{static_cast<uint8_t>(0x7u)};
