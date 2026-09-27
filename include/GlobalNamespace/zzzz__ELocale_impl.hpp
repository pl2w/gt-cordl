#pragma once
// IWYU pragma private; include "GlobalNamespace/ELocale.hpp"
#include "GlobalNamespace/zzzz__ELocale_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ELocale::ELocale(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ELocale::ELocale()   {
}
constexpr ::GlobalNamespace::ELocale  GlobalNamespace::ELocale::English{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ELocale  GlobalNamespace::ELocale::French{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ELocale  GlobalNamespace::ELocale::German{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ELocale  GlobalNamespace::ELocale::Japanese{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ELocale  GlobalNamespace::ELocale::Spanish{static_cast<int32_t>(0x4)};
