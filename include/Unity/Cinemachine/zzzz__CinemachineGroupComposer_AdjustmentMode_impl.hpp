#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupComposer_AdjustmentMode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_AdjustmentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode::CinemachineGroupComposer_AdjustmentMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode::CinemachineGroupComposer_AdjustmentMode()   {
}
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  GlobalNamespace::CinemachineGroupComposer_AdjustmentMode::ZoomOnly{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  GlobalNamespace::CinemachineGroupComposer_AdjustmentMode::DollyOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  GlobalNamespace::CinemachineGroupComposer_AdjustmentMode::DollyThenZoom{static_cast<int32_t>(0x2)};
