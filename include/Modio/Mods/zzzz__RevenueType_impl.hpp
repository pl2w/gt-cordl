#pragma once
// IWYU pragma private; include "Modio/Mods/RevenueType.hpp"
#include "Modio/Mods/zzzz__RevenueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::RevenueType::RevenueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::RevenueType::RevenueType()   {
}
constexpr ::Modio::Mods::RevenueType  Modio::Mods::RevenueType::Free{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::RevenueType  Modio::Mods::RevenueType::Paid{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::RevenueType  Modio::Mods::RevenueType::FreeAndPaid{static_cast<int32_t>(0x2)};
