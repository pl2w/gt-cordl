#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderConveyorManager_EvaluateSplineJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderConveyorManager_EvaluateSplineJob)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine::Splines {
struct NativeSpline;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderConveyorManager_EvaluateSplineJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, "GorillaTagScripts.Builder", "BuilderConveyorManager/EvaluateSplineJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Quaternion, UnityEngine.Splines.NativeSpline, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderConveyorManager/EvaluateSplineJob
struct CORDL_TYPE BuilderConveyorManager_EvaluateSplineJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method Execute, addr 0x5c204a8, size 0x250, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Method GetSplineAt, addr 0x5c20468, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::NativeSpline GetSplineAt(int32_t  index) ;

/// @brief Method SetSplineAt, addr 0x5c2014c, size 0x48, virtual false, abstract: false, final false
inline void SetSplineAt(int32_t  index, ::UnityEngine::Splines::NativeSpline  s) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderConveyorManager_EvaluateSplineJob() ;

// Ctor Parameters [CppParam { name: "conveyorSpline0", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None, comment: None }, CppParam { name: "conveyorSpline1", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None, comment: None }, CppParam { name: "conveyorSpline2", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None, comment: None }, CppParam { name: "conveyorSpline3", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None, comment: None }, CppParam { name: "conveyorRotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "conveyorIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "splineTimes", ty: "::Unity::Collections::NativeList_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shelfOffsets", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderConveyorManager_EvaluateSplineJob(::UnityEngine::Splines::NativeSpline  conveyorSpline0, ::UnityEngine::Splines::NativeSpline  conveyorSpline1, ::UnityEngine::Splines::NativeSpline  conveyorSpline2, ::UnityEngine::Splines::NativeSpline  conveyorSpline3, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  conveyorRotations, ::Unity::Collections::NativeList_1<int32_t>  conveyorIndices, ::Unity::Collections::NativeList_1<float_t>  splineTimes, ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  shelfOffsets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x148};

/// @brief Field conveyorSpline0, offset: 0x0, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  conveyorSpline0;

/// @brief Field conveyorSpline1, offset: 0x48, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  conveyorSpline1;

/// @brief Field conveyorSpline2, offset: 0x90, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  conveyorSpline2;

/// @brief Field conveyorSpline3, offset: 0xd8, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  conveyorSpline3;

/// [ReadOnly]
/// @brief Field conveyorRotations, offset: 0x120, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  conveyorRotations;

/// [ReadOnly]
/// @brief Field conveyorIndices, offset: 0x130, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  conveyorIndices;

/// [ReadOnly]
/// @brief Field splineTimes, offset: 0x138, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<float_t>  splineTimes;

/// [ReadOnly]
/// @brief Field shelfOffsets, offset: 0x140, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  shelfOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, conveyorSpline0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, conveyorSpline1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, conveyorSpline2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, conveyorSpline3) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, conveyorRotations) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, conveyorIndices) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, splineTimes) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob, shelfOffsets) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
