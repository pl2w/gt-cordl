#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauRoomState.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauRoomState_def.hpp"
// Ctor Parameters [CppParam { name: "IsQuest", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FPS", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsPrivate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RoomCode", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_LuauRoomState::Bindings_LuauRoomState(bool  IsQuest, float_t  FPS, bool  IsPrivate, ::Unity::Collections::FixedString32Bytes  RoomCode) noexcept  {
this->IsQuest = IsQuest;
this->FPS = FPS;
this->IsPrivate = IsPrivate;
this->RoomCode = RoomCode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_LuauRoomState::Bindings_LuauRoomState()   {
}
