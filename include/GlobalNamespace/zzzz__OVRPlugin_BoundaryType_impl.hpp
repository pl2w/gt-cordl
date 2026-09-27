#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoundaryType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BoundaryType::OVRPlugin_BoundaryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BoundaryType::OVRPlugin_BoundaryType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_BoundaryType  GlobalNamespace::OVRPlugin_BoundaryType::OuterBoundary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_BoundaryType  GlobalNamespace::OVRPlugin_BoundaryType::PlayArea{static_cast<int32_t>(0x100)};
