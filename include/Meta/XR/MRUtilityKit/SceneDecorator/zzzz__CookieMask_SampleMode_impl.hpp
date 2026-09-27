#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CookieMask_SampleMode.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CookieMask_SampleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CookieMask_SampleMode::CookieMask_SampleMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CookieMask_SampleMode::CookieMask_SampleMode()   {
}
constexpr ::GlobalNamespace::CookieMask_SampleMode  GlobalNamespace::CookieMask_SampleMode::NEAREST{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CookieMask_SampleMode  GlobalNamespace::CookieMask_SampleMode::NEAREST_REPEAT{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CookieMask_SampleMode  GlobalNamespace::CookieMask_SampleMode::NEAREST_REPEAT_MIRROR{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CookieMask_SampleMode  GlobalNamespace::CookieMask_SampleMode::BILINEAR{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CookieMask_SampleMode  GlobalNamespace::CookieMask_SampleMode::BILINEAR_REPEAT{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CookieMask_SampleMode  GlobalNamespace::CookieMask_SampleMode::BILINEAR_REPEAT_MIRROR{static_cast<int32_t>(0x5)};
