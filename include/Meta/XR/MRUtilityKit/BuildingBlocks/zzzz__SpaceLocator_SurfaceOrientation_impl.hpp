#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/SpaceLocator_SurfaceOrientation.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_SurfaceOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation::SpaceLocator_SurfaceOrientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation::SpaceLocator_SurfaceOrientation()   {
}
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation  GlobalNamespace::SpaceLocator_SurfaceOrientation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation  GlobalNamespace::SpaceLocator_SurfaceOrientation::Any{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation  GlobalNamespace::SpaceLocator_SurfaceOrientation::Vertical{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation  GlobalNamespace::SpaceLocator_SurfaceOrientation::HorizontalFaceUp{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation  GlobalNamespace::SpaceLocator_SurfaceOrientation::HorizontalFaceDown{static_cast<int32_t>(0x8)};
