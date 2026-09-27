#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDuration_DurationType.hpp"
#include "System/Xml/Schema/zzzz__XsdDuration_DurationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XsdDuration_DurationType::XsdDuration_DurationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XsdDuration_DurationType::XsdDuration_DurationType()   {
}
constexpr ::GlobalNamespace::XsdDuration_DurationType  GlobalNamespace::XsdDuration_DurationType::Duration{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XsdDuration_DurationType  GlobalNamespace::XsdDuration_DurationType::YearMonthDuration{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XsdDuration_DurationType  GlobalNamespace::XsdDuration_DurationType::DayTimeDuration{static_cast<int32_t>(0x2)};
