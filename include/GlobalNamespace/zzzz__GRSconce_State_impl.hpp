#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSconce_State.hpp"
#include "GlobalNamespace/zzzz__GRSconce_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRSconce_State::GRSconce_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSconce_State::GRSconce_State()   {
}
constexpr ::GlobalNamespace::GRSconce_State  GlobalNamespace::GRSconce_State::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRSconce_State  GlobalNamespace::GRSconce_State::On{static_cast<int32_t>(0x1)};
