#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter_GetTriangleMeshJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneVolumeMeshFilter_GetTriangleMeshJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneVolumeMeshFilter_GetTriangleMeshJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob, "", "OVRSceneVolumeMeshFilter/GetTriangleMeshJob");
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneVolumeMeshFilter/GetTriangleMeshJob
struct CORDL_TYPE OVRSceneVolumeMeshFilter_GetTriangleMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xa63ca54, size 0x7c, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneVolumeMeshFilter_GetTriangleMeshJob() ;

// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneVolumeMeshFilter_GetTriangleMeshJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<int32_t>  Triangles) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12447};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRSpace  Space;

/// [WriteOnly]
/// @brief Field Vertices, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices;

/// [WriteOnly]
/// @brief Field Triangles, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Triangles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob, Vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob, Triangles) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
