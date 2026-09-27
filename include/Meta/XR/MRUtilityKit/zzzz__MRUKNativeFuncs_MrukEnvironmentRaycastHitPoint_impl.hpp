#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastStatus_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint_def.hpp"
// Ctor Parameters [CppParam { name: "status", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  status, ::UnityEngine::Vector3  point, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  normal) noexcept  {
this->status = status;
this->point = point;
this->orientation = orientation;
this->normal = normal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint()   {
}
