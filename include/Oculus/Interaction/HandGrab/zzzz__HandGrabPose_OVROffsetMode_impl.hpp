#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabPose_OVROffsetMode.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_OVROffsetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode::HandGrabPose_OVROffsetMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode::HandGrabPose_OVROffsetMode()   {
}
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode  GlobalNamespace::HandGrabPose_OVROffsetMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode  GlobalNamespace::HandGrabPose_OVROffsetMode::Apply{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode  GlobalNamespace::HandGrabPose_OVROffsetMode::Ignore{static_cast<int32_t>(0x2)};
