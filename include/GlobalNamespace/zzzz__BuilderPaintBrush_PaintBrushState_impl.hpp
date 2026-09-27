#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPaintBrush_PaintBrushState.hpp"
#include "GlobalNamespace/zzzz__BuilderPaintBrush_PaintBrushState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState::BuilderPaintBrush_PaintBrushState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState::BuilderPaintBrush_PaintBrushState()   {
}
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  GlobalNamespace::BuilderPaintBrush_PaintBrushState::Inactive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  GlobalNamespace::BuilderPaintBrush_PaintBrushState::HeldRemote{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  GlobalNamespace::BuilderPaintBrush_PaintBrushState::Held{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  GlobalNamespace::BuilderPaintBrush_PaintBrushState::Hover{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  GlobalNamespace::BuilderPaintBrush_PaintBrushState::JustPainted{static_cast<int32_t>(0x4)};
