#pragma once
// IWYU pragma private; include "Modio/Mods/ModRating.hpp"
#include "Modio/Mods/zzzz__ModRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModRating::ModRating(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModRating::ModRating()   {
}
constexpr ::Modio::Mods::ModRating  Modio::Mods::ModRating::Positive{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::ModRating  Modio::Mods::ModRating::Negative{static_cast<int32_t>(0xffffffff)};
constexpr ::Modio::Mods::ModRating  Modio::Mods::ModRating::None{static_cast<int32_t>(0x0)};
