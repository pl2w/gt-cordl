#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo_def.hpp"
// Ctor Parameters [CppParam { name: "startPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filterCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo(::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  direction, uint32_t  filterCount, float_t  maxDistance) noexcept  {
this->startPoint = startPoint;
this->direction = direction;
this->filterCount = filterCount;
this->maxDistance = maxDistance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo()   {
}
