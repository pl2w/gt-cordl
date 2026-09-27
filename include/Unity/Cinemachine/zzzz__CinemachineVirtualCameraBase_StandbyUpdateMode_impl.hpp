#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCameraBase_StandbyUpdateMode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_StandbyUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode::CinemachineVirtualCameraBase_StandbyUpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode::CinemachineVirtualCameraBase_StandbyUpdateMode()   {
}
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode::Never{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode::Always{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode::RoundRobin{static_cast<int32_t>(0x2)};
