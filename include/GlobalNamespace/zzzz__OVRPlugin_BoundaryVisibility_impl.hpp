#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoundaryVisibility.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BoundaryVisibility::OVRPlugin_BoundaryVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BoundaryVisibility::OVRPlugin_BoundaryVisibility()   {
}
constexpr ::GlobalNamespace::OVRPlugin_BoundaryVisibility  GlobalNamespace::OVRPlugin_BoundaryVisibility::NotSuppressed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_BoundaryVisibility  GlobalNamespace::OVRPlugin_BoundaryVisibility::Suppressed{static_cast<int32_t>(0x2)};
