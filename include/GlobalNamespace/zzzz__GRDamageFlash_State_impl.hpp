#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDamageFlash_State.hpp"
#include "GlobalNamespace/zzzz__GRDamageFlash_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRDamageFlash_State::GRDamageFlash_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDamageFlash_State::GRDamageFlash_State()   {
}
constexpr ::GlobalNamespace::GRDamageFlash_State  GlobalNamespace::GRDamageFlash_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRDamageFlash_State  GlobalNamespace::GRDamageFlash_State::Playing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRDamageFlash_State  GlobalNamespace::GRDamageFlash_State::Cooldown{static_cast<int32_t>(0x2)};
