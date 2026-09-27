#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager_RPC.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_RPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRElevatorManager_RPC::GRElevatorManager_RPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorManager_RPC::GRElevatorManager_RPC()   {
}
constexpr ::GlobalNamespace::GRElevatorManager_RPC  GlobalNamespace::GRElevatorManager_RPC::RemoteElevatorButtonPress{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRElevatorManager_RPC  GlobalNamespace::GRElevatorManager_RPC::RemoteActivateTeleport{static_cast<int32_t>(0x1)};
