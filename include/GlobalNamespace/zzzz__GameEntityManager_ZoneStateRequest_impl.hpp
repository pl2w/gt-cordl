#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_ZoneStateRequest.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ZoneStateRequest_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
// Ctor Parameters [CppParam { name: "player", ty: "::Photon::Realtime::Player*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zone", ty: "::GlobalNamespace::GTZone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityManager_ZoneStateRequest::GameEntityManager_ZoneStateRequest(::Photon::Realtime::Player*  player, ::GlobalNamespace::GTZone  zone, bool  completed) noexcept  {
this->player = player;
this->zone = zone;
this->completed = completed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ZoneStateRequest::GameEntityManager_ZoneStateRequest()   {
}
