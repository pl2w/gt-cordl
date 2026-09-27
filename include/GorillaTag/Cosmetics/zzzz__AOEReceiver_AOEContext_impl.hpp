#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOEReceiver_AOEContext.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEReceiver_AOEContext_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instigator", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseStrength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "finalStrength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalizedDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AOEReceiver_AOEContext::AOEReceiver_AOEContext(::UnityEngine::Vector3  origin, float_t  radius, ::UnityW<::UnityEngine::GameObject>  instigator, float_t  baseStrength, float_t  finalStrength, float_t  distance, float_t  normalizedDistance) noexcept  {
this->origin = origin;
this->radius = radius;
this->instigator = instigator;
this->baseStrength = baseStrength;
this->finalStrength = finalStrength;
this->distance = distance;
this->normalizedDistance = normalizedDistance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AOEReceiver_AOEContext::AOEReceiver_AOEContext()   {
}
