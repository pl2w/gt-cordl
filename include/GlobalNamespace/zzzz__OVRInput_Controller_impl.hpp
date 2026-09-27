#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Controller.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_Controller::OVRInput_Controller(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Controller::OVRInput_Controller()   {
}
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::LTouch{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::RTouch{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::Touch{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::Remote{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::Gamepad{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::Hands{static_cast<int32_t>(0x60)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::LHand{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::RHand{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::Active{static_cast<int32_t>(0x80000000)};
constexpr ::GlobalNamespace::OVRInput_Controller  GlobalNamespace::OVRInput_Controller::All{static_cast<int32_t>(0xffffffff)};
