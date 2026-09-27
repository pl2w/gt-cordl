#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/TrackedPoseDriver_TrackingStates.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_TrackingStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates::TrackedPoseDriver_TrackingStates(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates::TrackedPoseDriver_TrackingStates()   {
}
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates  GlobalNamespace::TrackedPoseDriver_TrackingStates::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates  GlobalNamespace::TrackedPoseDriver_TrackingStates::Position{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates  GlobalNamespace::TrackedPoseDriver_TrackingStates::Rotation{static_cast<int32_t>(0x2)};
