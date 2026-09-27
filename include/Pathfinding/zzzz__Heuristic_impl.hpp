#pragma once
// IWYU pragma private; include "Pathfinding/Heuristic.hpp"
#include "Pathfinding/zzzz__Heuristic_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Heuristic::Heuristic(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Heuristic::Heuristic()   {
}
constexpr ::Pathfinding::Heuristic  Pathfinding::Heuristic::Manhattan{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Heuristic  Pathfinding::Heuristic::DiagonalManhattan{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Heuristic  Pathfinding::Heuristic::Euclidean{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::Heuristic  Pathfinding::Heuristic::None{static_cast<int32_t>(0x3)};
