#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_InputDeviceShowState.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState::OVRInput_InputDeviceShowState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState::OVRInput_InputDeviceShowState()   {
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState  GlobalNamespace::OVRInput_InputDeviceShowState::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState  GlobalNamespace::OVRInput_InputDeviceShowState::ControllerInHandOrNoHand{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState  GlobalNamespace::OVRInput_InputDeviceShowState::ControllerInHand{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState  GlobalNamespace::OVRInput_InputDeviceShowState::ControllerNotInHand{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState  GlobalNamespace::OVRInput_InputDeviceShowState::NoHand{static_cast<int32_t>(0x4)};
