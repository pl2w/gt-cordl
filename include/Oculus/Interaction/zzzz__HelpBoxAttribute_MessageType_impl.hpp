#pragma once
// IWYU pragma private; include "Oculus/Interaction/HelpBoxAttribute_MessageType.hpp"
#include "Oculus/Interaction/zzzz__HelpBoxAttribute_MessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType::HelpBoxAttribute_MessageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType::HelpBoxAttribute_MessageType()   {
}
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType  GlobalNamespace::HelpBoxAttribute_MessageType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType  GlobalNamespace::HelpBoxAttribute_MessageType::Info{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType  GlobalNamespace::HelpBoxAttribute_MessageType::Warning{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType  GlobalNamespace::HelpBoxAttribute_MessageType::Error{static_cast<int32_t>(0x3)};
