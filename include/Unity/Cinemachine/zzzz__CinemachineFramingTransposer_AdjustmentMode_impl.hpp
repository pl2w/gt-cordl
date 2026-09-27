#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFramingTransposer_AdjustmentMode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_AdjustmentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode::CinemachineFramingTransposer_AdjustmentMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode::CinemachineFramingTransposer_AdjustmentMode()   {
}
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode::ZoomOnly{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode::DollyOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode::DollyThenZoom{static_cast<int32_t>(0x2)};
