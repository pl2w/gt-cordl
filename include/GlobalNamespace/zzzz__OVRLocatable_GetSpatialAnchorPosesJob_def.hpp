#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_GetSpatialAnchorPosesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable_GetSpatialAnchorPosesJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable_GetSpatialAnchorPosesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, "", "OVRLocatable/GetSpatialAnchorPosesJob");
// Dependencies OVRLocatable, OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/GetSpatialAnchorPosesJob
struct CORDL_TYPE OVRLocatable_GetSpatialAnchorPosesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Unity.Jobs.IJobFor.Execute, addr 0xa5761cc, size 0xf4, virtual true, abstract: false, final true
inline void Unity_Jobs_IJobFor_Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRLocatable_GetSpatialAnchorPosesJob() ;

// Ctor Parameters [CppParam { name: "Locatables", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None, comment: None }]
constexpr OVRLocatable_GetSpatialAnchorPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>  Locatables, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ReadOnly]
/// @brief Field Locatables, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>  Locatables;

/// [WriteOnly]
/// @brief Field Poses, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, Locatables) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, Poses) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
