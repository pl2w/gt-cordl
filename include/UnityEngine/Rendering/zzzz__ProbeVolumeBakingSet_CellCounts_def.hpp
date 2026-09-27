#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet_CellCounts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingSet_CellCounts)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumeBakingSet_CellCounts;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts, "UnityEngine.Rendering", "ProbeVolumeBakingSet/CellCounts");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/CellCounts
struct CORDL_TYPE ProbeVolumeBakingSet_CellCounts {
public:
// Declarations
/// @brief Method Add, addr 0xb1661d0, size 0x18, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts  o) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeBakingSet_CellCounts() ;

// Ctor Parameters [CppParam { name: "bricksCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "chunksCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeBakingSet_CellCounts(int32_t  bricksCount, int32_t  chunksCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16855};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field bricksCount, offset: 0x0, size: 0x4, def value: None
 int32_t  bricksCount;

/// @brief Field chunksCount, offset: 0x4, size: 0x4, def value: None
 int32_t  chunksCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts, bricksCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts, chunksCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumeBakingSet_CellCounts) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
