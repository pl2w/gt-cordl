#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_PropertySyncer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_TransformSyncer_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigSyncSceneToStreamJob)
namespace GlobalNamespace {
struct RigSyncSceneToStreamJob_PropertySyncer;
}
namespace GlobalNamespace {
struct RigSyncSceneToStreamJob_TransformSyncer;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct RigSyncSceneToStreamJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, "UnityEngine.Animations.Rigging", "RigSyncSceneToStreamJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.PropertyStreamHandle, UnityEngine.Animations.Rigging.RigSyncSceneToStreamJob::PropertySyncer, UnityEngine.Animations.Rigging.RigSyncSceneToStreamJob::TransformSyncer
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigSyncSceneToStreamJob
struct CORDL_TYPE RigSyncSceneToStreamJob {
public:
// Declarations
using PropertySyncer = ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer;

using TransformSyncer = ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer;

/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr operator  ::UnityEngine::Animations::IAnimationJob*() ;

/// @brief Method ProcessAnimation, addr 0xae77258, size 0xe8, virtual true, abstract: false, final true
inline void ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessRootMotion, addr 0xae77254, size 0x4, virtual true, abstract: false, final true
inline void ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* i___UnityEngine__Animations__IAnimationJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr RigSyncSceneToStreamJob() ;

// Ctor Parameters [CppParam { name: "transformSyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer", modifiers: "", def_value: None, comment: None }, CppParam { name: "propertySyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer", modifiers: "", def_value: None, comment: None }, CppParam { name: "rigWeightSyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer", modifiers: "", def_value: None, comment: None }, CppParam { name: "constraintWeightSyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer", modifiers: "", def_value: None, comment: None }, CppParam { name: "rigStates", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rigConstraintEndIdx", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "modulatedConstraintWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: None, comment: None }]
constexpr RigSyncSceneToStreamJob(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer  transformSyncer, ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  propertySyncer, ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  rigWeightSyncer, ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  constraintWeightSyncer, ::Unity::Collections::NativeArray_1<float_t>  rigStates, ::Unity::Collections::NativeArray_1<int32_t>  rigConstraintEndIdx, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  modulatedConstraintWeights) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32295};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe0};

/// @brief Field transformSyncer, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer  transformSyncer;

/// @brief Field propertySyncer, offset: 0x20, size: 0x30, def value: None
 ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  propertySyncer;

/// @brief Field rigWeightSyncer, offset: 0x50, size: 0x30, def value: None
 ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  rigWeightSyncer;

/// @brief Field constraintWeightSyncer, offset: 0x80, size: 0x30, def value: None
 ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  constraintWeightSyncer;

/// @brief Field rigStates, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  rigStates;

/// @brief Field rigConstraintEndIdx, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  rigConstraintEndIdx;

/// @brief Field modulatedConstraintWeights, offset: 0xd0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  modulatedConstraintWeights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, transformSyncer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, propertySyncer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, rigWeightSyncer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, constraintWeightSyncer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, rigStates) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, rigConstraintEndIdx) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob, modulatedConstraintWeights) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
