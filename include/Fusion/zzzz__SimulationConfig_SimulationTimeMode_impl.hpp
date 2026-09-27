#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig_SimulationTimeMode.hpp"
#include "Fusion/zzzz__SimulationConfig_SimulationTimeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode::SimulationConfig_SimulationTimeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode::SimulationConfig_SimulationTimeMode()   {
}
constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode  GlobalNamespace::SimulationConfig_SimulationTimeMode::UnscaledDeltaTime{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode  GlobalNamespace::SimulationConfig_SimulationTimeMode::DeltaTime{static_cast<int32_t>(0x1)};
