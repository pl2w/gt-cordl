#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStoryboard_FillStrategy.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_FillStrategy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy::CinemachineStoryboard_FillStrategy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy::CinemachineStoryboard_FillStrategy()   {
}
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy  GlobalNamespace::CinemachineStoryboard_FillStrategy::BestFit{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy  GlobalNamespace::CinemachineStoryboard_FillStrategy::CropImageToFit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy  GlobalNamespace::CinemachineStoryboard_FillStrategy::StretchToFit{static_cast<int32_t>(0x2)};
