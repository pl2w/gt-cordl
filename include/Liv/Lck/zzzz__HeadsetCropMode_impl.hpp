#pragma once
// IWYU pragma private; include "Liv/Lck/HeadsetCropMode.hpp"
#include "Liv/Lck/zzzz__HeadsetCropMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::HeadsetCropMode::HeadsetCropMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::HeadsetCropMode::HeadsetCropMode()   {
}
constexpr ::Liv::Lck::HeadsetCropMode  Liv::Lck::HeadsetCropMode::Fit{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::HeadsetCropMode  Liv::Lck::HeadsetCropMode::ZoomFill{static_cast<int32_t>(0x1)};
