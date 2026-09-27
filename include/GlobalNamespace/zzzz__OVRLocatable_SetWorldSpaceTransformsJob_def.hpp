#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_SetWorldSpaceTransformsJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable_SetWorldSpaceTransformsJob)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable_SetWorldSpaceTransformsJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob, "", "OVRLocatable/SetWorldSpaceTransformsJob");
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/SetWorldSpaceTransformsJob
struct CORDL_TYPE OVRLocatable_SetWorldSpaceTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method UnityEngine.Jobs.IJobParallelForTransform.Execute, addr 0xa576548, size 0x1c8, virtual true, abstract: false, final true
inline void UnityEngine_Jobs_IJobParallelForTransform_Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRLocatable_SetWorldSpaceTransformsJob() ;

// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None, comment: None }]
constexpr OVRLocatable_SetWorldSpaceTransformsJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [ReadOnly]
/// @brief Field Poses, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob, Poses) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
