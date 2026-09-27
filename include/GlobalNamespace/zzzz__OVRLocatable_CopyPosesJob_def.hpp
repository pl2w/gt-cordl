#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_CopyPosesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable_CopyPosesJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable_CopyPosesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable_CopyPosesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRLocatable_CopyPosesJob, "", "OVRLocatable/CopyPosesJob");
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/CopyPosesJob
struct CORDL_TYPE OVRLocatable_CopyPosesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0xa5768d8, size 0x2c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRLocatable_CopyPosesJob() ;

// Ctor Parameters [CppParam { name: "PosesIn", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PosesOut", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None, comment: None }]
constexpr OVRLocatable_CopyPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  PosesIn, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  PosesOut) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11847};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ReadOnly]
/// @brief Field PosesIn, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  PosesIn;

/// [WriteOnly]
/// @brief Field PosesOut, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  PosesOut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_CopyPosesJob, PosesIn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_CopyPosesJob, PosesOut) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRLocatable_CopyPosesJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
