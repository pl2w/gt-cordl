#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerButterflyNet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerTimed_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterSpawnerButterflyNet)
namespace GlobalNamespace {
class CosmeticCritter;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterSpawnerButterflyNet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*, "", "CosmeticCritterSpawnerButterflyNet");
// Dependencies CosmeticCritterSpawnerTimed
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterSpawnerButterflyNet
class CORDL_TYPE CosmeticCritterSpawnerButterflyNet : public ::GlobalNamespace::CosmeticCritterSpawnerTimed {
public:
// Declarations
/// @brief Field spawnRadius, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnRadius, put=__cordl_internal_set_spawnRadius)) float_t  spawnRadius;

static inline ::GlobalNamespace::CosmeticCritterSpawnerButterflyNet* New_ctor() ;

/// @brief Method SetRandomVariables, addr 0x57f1d94, size 0xd8, virtual true, abstract: false, final false
inline void SetRandomVariables(::GlobalNamespace::CosmeticCritter*  critter) ;

constexpr float_t const& __cordl_internal_get_spawnRadius() const;

constexpr float_t& __cordl_internal_get_spawnRadius() ;

constexpr void __cordl_internal_set_spawnRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x57f1e6c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterSpawnerButterflyNet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerButterflyNet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterSpawnerButterflyNet(CosmeticCritterSpawnerButterflyNet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerButterflyNet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterSpawnerButterflyNet(CosmeticCritterSpawnerButterflyNet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{194};

/// [Tooltip("Spawn a butterfly on the surface of a sphere with this radius, and with a center on this object.")]
/// [SerializeField]
/// @brief Field spawnRadius, offset: 0x6c, size: 0x4, def value: None
 float_t  ___spawnRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawnerButterflyNet, ___spawnRadius) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterSpawnerButterflyNet) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
