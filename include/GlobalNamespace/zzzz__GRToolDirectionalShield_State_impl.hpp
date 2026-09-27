#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolDirectionalShield_State.hpp"
#include "GlobalNamespace/zzzz__GRToolDirectionalShield_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolDirectionalShield_State::GRToolDirectionalShield_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolDirectionalShield_State::GRToolDirectionalShield_State()   {
}
constexpr ::GlobalNamespace::GRToolDirectionalShield_State  GlobalNamespace::GRToolDirectionalShield_State::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolDirectionalShield_State  GlobalNamespace::GRToolDirectionalShield_State::Open{static_cast<int32_t>(0x1)};
