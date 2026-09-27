#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusApplicationType.hpp"
#include "POpusCodec/Enums/zzzz__OpusApplicationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::OpusApplicationType::OpusApplicationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::OpusApplicationType::OpusApplicationType()   {
}
constexpr ::POpusCodec::Enums::OpusApplicationType  POpusCodec::Enums::OpusApplicationType::Voip{static_cast<int32_t>(0x800)};
constexpr ::POpusCodec::Enums::OpusApplicationType  POpusCodec::Enums::OpusApplicationType::Audio{static_cast<int32_t>(0x801)};
constexpr ::POpusCodec::Enums::OpusApplicationType  POpusCodec::Enums::OpusApplicationType::RestrictedLowDelay{static_cast<int32_t>(0x803)};
