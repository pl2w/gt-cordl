#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PhotonPortDefinition.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
inline void Fusion::Photon::Realtime::PhotonPortDefinition::setStaticF_AlternativeUdpPorts(::Fusion::Photon::Realtime::PhotonPortDefinition  value)  {
::cordl_internals::setStaticField<::Fusion::Photon::Realtime::PhotonPortDefinition, "AlternativeUdpPorts", ::Fusion::Photon::Realtime::PhotonPortDefinition>(std::forward<::Fusion::Photon::Realtime::PhotonPortDefinition>(value));
}
inline ::Fusion::Photon::Realtime::PhotonPortDefinition Fusion::Photon::Realtime::PhotonPortDefinition::getStaticF_AlternativeUdpPorts()  {
return ::cordl_internals::getStaticField<::Fusion::Photon::Realtime::PhotonPortDefinition, "AlternativeUdpPorts", ::Fusion::Photon::Realtime::PhotonPortDefinition>();
}
// Ctor Parameters [CppParam { name: "NameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MasterServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::PhotonPortDefinition::PhotonPortDefinition(uint16_t  NameServerPort, uint16_t  MasterServerPort, uint16_t  GameServerPort) noexcept  {
this->NameServerPort = NameServerPort;
this->MasterServerPort = MasterServerPort;
this->GameServerPort = GameServerPort;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::PhotonPortDefinition::PhotonPortDefinition()   {
}
