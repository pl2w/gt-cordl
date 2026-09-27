#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractionUpdateOrder_UpdatePhase.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase::XRInteractionUpdateOrder_UpdatePhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase::XRInteractionUpdateOrder_UpdatePhase()   {
}
constexpr ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase::Fixed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase::Dynamic{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase::Late{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase::OnBeforeRender{static_cast<int32_t>(0x3)};
