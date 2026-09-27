#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDuration_Parts.hpp"
#include "System/Xml/Schema/zzzz__XsdDuration_Parts_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XsdDuration_Parts::XsdDuration_Parts(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XsdDuration_Parts::XsdDuration_Parts()   {
}
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasNone{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasYears{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasMonths{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasDays{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasHours{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasMinutes{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::XsdDuration_Parts  GlobalNamespace::XsdDuration_Parts::HasSeconds{static_cast<int32_t>(0x20)};
