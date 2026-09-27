#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelMesh)
namespace Pathfinding {
struct Int3;
}
// Forward declare root types
namespace Pathfinding::Voxels {
struct VoxelMesh;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::VoxelMesh);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelMesh, "Pathfinding.Voxels", "VoxelMesh");
// Dependencies Pathfinding.Int3
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.VoxelMesh
struct CORDL_TYPE VoxelMesh {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelMesh() ;

// Ctor Parameters [CppParam { name: "verts", ty: "::ArrayW<::Pathfinding::Int3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tris", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "areas", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr VoxelMesh(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::ArrayW<int32_t>  areas) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field verts, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Int3>  verts;

/// @brief Field tris, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  tris;

/// @brief Field areas, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  areas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelMesh, verts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelMesh, tris) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelMesh, areas) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelMesh) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
