#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerPalmGrabAPI_ReturnValue.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPalmGrabAPI_ReturnValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue::FingerPalmGrabAPI_ReturnValue(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue::FingerPalmGrabAPI_ReturnValue()   {
}
constexpr ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue  GlobalNamespace::FingerPalmGrabAPI_ReturnValue::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue  GlobalNamespace::FingerPalmGrabAPI_ReturnValue::Failure{static_cast<int32_t>(0xffffffff)};
