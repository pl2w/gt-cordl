#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_ProbesUpdateJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_ProbesUpdateJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_ProbesUpdateJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, "UnityEngine.Rendering", "InstanceDataSystem/ProbesUpdateJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ProbesUpdateJob
struct CORDL_TYPE InstanceDataSystem_ProbesUpdateJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb2065c0, size 0x270, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_ProbesUpdateJob() ;

// Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "atomicProbesQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None, comment: None }, CppParam { name: "probeInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "probeQueryPosition", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_ProbesUpdateJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicProbesQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeInstanceQueue, ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  probeQueryPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26645};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1f0};

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [ReadOnly]
/// @brief Field instances, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [NativeDisableParallelForRestriction]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field instanceData, offset: 0x10, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [ReadOnly]
/// @brief Field sharedInstanceData, offset: 0x100, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field atomicProbesQueueCount, offset: 0x1b8, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicProbesQueueCount;

/// [NativeDisableParallelForRestriction]
/// @brief Field probeInstanceQueue, offset: 0x1c0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeInstanceQueue;

/// [NativeDisableParallelForRestriction]
/// @brief Field compactTetrahedronCache, offset: 0x1d0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache;

/// [NativeDisableParallelForRestriction]
/// @brief Field probeQueryPosition, offset: 0x1e0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  probeQueryPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, instances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, instanceData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, sharedInstanceData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, atomicProbesQueueCount) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, probeInstanceQueue) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, compactTetrahedronCache) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob, probeQueryPosition) == 0x1e0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob) == 0x1f0, "Size mismatch!");

} // namespace end def GlobalNamespace
