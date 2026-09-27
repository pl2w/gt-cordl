#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/EmailVerificationStatus.hpp"
#include "PlayFab/ClientModels/zzzz__EmailVerificationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::EmailVerificationStatus::EmailVerificationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::EmailVerificationStatus::EmailVerificationStatus()   {
}
constexpr ::PlayFab::ClientModels::EmailVerificationStatus  PlayFab::ClientModels::EmailVerificationStatus::Unverified{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::EmailVerificationStatus  PlayFab::ClientModels::EmailVerificationStatus::Pending{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::EmailVerificationStatus  PlayFab::ClientModels::EmailVerificationStatus::Confirmed{static_cast<int32_t>(0x2)};
