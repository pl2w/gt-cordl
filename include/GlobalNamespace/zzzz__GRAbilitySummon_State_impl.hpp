#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilitySummon_State.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRAbilitySummon_State::GRAbilitySummon_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilitySummon_State::GRAbilitySummon_State()   {
}
constexpr ::GlobalNamespace::GRAbilitySummon_State  GlobalNamespace::GRAbilitySummon_State::Charge{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRAbilitySummon_State  GlobalNamespace::GRAbilitySummon_State::Spawn{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRAbilitySummon_State  GlobalNamespace::GRAbilitySummon_State::Done{static_cast<int32_t>(0x2)};
