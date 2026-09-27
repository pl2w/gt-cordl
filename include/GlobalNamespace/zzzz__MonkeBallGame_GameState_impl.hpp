#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGame_GameState.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_GameState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MonkeBallGame_GameState::MonkeBallGame_GameState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallGame_GameState::MonkeBallGame_GameState()   {
}
constexpr ::GlobalNamespace::MonkeBallGame_GameState  GlobalNamespace::MonkeBallGame_GameState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MonkeBallGame_GameState  GlobalNamespace::MonkeBallGame_GameState::PreGame{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MonkeBallGame_GameState  GlobalNamespace::MonkeBallGame_GameState::Playing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MonkeBallGame_GameState  GlobalNamespace::MonkeBallGame_GameState::PostScore{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MonkeBallGame_GameState  GlobalNamespace::MonkeBallGame_GameState::PostGame{static_cast<int32_t>(0x4)};
