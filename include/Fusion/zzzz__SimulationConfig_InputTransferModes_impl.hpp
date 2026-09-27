#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig_InputTransferModes.hpp"
#include "Fusion/zzzz__SimulationConfig_InputTransferModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes::SimulationConfig_InputTransferModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes::SimulationConfig_InputTransferModes()   {
}
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes  GlobalNamespace::SimulationConfig_InputTransferModes::Redundancy{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes  GlobalNamespace::SimulationConfig_InputTransferModes::RedundancyUncompressed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes  GlobalNamespace::SimulationConfig_InputTransferModes::LatestState{static_cast<int32_t>(0x1)};
