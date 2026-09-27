#pragma once
// IWYU pragma private; include "Pathfinding/MultiTargetPath_HeuristicMode.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_HeuristicMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode::MultiTargetPath_HeuristicMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode::MultiTargetPath_HeuristicMode()   {
}
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode  GlobalNamespace::MultiTargetPath_HeuristicMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode  GlobalNamespace::MultiTargetPath_HeuristicMode::Average{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode  GlobalNamespace::MultiTargetPath_HeuristicMode::MovingAverage{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode  GlobalNamespace::MultiTargetPath_HeuristicMode::Midpoint{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode  GlobalNamespace::MultiTargetPath_HeuristicMode::MovingMidpoint{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode  GlobalNamespace::MultiTargetPath_HeuristicMode::Sequential{static_cast<int32_t>(0x5)};
