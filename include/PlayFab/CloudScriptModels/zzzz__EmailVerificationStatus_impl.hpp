#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/EmailVerificationStatus.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EmailVerificationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::CloudScriptModels::EmailVerificationStatus::EmailVerificationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::EmailVerificationStatus::EmailVerificationStatus()   {
}
constexpr ::PlayFab::CloudScriptModels::EmailVerificationStatus  PlayFab::CloudScriptModels::EmailVerificationStatus::Unverified{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::CloudScriptModels::EmailVerificationStatus  PlayFab::CloudScriptModels::EmailVerificationStatus::Pending{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::CloudScriptModels::EmailVerificationStatus  PlayFab::CloudScriptModels::EmailVerificationStatus::Confirmed{static_cast<int32_t>(0x2)};
