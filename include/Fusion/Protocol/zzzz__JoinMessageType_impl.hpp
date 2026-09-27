#pragma once
// IWYU pragma private; include "Fusion/Protocol/JoinMessageType.hpp"
#include "Fusion/Protocol/zzzz__JoinMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::JoinMessageType::JoinMessageType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::JoinMessageType::JoinMessageType()   {
}
constexpr ::Fusion::Protocol::JoinMessageType  Fusion::Protocol::JoinMessageType::Request{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::JoinMessageType  Fusion::Protocol::JoinMessageType::Confirmation{static_cast<uint8_t>(0x2u)};
