#pragma once
// IWYU pragma private; include "CSCore/ChannelMask.hpp"
#include "CSCore/zzzz__ChannelMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::CSCore::ChannelMask::ChannelMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::CSCore::ChannelMask::ChannelMask()   {
}
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerFrontLeft{static_cast<int32_t>(0x1)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerFrontRight{static_cast<int32_t>(0x2)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerFrontCenter{static_cast<int32_t>(0x4)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerLowFrequency{static_cast<int32_t>(0x8)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerBackLeft{static_cast<int32_t>(0x10)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerBackRight{static_cast<int32_t>(0x20)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerFrontLeftOfCenter{static_cast<int32_t>(0x40)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerFrontRightOfCenter{static_cast<int32_t>(0x80)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerBackCenter{static_cast<int32_t>(0x100)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerSideLeft{static_cast<int32_t>(0x200)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerSideRight{static_cast<int32_t>(0x400)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopCenter{static_cast<int32_t>(0x800)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopFrontLeft{static_cast<int32_t>(0x1000)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopFrontCenter{static_cast<int32_t>(0x2000)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopFrontRight{static_cast<int32_t>(0x4000)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopBackLeft{static_cast<int32_t>(0x8000)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopBackCenter{static_cast<int32_t>(0x10000)};
constexpr ::CSCore::ChannelMask  CSCore::ChannelMask::SpeakerTopBackRight{static_cast<int32_t>(0x20000)};
