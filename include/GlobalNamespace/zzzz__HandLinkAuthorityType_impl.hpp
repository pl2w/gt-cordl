#pragma once
// IWYU pragma private; include "GlobalNamespace/HandLinkAuthorityType.hpp"
#include "GlobalNamespace/zzzz__HandLinkAuthorityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandLinkAuthorityType::HandLinkAuthorityType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandLinkAuthorityType::HandLinkAuthorityType()   {
}
constexpr ::GlobalNamespace::HandLinkAuthorityType  GlobalNamespace::HandLinkAuthorityType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandLinkAuthorityType  GlobalNamespace::HandLinkAuthorityType::ButtGrounded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandLinkAuthorityType  GlobalNamespace::HandLinkAuthorityType::ResidualHandGrounded{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HandLinkAuthorityType  GlobalNamespace::HandLinkAuthorityType::HandGrounded{static_cast<int32_t>(0x3)};
