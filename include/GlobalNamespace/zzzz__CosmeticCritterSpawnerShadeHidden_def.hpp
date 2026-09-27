#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerShadeHidden.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerTimed_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(CosmeticCritterSpawnerShadeHidden)
namespace GlobalNamespace {
class CosmeticCritter;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterSpawnerShadeHidden;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*, "", "CosmeticCritterSpawnerShadeHidden");
// Dependencies CosmeticCritterSpawnerTimed, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterSpawnerShadeHidden
class CORDL_TYPE CosmeticCritterSpawnerShadeHidden : public ::GlobalNamespace::CosmeticCritterSpawnerTimed {
public:
// Declarations
/// @brief Field orbitHeightOffsetMinMax, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get_orbitHeightOffsetMinMax, put=__cordl_internal_set_orbitHeightOffsetMinMax)) ::UnityEngine::Vector2  orbitHeightOffsetMinMax;

/// @brief Field orbitRadiusMinMax, offset 0x74, size 0x8 
 __declspec(property(get=__cordl_internal_get_orbitRadiusMinMax, put=__cordl_internal_set_orbitRadiusMinMax)) ::UnityEngine::Vector2  orbitRadiusMinMax;

static inline ::GlobalNamespace::CosmeticCritterSpawnerShadeHidden* New_ctor() ;

/// @brief Method SetRandomVariables, addr 0x57f3348, size 0xd8, virtual true, abstract: false, final false
inline void SetRandomVariables(::GlobalNamespace::CosmeticCritter*  critter) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_orbitHeightOffsetMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_orbitHeightOffsetMinMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_orbitRadiusMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_orbitRadiusMinMax() ;

constexpr void __cordl_internal_set_orbitHeightOffsetMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_orbitRadiusMinMax(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x57f3430, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterSpawnerShadeHidden() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerShadeHidden", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterSpawnerShadeHidden(CosmeticCritterSpawnerShadeHidden && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerShadeHidden", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterSpawnerShadeHidden(CosmeticCritterSpawnerShadeHidden const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{199};

/// [Tooltip("Add between X and Y extra height to the base orbit height.")]
/// [SerializeField]
/// @brief Field orbitHeightOffsetMinMax, offset: 0x6c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___orbitHeightOffsetMinMax;

/// [Tooltip("Orbit between X (green sphere) and Y (red sphere) units away from this spawner\'s position when first spawned.")]
/// [SerializeField]
/// @brief Field orbitRadiusMinMax, offset: 0x74, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___orbitRadiusMinMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawnerShadeHidden, ___orbitHeightOffsetMinMax) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawnerShadeHidden, ___orbitRadiusMinMax) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterSpawnerShadeHidden) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
