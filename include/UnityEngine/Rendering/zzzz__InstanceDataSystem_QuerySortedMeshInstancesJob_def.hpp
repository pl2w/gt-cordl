#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_QuerySortedMeshInstancesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_QuerySortedMeshInstancesJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_QuerySortedMeshInstancesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/QuerySortedMeshInstancesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QuerySortedMeshInstancesJob
struct CORDL_TYPE InstanceDataSystem_QuerySortedMeshInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb205c50, size 0x1e8, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_QuerySortedMeshInstancesJob() ;

// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "sortedMeshID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_QuerySortedMeshInstancesJob(::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::Unity::Collections::NativeArray_1<int32_t>  sortedMeshID, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c0};

/// [ReadOnly]
/// @brief Field instanceData, offset: 0x0, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [ReadOnly]
/// @brief Field sharedInstanceData, offset: 0xf0, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData;

/// [ReadOnly]
/// @brief Field sortedMeshID, offset: 0x1a8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  sortedMeshID;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field instances, offset: 0x1b8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob, sharedInstanceData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob, sortedMeshID) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob, instances) == 0x1b8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob) == 0x1c0, "Size mismatch!");

} // namespace end def GlobalNamespace
