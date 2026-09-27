#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary_BoundaryTestResult.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_BoundaryTestResult_def.hpp"
// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClosestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClosestPointNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRBoundary_BoundaryTestResult::OVRBoundary_BoundaryTestResult(bool  IsTriggering, float_t  ClosestDistance, ::UnityEngine::Vector3  ClosestPoint, ::UnityEngine::Vector3  ClosestPointNormal) noexcept  {
this->IsTriggering = IsTriggering;
this->ClosestDistance = ClosestDistance;
this->ClosestPoint = ClosestPoint;
this->ClosestPointNormal = ClosestPointNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBoundary_BoundaryTestResult::OVRBoundary_BoundaryTestResult()   {
}
