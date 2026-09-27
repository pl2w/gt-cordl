#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder_MonetizationOptions.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_MonetizationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions::ModBuilder_MonetizationOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions::ModBuilder_MonetizationOptions()   {
}
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions  GlobalNamespace::ModBuilder_MonetizationOptions::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions  GlobalNamespace::ModBuilder_MonetizationOptions::Enabled{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions  GlobalNamespace::ModBuilder_MonetizationOptions::Live{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions  GlobalNamespace::ModBuilder_MonetizationOptions::LimitedStock{static_cast<int32_t>(0x8)};
