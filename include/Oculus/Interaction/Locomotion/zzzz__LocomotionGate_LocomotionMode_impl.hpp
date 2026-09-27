#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGate_LocomotionMode.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode::LocomotionGate_LocomotionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode::LocomotionGate_LocomotionMode()   {
}
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode  GlobalNamespace::LocomotionGate_LocomotionMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode  GlobalNamespace::LocomotionGate_LocomotionMode::Teleport{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode  GlobalNamespace::LocomotionGate_LocomotionMode::Turn{static_cast<int32_t>(0x2)};
