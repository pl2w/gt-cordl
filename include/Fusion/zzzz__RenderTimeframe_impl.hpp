#pragma once
// IWYU pragma private; include "Fusion/RenderTimeframe.hpp"
#include "Fusion/zzzz__RenderTimeframe_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RenderTimeframe::RenderTimeframe(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RenderTimeframe::RenderTimeframe()   {
}
constexpr ::Fusion::RenderTimeframe  Fusion::RenderTimeframe::Local{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RenderTimeframe  Fusion::RenderTimeframe::Remote{static_cast<int32_t>(0x1)};
