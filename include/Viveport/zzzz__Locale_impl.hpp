#pragma once
// IWYU pragma private; include "Viveport/Locale.hpp"
#include "Viveport/zzzz__Locale_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Locale::Locale(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Locale::Locale()   {
}
constexpr ::Viveport::Locale  Viveport::Locale::US{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Locale  Viveport::Locale::DE{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Locale  Viveport::Locale::JP{static_cast<int32_t>(0x2)};
constexpr ::Viveport::Locale  Viveport::Locale::KR{static_cast<int32_t>(0x3)};
constexpr ::Viveport::Locale  Viveport::Locale::RU{static_cast<int32_t>(0x4)};
constexpr ::Viveport::Locale  Viveport::Locale::CN{static_cast<int32_t>(0x5)};
constexpr ::Viveport::Locale  Viveport::Locale::TW{static_cast<int32_t>(0x6)};
constexpr ::Viveport::Locale  Viveport::Locale::FR{static_cast<int32_t>(0x7)};
