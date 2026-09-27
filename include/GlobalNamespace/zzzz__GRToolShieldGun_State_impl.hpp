#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolShieldGun_State.hpp"
#include "GlobalNamespace/zzzz__GRToolShieldGun_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolShieldGun_State::GRToolShieldGun_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolShieldGun_State::GRToolShieldGun_State()   {
}
constexpr ::GlobalNamespace::GRToolShieldGun_State  GlobalNamespace::GRToolShieldGun_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolShieldGun_State  GlobalNamespace::GRToolShieldGun_State::Charging{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolShieldGun_State  GlobalNamespace::GRToolShieldGun_State::Firing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRToolShieldGun_State  GlobalNamespace::GRToolShieldGun_State::Cooldown{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRToolShieldGun_State  GlobalNamespace::GRToolShieldGun_State::Count{static_cast<int32_t>(0x4)};
