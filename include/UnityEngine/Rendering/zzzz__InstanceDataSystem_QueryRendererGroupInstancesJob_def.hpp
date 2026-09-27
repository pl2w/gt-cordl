#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_QueryRendererGroupInstancesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_QueryRendererGroupInstancesJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_QueryRendererGroupInstancesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/QueryRendererGroupInstancesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QueryRendererGroupInstancesJob
struct CORDL_TYPE InstanceDataSystem_QueryRendererGroupInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb20599c, size 0x104, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_QueryRendererGroupInstancesJob() ;

// Ctor Parameters [CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "atomicNonFoundInstancesCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_QueryRendererGroupInstancesJob(::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  rendererGroupInstanceMultiHash, ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicNonFoundInstancesCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [ReadOnly]
/// @brief Field rendererGroupInstanceMultiHash, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  rendererGroupInstanceMultiHash;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [ReadOnly]
/// @brief Field rendererGroupIDs, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [WriteOnly]
/// @brief Field instances, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field atomicNonFoundInstancesCount, offset: 0x30, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicNonFoundInstancesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob, rendererGroupInstanceMultiHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob, rendererGroupIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob, instances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob, atomicNonFoundInstancesCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
