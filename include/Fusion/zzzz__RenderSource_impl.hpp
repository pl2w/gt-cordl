#pragma once
// IWYU pragma private; include "Fusion/RenderSource.hpp"
#include "Fusion/zzzz__RenderSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RenderSource::RenderSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RenderSource::RenderSource()   {
}
constexpr ::Fusion::RenderSource  Fusion::RenderSource::Interpolated{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RenderSource  Fusion::RenderSource::From{static_cast<int32_t>(0x1)};
constexpr ::Fusion::RenderSource  Fusion::RenderSource::To{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RenderSource  Fusion::RenderSource::Latest{static_cast<int32_t>(0x3)};
