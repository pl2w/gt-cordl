#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane_GetBoundaryJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRScenePlane_GetBoundaryJob)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRScenePlane_GetBoundaryJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, "", "OVRScenePlane/GetBoundaryJob");
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlane/GetBoundaryJob
struct CORDL_TYPE OVRScenePlane_GetBoundaryJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xa63905c, size 0xa8, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method HasBoundaryChanged, addr 0xa638fa4, size 0xa0, virtual false, abstract: false, final false
inline bool HasBoundaryChanged() ;

/// @brief Method SetNaN, addr 0xa639044, size 0x18, virtual false, abstract: false, final false
static inline void SetNaN(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  array) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRScenePlane_GetBoundaryJob() ;

// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PreviousBoundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }]
constexpr OVRScenePlane_GetBoundaryJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  PreviousBoundary) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRSpace  Space;

/// @brief Field Boundary, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary;

/// @brief Field PreviousBoundary, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  PreviousBoundary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, Boundary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, PreviousBoundary) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
