#pragma once
// IWYU pragma private; include "POpusCodec/Enums/SamplingRate.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::SamplingRate::SamplingRate(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::SamplingRate::SamplingRate()   {
}
constexpr ::POpusCodec::Enums::SamplingRate  POpusCodec::Enums::SamplingRate::Sampling08000{static_cast<int32_t>(0x1f40)};
constexpr ::POpusCodec::Enums::SamplingRate  POpusCodec::Enums::SamplingRate::Sampling12000{static_cast<int32_t>(0x2ee0)};
constexpr ::POpusCodec::Enums::SamplingRate  POpusCodec::Enums::SamplingRate::Sampling16000{static_cast<int32_t>(0x3e80)};
constexpr ::POpusCodec::Enums::SamplingRate  POpusCodec::Enums::SamplingRate::Sampling24000{static_cast<int32_t>(0x5dc0)};
constexpr ::POpusCodec::Enums::SamplingRate  POpusCodec::Enums::SamplingRate::Sampling48000{static_cast<int32_t>(0xbb80)};
