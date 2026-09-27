#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking_RoomCreationOptions.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomCreationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxPlayersPerRoom", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsPrivate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LobbyName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMatchmaking_RoomCreationOptions::CustomMatchmaking_RoomCreationOptions(::StringW  RoomPassword, int32_t  MaxPlayersPerRoom, bool  IsPrivate, ::StringW  LobbyName) noexcept  {
this->RoomPassword = RoomPassword;
this->MaxPlayersPerRoom = MaxPlayersPerRoom;
this->IsPrivate = IsPrivate;
this->LobbyName = LobbyName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMatchmaking_RoomCreationOptions::CustomMatchmaking_RoomCreationOptions()   {
}
