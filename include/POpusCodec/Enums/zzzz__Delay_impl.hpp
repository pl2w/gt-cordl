#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Delay.hpp"
#include "POpusCodec/Enums/zzzz__Delay_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::Delay::Delay(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::Delay::Delay()   {
}
constexpr ::POpusCodec::Enums::Delay  POpusCodec::Enums::Delay::Delay2dot5ms{static_cast<int32_t>(0x5)};
constexpr ::POpusCodec::Enums::Delay  POpusCodec::Enums::Delay::Delay5ms{static_cast<int32_t>(0xa)};
constexpr ::POpusCodec::Enums::Delay  POpusCodec::Enums::Delay::Delay10ms{static_cast<int32_t>(0x14)};
constexpr ::POpusCodec::Enums::Delay  POpusCodec::Enums::Delay::Delay20ms{static_cast<int32_t>(0x28)};
constexpr ::POpusCodec::Enums::Delay  POpusCodec::Enums::Delay::Delay40ms{static_cast<int32_t>(0x50)};
constexpr ::POpusCodec::Enums::Delay  POpusCodec::Enums::Delay::Delay60ms{static_cast<int32_t>(0x78)};
