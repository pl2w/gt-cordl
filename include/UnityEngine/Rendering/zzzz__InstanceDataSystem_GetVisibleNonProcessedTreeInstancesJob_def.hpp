#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/GetVisibleNonProcessedTreeInstancesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.ParallelBitArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/GetVisibleNonProcessedTreeInstancesJob
struct CORDL_TYPE InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb207290, size 0x24c, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob() ;

// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "becomeVisible", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "processedBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "atomicTreeInstancesCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob(::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::UnityEngine::Rendering::ParallelBitArray  compactedVisibilityMasks, bool  becomeVisible, ::UnityEngine::Rendering::ParallelBitArray  processedBits, ::Unity::Collections::NativeArray_1<int32_t>  rendererIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicTreeInstancesCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26649};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x218};

/// [ReadOnly]
/// @brief Field instanceData, offset: 0x0, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [ReadOnly]
/// @brief Field sharedInstanceData, offset: 0xf0, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData;

/// [ReadOnly]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field compactedVisibilityMasks, offset: 0x1a8, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  compactedVisibilityMasks;

/// [ReadOnly]
/// @brief Field becomeVisible, offset: 0x1c8, size: 0x1, def value: None
 bool  becomeVisible;

/// [NativeDisableParallelForRestriction]
/// @brief Field processedBits, offset: 0x1d0, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  processedBits;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field rendererIDs, offset: 0x1f0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  rendererIDs;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field instances, offset: 0x200, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field atomicTreeInstancesCount, offset: 0x210, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicTreeInstancesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, sharedInstanceData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, compactedVisibilityMasks) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, becomeVisible) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, processedBits) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, rendererIDs) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, instances) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, atomicTreeInstancesCount) == 0x210, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob) == 0x218, "Size mismatch!");

} // namespace end def GlobalNamespace
