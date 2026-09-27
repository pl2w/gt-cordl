#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_RPC.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_RPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityManager_RPC::GameEntityManager_RPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_RPC::GameEntityManager_RPC()   {
}
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::CreateItem{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::CreateItems{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::DestroyItem{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::ApplyState{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::GrabEntity{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::ThrowEntity{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::SendTableData{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::HitEntity{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GameEntityManager_RPC  GlobalNamespace::GameEntityManager_RPC::PlayerLeftZone{static_cast<int32_t>(0x8)};
