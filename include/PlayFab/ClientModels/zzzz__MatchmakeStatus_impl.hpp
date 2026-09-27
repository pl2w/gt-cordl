#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MatchmakeStatus.hpp"
#include "PlayFab/ClientModels/zzzz__MatchmakeStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::MatchmakeStatus::MatchmakeStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::MatchmakeStatus::MatchmakeStatus()   {
}
constexpr ::PlayFab::ClientModels::MatchmakeStatus  PlayFab::ClientModels::MatchmakeStatus::Complete{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::MatchmakeStatus  PlayFab::ClientModels::MatchmakeStatus::Waiting{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::MatchmakeStatus  PlayFab::ClientModels::MatchmakeStatus::GameNotFound{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::MatchmakeStatus  PlayFab::ClientModels::MatchmakeStatus::NoAvailableSlots{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::MatchmakeStatus  PlayFab::ClientModels::MatchmakeStatus::SessionClosed{static_cast<int32_t>(0x4)};
