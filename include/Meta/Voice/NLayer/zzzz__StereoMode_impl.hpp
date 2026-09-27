#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/StereoMode.hpp"
#include "Meta/Voice/NLayer/zzzz__StereoMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::NLayer::StereoMode::StereoMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::StereoMode::StereoMode()   {
}
constexpr ::Meta::Voice::NLayer::StereoMode  Meta::Voice::NLayer::StereoMode::Both{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::NLayer::StereoMode  Meta::Voice::NLayer::StereoMode::LeftOnly{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::NLayer::StereoMode  Meta::Voice::NLayer::StereoMode::RightOnly{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::NLayer::StereoMode  Meta::Voice::NLayer::StereoMode::DownmixToMono{static_cast<int32_t>(0x3)};
