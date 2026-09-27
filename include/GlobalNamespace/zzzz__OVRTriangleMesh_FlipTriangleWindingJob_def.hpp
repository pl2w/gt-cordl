#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_FlipTriangleWindingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTriangleMesh_Triangle_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh_FlipTriangleWindingJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh_FlipTriangleWindingJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob, "", "OVRTriangleMesh/FlipTriangleWindingJob");
// Dependencies OVRTriangleMesh::Triangle, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/FlipTriangleWindingJob
struct CORDL_TYPE OVRTriangleMesh_FlipTriangleWindingJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xa57c324, size 0x20, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTriangleMesh_FlipTriangleWindingJob() ;

// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle>", modifiers: "", def_value: None, comment: None }]
constexpr OVRTriangleMesh_FlipTriangleWindingJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle>  Triangles) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Triangles, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle>  Triangles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob, Triangles) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
