#pragma once
// IWYU pragma private; include "GlobalNamespace/EKIDFeatures.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EKIDFeatures::EKIDFeatures(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EKIDFeatures::EKIDFeatures()   {
}
constexpr ::GlobalNamespace::EKIDFeatures  GlobalNamespace::EKIDFeatures::Multiplayer{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EKIDFeatures  GlobalNamespace::EKIDFeatures::Custom_Nametags{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EKIDFeatures  GlobalNamespace::EKIDFeatures::Voice_Chat{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EKIDFeatures  GlobalNamespace::EKIDFeatures::Mods{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::EKIDFeatures  GlobalNamespace::EKIDFeatures::Groups{static_cast<int32_t>(0x4)};
