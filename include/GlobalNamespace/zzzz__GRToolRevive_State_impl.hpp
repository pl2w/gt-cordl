#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolRevive_State.hpp"
#include "GlobalNamespace/zzzz__GRToolRevive_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolRevive_State::GRToolRevive_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolRevive_State::GRToolRevive_State()   {
}
constexpr ::GlobalNamespace::GRToolRevive_State  GlobalNamespace::GRToolRevive_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolRevive_State  GlobalNamespace::GRToolRevive_State::Reviving{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolRevive_State  GlobalNamespace::GRToolRevive_State::Cooldown{static_cast<int32_t>(0x2)};
