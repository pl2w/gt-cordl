#pragma once
// IWYU pragma private; include "GlobalNamespace/GROneTimeEntitySpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GROneTimeEntitySpawner)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactor;
}
// Forward declare root types
namespace GlobalNamespace {
class GROneTimeEntitySpawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GROneTimeEntitySpawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GROneTimeEntitySpawner*, "", "GROneTimeEntitySpawner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GROneTimeEntitySpawner
class CORDL_TYPE GROneTimeEntitySpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field EntityPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityPrefab, put=__cordl_internal_set_EntityPrefab)) ::UnityW<::GlobalNamespace::GameEntity>  EntityPrefab;

/// @brief Field SpawnDelay, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnDelay, put=__cordl_internal_set_SpawnDelay)) float_t  SpawnDelay;

/// @brief Field bHasSpawned, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_bHasSpawned, put=__cordl_internal_set_bHasSpawned)) bool  bHasSpawned;

/// @brief Field reactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

static inline ::GlobalNamespace::GROneTimeEntitySpawner* New_ctor() ;

/// @brief Method Start, addr 0x589fa10, size 0xd4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TrySpawn, addr 0x589fae8, size 0x288, virtual false, abstract: false, final false
inline void TrySpawn() ;

/// @brief Method Update, addr 0x589fae4, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_EntityPrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_EntityPrefab() ;

constexpr float_t const& __cordl_internal_get_SpawnDelay() const;

constexpr float_t& __cordl_internal_get_SpawnDelay() ;

constexpr bool const& __cordl_internal_get_bHasSpawned() const;

constexpr bool& __cordl_internal_get_bHasSpawned() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr void __cordl_internal_set_EntityPrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_SpawnDelay(float_t  value) ;

constexpr void __cordl_internal_set_bHasSpawned(bool  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

/// @brief Method .ctor, addr 0x589fd70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GROneTimeEntitySpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GROneTimeEntitySpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GROneTimeEntitySpawner(GROneTimeEntitySpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GROneTimeEntitySpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GROneTimeEntitySpawner(GROneTimeEntitySpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1996};

/// @brief Field reactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field EntityPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___EntityPrefab;

/// @brief Field bHasSpawned, offset: 0x30, size: 0x1, def value: None
 bool  ___bHasSpawned;

/// @brief Field SpawnDelay, offset: 0x34, size: 0x4, def value: None
 float_t  ___SpawnDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GROneTimeEntitySpawner, ___reactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GROneTimeEntitySpawner, ___EntityPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GROneTimeEntitySpawner, ___bHasSpawned) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GROneTimeEntitySpawner, ___SpawnDelay) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GROneTimeEntitySpawner) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
