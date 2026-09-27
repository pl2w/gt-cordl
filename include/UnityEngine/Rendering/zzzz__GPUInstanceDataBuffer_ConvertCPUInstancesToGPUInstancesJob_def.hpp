#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, "UnityEngine.Rendering", "GPUInstanceDataBuffer/ConvertCPUInstancesToGPUInstancesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.GPUInstanceIndex, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBuffer/ConvertCPUInstancesToGPUInstancesJob
struct CORDL_TYPE GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb1fbb0c, size 0x30, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob() ;

// Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gpuInstanceIndices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob(::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [ReadOnly]
/// @brief Field instancesNumPrefixSum, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum;

/// [ReadOnly]
/// @brief Field instances, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [WriteOnly]
/// @brief Field gpuInstanceIndices, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, instancesNumPrefixSum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, instances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, gpuInstanceIndices) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
