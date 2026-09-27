#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Constraint.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ConstraintModeCheck_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Constraint_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mask", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modeCheck", ty: "::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Constraint::Constraint(::StringW  name, bool  enabled, ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask, ::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck  modeCheck, float_t  min, float_t  max) noexcept  {
this->name = name;
this->enabled = enabled;
this->mask = mask;
this->modeCheck = modeCheck;
this->min = min;
this->max = max;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Constraint::Constraint()   {
}
