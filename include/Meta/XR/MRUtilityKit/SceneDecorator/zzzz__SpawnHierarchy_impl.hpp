#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SpawnHierarchy.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SpawnHierarchy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::SpawnHierarchy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::SpawnHierarchy()   {
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::ROOT{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::SCENE_DECORATOR_CHILD{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::ANCHOR_CHILD{static_cast<int32_t>(0x2)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::TARGET_CHILD{static_cast<int32_t>(0x3)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy::TARGET_COLLIDER_CHILD{static_cast<int32_t>(0x4)};
