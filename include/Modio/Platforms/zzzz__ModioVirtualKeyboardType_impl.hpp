#pragma once
// IWYU pragma private; include "Modio/Platforms/ModioVirtualKeyboardType.hpp"
#include "Modio/Platforms/zzzz__ModioVirtualKeyboardType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Platforms::ModioVirtualKeyboardType::ModioVirtualKeyboardType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Platforms::ModioVirtualKeyboardType::ModioVirtualKeyboardType()   {
}
constexpr ::Modio::Platforms::ModioVirtualKeyboardType  Modio::Platforms::ModioVirtualKeyboardType::Default{static_cast<int32_t>(0x0)};
constexpr ::Modio::Platforms::ModioVirtualKeyboardType  Modio::Platforms::ModioVirtualKeyboardType::Search{static_cast<int32_t>(0x1)};
constexpr ::Modio::Platforms::ModioVirtualKeyboardType  Modio::Platforms::ModioVirtualKeyboardType::EmailAddress{static_cast<int32_t>(0x2)};
