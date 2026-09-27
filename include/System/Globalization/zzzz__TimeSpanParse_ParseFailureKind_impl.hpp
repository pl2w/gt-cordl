#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_ParseFailureKind.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_ParseFailureKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind::TimeSpanParse_ParseFailureKind(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind::TimeSpanParse_ParseFailureKind()   {
}
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind  GlobalNamespace::TimeSpanParse_ParseFailureKind::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind  GlobalNamespace::TimeSpanParse_ParseFailureKind::ArgumentNull{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind  GlobalNamespace::TimeSpanParse_ParseFailureKind::Format{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind  GlobalNamespace::TimeSpanParse_ParseFailureKind::FormatWithParameter{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::TimeSpanParse_ParseFailureKind  GlobalNamespace::TimeSpanParse_ParseFailureKind::Overflow{static_cast<uint8_t>(0x4u)};
