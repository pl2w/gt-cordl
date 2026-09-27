#pragma once
// IWYU pragma private; include "Pathfinding/GraphDebugMode.hpp"
#include "Pathfinding/zzzz__GraphDebugMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::GraphDebugMode::GraphDebugMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphDebugMode::GraphDebugMode()   {
}
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::SolidColor{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::G{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::H{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::F{static_cast<int32_t>(0x3)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::Penalty{static_cast<int32_t>(0x4)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::Areas{static_cast<int32_t>(0x5)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::Tags{static_cast<int32_t>(0x6)};
constexpr ::Pathfinding::GraphDebugMode  Pathfinding::GraphDebugMode::HierarchicalNode{static_cast<int32_t>(0x7)};
