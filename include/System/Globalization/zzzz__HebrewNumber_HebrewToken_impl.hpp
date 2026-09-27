#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber_HebrewToken.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken::HebrewNumber_HebrewToken(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken::HebrewNumber_HebrewToken()   {
}
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Invalid{static_cast<int16_t>(0xffff)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit400{static_cast<int16_t>(0x0)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit200_300{static_cast<int16_t>(0x1)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit100{static_cast<int16_t>(0x2)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit10{static_cast<int16_t>(0x3)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit1{static_cast<int16_t>(0x4)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit6_7{static_cast<int16_t>(0x5)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit7{static_cast<int16_t>(0x6)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::Digit9{static_cast<int16_t>(0x7)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::SingleQuote{static_cast<int16_t>(0x8)};
constexpr ::GlobalNamespace::HebrewNumber_HebrewToken  GlobalNamespace::HebrewNumber_HebrewToken::DoubleQuote{static_cast<int16_t>(0x9)};
