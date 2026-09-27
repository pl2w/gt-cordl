#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsAttackBehaviour_State.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAttackBehaviour_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State::CustomMapsAttackBehaviour_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State::CustomMapsAttackBehaviour_State()   {
}
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State  GlobalNamespace::CustomMapsAttackBehaviour_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State  GlobalNamespace::CustomMapsAttackBehaviour_State::Attacking{static_cast<int32_t>(0x1)};
