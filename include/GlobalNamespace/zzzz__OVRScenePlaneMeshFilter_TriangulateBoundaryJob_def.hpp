#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlaneMeshFilter_TriangulateBoundaryJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlaneMeshFilter_TriangulateBoundaryJob)
namespace GlobalNamespace {
struct TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList;
}
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRScenePlaneMeshFilter_TriangulateBoundaryJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlaneMeshFilter/TriangulateBoundaryJob
struct CORDL_TYPE OVRScenePlaneMeshFilter_TriangulateBoundaryJob {
public:
// Declarations
using NList = ::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Cross, addr 0xa63a3e8, size 0x10, virtual false, abstract: false, final false
static inline float_t Cross(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method Execute, addr 0xa639fb4, size 0x340, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method PointInTriangle, addr 0xa63a3f8, size 0xa8, virtual false, abstract: false, final false
static inline bool PointInTriangle(::UnityEngine::Vector2  p, ::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRScenePlaneMeshFilter_TriangulateBoundaryJob() ;

// Ctor Parameters [CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRScenePlaneMeshFilter_TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary, ::Unity::Collections::NativeArray_1<int32_t>  Triangles) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ReadOnly]
/// @brief Field Boundary, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary;

/// [WriteOnly]
/// @brief Field Triangles, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Triangles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, Boundary) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, Triangles) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
