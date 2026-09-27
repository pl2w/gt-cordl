#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver_DeviceType.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType::TrackedPoseDriver_DeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType::TrackedPoseDriver_DeviceType()   {
}
constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType  GlobalNamespace::TrackedPoseDriver_DeviceType::GenericXRDevice{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType  GlobalNamespace::TrackedPoseDriver_DeviceType::GenericXRController{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType  GlobalNamespace::TrackedPoseDriver_DeviceType::GenericXRRemote{static_cast<int32_t>(0x2)};
