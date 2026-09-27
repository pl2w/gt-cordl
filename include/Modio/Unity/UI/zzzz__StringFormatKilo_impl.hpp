#pragma once
// IWYU pragma private; include "Modio/Unity/UI/StringFormatKilo.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatKilo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Unity::UI::StringFormatKilo::StringFormatKilo(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::StringFormatKilo::StringFormatKilo()   {
}
constexpr ::Modio::Unity::UI::StringFormatKilo  Modio::Unity::UI::StringFormatKilo::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Unity::UI::StringFormatKilo  Modio::Unity::UI::StringFormatKilo::Comma{static_cast<int32_t>(0x1)};
constexpr ::Modio::Unity::UI::StringFormatKilo  Modio::Unity::UI::StringFormatKilo::Kilo{static_cast<int32_t>(0x2)};
constexpr ::Modio::Unity::UI::StringFormatKilo  Modio::Unity::UI::StringFormatKilo::Custom{static_cast<int32_t>(0x3)};
