#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDElementFlags.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_HIDElementFlags::HID_HIDElementFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_HIDElementFlags::HID_HIDElementFlags()   {
}
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::Constant{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::Variable{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::Relative{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::Wrap{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::NonLinear{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::NoPreferred{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::NullState{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::Volatile{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::HID_HIDElementFlags  GlobalNamespace::HID_HIDElementFlags::BufferedBytes{static_cast<int32_t>(0x100)};
