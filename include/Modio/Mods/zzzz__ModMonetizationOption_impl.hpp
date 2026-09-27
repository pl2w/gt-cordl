#pragma once
// IWYU pragma private; include "Modio/Mods/ModMonetizationOption.hpp"
#include "Modio/Mods/zzzz__ModMonetizationOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModMonetizationOption::ModMonetizationOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModMonetizationOption::ModMonetizationOption()   {
}
constexpr ::Modio::Mods::ModMonetizationOption  Modio::Mods::ModMonetizationOption::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::ModMonetizationOption  Modio::Mods::ModMonetizationOption::Enabled{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::ModMonetizationOption  Modio::Mods::ModMonetizationOption::Live{static_cast<int32_t>(0x2)};
constexpr ::Modio::Mods::ModMonetizationOption  Modio::Mods::ModMonetizationOption::EnablePartnerProgram{static_cast<int32_t>(0x4)};
constexpr ::Modio::Mods::ModMonetizationOption  Modio::Mods::ModMonetizationOption::EnableScarcity{static_cast<int32_t>(0x8)};
