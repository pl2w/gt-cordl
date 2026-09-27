#pragma once
// IWYU pragma private; include "Pathfinding/RaycastModifier_Quality.hpp"
#include "Pathfinding/zzzz__RaycastModifier_Quality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RaycastModifier_Quality::RaycastModifier_Quality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RaycastModifier_Quality::RaycastModifier_Quality()   {
}
constexpr ::GlobalNamespace::RaycastModifier_Quality  GlobalNamespace::RaycastModifier_Quality::Low{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RaycastModifier_Quality  GlobalNamespace::RaycastModifier_Quality::Medium{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RaycastModifier_Quality  GlobalNamespace::RaycastModifier_Quality::High{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RaycastModifier_Quality  GlobalNamespace::RaycastModifier_Quality::Highest{static_cast<int32_t>(0x3)};
