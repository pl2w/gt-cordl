#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerPinchGrabAPI_ReturnValue.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPinchGrabAPI_ReturnValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue::FingerPinchGrabAPI_ReturnValue(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue::FingerPinchGrabAPI_ReturnValue()   {
}
constexpr ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue  GlobalNamespace::FingerPinchGrabAPI_ReturnValue::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue  GlobalNamespace::FingerPinchGrabAPI_ReturnValue::Failure{static_cast<int32_t>(0xffffffff)};
