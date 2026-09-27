#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineAnimate_LoopMode.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_LoopMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineAnimate_LoopMode::SplineAnimate_LoopMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineAnimate_LoopMode::SplineAnimate_LoopMode()   {
}
constexpr ::GlobalNamespace::SplineAnimate_LoopMode  GlobalNamespace::SplineAnimate_LoopMode::Once{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SplineAnimate_LoopMode  GlobalNamespace::SplineAnimate_LoopMode::Loop{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SplineAnimate_LoopMode  GlobalNamespace::SplineAnimate_LoopMode::LoopEaseInOnce{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SplineAnimate_LoopMode  GlobalNamespace::SplineAnimate_LoopMode::PingPong{static_cast<int32_t>(0x3)};
