#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePOV_RecenterTargetMode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePOV_RecenterTargetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode::CinemachinePOV_RecenterTargetMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode::CinemachinePOV_RecenterTargetMode()   {
}
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode  GlobalNamespace::CinemachinePOV_RecenterTargetMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode  GlobalNamespace::CinemachinePOV_RecenterTargetMode::FollowTargetForward{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode  GlobalNamespace::CinemachinePOV_RecenterTargetMode::LookAtTargetForward{static_cast<int32_t>(0x2)};
