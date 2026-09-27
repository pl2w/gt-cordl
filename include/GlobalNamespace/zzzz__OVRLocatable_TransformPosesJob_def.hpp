#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_TransformPosesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable_TransformPosesJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable_TransformPosesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable_TransformPosesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRLocatable_TransformPosesJob, "", "OVRLocatable/TransformPosesJob");
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>, UnityEngine.Matrix4x4, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/TransformPosesJob
struct CORDL_TYPE OVRLocatable_TransformPosesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Unity.Jobs.IJobFor.Execute, addr 0xa5762c0, size 0x288, virtual true, abstract: false, final true
inline void Unity_Jobs_IJobFor_Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRLocatable_TransformPosesJob() ;

// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr OVRLocatable_TransformPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses, ::UnityEngine::Matrix4x4  Transform, ::UnityEngine::Quaternion  Rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11844};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field Poses, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses;

/// @brief Field Transform, offset: 0x10, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  Transform;

/// @brief Field Rotation, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_TransformPosesJob, Poses) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TransformPosesJob, Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TransformPosesJob, Rotation) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRLocatable_TransformPosesJob) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
