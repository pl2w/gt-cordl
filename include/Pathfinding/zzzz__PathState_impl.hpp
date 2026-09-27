#pragma once
// IWYU pragma private; include "Pathfinding/PathState.hpp"
#include "Pathfinding/zzzz__PathState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::PathState::PathState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::PathState::PathState()   {
}
constexpr ::Pathfinding::PathState  Pathfinding::PathState::Created{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::PathState  Pathfinding::PathState::PathQueue{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::PathState  Pathfinding::PathState::Processing{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::PathState  Pathfinding::PathState::ReturnQueue{static_cast<int32_t>(0x3)};
constexpr ::Pathfinding::PathState  Pathfinding::PathState::Returned{static_cast<int32_t>(0x4)};
