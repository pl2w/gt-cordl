#pragma once
// IWYU pragma private; include "Pathfinding/HeuristicOptimizationMode.hpp"
#include "Pathfinding/zzzz__HeuristicOptimizationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::HeuristicOptimizationMode::HeuristicOptimizationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::HeuristicOptimizationMode::HeuristicOptimizationMode()   {
}
constexpr ::Pathfinding::HeuristicOptimizationMode  Pathfinding::HeuristicOptimizationMode::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::HeuristicOptimizationMode  Pathfinding::HeuristicOptimizationMode::Random{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::HeuristicOptimizationMode  Pathfinding::HeuristicOptimizationMode::RandomSpreadOut{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::HeuristicOptimizationMode  Pathfinding::HeuristicOptimizationMode::Custom{static_cast<int32_t>(0x3)};
