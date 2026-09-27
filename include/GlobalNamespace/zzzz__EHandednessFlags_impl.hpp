#pragma once
// IWYU pragma private; include "GlobalNamespace/EHandednessFlags.hpp"
#include "GlobalNamespace/zzzz__EHandednessFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EHandednessFlags::EHandednessFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EHandednessFlags::EHandednessFlags()   {
}
constexpr ::GlobalNamespace::EHandednessFlags  GlobalNamespace::EHandednessFlags::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::EHandednessFlags  GlobalNamespace::EHandednessFlags::Left{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::EHandednessFlags  GlobalNamespace::EHandednessFlags::Right{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::EHandednessFlags  GlobalNamespace::EHandednessFlags::Both{static_cast<uint8_t>(0x3u)};
