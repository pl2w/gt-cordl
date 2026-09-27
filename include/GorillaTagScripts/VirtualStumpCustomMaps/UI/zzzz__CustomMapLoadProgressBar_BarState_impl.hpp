#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapLoadProgressBar_BarState.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_BarState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState::CustomMapLoadProgressBar_BarState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState::CustomMapLoadProgressBar_BarState()   {
}
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState  GlobalNamespace::CustomMapLoadProgressBar_BarState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState  GlobalNamespace::CustomMapLoadProgressBar_BarState::Working{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState  GlobalNamespace::CustomMapLoadProgressBar_BarState::Ready{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState  GlobalNamespace::CustomMapLoadProgressBar_BarState::Failed{static_cast<int32_t>(0x3)};
