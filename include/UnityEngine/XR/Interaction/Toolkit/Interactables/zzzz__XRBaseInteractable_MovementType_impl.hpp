#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRBaseInteractable_MovementType.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType::XRBaseInteractable_MovementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType::XRBaseInteractable_MovementType()   {
}
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType  GlobalNamespace::XRBaseInteractable_MovementType::VelocityTracking{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType  GlobalNamespace::XRBaseInteractable_MovementType::Kinematic{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType  GlobalNamespace::XRBaseInteractable_MovementType::Instantaneous{static_cast<int32_t>(0x2)};
