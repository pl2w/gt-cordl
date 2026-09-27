#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/NATType.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::Stun::NATType::NATType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::NATType::NATType()   {
}
constexpr ::Fusion::Sockets::Stun::NATType  Fusion::Sockets::Stun::NATType::Invalid{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Sockets::Stun::NATType  Fusion::Sockets::Stun::NATType::UdpBlocked{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Sockets::Stun::NATType  Fusion::Sockets::Stun::NATType::OpenInternet{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Sockets::Stun::NATType  Fusion::Sockets::Stun::NATType::FullCone{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Sockets::Stun::NATType  Fusion::Sockets::Stun::NATType::Symmetric{static_cast<uint8_t>(0x8u)};
