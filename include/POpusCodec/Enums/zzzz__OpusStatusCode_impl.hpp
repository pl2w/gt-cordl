#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusStatusCode.hpp"
#include "POpusCodec/Enums/zzzz__OpusStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::OpusStatusCode::OpusStatusCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::OpusStatusCode::OpusStatusCode()   {
}
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::OK{static_cast<int32_t>(0x0)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::BadArguments{static_cast<int32_t>(0xffffffff)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::BufferTooSmall{static_cast<int32_t>(0xfffffffe)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::InternalError{static_cast<int32_t>(0xfffffffd)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::InvalidPacket{static_cast<int32_t>(0xfffffffc)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::Unimplemented{static_cast<int32_t>(0xfffffffb)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::InvalidState{static_cast<int32_t>(0xfffffffa)};
constexpr ::POpusCodec::Enums::OpusStatusCode  POpusCodec::Enums::OpusStatusCode::AllocFail{static_cast<int32_t>(0xfffffff9)};
