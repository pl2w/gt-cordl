#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRInteractionFeature_ActionType.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_ActionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType::OpenXRInteractionFeature_ActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType::OpenXRInteractionFeature_ActionType()   {
}
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType  GlobalNamespace::OpenXRInteractionFeature_ActionType::Binary{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType  GlobalNamespace::OpenXRInteractionFeature_ActionType::Axis1D{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType  GlobalNamespace::OpenXRInteractionFeature_ActionType::Axis2D{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType  GlobalNamespace::OpenXRInteractionFeature_ActionType::Pose{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType  GlobalNamespace::OpenXRInteractionFeature_ActionType::Vibrate{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType  GlobalNamespace::OpenXRInteractionFeature_ActionType::Count{static_cast<int32_t>(0x5)};
