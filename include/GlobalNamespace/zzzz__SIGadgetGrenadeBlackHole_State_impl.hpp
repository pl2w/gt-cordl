#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeBlackHole_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeBlackHole_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State::SIGadgetGrenadeBlackHole_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State::SIGadgetGrenadeBlackHole_State()   {
}
constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State  GlobalNamespace::SIGadgetGrenadeBlackHole_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State  GlobalNamespace::SIGadgetGrenadeBlackHole_State::Thrown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State  GlobalNamespace::SIGadgetGrenadeBlackHole_State::Triggered{static_cast<int32_t>(0x2)};
