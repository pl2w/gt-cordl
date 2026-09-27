#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs_TransformTrianglesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshJobs_TransformTrianglesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshJobs_TransformTrianglesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob, "", "OVRMeshJobs/TransformTrianglesJob");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshJobs/TransformTrianglesJob
struct CORDL_TYPE OVRMeshJobs_TransformTrianglesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xa667e7c, size 0x20, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshJobs_TransformTrianglesJob() ;

// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MeshIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRMeshJobs_TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t>  Triangles, ::Unity::Collections::NativeArray_1<int16_t>  MeshIndices, int32_t  NumIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12658};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Triangles, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  Triangles;

/// [ReadOnly]
/// @brief Field MeshIndices, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int16_t>  MeshIndices;

/// @brief Field NumIndices, offset: 0x20, size: 0x4, def value: None
 int32_t  NumIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob, Triangles) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob, MeshIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob, NumIndices) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
