#pragma once
// IWYU pragma private; include "Modio/Unity/UI/StringFormatBytes.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatBytes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Unity::UI::StringFormatBytes::StringFormatBytes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::StringFormatBytes::StringFormatBytes()   {
}
constexpr ::Modio::Unity::UI::StringFormatBytes  Modio::Unity::UI::StringFormatBytes::Bytes{static_cast<int32_t>(0x0)};
constexpr ::Modio::Unity::UI::StringFormatBytes  Modio::Unity::UI::StringFormatBytes::BytesComma{static_cast<int32_t>(0x1)};
constexpr ::Modio::Unity::UI::StringFormatBytes  Modio::Unity::UI::StringFormatBytes::Suffix{static_cast<int32_t>(0x2)};
constexpr ::Modio::Unity::UI::StringFormatBytes  Modio::Unity::UI::StringFormatBytes::Custom{static_cast<int32_t>(0x3)};
