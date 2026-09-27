#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettings_OverrideModes.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LensSettings_OverrideModes::LensSettings_OverrideModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LensSettings_OverrideModes::LensSettings_OverrideModes()   {
}
constexpr ::GlobalNamespace::LensSettings_OverrideModes  GlobalNamespace::LensSettings_OverrideModes::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LensSettings_OverrideModes  GlobalNamespace::LensSettings_OverrideModes::Orthographic{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LensSettings_OverrideModes  GlobalNamespace::LensSettings_OverrideModes::Perspective{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LensSettings_OverrideModes  GlobalNamespace::LensSettings_OverrideModes::Physical{static_cast<int32_t>(0x3)};
