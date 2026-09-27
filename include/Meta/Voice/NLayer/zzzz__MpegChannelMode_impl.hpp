#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegChannelMode.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegChannelMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::NLayer::MpegChannelMode::MpegChannelMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::MpegChannelMode::MpegChannelMode()   {
}
constexpr ::Meta::Voice::NLayer::MpegChannelMode  Meta::Voice::NLayer::MpegChannelMode::Stereo{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::NLayer::MpegChannelMode  Meta::Voice::NLayer::MpegChannelMode::JointStereo{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::NLayer::MpegChannelMode  Meta::Voice::NLayer::MpegChannelMode::DualChannel{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::NLayer::MpegChannelMode  Meta::Voice::NLayer::MpegChannelMode::Mono{static_cast<int32_t>(0x3)};
