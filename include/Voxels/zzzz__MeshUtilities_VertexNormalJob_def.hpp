#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_VertexNormalJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities_VertexNormalJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshUtilities_VertexNormalJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshUtilities_VertexNormalJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshUtilities_VertexNormalJob, "Voxels", "MeshUtilities/VertexNormalJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.MeshUtilities/VertexNormalJob
struct CORDL_TYPE MeshUtilities_VertexNormalJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5db465c, size 0x3d0, virtual true, abstract: false, final true
inline void Execute(int32_t  v) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities_VertexNormalJob() ;

// Ctor Parameters [CppParam { name: "AreaWeight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TriN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "V2T", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Out", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }]
constexpr MeshUtilities_VertexNormalJob(int32_t  AreaWeight, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  TriN, ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>  V2T, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Out) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field AreaWeight, offset: 0x0, size: 0x4, def value: None
 int32_t  AreaWeight;

/// [ReadOnly]
/// @brief Field TriN, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  TriN;

/// [ReadOnly]
/// @brief Field V2T, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>  V2T;

/// [WriteOnly]
/// @brief Field Out, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Out;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshUtilities_VertexNormalJob, AreaWeight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_VertexNormalJob, TriN) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_VertexNormalJob, V2T) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_VertexNormalJob, Out) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshUtilities_VertexNormalJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
