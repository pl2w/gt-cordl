#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferableObjectSpawner_SpawnMode.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode::TransferableObjectSpawner_SpawnMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode::TransferableObjectSpawner_SpawnMode()   {
}
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode  GlobalNamespace::TransferableObjectSpawner_SpawnMode::OnGround{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode  GlobalNamespace::TransferableObjectSpawner_SpawnMode::AtCurrentTransform{static_cast<int32_t>(0x1)};
