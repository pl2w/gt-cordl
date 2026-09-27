#pragma once
// IWYU pragma private; include "System/Number_ParsingStatus.hpp"
#include "System/zzzz__Number_ParsingStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Number_ParsingStatus::Number_ParsingStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Number_ParsingStatus::Number_ParsingStatus()   {
}
constexpr ::GlobalNamespace::Number_ParsingStatus  GlobalNamespace::Number_ParsingStatus::OK{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Number_ParsingStatus  GlobalNamespace::Number_ParsingStatus::Failed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Number_ParsingStatus  GlobalNamespace::Number_ParsingStatus::Overflow{static_cast<int32_t>(0x2)};
