#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_RoundingMode.hpp"
#include "System/zzzz__Decimal_DecCalc_RoundingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode::DecCalc_Decimal_RoundingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode::DecCalc_Decimal_RoundingMode()   {
}
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode  GlobalNamespace::DecCalc_Decimal_RoundingMode::ToEven{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode  GlobalNamespace::DecCalc_Decimal_RoundingMode::AwayFromZero{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode  GlobalNamespace::DecCalc_Decimal_RoundingMode::Truncate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode  GlobalNamespace::DecCalc_Decimal_RoundingMode::Floor{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::DecCalc_Decimal_RoundingMode  GlobalNamespace::DecCalc_Decimal_RoundingMode::Ceiling{static_cast<int32_t>(0x4)};
