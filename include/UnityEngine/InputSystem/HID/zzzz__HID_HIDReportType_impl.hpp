#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDReportType.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_HIDReportType::HID_HIDReportType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_HIDReportType::HID_HIDReportType()   {
}
constexpr ::GlobalNamespace::HID_HIDReportType  GlobalNamespace::HID_HIDReportType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HID_HIDReportType  GlobalNamespace::HID_HIDReportType::Input{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HID_HIDReportType  GlobalNamespace::HID_HIDReportType::Output{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HID_HIDReportType  GlobalNamespace::HID_HIDReportType::Feature{static_cast<int32_t>(0x3)};
