#pragma once
// IWYU pragma private; include "GlobalNamespace/GREntitySpawnPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GREntitySpawnPoint)
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
class GREntitySpawnPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREntitySpawnPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREntitySpawnPoint*, "", "GREntitySpawnPoint");
// Dependencies GhostReactorSpawnConfig::SpawnPointType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREntitySpawnPoint
class CORDL_TYPE GREntitySpawnPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field applyScale, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyScale, put=__cordl_internal_set_applyScale)) bool  applyScale;

/// @brief Field entity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field patrolPath, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPath, put=__cordl_internal_set_patrolPath)) ::UnityW<::GlobalNamespace::GRPatrolPath>  patrolPath;

/// @brief Field spawnPointType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnPointType, put=__cordl_internal_set_spawnPointType)) ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  spawnPointType;

static inline ::GlobalNamespace::GREntitySpawnPoint* New_ctor() ;

constexpr bool const& __cordl_internal_get_applyScale() const;

constexpr bool& __cordl_internal_get_applyScale() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& __cordl_internal_get_patrolPath() const;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& __cordl_internal_get_patrolPath() ;

constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const& __cordl_internal_get_spawnPointType() const;

constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType& __cordl_internal_get_spawnPointType() ;

constexpr void __cordl_internal_set_applyScale(bool  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value) ;

constexpr void __cordl_internal_set_spawnPointType(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  value) ;

/// @brief Method .ctor, addr 0x589a85c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREntitySpawnPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREntitySpawnPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREntitySpawnPoint(GREntitySpawnPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREntitySpawnPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREntitySpawnPoint(GREntitySpawnPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1973};

/// @brief Field spawnPointType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  ___spawnPointType;

/// @brief Field entity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field patrolPath, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPatrolPath>  ___patrolPath;

/// @brief Field applyScale, offset: 0x38, size: 0x1, def value: None
 bool  ___applyScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREntitySpawnPoint, ___spawnPointType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntitySpawnPoint, ___entity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntitySpawnPoint, ___patrolPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntitySpawnPoint, ___applyScale) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREntitySpawnPoint) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
