#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_RenderMode.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_RenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRSettings_RenderMode::OpenXRSettings_RenderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRSettings_RenderMode::OpenXRSettings_RenderMode()   {
}
constexpr ::GlobalNamespace::OpenXRSettings_RenderMode  GlobalNamespace::OpenXRSettings_RenderMode::MultiPass{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRSettings_RenderMode  GlobalNamespace::OpenXRSettings_RenderMode::SinglePassInstanced{static_cast<int32_t>(0x1)};
