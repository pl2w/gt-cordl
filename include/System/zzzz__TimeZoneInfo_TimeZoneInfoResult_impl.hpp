#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TimeZoneInfoResult.hpp"
#include "System/zzzz__TimeZoneInfo_TimeZoneInfoResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult::TimeZoneInfo_TimeZoneInfoResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult::TimeZoneInfo_TimeZoneInfoResult()   {
}
constexpr ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult  GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult  GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult::TimeZoneNotFoundException{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult  GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult::InvalidTimeZoneException{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult  GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult::SecurityException{static_cast<int32_t>(0x3)};
