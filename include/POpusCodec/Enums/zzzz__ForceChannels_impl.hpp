#pragma once
// IWYU pragma private; include "POpusCodec/Enums/ForceChannels.hpp"
#include "POpusCodec/Enums/zzzz__ForceChannels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::ForceChannels::ForceChannels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::ForceChannels::ForceChannels()   {
}
constexpr ::POpusCodec::Enums::ForceChannels  POpusCodec::Enums::ForceChannels::NoForce{static_cast<int32_t>(0xfffffc18)};
constexpr ::POpusCodec::Enums::ForceChannels  POpusCodec::Enums::ForceChannels::Mono{static_cast<int32_t>(0x1)};
constexpr ::POpusCodec::Enums::ForceChannels  POpusCodec::Enums::ForceChannels::Stereo{static_cast<int32_t>(0x2)};
