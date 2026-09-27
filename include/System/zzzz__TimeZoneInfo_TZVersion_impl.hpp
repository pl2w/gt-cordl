#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TZVersion.hpp"
#include "System/zzzz__TimeZoneInfo_TZVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeZoneInfo_TZVersion::TimeZoneInfo_TZVersion(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeZoneInfo_TZVersion::TimeZoneInfo_TZVersion()   {
}
constexpr ::GlobalNamespace::TimeZoneInfo_TZVersion  GlobalNamespace::TimeZoneInfo_TZVersion::V1{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::TimeZoneInfo_TZVersion  GlobalNamespace::TimeZoneInfo_TZVersion::V2{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::TimeZoneInfo_TZVersion  GlobalNamespace::TimeZoneInfo_TZVersion::V3{static_cast<uint8_t>(0x2u)};
