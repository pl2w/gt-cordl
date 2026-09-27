#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Target.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Target_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target::Target(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target::Target()   {
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target  Meta::XR::MRUtilityKit::SceneDecorator::Target::GLOBAL_MESH{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target  Meta::XR::MRUtilityKit::SceneDecorator::Target::RESERVED_MESH{static_cast<int32_t>(0x2)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target  Meta::XR::MRUtilityKit::SceneDecorator::Target::PHYSICS_LAYERS{static_cast<int32_t>(0x4)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target  Meta::XR::MRUtilityKit::SceneDecorator::Target::CUSTOM_COLLIDERS{static_cast<int32_t>(0x8)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target  Meta::XR::MRUtilityKit::SceneDecorator::Target::CUSTOM_TAGS{static_cast<int32_t>(0x10)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target  Meta::XR::MRUtilityKit::SceneDecorator::Target::SCENE_ANCHORS{static_cast<int32_t>(0x20)};
