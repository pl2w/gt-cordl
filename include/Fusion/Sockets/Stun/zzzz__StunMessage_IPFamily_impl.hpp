#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage_IPFamily.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_IPFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StunMessage_IPFamily::StunMessage_IPFamily(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StunMessage_IPFamily::StunMessage_IPFamily()   {
}
constexpr ::GlobalNamespace::StunMessage_IPFamily  GlobalNamespace::StunMessage_IPFamily::IPv4{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StunMessage_IPFamily  GlobalNamespace::StunMessage_IPFamily::IPv6{static_cast<int32_t>(0x2)};
