#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeKnockBack_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeKnockBack_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State::SIGadgetGrenadeKnockBack_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State::SIGadgetGrenadeKnockBack_State()   {
}
constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State  GlobalNamespace::SIGadgetGrenadeKnockBack_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State  GlobalNamespace::SIGadgetGrenadeKnockBack_State::Thrown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State  GlobalNamespace::SIGadgetGrenadeKnockBack_State::Triggered{static_cast<int32_t>(0x2)};
