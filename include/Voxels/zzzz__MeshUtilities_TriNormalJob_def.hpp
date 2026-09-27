#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_TriNormalJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities_TriNormalJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshUtilities_TriNormalJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshUtilities_TriNormalJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshUtilities_TriNormalJob, "Voxels", "MeshUtilities/TriNormalJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.MeshUtilities/TriNormalJob
struct CORDL_TYPE MeshUtilities_TriNormalJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5db4484, size 0x13c, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities_TriNormalJob() ;

// Ctor Parameters [CppParam { name: "V", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "T", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Out", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "AreaWeight", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MeshUtilities_TriNormalJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  V, ::Unity::Collections::NativeArray_1<int32_t>  T, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Out, int32_t  AreaWeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5035};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [ReadOnly]
/// @brief Field V, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  V;

/// [ReadOnly]
/// @brief Field T, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  T;

/// [WriteOnly]
/// @brief Field Out, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Out;

/// @brief Field AreaWeight, offset: 0x30, size: 0x4, def value: None
 int32_t  AreaWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshUtilities_TriNormalJob, V) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_TriNormalJob, T) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_TriNormalJob, Out) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_TriNormalJob, AreaWeight) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshUtilities_TriNormalJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
