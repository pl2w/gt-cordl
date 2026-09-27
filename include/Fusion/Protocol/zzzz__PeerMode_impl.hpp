#pragma once
// IWYU pragma private; include "Fusion/Protocol/PeerMode.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::PeerMode::PeerMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::PeerMode::PeerMode()   {
}
constexpr ::Fusion::Protocol::PeerMode  Fusion::Protocol::PeerMode::None{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Protocol::PeerMode  Fusion::Protocol::PeerMode::Server{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::PeerMode  Fusion::Protocol::PeerMode::Client{static_cast<uint8_t>(0x2u)};
