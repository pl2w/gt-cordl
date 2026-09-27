#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEnvironmentRaycastStatus.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::MRUKNativeFuncs_MrukEnvironmentRaycastStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::MRUKNativeFuncs_MrukEnvironmentRaycastStatus()   {
}
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::Hit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::NoHit{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::HitPointOccluded{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::HitPointOutsideFov{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::RayOccluded{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::InvalidOrientation{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus::Max{static_cast<int32_t>(0x7fffffff)};
