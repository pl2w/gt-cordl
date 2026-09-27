#pragma once
// IWYU pragma private; include "UnityEngine/Camera_GateFitMode.hpp"
#include "UnityEngine/zzzz__Camera_GateFitMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Camera_GateFitMode::Camera_GateFitMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Camera_GateFitMode::Camera_GateFitMode()   {
}
constexpr ::GlobalNamespace::Camera_GateFitMode  GlobalNamespace::Camera_GateFitMode::Vertical{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Camera_GateFitMode  GlobalNamespace::Camera_GateFitMode::Horizontal{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Camera_GateFitMode  GlobalNamespace::Camera_GateFitMode::Fill{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Camera_GateFitMode  GlobalNamespace::Camera_GateFitMode::Overscan{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Camera_GateFitMode  GlobalNamespace::Camera_GateFitMode::None{static_cast<int32_t>(0x0)};
