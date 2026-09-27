#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAnchor_ComponentType.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_ComponentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKAnchor_ComponentType::MRUKAnchor_ComponentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKAnchor_ComponentType::MRUKAnchor_ComponentType()   {
}
constexpr ::GlobalNamespace::MRUKAnchor_ComponentType  GlobalNamespace::MRUKAnchor_ComponentType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUKAnchor_ComponentType  GlobalNamespace::MRUKAnchor_ComponentType::Plane{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUKAnchor_ComponentType  GlobalNamespace::MRUKAnchor_ComponentType::Volume{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUKAnchor_ComponentType  GlobalNamespace::MRUKAnchor_ComponentType::All{static_cast<int32_t>(0x3)};
