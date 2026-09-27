#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsCanvas_DragMode.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsCanvas_DragMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode::FusionStatsCanvas_DragMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode::FusionStatsCanvas_DragMode()   {
}
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode  GlobalNamespace::FusionStatsCanvas_DragMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode  GlobalNamespace::FusionStatsCanvas_DragMode::DragCanvas{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode  GlobalNamespace::FusionStatsCanvas_DragMode::ResizeContent{static_cast<int32_t>(0x2)};
