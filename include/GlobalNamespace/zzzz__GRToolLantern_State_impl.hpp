#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolLantern_State.hpp"
#include "GlobalNamespace/zzzz__GRToolLantern_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolLantern_State::GRToolLantern_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolLantern_State::GRToolLantern_State()   {
}
constexpr ::GlobalNamespace::GRToolLantern_State  GlobalNamespace::GRToolLantern_State::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolLantern_State  GlobalNamespace::GRToolLantern_State::On{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolLantern_State  GlobalNamespace::GRToolLantern_State::Count{static_cast<int32_t>(0x2)};
