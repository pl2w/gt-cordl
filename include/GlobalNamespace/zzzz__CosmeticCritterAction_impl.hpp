#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterAction.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticCritterAction::CosmeticCritterAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterAction::CosmeticCritterAction()   {
}
constexpr ::GlobalNamespace::CosmeticCritterAction  GlobalNamespace::CosmeticCritterAction::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CosmeticCritterAction  GlobalNamespace::CosmeticCritterAction::RPC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CosmeticCritterAction  GlobalNamespace::CosmeticCritterAction::Spawn{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CosmeticCritterAction  GlobalNamespace::CosmeticCritterAction::Despawn{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CosmeticCritterAction  GlobalNamespace::CosmeticCritterAction::SpawnLinked{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CosmeticCritterAction  GlobalNamespace::CosmeticCritterAction::ShadeHeartbeat{static_cast<int32_t>(0x10)};
