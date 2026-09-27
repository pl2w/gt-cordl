#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectFailedReason.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConnectFailedReason::NetConnectFailedReason(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConnectFailedReason::NetConnectFailedReason()   {
}
constexpr ::Fusion::Sockets::NetConnectFailedReason  Fusion::Sockets::NetConnectFailedReason::Timeout{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Sockets::NetConnectFailedReason  Fusion::Sockets::NetConnectFailedReason::ServerFull{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Sockets::NetConnectFailedReason  Fusion::Sockets::NetConnectFailedReason::ServerRefused{static_cast<uint8_t>(0x3u)};
