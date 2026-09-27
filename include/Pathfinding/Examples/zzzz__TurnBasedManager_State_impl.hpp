#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedManager_State.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedManager_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TurnBasedManager_State::TurnBasedManager_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TurnBasedManager_State::TurnBasedManager_State()   {
}
constexpr ::GlobalNamespace::TurnBasedManager_State  GlobalNamespace::TurnBasedManager_State::SelectUnit{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TurnBasedManager_State  GlobalNamespace::TurnBasedManager_State::SelectTarget{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TurnBasedManager_State  GlobalNamespace::TurnBasedManager_State::Move{static_cast<int32_t>(0x2)};
