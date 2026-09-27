#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRSettings_StereoRenderingMode.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_StereoRenderingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRSettings_StereoRenderingMode::XRSettings_StereoRenderingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRSettings_StereoRenderingMode::XRSettings_StereoRenderingMode()   {
}
constexpr ::GlobalNamespace::XRSettings_StereoRenderingMode  GlobalNamespace::XRSettings_StereoRenderingMode::MultiPass{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XRSettings_StereoRenderingMode  GlobalNamespace::XRSettings_StereoRenderingMode::SinglePass{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XRSettings_StereoRenderingMode  GlobalNamespace::XRSettings_StereoRenderingMode::SinglePassInstanced{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XRSettings_StereoRenderingMode  GlobalNamespace::XRSettings_StereoRenderingMode::SinglePassMultiview{static_cast<int32_t>(0x3)};
