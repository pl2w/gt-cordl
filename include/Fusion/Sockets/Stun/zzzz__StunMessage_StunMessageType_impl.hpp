#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage_StunMessageType.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_StunMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StunMessage_StunMessageType::StunMessage_StunMessageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StunMessage_StunMessageType::StunMessage_StunMessageType()   {
}
constexpr ::GlobalNamespace::StunMessage_StunMessageType  GlobalNamespace::StunMessage_StunMessageType::BindingRequest{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StunMessage_StunMessageType  GlobalNamespace::StunMessage_StunMessageType::BindingResponse{static_cast<int32_t>(0x101)};
constexpr ::GlobalNamespace::StunMessage_StunMessageType  GlobalNamespace::StunMessage_StunMessageType::BindingErrorResponse{static_cast<int32_t>(0x111)};
constexpr ::GlobalNamespace::StunMessage_StunMessageType  GlobalNamespace::StunMessage_StunMessageType::SharedSecretRequest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StunMessage_StunMessageType  GlobalNamespace::StunMessage_StunMessageType::SharedSecretResponse{static_cast<int32_t>(0x102)};
constexpr ::GlobalNamespace::StunMessage_StunMessageType  GlobalNamespace::StunMessage_StunMessageType::SharedSecretErrorResponse{static_cast<int32_t>(0x112)};
