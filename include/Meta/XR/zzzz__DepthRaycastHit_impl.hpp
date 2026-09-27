#pragma once
// IWYU pragma private; include "Meta/XR/DepthRaycastHit.hpp"
#include "Meta/XR/zzzz__DepthRaycastResult_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/zzzz__DepthRaycastHit_def.hpp"
// Ctor Parameters [CppParam { name: "result", ty: "::Meta::XR::DepthRaycastResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalConfidence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::DepthRaycastHit::DepthRaycastHit(::Meta::XR::DepthRaycastResult  result, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, float_t  normalConfidence) noexcept  {
this->result = result;
this->point = point;
this->normal = normal;
this->normalConfidence = normalConfidence;
}
// Ctor Parameters []
constexpr ::Meta::XR::DepthRaycastHit::DepthRaycastHit()   {
}
