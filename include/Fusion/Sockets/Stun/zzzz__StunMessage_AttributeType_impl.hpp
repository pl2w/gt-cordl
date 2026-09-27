#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage_AttributeType.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_AttributeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StunMessage_AttributeType::StunMessage_AttributeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StunMessage_AttributeType::StunMessage_AttributeType()   {
}
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::MappedAddress{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::Username{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::MessageIntegrity{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::ErrorCode{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::UnknownAttribute{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::Realm{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::Nonce{static_cast<int32_t>(0x15)};
constexpr ::GlobalNamespace::StunMessage_AttributeType  GlobalNamespace::StunMessage_AttributeType::XorMappedAddress{static_cast<int32_t>(0x20)};
