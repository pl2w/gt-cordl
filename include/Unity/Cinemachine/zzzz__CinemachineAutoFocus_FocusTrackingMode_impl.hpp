#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineAutoFocus_FocusTrackingMode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineAutoFocus_FocusTrackingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::CinemachineAutoFocus_FocusTrackingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::CinemachineAutoFocus_FocusTrackingMode()   {
}
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::LookAtTarget{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::FollowTarget{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::CustomTarget{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::Camera{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode::ScreenCenter{static_cast<int32_t>(0x5)};
