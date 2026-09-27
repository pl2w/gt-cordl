#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ImageFormat.hpp"
#include "Modio/Mods/Builder/zzzz__ImageFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::Builder::ImageFormat::ImageFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::Builder::ImageFormat::ImageFormat()   {
}
constexpr ::Modio::Mods::Builder::ImageFormat  Modio::Mods::Builder::ImageFormat::Jpg{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::Builder::ImageFormat  Modio::Mods::Builder::ImageFormat::Jpeg{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::Builder::ImageFormat  Modio::Mods::Builder::ImageFormat::Png{static_cast<int32_t>(0x2)};
