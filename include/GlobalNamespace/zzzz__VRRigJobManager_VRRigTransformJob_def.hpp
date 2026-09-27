#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigJobManager_VRRigTransformJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformInput_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigJobManager_VRRigTransformJob)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace GlobalNamespace {
struct VRRigJobManager_VRRigTransformJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRRigJobManager_VRRigTransformJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigJobManager_VRRigTransformJob, "", "VRRigJobManager/VRRigTransformJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, VRRigJobManager::VRRigTransformInput
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRRigJobManager/VRRigTransformJob
struct CORDL_TYPE VRRigJobManager_VRRigTransformJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method Execute, addr 0x5a112d0, size 0x70, virtual true, abstract: false, final true
inline void Execute(int32_t  i, ::UnityEngine::Jobs::TransformAccess  tA) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr VRRigJobManager_VRRigTransformJob() ;

// Ctor Parameters [CppParam { name: "input", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>", modifiers: "", def_value: None, comment: None }]
constexpr VRRigJobManager_VRRigTransformJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  input) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [ReadOnly]
/// @brief Field input, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigJobManager_VRRigTransformJob, input) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigJobManager_VRRigTransformJob) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
