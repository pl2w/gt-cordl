#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/CameraMode.hpp"
#include "Liv/Lck/Tablet/zzzz__CameraMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Tablet::CameraMode::CameraMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::CameraMode::CameraMode()   {
}
constexpr ::Liv::Lck::Tablet::CameraMode  Liv::Lck::Tablet::CameraMode::Selfie{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::Tablet::CameraMode  Liv::Lck::Tablet::CameraMode::FirstPerson{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::Tablet::CameraMode  Liv::Lck::Tablet::CameraMode::ThirdPerson{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::Tablet::CameraMode  Liv::Lck::Tablet::CameraMode::Headset{static_cast<int32_t>(0x3)};
