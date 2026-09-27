#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeGravity_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeGravity_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State::SIGadgetGrenadeGravity_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State::SIGadgetGrenadeGravity_State()   {
}
constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State  GlobalNamespace::SIGadgetGrenadeGravity_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State  GlobalNamespace::SIGadgetGrenadeGravity_State::Activated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State  GlobalNamespace::SIGadgetGrenadeGravity_State::Triggered{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State  GlobalNamespace::SIGadgetGrenadeGravity_State::Count{static_cast<int32_t>(0x3)};
