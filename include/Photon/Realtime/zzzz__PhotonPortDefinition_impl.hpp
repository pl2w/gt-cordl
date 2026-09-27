#pragma once
// IWYU pragma private; include "Photon/Realtime/PhotonPortDefinition.hpp"
#include "Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
inline void Photon::Realtime::PhotonPortDefinition::setStaticF_AlternativeUdpPorts(::Photon::Realtime::PhotonPortDefinition  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::PhotonPortDefinition, "AlternativeUdpPorts", ::Photon::Realtime::PhotonPortDefinition>(std::forward<::Photon::Realtime::PhotonPortDefinition>(value));
}
inline ::Photon::Realtime::PhotonPortDefinition Photon::Realtime::PhotonPortDefinition::getStaticF_AlternativeUdpPorts()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::PhotonPortDefinition, "AlternativeUdpPorts", ::Photon::Realtime::PhotonPortDefinition>();
}
// Ctor Parameters [CppParam { name: "NameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MasterServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Realtime::PhotonPortDefinition::PhotonPortDefinition(uint16_t  NameServerPort, uint16_t  MasterServerPort, uint16_t  GameServerPort) noexcept  {
this->NameServerPort = NameServerPort;
this->MasterServerPort = MasterServerPort;
this->GameServerPort = GameServerPort;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::PhotonPortDefinition::PhotonPortDefinition()   {
}
