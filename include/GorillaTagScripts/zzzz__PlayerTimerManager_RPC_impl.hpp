#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerManager_RPC.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerManager_RPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerTimerManager_RPC::PlayerTimerManager_RPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTimerManager_RPC::PlayerTimerManager_RPC()   {
}
constexpr ::GlobalNamespace::PlayerTimerManager_RPC  GlobalNamespace::PlayerTimerManager_RPC::InitTimersMaster{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerTimerManager_RPC  GlobalNamespace::PlayerTimerManager_RPC::ToggleTimerMaster{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerTimerManager_RPC  GlobalNamespace::PlayerTimerManager_RPC::Count{static_cast<int32_t>(0x2)};
