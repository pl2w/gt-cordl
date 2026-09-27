#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSpawnConfig_EntitySpawnGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorSpawnConfig_EntitySpawnGroup)
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorSpawnConfig_EntitySpawnGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup, "", "GhostReactorSpawnConfig/EntitySpawnGroup");
// Dependencies GhostReactorSpawnConfig::SpawnPointType
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorSpawnConfig/EntitySpawnGroup
struct CORDL_TYPE GhostReactorSpawnConfig_EntitySpawnGroup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorSpawnConfig_EntitySpawnGroup() ;

// Ctor Parameters [CppParam { name: "spawnPointType", ty: "::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType", modifiers: "", def_value: None, comment: None }, CppParam { name: "entity", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: None, comment: None }, CppParam { name: "randomEntity", ty: "::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>", modifiers: "", def_value: None, comment: None }, CppParam { name: "spawnCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorSpawnConfig_EntitySpawnGroup(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  spawnPointType, ::UnityW<::GlobalNamespace::GameEntity>  entity, ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  randomEntity, int32_t  spawnCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1835};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field spawnPointType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  spawnPointType;

/// @brief Field entity, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field randomEntity, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  randomEntity;

/// @brief Field spawnCount, offset: 0x18, size: 0x4, def value: None
 int32_t  spawnCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup, spawnPointType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup, entity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup, randomEntity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup, spawnCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
