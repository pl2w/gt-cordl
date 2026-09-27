#pragma once
// IWYU pragma private; include "Fusion/SimulationModes.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationModes::SimulationModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationModes::SimulationModes()   {
}
constexpr ::Fusion::SimulationModes  Fusion::SimulationModes::Server{static_cast<int32_t>(0x1)};
constexpr ::Fusion::SimulationModes  Fusion::SimulationModes::Host{static_cast<int32_t>(0x2)};
constexpr ::Fusion::SimulationModes  Fusion::SimulationModes::Client{static_cast<int32_t>(0x4)};
