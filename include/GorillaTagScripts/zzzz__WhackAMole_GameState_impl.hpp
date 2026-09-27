#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole_GameState.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WhackAMole_GameState::WhackAMole_GameState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhackAMole_GameState::WhackAMole_GameState()   {
}
constexpr ::GlobalNamespace::WhackAMole_GameState  GlobalNamespace::WhackAMole_GameState::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WhackAMole_GameState  GlobalNamespace::WhackAMole_GameState::ContinuePressed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WhackAMole_GameState  GlobalNamespace::WhackAMole_GameState::Ongoing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::WhackAMole_GameState  GlobalNamespace::WhackAMole_GameState::PickMoles{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::WhackAMole_GameState  GlobalNamespace::WhackAMole_GameState::TimesUp{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::WhackAMole_GameState  GlobalNamespace::WhackAMole_GameState::LevelStarted{static_cast<int32_t>(0x5)};
