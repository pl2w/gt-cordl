#pragma once
// IWYU pragma private; include "Modio/Mods/ModMaturityOptions.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModMaturityOptions::ModMaturityOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModMaturityOptions::ModMaturityOptions()   {
}
constexpr ::Modio::Mods::ModMaturityOptions  Modio::Mods::ModMaturityOptions::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::ModMaturityOptions  Modio::Mods::ModMaturityOptions::Alcohol{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::ModMaturityOptions  Modio::Mods::ModMaturityOptions::Drugs{static_cast<int32_t>(0x2)};
constexpr ::Modio::Mods::ModMaturityOptions  Modio::Mods::ModMaturityOptions::Violence{static_cast<int32_t>(0x4)};
constexpr ::Modio::Mods::ModMaturityOptions  Modio::Mods::ModMaturityOptions::Explicit{static_cast<int32_t>(0x8)};
