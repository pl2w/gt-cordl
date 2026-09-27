#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunTeams_Team.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTeams_Team_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PunTeams_Team::PunTeams_Team(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PunTeams_Team::PunTeams_Team()   {
}
constexpr ::GlobalNamespace::PunTeams_Team  GlobalNamespace::PunTeams_Team::none{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::PunTeams_Team  GlobalNamespace::PunTeams_Team::red{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::PunTeams_Team  GlobalNamespace::PunTeams_Team::blue{static_cast<uint8_t>(0x2u)};
