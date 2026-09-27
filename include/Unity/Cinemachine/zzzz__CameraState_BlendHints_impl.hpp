#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraState_BlendHints.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_BlendHints_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CameraState_BlendHints::CameraState_BlendHints(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraState_BlendHints::CameraState_BlendHints()   {
}
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::Nothing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::SphericalPositionBlend{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::CylindricalPositionBlend{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::ScreenSpaceAimWhenTargetsDiffer{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::InheritPosition{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::IgnoreLookAtTarget{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::FreezeWhenBlendingOut{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::NoPosition{static_cast<int32_t>(0x10000)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::NoOrientation{static_cast<int32_t>(0x20000)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::NoTransform{static_cast<int32_t>(0x30000)};
constexpr ::GlobalNamespace::CameraState_BlendHints  GlobalNamespace::CameraState_BlendHints::NoLens{static_cast<int32_t>(0x40000)};
