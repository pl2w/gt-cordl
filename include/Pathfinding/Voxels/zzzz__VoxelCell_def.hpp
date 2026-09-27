#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelCell.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelCell)
namespace Pathfinding::Voxels {
class VoxelSpan;
}
// Forward declare root types
namespace Pathfinding::Voxels {
struct VoxelCell;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::VoxelCell);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelCell, "Pathfinding.Voxels", "VoxelCell");
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.VoxelCell
struct CORDL_TYPE VoxelCell {
public:
// Declarations
/// @brief Method AddSpan, addr 0x5ebf834, size 0x1b8, virtual false, abstract: false, final false
inline void AddSpan(uint32_t  bottom, uint32_t  top, int32_t  area, int32_t  voxelWalkableClimb) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoxelCell() ;

// Ctor Parameters [CppParam { name: "firstSpan", ty: "::Pathfinding::Voxels::VoxelSpan*", modifiers: "", def_value: None, comment: None }]
constexpr VoxelCell(::Pathfinding::Voxels::VoxelSpan*  firstSpan) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field firstSpan, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::Voxels::VoxelSpan*  firstSpan;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelCell, firstSpan) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelCell) == 0x8, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
