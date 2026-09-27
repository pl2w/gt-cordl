#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TTT.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TTT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanParse_TTT::TimeSpanParse_TTT(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanParse_TTT::TimeSpanParse_TTT()   {
}
constexpr ::GlobalNamespace::TimeSpanParse_TTT  GlobalNamespace::TimeSpanParse_TTT::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::TimeSpanParse_TTT  GlobalNamespace::TimeSpanParse_TTT::End{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::TimeSpanParse_TTT  GlobalNamespace::TimeSpanParse_TTT::Num{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::TimeSpanParse_TTT  GlobalNamespace::TimeSpanParse_TTT::Sep{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::TimeSpanParse_TTT  GlobalNamespace::TimeSpanParse_TTT::NumOverflow{static_cast<uint8_t>(0x4u)};
