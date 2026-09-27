#pragma once
// IWYU pragma private; include "Pathfinding/NumNeighbours.hpp"
#include "Pathfinding/zzzz__NumNeighbours_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::NumNeighbours::NumNeighbours(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::NumNeighbours::NumNeighbours()   {
}
constexpr ::Pathfinding::NumNeighbours  Pathfinding::NumNeighbours::Four{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::NumNeighbours  Pathfinding::NumNeighbours::Eight{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::NumNeighbours  Pathfinding::NumNeighbours::Six{static_cast<int32_t>(0x2)};
