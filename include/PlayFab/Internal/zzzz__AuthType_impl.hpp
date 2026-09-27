#pragma once
// IWYU pragma private; include "PlayFab/Internal/AuthType.hpp"
#include "PlayFab/Internal/zzzz__AuthType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::Internal::AuthType::AuthType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::AuthType::AuthType()   {
}
constexpr ::PlayFab::Internal::AuthType  PlayFab::Internal::AuthType::None{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::Internal::AuthType  PlayFab::Internal::AuthType::PreLoginSession{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::Internal::AuthType  PlayFab::Internal::AuthType::LoginSession{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::Internal::AuthType  PlayFab::Internal::AuthType::DevSecretKey{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::Internal::AuthType  PlayFab::Internal::AuthType::EntityToken{static_cast<int32_t>(0x4)};
