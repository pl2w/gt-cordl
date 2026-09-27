#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_InterpolationMode.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_InterpolationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode::ContinuousProperty_InterpolationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode::ContinuousProperty_InterpolationMode()   {
}
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode  GlobalNamespace::ContinuousProperty_InterpolationMode::Position{static_cast<int32_t>(0x400000)};
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode  GlobalNamespace::ContinuousProperty_InterpolationMode::Rotation{static_cast<int32_t>(0x800000)};
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode  GlobalNamespace::ContinuousProperty_InterpolationMode::PositionAndRotation{static_cast<int32_t>(0xc00000)};
