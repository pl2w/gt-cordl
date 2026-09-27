#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Controller.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Controller_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Controller::OVRPlugin_Controller(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Controller::OVRPlugin_Controller()   {
}
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::LTouch{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::RTouch{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::Touch{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::Remote{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::Gamepad{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::LHand{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::RHand{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::Hands{static_cast<int32_t>(0x60)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::Active{static_cast<int32_t>(0x80000000)};
constexpr ::GlobalNamespace::OVRPlugin_Controller  GlobalNamespace::OVRPlugin_Controller::All{static_cast<int32_t>(0xffffffff)};
