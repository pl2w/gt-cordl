#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerShadeFleeing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CosmeticCritterSpawnerShadeFleeing)
namespace GlobalNamespace {
class CosmeticCritter;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterSpawnerShadeFleeing;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*, "", "CosmeticCritterSpawnerShadeFleeing");
// Dependencies CosmeticCritterSpawner, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterSpawnerShadeFleeing
class CORDL_TYPE CosmeticCritterSpawnerShadeFleeing : public ::GlobalNamespace::CosmeticCritterSpawner {
public:
// Declarations
/// @brief Field spawnPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_spawnPosition, put=__cordl_internal_set_spawnPosition)) ::UnityEngine::Vector3  spawnPosition;

static inline ::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing* New_ctor() ;

/// @brief Method OnSpawn, addr 0x57f3014, size 0xd4, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::CosmeticCritter*  critter) ;

/// @brief Method SetSpawnPosition, addr 0x57f3008, size 0xc, virtual false, abstract: false, final false
inline void SetSpawnPosition(::UnityEngine::Vector3  pos) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnPosition() ;

constexpr void __cordl_internal_set_spawnPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x57f3340, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterSpawnerShadeFleeing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerShadeFleeing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterSpawnerShadeFleeing(CosmeticCritterSpawnerShadeFleeing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerShadeFleeing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterSpawnerShadeFleeing(CosmeticCritterSpawnerShadeFleeing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{198};

/// @brief Field spawnPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spawnPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing, ___spawnPosition) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
