#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMetalEnergyGate_State.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRMetalEnergyGate_State::GRMetalEnergyGate_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRMetalEnergyGate_State::GRMetalEnergyGate_State()   {
}
constexpr ::GlobalNamespace::GRMetalEnergyGate_State  GlobalNamespace::GRMetalEnergyGate_State::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRMetalEnergyGate_State  GlobalNamespace::GRMetalEnergyGate_State::Open{static_cast<int32_t>(0x1)};
