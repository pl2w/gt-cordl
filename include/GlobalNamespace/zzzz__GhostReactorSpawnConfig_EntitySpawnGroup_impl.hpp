#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSpawnConfig_EntitySpawnGroup.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_EntitySpawnGroup_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
// Ctor Parameters [CppParam { name: "spawnPointType", ty: "::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entity", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "randomEntity", ty: "::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spawnCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup::GhostReactorSpawnConfig_EntitySpawnGroup(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  spawnPointType, ::UnityW<::GlobalNamespace::GameEntity>  entity, ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  randomEntity, int32_t  spawnCount) noexcept  {
this->spawnPointType = spawnPointType;
this->entity = entity;
this->randomEntity = randomEntity;
this->spawnCount = spawnCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup::GhostReactorSpawnConfig_EntitySpawnGroup()   {
}
