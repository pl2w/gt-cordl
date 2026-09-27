#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnStatus.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSpawnStatus::NetworkSpawnStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSpawnStatus::NetworkSpawnStatus()   {
}
constexpr ::Fusion::NetworkSpawnStatus  Fusion::NetworkSpawnStatus::Queued{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkSpawnStatus  Fusion::NetworkSpawnStatus::Spawned{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkSpawnStatus  Fusion::NetworkSpawnStatus::FailedToLoadPrefabSynchronously{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkSpawnStatus  Fusion::NetworkSpawnStatus::FailedToCreateInstance{static_cast<int32_t>(0x3)};
constexpr ::Fusion::NetworkSpawnStatus  Fusion::NetworkSpawnStatus::FailedClientCantSpawn{static_cast<int32_t>(0x4)};
constexpr ::Fusion::NetworkSpawnStatus  Fusion::NetworkSpawnStatus::FailedLocalPlayerNotYetSet{static_cast<int32_t>(0x5)};
