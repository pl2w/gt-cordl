#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureDigitFlexion.hpp"
#include "GlobalNamespace/zzzz__GestureDigitFlexion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GestureDigitFlexion::GestureDigitFlexion(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GestureDigitFlexion::GestureDigitFlexion()   {
}
constexpr ::GlobalNamespace::GestureDigitFlexion  GlobalNamespace::GestureDigitFlexion::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GestureDigitFlexion  GlobalNamespace::GestureDigitFlexion::Open{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::GestureDigitFlexion  GlobalNamespace::GestureDigitFlexion::Closed{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::GestureDigitFlexion  GlobalNamespace::GestureDigitFlexion::Bent{static_cast<uint32_t>(0x40u)};
