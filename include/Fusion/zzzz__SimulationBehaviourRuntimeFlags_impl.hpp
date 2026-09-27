#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourRuntimeFlags.hpp"
#include "Fusion/zzzz__SimulationBehaviourRuntimeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationBehaviourRuntimeFlags::SimulationBehaviourRuntimeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviourRuntimeFlags::SimulationBehaviourRuntimeFlags()   {
}
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::IsGlobal{static_cast<int32_t>(0x1)};
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::InSimulation{static_cast<int32_t>(0x2)};
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::PendingRemoval{static_cast<int32_t>(0x4)};
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::IsUnityDestroyed{static_cast<int32_t>(0x8)};
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::IsUnityDisabled{static_cast<int32_t>(0x10)};
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::SkipNextUpdate{static_cast<int32_t>(0x20)};
constexpr ::Fusion::SimulationBehaviourRuntimeFlags  Fusion::SimulationBehaviourRuntimeFlags::ClearMask{static_cast<int32_t>(0x27)};
