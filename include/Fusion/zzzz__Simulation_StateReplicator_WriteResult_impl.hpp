#pragma once
// IWYU pragma private; include "Fusion/Simulation_StateReplicator_WriteResult.hpp"
#include "Fusion/zzzz__Simulation_StateReplicator_WriteResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StateReplicator_Simulation_WriteResult::StateReplicator_Simulation_WriteResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StateReplicator_Simulation_WriteResult::StateReplicator_Simulation_WriteResult()   {
}
constexpr ::GlobalNamespace::StateReplicator_Simulation_WriteResult  GlobalNamespace::StateReplicator_Simulation_WriteResult::Written{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StateReplicator_Simulation_WriteResult  GlobalNamespace::StateReplicator_Simulation_WriteResult::NothingToSend{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StateReplicator_Simulation_WriteResult  GlobalNamespace::StateReplicator_Simulation_WriteResult::PacketFull{static_cast<int32_t>(0x2)};
