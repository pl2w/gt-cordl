#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_ControllerInHandState.hpp"
#include "GlobalNamespace/zzzz__OVRInput_ControllerInHandState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState::OVRInput_ControllerInHandState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState::OVRInput_ControllerInHandState()   {
}
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState  GlobalNamespace::OVRInput_ControllerInHandState::NoHand{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState  GlobalNamespace::OVRInput_ControllerInHandState::ControllerInHand{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState  GlobalNamespace::OVRInput_ControllerInHandState::ControllerNotInHand{static_cast<int32_t>(0x2)};
