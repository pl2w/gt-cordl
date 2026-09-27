#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole_GameResult.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WhackAMole_GameResult::WhackAMole_GameResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhackAMole_GameResult::WhackAMole_GameResult()   {
}
constexpr ::GlobalNamespace::WhackAMole_GameResult  GlobalNamespace::WhackAMole_GameResult::GameOver{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WhackAMole_GameResult  GlobalNamespace::WhackAMole_GameResult::Win{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WhackAMole_GameResult  GlobalNamespace::WhackAMole_GameResult::LevelComplete{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::WhackAMole_GameResult  GlobalNamespace::WhackAMole_GameResult::Unknown{static_cast<int32_t>(0x3)};
