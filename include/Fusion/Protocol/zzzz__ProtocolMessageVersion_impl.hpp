#pragma once
// IWYU pragma private; include "Fusion/Protocol/ProtocolMessageVersion.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::ProtocolMessageVersion::ProtocolMessageVersion(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::ProtocolMessageVersion::ProtocolMessageVersion()   {
}
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::Invalid{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_0_0{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_1_0{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_2_0{static_cast<uint8_t>(0x3u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_2_1{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_2_2{static_cast<uint8_t>(0x5u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_2_3{static_cast<uint8_t>(0x6u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_3_0{static_cast<uint8_t>(0x7u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_4_0{static_cast<uint8_t>(0x8u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_5_0{static_cast<uint8_t>(0x9u)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::V1_6_0{static_cast<uint8_t>(0xau)};
constexpr ::Fusion::Protocol::ProtocolMessageVersion  Fusion::Protocol::ProtocolMessageVersion::LATEST{static_cast<uint8_t>(0xau)};
