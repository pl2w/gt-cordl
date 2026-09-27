#pragma once
// IWYU pragma private; include "GorillaNetworking/PlayFabAuthenticator_SafetyType.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_SafetyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType::PlayFabAuthenticator_SafetyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType::PlayFabAuthenticator_SafetyType()   {
}
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType  GlobalNamespace::PlayFabAuthenticator_SafetyType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType  GlobalNamespace::PlayFabAuthenticator_SafetyType::Auto{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType  GlobalNamespace::PlayFabAuthenticator_SafetyType::OptIn{static_cast<int32_t>(0x2)};
