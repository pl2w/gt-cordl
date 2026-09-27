#pragma once
// IWYU pragma private; include "Photon/Voice/PhotonTransportProtocol_EventSubcode.hpp"
#include "Photon/Voice/zzzz__PhotonTransportProtocol_EventSubcode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventSubcode::PhotonTransportProtocol_EventSubcode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventSubcode::PhotonTransportProtocol_EventSubcode()   {
}
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventSubcode  GlobalNamespace::PhotonTransportProtocol_EventSubcode::VoiceInfo{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventSubcode  GlobalNamespace::PhotonTransportProtocol_EventSubcode::VoiceRemove{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::PhotonTransportProtocol_EventSubcode  GlobalNamespace::PhotonTransportProtocol_EventSubcode::Frame{static_cast<uint8_t>(0x3u)};
