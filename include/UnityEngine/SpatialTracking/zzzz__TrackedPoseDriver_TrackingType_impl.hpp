#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver_TrackingType.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_TrackingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType::TrackedPoseDriver_TrackingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType::TrackedPoseDriver_TrackingType()   {
}
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType  GlobalNamespace::TrackedPoseDriver_TrackingType::RotationAndPosition{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType  GlobalNamespace::TrackedPoseDriver_TrackingType::RotationOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType  GlobalNamespace::TrackedPoseDriver_TrackingType::PositionOnly{static_cast<int32_t>(0x2)};
