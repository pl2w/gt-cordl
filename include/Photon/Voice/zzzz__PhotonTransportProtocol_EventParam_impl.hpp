#pragma once
// IWYU pragma private; include "Photon/Voice/PhotonTransportProtocol_EventParam.hpp"
#include "Photon/Voice/zzzz__PhotonTransportProtocol_EventParam_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam::PhotonTransportProtocol_EventParam(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam::PhotonTransportProtocol_EventParam()   {
}
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::VoiceId{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::SamplingRate{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::Channels{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::FrameDurationUs{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::Bitrate{static_cast<uint8_t>(0x5u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::Width{static_cast<uint8_t>(0x6u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::Height{static_cast<uint8_t>(0x7u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::FPS{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::KeyFrameInt{static_cast<uint8_t>(0x9u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::UserData{static_cast<uint8_t>(0xau)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::EventNumber{static_cast<uint8_t>(0xbu)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventParam  GlobalNamespace::PhotonTransportProtocol_EventParam::Codec{static_cast<uint8_t>(0xcu)};
