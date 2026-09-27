#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane_GetBoundaryLengthJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlane_GetBoundaryLengthJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryLengthJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, "", "OVRScenePlane/GetBoundaryLengthJob");
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlane/GetBoundaryLengthJob
struct CORDL_TYPE OVRScenePlane_GetBoundaryLengthJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xa638f20, size 0x84, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRScenePlane_GetBoundaryLengthJob() ;

// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRScenePlane_GetBoundaryLengthJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<int32_t>  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRSpace  Space;

/// [WriteOnly]
/// @brief Field Length, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, Length) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
