#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSwipe_State.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSwipe_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State::GRAbilityAttackSwipe_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State::GRAbilityAttackSwipe_State()   {
}
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State  GlobalNamespace::GRAbilityAttackSwipe_State::Tell{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State  GlobalNamespace::GRAbilityAttackSwipe_State::Attack{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State  GlobalNamespace::GRAbilityAttackSwipe_State::FollowThrough{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State  GlobalNamespace::GRAbilityAttackSwipe_State::Done{static_cast<int32_t>(0x3)};
