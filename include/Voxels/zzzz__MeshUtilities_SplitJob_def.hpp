#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_SplitJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities_SplitJob)
namespace GlobalNamespace {
struct SplitJob_MeshUtilities_Bucket;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshUtilities_SplitJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshUtilities_SplitJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshUtilities_SplitJob, "Voxels", "MeshUtilities/SplitJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.MeshUtilities/SplitJob
struct CORDL_TYPE MeshUtilities_SplitJob {
public:
// Declarations
using Bucket = ::GlobalNamespace::SplitJob_MeshUtilities_Bucket;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5db3ca0, size 0x3c8, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities_SplitJob() ;

// Ctor Parameters [CppParam { name: "CosThresh", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SrcVerts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SrcTris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "FaceN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "DstVerts", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "DstTris", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr MeshUtilities_SplitJob(float_t  CosThresh, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  SrcVerts, ::Unity::Collections::NativeArray_1<int32_t>  SrcTris, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  DstVerts, ::Unity::Collections::NativeList_1<int32_t>  DstTris) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field CosThresh, offset: 0x0, size: 0x4, def value: None
 float_t  CosThresh;

/// [ReadOnly]
/// @brief Field SrcVerts, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  SrcVerts;

/// [ReadOnly]
/// @brief Field SrcTris, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  SrcTris;

/// [ReadOnly]
/// @brief Field FaceN, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN;

/// @brief Field DstVerts, offset: 0x38, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  DstVerts;

/// @brief Field DstTris, offset: 0x40, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  DstTris;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshUtilities_SplitJob, CosThresh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_SplitJob, SrcVerts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_SplitJob, SrcTris) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_SplitJob, FaceN) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_SplitJob, DstVerts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_SplitJob, DstTris) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshUtilities_SplitJob) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
