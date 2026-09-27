#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/EventCaching.hpp"
#include "Fusion/Photon/Realtime/zzzz__EventCaching_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::EventCaching::EventCaching(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::EventCaching::EventCaching()   {
}
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::DoNotCache{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::MergeCache{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::ReplaceCache{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::RemoveCache{static_cast<uint8_t>(0x3u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::AddToRoomCache{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::AddToRoomCacheGlobal{static_cast<uint8_t>(0x5u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::RemoveFromRoomCache{static_cast<uint8_t>(0x6u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::RemoveFromRoomCacheForActorsLeft{static_cast<uint8_t>(0x7u)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::SliceIncreaseIndex{static_cast<uint8_t>(0xau)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::SliceSetIndex{static_cast<uint8_t>(0xbu)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::SlicePurgeIndex{static_cast<uint8_t>(0xcu)};
constexpr ::Fusion::Photon::Realtime::EventCaching  Fusion::Photon::Realtime::EventCaching::SlicePurgeUpToIndex{static_cast<uint8_t>(0xdu)};
