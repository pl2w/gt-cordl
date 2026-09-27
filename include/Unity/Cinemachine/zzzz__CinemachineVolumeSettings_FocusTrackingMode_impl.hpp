#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVolumeSettings_FocusTrackingMode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVolumeSettings_FocusTrackingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::CinemachineVolumeSettings_FocusTrackingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::CinemachineVolumeSettings_FocusTrackingMode()   {
}
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::LookAtTarget{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::FollowTarget{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::CustomTarget{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode::Camera{static_cast<int32_t>(0x4)};
