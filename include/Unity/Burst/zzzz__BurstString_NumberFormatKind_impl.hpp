#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_NumberFormatKind.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberFormatKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstString_NumberFormatKind::BurstString_NumberFormatKind(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstString_NumberFormatKind::BurstString_NumberFormatKind()   {
}
constexpr ::GlobalNamespace::BurstString_NumberFormatKind  GlobalNamespace::BurstString_NumberFormatKind::General{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::BurstString_NumberFormatKind  GlobalNamespace::BurstString_NumberFormatKind::Decimal{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::BurstString_NumberFormatKind  GlobalNamespace::BurstString_NumberFormatKind::DecimalForceSigned{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::BurstString_NumberFormatKind  GlobalNamespace::BurstString_NumberFormatKind::Hexadecimal{static_cast<uint8_t>(0x3u)};
