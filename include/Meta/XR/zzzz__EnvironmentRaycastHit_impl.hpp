#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentRaycastHit.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHitStatus_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_def.hpp"
// Ctor Parameters [CppParam { name: "status", ty: "::Meta::XR::EnvironmentRaycastHitStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalConfidence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::EnvironmentRaycastHit::EnvironmentRaycastHit(::Meta::XR::EnvironmentRaycastHitStatus  status, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, float_t  normalConfidence) noexcept  {
this->status = status;
this->point = point;
this->normal = normal;
this->normalConfidence = normalConfidence;
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentRaycastHit::EnvironmentRaycastHit()   {
}
