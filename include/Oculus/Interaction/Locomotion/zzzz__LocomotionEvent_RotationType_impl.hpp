#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEvent_RotationType.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_RotationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocomotionEvent_RotationType::LocomotionEvent_RotationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocomotionEvent_RotationType::LocomotionEvent_RotationType()   {
}
constexpr ::GlobalNamespace::LocomotionEvent_RotationType  GlobalNamespace::LocomotionEvent_RotationType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LocomotionEvent_RotationType  GlobalNamespace::LocomotionEvent_RotationType::Velocity{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LocomotionEvent_RotationType  GlobalNamespace::LocomotionEvent_RotationType::Absolute{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LocomotionEvent_RotationType  GlobalNamespace::LocomotionEvent_RotationType::Relative{static_cast<int32_t>(0x3)};
