#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_SplitVoxelMeshJob_Bucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities_SplitVoxelMeshJob_Bucket)
// Forward declare root types
namespace GlobalNamespace {
struct SplitVoxelMeshJob_MeshUtilities_Bucket;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplitVoxelMeshJob_MeshUtilities_Bucket);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplitVoxelMeshJob_MeshUtilities_Bucket, "Voxels", "MeshUtilities/SplitVoxelMeshJob/Bucket");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.MeshUtilities/SplitVoxelMeshJob/Bucket
struct CORDL_TYPE SplitVoxelMeshJob_MeshUtilities_Bucket {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplitVoxelMeshJob_MeshUtilities_Bucket() ;

// Ctor Parameters [CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "newIdx", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "repN", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
constexpr SplitVoxelMeshJob_MeshUtilities_Bucket(int32_t  next, int32_t  newIdx, ::Unity::Mathematics::float3  repN) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field next, offset: 0x0, size: 0x4, def value: None
 int32_t  next;

/// @brief Field newIdx, offset: 0x4, size: 0x4, def value: None
 int32_t  newIdx;

/// @brief Field repN, offset: 0x8, size: 0xc, def value: None
 ::Unity::Mathematics::float3  repN;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplitVoxelMeshJob_MeshUtilities_Bucket, next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitVoxelMeshJob_MeshUtilities_Bucket, newIdx) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitVoxelMeshJob_MeshUtilities_Bucket, repN) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplitVoxelMeshJob_MeshUtilities_Bucket) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
