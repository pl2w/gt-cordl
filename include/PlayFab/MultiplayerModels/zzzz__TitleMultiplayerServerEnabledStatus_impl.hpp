#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TitleMultiplayerServerEnabledStatus.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TitleMultiplayerServerEnabledStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus::TitleMultiplayerServerEnabledStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus::TitleMultiplayerServerEnabledStatus()   {
}
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus  PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus::Initializing{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus  PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus::Enabled{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus  PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus::Disabled{static_cast<int32_t>(0x2)};
