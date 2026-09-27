#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackJump_State.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackJump_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRAbilityAttackJump_State::GRAbilityAttackJump_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackJump_State::GRAbilityAttackJump_State()   {
}
constexpr ::GlobalNamespace::GRAbilityAttackJump_State  GlobalNamespace::GRAbilityAttackJump_State::Tell{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRAbilityAttackJump_State  GlobalNamespace::GRAbilityAttackJump_State::Jump{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRAbilityAttackJump_State  GlobalNamespace::GRAbilityAttackJump_State::Return{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRAbilityAttackJump_State  GlobalNamespace::GRAbilityAttackJump_State::Done{static_cast<int32_t>(0x3)};
