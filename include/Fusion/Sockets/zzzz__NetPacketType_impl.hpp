#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPacketType.hpp"
#include "Fusion/Sockets/zzzz__NetPacketType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetPacketType::NetPacketType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetPacketType::NetPacketType()   {
}
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::Command{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::UnreliableData{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::NotifyData{static_cast<uint8_t>(0x3u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::NotifyAcks{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::Unconnected{static_cast<uint8_t>(0x5u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::MtuDiscoveryReq{static_cast<uint8_t>(0x6u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::MtuDiscoveryRep{static_cast<uint8_t>(0x7u)};
constexpr ::Fusion::Sockets::NetPacketType  Fusion::Sockets::NetPacketType::NotifyReliableData{static_cast<uint8_t>(0x8u)};
