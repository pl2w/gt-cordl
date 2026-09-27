#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Placement.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Placement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement::Placement(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement::Placement()   {
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement  Meta::XR::MRUtilityKit::SceneDecorator::Placement::LOCAL_PLANAR{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement  Meta::XR::MRUtilityKit::SceneDecorator::Placement::WORLD_PLANAR{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement  Meta::XR::MRUtilityKit::SceneDecorator::Placement::SPHERICAL{static_cast<int32_t>(0x2)};
