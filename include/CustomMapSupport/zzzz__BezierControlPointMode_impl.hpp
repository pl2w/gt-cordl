#pragma once
// IWYU pragma private; include "CustomMapSupport/BezierControlPointMode.hpp"
#include "CustomMapSupport/zzzz__BezierControlPointMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::CustomMapSupport::BezierControlPointMode::BezierControlPointMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::CustomMapSupport::BezierControlPointMode::BezierControlPointMode()   {
}
constexpr ::CustomMapSupport::BezierControlPointMode  CustomMapSupport::BezierControlPointMode::Free{static_cast<int32_t>(0x0)};
constexpr ::CustomMapSupport::BezierControlPointMode  CustomMapSupport::BezierControlPointMode::Aligned{static_cast<int32_t>(0x1)};
constexpr ::CustomMapSupport::BezierControlPointMode  CustomMapSupport::BezierControlPointMode::Mirrored{static_cast<int32_t>(0x2)};
