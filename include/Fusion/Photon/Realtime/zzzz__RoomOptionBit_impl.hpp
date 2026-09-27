#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RoomOptionBit.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomOptionBit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::RoomOptionBit::RoomOptionBit(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RoomOptionBit::RoomOptionBit()   {
}
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::CheckUserOnJoin{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::DeleteCacheOnLeave{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::SuppressRoomEvents{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::PublishUserId{static_cast<int32_t>(0x8)};
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::DeleteNullProps{static_cast<int32_t>(0x10)};
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::BroadcastPropsChangeToAll{static_cast<int32_t>(0x20)};
constexpr ::Fusion::Photon::Realtime::RoomOptionBit  Fusion::Photon::Realtime::RoomOptionBit::SuppressPlayerInfo{static_cast<int32_t>(0x40)};
