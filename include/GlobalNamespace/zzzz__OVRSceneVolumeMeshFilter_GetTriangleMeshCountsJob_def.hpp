#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob, "", "OVRSceneVolumeMeshFilter/GetTriangleMeshCountsJob");
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneVolumeMeshFilter/GetTriangleMeshCountsJob
struct CORDL_TYPE OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xa63c9bc, size 0x98, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob() ;

// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "Results", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<int32_t>  Results) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12446};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRSpace  Space;

/// [WriteOnly]
/// @brief Field Results, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob, Results) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
