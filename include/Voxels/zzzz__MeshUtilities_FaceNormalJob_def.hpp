#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_FaceNormalJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities_FaceNormalJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshUtilities_FaceNormalJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshUtilities_FaceNormalJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshUtilities_FaceNormalJob, "Voxels", "MeshUtilities/FaceNormalJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.MeshUtilities/FaceNormalJob
struct CORDL_TYPE MeshUtilities_FaceNormalJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5db3b50, size 0x150, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities_FaceNormalJob() ;

// Ctor Parameters [CppParam { name: "Verts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "FaceN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }]
constexpr MeshUtilities_FaceNormalJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Verts, ::Unity::Collections::NativeArray_1<int32_t>  Tris, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5030};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [ReadOnly]
/// @brief Field Verts, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Verts;

/// [ReadOnly]
/// @brief Field Tris, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Tris;

/// [WriteOnly]
/// @brief Field FaceN, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshUtilities_FaceNormalJob, Verts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_FaceNormalJob, Tris) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_FaceNormalJob, FaceN) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshUtilities_FaceNormalJob) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
