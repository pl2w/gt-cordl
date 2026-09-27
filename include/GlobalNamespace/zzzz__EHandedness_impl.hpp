#pragma once
// IWYU pragma private; include "GlobalNamespace/EHandedness.hpp"
#include "GlobalNamespace/zzzz__EHandedness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EHandedness::EHandedness(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EHandedness::EHandedness()   {
}
constexpr ::GlobalNamespace::EHandedness  GlobalNamespace::EHandedness::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::EHandedness  GlobalNamespace::EHandedness::Left{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::EHandedness  GlobalNamespace::EHandedness::Right{static_cast<uint8_t>(0x2u)};
