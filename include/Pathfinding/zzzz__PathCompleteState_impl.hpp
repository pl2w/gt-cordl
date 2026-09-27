#pragma once
// IWYU pragma private; include "Pathfinding/PathCompleteState.hpp"
#include "Pathfinding/zzzz__PathCompleteState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::PathCompleteState::PathCompleteState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::PathCompleteState::PathCompleteState()   {
}
constexpr ::Pathfinding::PathCompleteState  Pathfinding::PathCompleteState::NotCalculated{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::PathCompleteState  Pathfinding::PathCompleteState::Error{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::PathCompleteState  Pathfinding::PathCompleteState::Complete{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::PathCompleteState  Pathfinding::PathCompleteState::Partial{static_cast<int32_t>(0x3)};
