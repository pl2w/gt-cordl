#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeRenderBuffer_Format.hpp"
#include "Liv/NGFX/zzzz__NativeRenderBuffer_Format_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeRenderBuffer_Format::NativeRenderBuffer_Format(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeRenderBuffer_Format::NativeRenderBuffer_Format()   {
}
constexpr ::GlobalNamespace::NativeRenderBuffer_Format  GlobalNamespace::NativeRenderBuffer_Format::RGBA{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NativeRenderBuffer_Format  GlobalNamespace::NativeRenderBuffer_Format::Depth{static_cast<int32_t>(0x1)};
