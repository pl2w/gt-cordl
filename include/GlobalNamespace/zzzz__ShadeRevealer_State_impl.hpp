#pragma once
// IWYU pragma private; include "GlobalNamespace/ShadeRevealer_State.hpp"
#include "GlobalNamespace/zzzz__ShadeRevealer_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShadeRevealer_State::ShadeRevealer_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShadeRevealer_State::ShadeRevealer_State()   {
}
constexpr ::GlobalNamespace::ShadeRevealer_State  GlobalNamespace::ShadeRevealer_State::OFF{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ShadeRevealer_State  GlobalNamespace::ShadeRevealer_State::SCANNING{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ShadeRevealer_State  GlobalNamespace::ShadeRevealer_State::TRACKING{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ShadeRevealer_State  GlobalNamespace::ShadeRevealer_State::LOCKED{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ShadeRevealer_State  GlobalNamespace::ShadeRevealer_State::PRIMED{static_cast<int32_t>(0x4)};
