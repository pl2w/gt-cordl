#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveManager_GameState.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState::GorillaTagCompetitiveManager_GameState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState::GorillaTagCompetitiveManager_GameState()   {
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  GlobalNamespace::GorillaTagCompetitiveManager_GameState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  GlobalNamespace::GorillaTagCompetitiveManager_GameState::WaitingForPlayers{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  GlobalNamespace::GorillaTagCompetitiveManager_GameState::StartingCountdown{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  GlobalNamespace::GorillaTagCompetitiveManager_GameState::Playing{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  GlobalNamespace::GorillaTagCompetitiveManager_GameState::PostRound{static_cast<int32_t>(0x4)};
