#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusCtlSetRequest.hpp"
#include "POpusCodec/Enums/zzzz__OpusCtlSetRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::OpusCtlSetRequest::OpusCtlSetRequest(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::OpusCtlSetRequest::OpusCtlSetRequest()   {
}
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Application{static_cast<int32_t>(0xfa0)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Bitrate{static_cast<int32_t>(0xfa2)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::MaxBandwidth{static_cast<int32_t>(0xfa4)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::VBR{static_cast<int32_t>(0xfa6)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Bandwidth{static_cast<int32_t>(0xfa8)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Complexity{static_cast<int32_t>(0xfaa)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::InbandFec{static_cast<int32_t>(0xfac)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::PacketLossPercentage{static_cast<int32_t>(0xfae)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Dtx{static_cast<int32_t>(0xfb0)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::VBRConstraint{static_cast<int32_t>(0xfb4)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::ForceChannels{static_cast<int32_t>(0xfb6)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Signal{static_cast<int32_t>(0xfb8)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::Gain{static_cast<int32_t>(0xfc2)};
constexpr ::POpusCodec::Enums::OpusCtlSetRequest  POpusCodec::Enums::OpusCtlSetRequest::LsbDepth{static_cast<int32_t>(0xfc4)};
