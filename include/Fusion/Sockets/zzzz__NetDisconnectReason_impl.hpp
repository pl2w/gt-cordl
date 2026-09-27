#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetDisconnectReason.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetDisconnectReason::NetDisconnectReason(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetDisconnectReason::NetDisconnectReason()   {
}
constexpr ::Fusion::Sockets::NetDisconnectReason  Fusion::Sockets::NetDisconnectReason::Unknown{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Sockets::NetDisconnectReason  Fusion::Sockets::NetDisconnectReason::Timeout{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Sockets::NetDisconnectReason  Fusion::Sockets::NetDisconnectReason::Requested{static_cast<uint8_t>(0x3u)};
constexpr ::Fusion::Sockets::NetDisconnectReason  Fusion::Sockets::NetDisconnectReason::SequenceOutOfBounds{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Sockets::NetDisconnectReason  Fusion::Sockets::NetDisconnectReason::SendWindowFull{static_cast<uint8_t>(0x5u)};
constexpr ::Fusion::Sockets::NetDisconnectReason  Fusion::Sockets::NetDisconnectReason::ByRemote{static_cast<uint8_t>(0x6u)};
