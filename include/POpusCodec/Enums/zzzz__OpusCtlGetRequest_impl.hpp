#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusCtlGetRequest.hpp"
#include "POpusCodec/Enums/zzzz__OpusCtlGetRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::POpusCodec::Enums::OpusCtlGetRequest::OpusCtlGetRequest(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::POpusCodec::Enums::OpusCtlGetRequest::OpusCtlGetRequest()   {
}
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Application{static_cast<int32_t>(0xfa1)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Bitrate{static_cast<int32_t>(0xfa3)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::MaxBandwidth{static_cast<int32_t>(0xfa5)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::VBR{static_cast<int32_t>(0xfa7)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Bandwidth{static_cast<int32_t>(0xfa9)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Complexity{static_cast<int32_t>(0xfab)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::InbandFec{static_cast<int32_t>(0xfad)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::PacketLossPercentage{static_cast<int32_t>(0xfaf)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Dtx{static_cast<int32_t>(0xfb1)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::VBRConstraint{static_cast<int32_t>(0xfb5)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::ForceChannels{static_cast<int32_t>(0xfb7)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Signal{static_cast<int32_t>(0xfb9)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::LookAhead{static_cast<int32_t>(0xfbb)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::SampleRate{static_cast<int32_t>(0xfbd)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::FinalRange{static_cast<int32_t>(0xfbf)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Pitch{static_cast<int32_t>(0xfc1)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::Gain{static_cast<int32_t>(0xfc3)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::LsbDepth{static_cast<int32_t>(0xfc5)};
constexpr ::POpusCodec::Enums::OpusCtlGetRequest  POpusCodec::Enums::OpusCtlGetRequest::LastPacketDurationRequest{static_cast<int32_t>(0xfc7)};
