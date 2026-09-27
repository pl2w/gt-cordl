#pragma once
// IWYU pragma private; include "Pathfinding/RVO/MovementPlane.hpp"
#include "Pathfinding/RVO/zzzz__MovementPlane_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::RVO::MovementPlane::MovementPlane(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::MovementPlane::MovementPlane()   {
}
constexpr ::Pathfinding::RVO::MovementPlane  Pathfinding::RVO::MovementPlane::XZ{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::RVO::MovementPlane  Pathfinding::RVO::MovementPlane::XY{static_cast<int32_t>(0x1)};
