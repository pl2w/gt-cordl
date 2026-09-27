#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache_Mode.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TargetPositionCache_Mode::TargetPositionCache_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TargetPositionCache_Mode::TargetPositionCache_Mode()   {
}
constexpr ::GlobalNamespace::TargetPositionCache_Mode  GlobalNamespace::TargetPositionCache_Mode::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TargetPositionCache_Mode  GlobalNamespace::TargetPositionCache_Mode::Record{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TargetPositionCache_Mode  GlobalNamespace::TargetPositionCache_Mode::Playback{static_cast<int32_t>(0x2)};
