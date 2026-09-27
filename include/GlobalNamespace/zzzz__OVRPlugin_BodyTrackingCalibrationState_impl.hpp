#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyTrackingCalibrationState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyTrackingCalibrationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState::OVRPlugin_BodyTrackingCalibrationState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState::OVRPlugin_BodyTrackingCalibrationState()   {
}
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState  GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState::Valid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState  GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState::Calibrating{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState  GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState::Invalid{static_cast<int32_t>(0x3)};
