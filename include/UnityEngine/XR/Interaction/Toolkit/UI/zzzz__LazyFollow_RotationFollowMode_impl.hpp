#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow_RotationFollowMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_RotationFollowMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode::LazyFollow_RotationFollowMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode::LazyFollow_RotationFollowMode()   {
}
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode  GlobalNamespace::LazyFollow_RotationFollowMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode  GlobalNamespace::LazyFollow_RotationFollowMode::LookAt{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode  GlobalNamespace::LazyFollow_RotationFollowMode::LookAtWithWorldUp{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode  GlobalNamespace::LazyFollow_RotationFollowMode::Follow{static_cast<int32_t>(0x3)};
