#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInputInteractor_InputCompatibilityMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputCompatibilityMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode::XRBaseInputInteractor_InputCompatibilityMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode::XRBaseInputInteractor_InputCompatibilityMode()   {
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode::Automatic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode::ForceDeprecatedInput{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode::ForceInputReaders{static_cast<int32_t>(0x2)};
