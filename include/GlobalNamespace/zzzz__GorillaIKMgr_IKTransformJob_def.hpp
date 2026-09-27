#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKTransformJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIKMgr_IKTransformJob)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIKMgr_IKTransformJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIKMgr_IKTransformJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr_IKTransformJob, "", "GorillaIKMgr/IKTransformJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaIKMgr/IKTransformJob
struct CORDL_TYPE GorillaIKMgr_IKTransformJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method Execute, addr 0x5917b90, size 0x98, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  xform) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr_IKTransformJob() ;

// Ctor Parameters [CppParam { name: "transformRotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "transformPositions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIKMgr_IKTransformJob(::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  transformRotations, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  transformPositions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field transformRotations, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  transformRotations;

/// @brief Field transformPositions, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  transformPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKTransformJob, transformRotations) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKTransformJob, transformPositions) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr_IKTransformJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
