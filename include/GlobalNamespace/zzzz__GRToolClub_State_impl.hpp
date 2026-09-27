#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolClub_State.hpp"
#include "GlobalNamespace/zzzz__GRToolClub_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolClub_State::GRToolClub_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolClub_State::GRToolClub_State()   {
}
constexpr ::GlobalNamespace::GRToolClub_State  GlobalNamespace::GRToolClub_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolClub_State  GlobalNamespace::GRToolClub_State::Extended{static_cast<int32_t>(0x1)};
