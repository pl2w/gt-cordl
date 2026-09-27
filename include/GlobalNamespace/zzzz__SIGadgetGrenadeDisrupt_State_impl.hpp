#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeDisrupt_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeDisrupt_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State::SIGadgetGrenadeDisrupt_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State::SIGadgetGrenadeDisrupt_State()   {
}
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State  GlobalNamespace::SIGadgetGrenadeDisrupt_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State  GlobalNamespace::SIGadgetGrenadeDisrupt_State::Thrown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State  GlobalNamespace::SIGadgetGrenadeDisrupt_State::Triggered{static_cast<int32_t>(0x2)};
