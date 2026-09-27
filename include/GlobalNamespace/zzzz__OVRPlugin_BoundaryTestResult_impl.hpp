#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoundaryTestResult.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryTestResult_def.hpp"
// Ctor Parameters [CppParam { name: "IsTriggering", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClosestPoint", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClosestPointNormal", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BoundaryTestResult::OVRPlugin_BoundaryTestResult(::GlobalNamespace::OVRPlugin_Bool  IsTriggering, float_t  ClosestDistance, ::GlobalNamespace::OVRPlugin_Vector3f  ClosestPoint, ::GlobalNamespace::OVRPlugin_Vector3f  ClosestPointNormal) noexcept  {
this->IsTriggering = IsTriggering;
this->ClosestDistance = ClosestDistance;
this->ClosestPoint = ClosestPoint;
this->ClosestPointNormal = ClosestPointNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BoundaryTestResult::OVRPlugin_BoundaryTestResult()   {
}
