#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/CompactVoxelCell.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompactVoxelCell)
// Forward declare root types
namespace Pathfinding::Voxels {
struct CompactVoxelCell;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::CompactVoxelCell);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::CompactVoxelCell, "Pathfinding.Voxels", "CompactVoxelCell");
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.CompactVoxelCell
struct CORDL_TYPE CompactVoxelCell {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ebfa28, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint32_t  i, uint32_t  c) ;

// Ctor Parameters []
// @brief default ctor
constexpr CompactVoxelCell() ;

// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompactVoxelCell(uint32_t  index, uint32_t  count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 uint32_t  index;

/// @brief Field count, offset: 0x4, size: 0x4, def value: None
 uint32_t  count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::CompactVoxelCell, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::CompactVoxelCell, count) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::CompactVoxelCell) == 0x8, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
