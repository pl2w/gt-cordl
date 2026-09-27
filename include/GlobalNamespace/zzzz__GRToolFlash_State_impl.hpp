#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolFlash_State.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolFlash_State::GRToolFlash_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolFlash_State::GRToolFlash_State()   {
}
constexpr ::GlobalNamespace::GRToolFlash_State  GlobalNamespace::GRToolFlash_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolFlash_State  GlobalNamespace::GRToolFlash_State::Charging{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolFlash_State  GlobalNamespace::GRToolFlash_State::Flash{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRToolFlash_State  GlobalNamespace::GRToolFlash_State::Cooldown{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRToolFlash_State  GlobalNamespace::GRToolFlash_State::Count{static_cast<int32_t>(0x4)};
