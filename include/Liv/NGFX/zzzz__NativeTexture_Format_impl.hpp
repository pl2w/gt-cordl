#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeTexture_Format.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_Format_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeTexture_Format::NativeTexture_Format(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeTexture_Format::NativeTexture_Format()   {
}
constexpr ::GlobalNamespace::NativeTexture_Format  GlobalNamespace::NativeTexture_Format::RGBA{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NativeTexture_Format  GlobalNamespace::NativeTexture_Format::Depth{static_cast<int32_t>(0x1)};
