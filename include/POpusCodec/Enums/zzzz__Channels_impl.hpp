#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Channels.hpp"
#include "POpusCodec/Enums/zzzz__Channels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::Channels::Channels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::Channels::Channels()   {
}
constexpr ::POpusCodec::Enums::Channels  POpusCodec::Enums::Channels::Mono{static_cast<int32_t>(0x1)};
constexpr ::POpusCodec::Enums::Channels  POpusCodec::Enums::Channels::Stereo{static_cast<int32_t>(0x2)};
