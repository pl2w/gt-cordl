#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderColorSource.hpp"
#include "GlobalNamespace/zzzz__GTShaderColorSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderColorSource::GTShaderColorSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderColorSource::GTShaderColorSource()   {
}
constexpr ::GlobalNamespace::GTShaderColorSource  GlobalNamespace::GTShaderColorSource::Color{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShaderColorSource  GlobalNamespace::GTShaderColorSource::Texture{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShaderColorSource  GlobalNamespace::GTShaderColorSource::TextureAsMask{static_cast<int32_t>(0x2)};
