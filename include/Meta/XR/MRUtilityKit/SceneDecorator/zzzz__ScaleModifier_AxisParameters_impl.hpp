#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ScaleModifier_AxisParameters.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ScaleModifier_AxisParameters_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
// Ctor Parameters [CppParam { name: "mask", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "limitMin", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "limitMax", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters::ScaleModifier_AxisParameters(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask, float_t  limitMin, float_t  limitMax, float_t  scale, float_t  offset) noexcept  {
this->mask = mask;
this->limitMin = limitMin;
this->limitMax = limitMax;
this->scale = scale;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters::ScaleModifier_AxisParameters()   {
}
