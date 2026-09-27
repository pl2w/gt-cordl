#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolCollector_State.hpp"
#include "GlobalNamespace/zzzz__GRToolCollector_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolCollector_State::GRToolCollector_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolCollector_State::GRToolCollector_State()   {
}
constexpr ::GlobalNamespace::GRToolCollector_State  GlobalNamespace::GRToolCollector_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolCollector_State  GlobalNamespace::GRToolCollector_State::Vacuuming{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolCollector_State  GlobalNamespace::GRToolCollector_State::Collect{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRToolCollector_State  GlobalNamespace::GRToolCollector_State::Cooldown{static_cast<int32_t>(0x3)};
