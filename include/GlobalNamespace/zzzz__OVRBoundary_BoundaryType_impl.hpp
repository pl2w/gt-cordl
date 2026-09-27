#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary_BoundaryType.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_BoundaryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRBoundary_BoundaryType::OVRBoundary_BoundaryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBoundary_BoundaryType::OVRBoundary_BoundaryType()   {
}
constexpr ::GlobalNamespace::OVRBoundary_BoundaryType  GlobalNamespace::OVRBoundary_BoundaryType::OuterBoundary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRBoundary_BoundaryType  GlobalNamespace::OVRBoundary_BoundaryType::PlayArea{static_cast<int32_t>(0x100)};
