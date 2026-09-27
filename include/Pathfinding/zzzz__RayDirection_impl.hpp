#pragma once
// IWYU pragma private; include "Pathfinding/RayDirection.hpp"
#include "Pathfinding/zzzz__RayDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::RayDirection::RayDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::RayDirection::RayDirection()   {
}
constexpr ::Pathfinding::RayDirection  Pathfinding::RayDirection::Up{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::RayDirection  Pathfinding::RayDirection::Down{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::RayDirection  Pathfinding::RayDirection::Both{static_cast<int32_t>(0x2)};
