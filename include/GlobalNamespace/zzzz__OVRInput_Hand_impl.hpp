#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Hand.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Hand_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_Hand::OVRInput_Hand(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Hand::OVRInput_Hand()   {
}
constexpr ::GlobalNamespace::OVRInput_Hand  GlobalNamespace::OVRInput_Hand::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::OVRInput_Hand  GlobalNamespace::OVRInput_Hand::HandLeft{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_Hand  GlobalNamespace::OVRInput_Hand::HandRight{static_cast<int32_t>(0x1)};
