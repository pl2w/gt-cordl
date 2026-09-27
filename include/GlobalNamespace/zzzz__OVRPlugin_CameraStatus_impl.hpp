#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraStatus.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_CameraStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus::OVRPlugin_CameraStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus::OVRPlugin_CameraStatus()   {
}
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_Connected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_Calibrating{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_CalibrationFailed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_Calibrated{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_ThirdPerson{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVRPlugin_CameraStatus  GlobalNamespace::OVRPlugin_CameraStatus::CameraStatus_EnumSize{static_cast<int32_t>(0x7fffffff)};
