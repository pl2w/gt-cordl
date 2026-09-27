#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeStun_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeStun_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State::SIGadgetGrenadeStun_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State::SIGadgetGrenadeStun_State()   {
}
constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State  GlobalNamespace::SIGadgetGrenadeStun_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State  GlobalNamespace::SIGadgetGrenadeStun_State::Thrown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State  GlobalNamespace::SIGadgetGrenadeStun_State::Triggered{static_cast<int32_t>(0x2)};
