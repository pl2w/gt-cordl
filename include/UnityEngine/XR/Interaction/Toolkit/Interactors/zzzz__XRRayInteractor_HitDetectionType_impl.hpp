#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor_HitDetectionType.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_HitDetectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType::XRRayInteractor_HitDetectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType::XRRayInteractor_HitDetectionType()   {
}
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType  GlobalNamespace::XRRayInteractor_HitDetectionType::Raycast{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType  GlobalNamespace::XRRayInteractor_HitDetectionType::SphereCast{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType  GlobalNamespace::XRRayInteractor_HitDetectionType::ConeCast{static_cast<int32_t>(0x2)};
