#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupFraming_SizeAdjustmentModes.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_SizeAdjustmentModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes::CinemachineGroupFraming_SizeAdjustmentModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes::CinemachineGroupFraming_SizeAdjustmentModes()   {
}
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes::ZoomOnly{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes::DollyOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes::DollyThenZoom{static_cast<int32_t>(0x2)};
