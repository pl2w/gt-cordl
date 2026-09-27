#pragma once
// IWYU pragma private; include "Fusion/Statistics/CanvasAnchor.hpp"
#include "Fusion/Statistics/zzzz__CanvasAnchor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Statistics::CanvasAnchor::CanvasAnchor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::CanvasAnchor::CanvasAnchor()   {
}
constexpr ::Fusion::Statistics::CanvasAnchor  Fusion::Statistics::CanvasAnchor::TopLeft{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Statistics::CanvasAnchor  Fusion::Statistics::CanvasAnchor::TopRight{static_cast<int32_t>(0x1)};
