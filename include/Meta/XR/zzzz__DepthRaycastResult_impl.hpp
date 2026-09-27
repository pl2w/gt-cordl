#pragma once
// IWYU pragma private; include "Meta/XR/DepthRaycastResult.hpp"
#include "Meta/XR/zzzz__DepthRaycastResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::DepthRaycastResult::DepthRaycastResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::DepthRaycastResult::DepthRaycastResult()   {
}
constexpr ::Meta::XR::DepthRaycastResult  Meta::XR::DepthRaycastResult::Success{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::DepthRaycastResult  Meta::XR::DepthRaycastResult::HitPointOccluded{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::DepthRaycastResult  Meta::XR::DepthRaycastResult::NotReady{static_cast<int32_t>(0x2)};
constexpr ::Meta::XR::DepthRaycastResult  Meta::XR::DepthRaycastResult::RayOutsideOfDepthCameraFrustum{static_cast<int32_t>(0x3)};
constexpr ::Meta::XR::DepthRaycastResult  Meta::XR::DepthRaycastResult::RayOccluded{static_cast<int32_t>(0x4)};
constexpr ::Meta::XR::DepthRaycastResult  Meta::XR::DepthRaycastResult::NoHit{static_cast<int32_t>(0x5)};
