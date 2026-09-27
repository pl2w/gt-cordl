#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/CameraMode.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::CameraMode::CameraMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::CameraMode::CameraMode()   {
}
constexpr ::Liv::Lck::GorillaTag::CameraMode  Liv::Lck::GorillaTag::CameraMode::Selfie{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::GorillaTag::CameraMode  Liv::Lck::GorillaTag::CameraMode::FirstPerson{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::GorillaTag::CameraMode  Liv::Lck::GorillaTag::CameraMode::ThirdPerson{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::GorillaTag::CameraMode  Liv::Lck::GorillaTag::CameraMode::Headset{static_cast<int32_t>(0x3)};
constexpr ::Liv::Lck::GorillaTag::CameraMode  Liv::Lck::GorillaTag::CameraMode::Drone{static_cast<int32_t>(0x4)};
