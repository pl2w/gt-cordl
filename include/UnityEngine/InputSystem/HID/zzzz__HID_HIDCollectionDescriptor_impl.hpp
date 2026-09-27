#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDCollectionDescriptor.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionType_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::HID_HIDCollectionType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parent", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "childCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstChild", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_HIDCollectionDescriptor::HID_HIDCollectionDescriptor(::GlobalNamespace::HID_HIDCollectionType  type, int32_t  usage, ::GlobalNamespace::HID_UsagePage  usagePage, int32_t  parent, int32_t  childCount, int32_t  firstChild) noexcept  {
this->type = type;
this->usage = usage;
this->usagePage = usagePage;
this->parent = parent;
this->childCount = childCount;
this->firstChild = firstChild;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_HIDCollectionDescriptor::HID_HIDCollectionDescriptor()   {
}
