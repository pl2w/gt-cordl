#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat_Pattern.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_Pattern_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanFormat_Pattern::TimeSpanFormat_Pattern(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanFormat_Pattern::TimeSpanFormat_Pattern()   {
}
constexpr ::GlobalNamespace::TimeSpanFormat_Pattern  GlobalNamespace::TimeSpanFormat_Pattern::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimeSpanFormat_Pattern  GlobalNamespace::TimeSpanFormat_Pattern::Minimum{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimeSpanFormat_Pattern  GlobalNamespace::TimeSpanFormat_Pattern::Full{static_cast<int32_t>(0x2)};
