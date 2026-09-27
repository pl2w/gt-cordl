#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDCollectionType.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_HIDCollectionType::HID_HIDCollectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_HIDCollectionType::HID_HIDCollectionType()   {
}
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::Physical{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::Application{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::Logical{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::Report{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::NamedArray{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::UsageSwitch{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::HID_HIDCollectionType  GlobalNamespace::HID_HIDCollectionType::UsageModifier{static_cast<int32_t>(0x6)};
