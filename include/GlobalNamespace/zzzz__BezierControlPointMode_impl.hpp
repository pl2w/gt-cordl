#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierControlPointMode.hpp"
#include "GlobalNamespace/zzzz__BezierControlPointMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BezierControlPointMode::BezierControlPointMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierControlPointMode::BezierControlPointMode()   {
}
constexpr ::GlobalNamespace::BezierControlPointMode  GlobalNamespace::BezierControlPointMode::Free{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BezierControlPointMode  GlobalNamespace::BezierControlPointMode::Aligned{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BezierControlPointMode  GlobalNamespace::BezierControlPointMode::Mirrored{static_cast<int32_t>(0x2)};
