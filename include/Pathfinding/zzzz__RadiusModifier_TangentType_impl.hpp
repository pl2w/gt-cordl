#pragma once
// IWYU pragma private; include "Pathfinding/RadiusModifier_TangentType.hpp"
#include "Pathfinding/zzzz__RadiusModifier_TangentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RadiusModifier_TangentType::RadiusModifier_TangentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadiusModifier_TangentType::RadiusModifier_TangentType()   {
}
constexpr ::GlobalNamespace::RadiusModifier_TangentType  GlobalNamespace::RadiusModifier_TangentType::OuterRight{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RadiusModifier_TangentType  GlobalNamespace::RadiusModifier_TangentType::InnerRightLeft{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RadiusModifier_TangentType  GlobalNamespace::RadiusModifier_TangentType::InnerLeftRight{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::RadiusModifier_TangentType  GlobalNamespace::RadiusModifier_TangentType::OuterLeft{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::RadiusModifier_TangentType  GlobalNamespace::RadiusModifier_TangentType::Outer{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::RadiusModifier_TangentType  GlobalNamespace::RadiusModifier_TangentType::Inner{static_cast<int32_t>(0x6)};
