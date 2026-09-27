#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEvent_TranslationType.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_TranslationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType::LocomotionEvent_TranslationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType::LocomotionEvent_TranslationType()   {
}
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType  GlobalNamespace::LocomotionEvent_TranslationType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType  GlobalNamespace::LocomotionEvent_TranslationType::Velocity{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType  GlobalNamespace::LocomotionEvent_TranslationType::Absolute{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType  GlobalNamespace::LocomotionEvent_TranslationType::AbsoluteEyeLevel{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::LocomotionEvent_TranslationType  GlobalNamespace::LocomotionEvent_TranslationType::Relative{static_cast<int32_t>(0x4)};
