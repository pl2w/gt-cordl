#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TitleActivationStatus.hpp"
#include "PlayFab/ClientModels/zzzz__TitleActivationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::TitleActivationStatus::TitleActivationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TitleActivationStatus::TitleActivationStatus()   {
}
constexpr ::PlayFab::ClientModels::TitleActivationStatus  PlayFab::ClientModels::TitleActivationStatus::None{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::TitleActivationStatus  PlayFab::ClientModels::TitleActivationStatus::ActivatedTitleKey{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::TitleActivationStatus  PlayFab::ClientModels::TitleActivationStatus::PendingSteam{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::TitleActivationStatus  PlayFab::ClientModels::TitleActivationStatus::ActivatedSteam{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::TitleActivationStatus  PlayFab::ClientModels::TitleActivationStatus::RevokedSteam{static_cast<int32_t>(0x4)};
