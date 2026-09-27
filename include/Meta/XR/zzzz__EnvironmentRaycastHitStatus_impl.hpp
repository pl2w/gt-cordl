#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentRaycastHitStatus.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHitStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::EnvironmentRaycastHitStatus::EnvironmentRaycastHitStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentRaycastHitStatus::EnvironmentRaycastHitStatus()   {
}
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::Hit{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::HitPointOccluded{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::NotReady{static_cast<int32_t>(0x2)};
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::HitPointOutsideOfCameraFrustum{static_cast<int32_t>(0x3)};
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::RayOccluded{static_cast<int32_t>(0x4)};
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::NoHit{static_cast<int32_t>(0x5)};
constexpr ::Meta::XR::EnvironmentRaycastHitStatus  Meta::XR::EnvironmentRaycastHitStatus::NotSupported{static_cast<int32_t>(0x6)};
