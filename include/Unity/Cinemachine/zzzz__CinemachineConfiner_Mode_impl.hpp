#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner_Mode.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineConfiner_Mode::CinemachineConfiner_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineConfiner_Mode::CinemachineConfiner_Mode()   {
}
constexpr ::GlobalNamespace::CinemachineConfiner_Mode  GlobalNamespace::CinemachineConfiner_Mode::Confine2D{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CinemachineConfiner_Mode  GlobalNamespace::CinemachineConfiner_Mode::Confine3D{static_cast<int32_t>(0x1)};
