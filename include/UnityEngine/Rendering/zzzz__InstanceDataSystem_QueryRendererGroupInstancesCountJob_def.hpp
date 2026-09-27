#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_QueryRendererGroupInstancesCountJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_QueryRendererGroupInstancesCountJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_QueryRendererGroupInstancesCountJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob, "UnityEngine.Rendering", "InstanceDataSystem/QueryRendererGroupInstancesCountJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QueryRendererGroupInstancesCountJob
struct CORDL_TYPE InstanceDataSystem_QueryRendererGroupInstancesCountJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb205840, size 0xd4, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_QueryRendererGroupInstancesCountJob() ;

// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_QueryRendererGroupInstancesCountJob(::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  rendererGroupInstanceMultiHash, ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t>  instancesCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1d8};

/// [ReadOnly]
/// @brief Field instanceData, offset: 0x0, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [ReadOnly]
/// @brief Field sharedInstanceData, offset: 0xf0, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData;

/// [ReadOnly]
/// @brief Field rendererGroupInstanceMultiHash, offset: 0x1a8, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  rendererGroupInstanceMultiHash;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [ReadOnly]
/// @brief Field rendererGroupIDs, offset: 0x1b8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [WriteOnly]
/// @brief Field instancesCount, offset: 0x1c8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  instancesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob, sharedInstanceData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob, rendererGroupInstanceMultiHash) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob, rendererGroupIDs) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob, instancesCount) == 0x1c8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob) == 0x1d8, "Size mismatch!");

} // namespace end def GlobalNamespace
