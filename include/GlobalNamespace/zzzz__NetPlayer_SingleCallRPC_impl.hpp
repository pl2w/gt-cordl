#pragma once
// IWYU pragma private; include "GlobalNamespace/NetPlayer_SingleCallRPC.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_SingleCallRPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC::NetPlayer_SingleCallRPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC::NetPlayer_SingleCallRPC()   {
}
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC  GlobalNamespace::NetPlayer_SingleCallRPC::CMS_RequestRoomInitialization{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC  GlobalNamespace::NetPlayer_SingleCallRPC::CMS_RequestTriggerHistory{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC  GlobalNamespace::NetPlayer_SingleCallRPC::CMS_SyncTriggerHistory{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC  GlobalNamespace::NetPlayer_SingleCallRPC::CMS_SyncTriggerCounts{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC  GlobalNamespace::NetPlayer_SingleCallRPC::RankedSendScoreToLateJoiner{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NetPlayer_SingleCallRPC  GlobalNamespace::NetPlayer_SingleCallRPC::Count{static_cast<int32_t>(0x5)};
