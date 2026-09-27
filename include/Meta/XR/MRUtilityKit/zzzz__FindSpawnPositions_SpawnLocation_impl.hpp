#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/FindSpawnPositions_SpawnLocation.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__FindSpawnPositions_SpawnLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation::FindSpawnPositions_SpawnLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation::FindSpawnPositions_SpawnLocation()   {
}
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation  GlobalNamespace::FindSpawnPositions_SpawnLocation::Floating{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation  GlobalNamespace::FindSpawnPositions_SpawnLocation::AnySurface{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation  GlobalNamespace::FindSpawnPositions_SpawnLocation::VerticalSurfaces{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation  GlobalNamespace::FindSpawnPositions_SpawnLocation::OnTopOfSurfaces{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation  GlobalNamespace::FindSpawnPositions_SpawnLocation::HangingDown{static_cast<int32_t>(0x4)};
