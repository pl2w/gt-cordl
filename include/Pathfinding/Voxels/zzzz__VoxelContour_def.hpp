#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelContour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelContour)
// Forward declare root types
namespace Pathfinding::Voxels {
struct VoxelContour;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::VoxelContour);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelContour, "Pathfinding.Voxels", "VoxelContour");
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.VoxelContour
struct CORDL_TYPE VoxelContour {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelContour() ;

// Ctor Parameters [CppParam { name: "nverts", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "verts", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rverts", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reg", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "area", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelContour(int32_t  nverts, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  rverts, int32_t  reg, int32_t  area) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field nverts, offset: 0x0, size: 0x4, def value: None
 int32_t  nverts;

/// @brief Field verts, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  verts;

/// @brief Field rverts, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  rverts;

/// @brief Field reg, offset: 0x18, size: 0x4, def value: None
 int32_t  reg;

/// @brief Field area, offset: 0x1c, size: 0x4, def value: None
 int32_t  area;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelContour, nverts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelContour, verts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelContour, rverts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelContour, reg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelContour, area) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelContour) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
