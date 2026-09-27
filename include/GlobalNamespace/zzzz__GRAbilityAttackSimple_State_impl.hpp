#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSimple_State.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State::GRAbilityAttackSimple_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State::GRAbilityAttackSimple_State()   {
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State  GlobalNamespace::GRAbilityAttackSimple_State::Tell{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State  GlobalNamespace::GRAbilityAttackSimple_State::Attack{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State  GlobalNamespace::GRAbilityAttackSimple_State::FollowThrough{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State  GlobalNamespace::GRAbilityAttackSimple_State::Done{static_cast<int32_t>(0x3)};
