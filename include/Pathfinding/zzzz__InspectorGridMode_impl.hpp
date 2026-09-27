#pragma once
// IWYU pragma private; include "Pathfinding/InspectorGridMode.hpp"
#include "Pathfinding/zzzz__InspectorGridMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::InspectorGridMode::InspectorGridMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::InspectorGridMode::InspectorGridMode()   {
}
constexpr ::Pathfinding::InspectorGridMode  Pathfinding::InspectorGridMode::Grid{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::InspectorGridMode  Pathfinding::InspectorGridMode::IsometricGrid{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::InspectorGridMode  Pathfinding::InspectorGridMode::Hexagonal{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::InspectorGridMode  Pathfinding::InspectorGridMode::Advanced{static_cast<int32_t>(0x3)};
