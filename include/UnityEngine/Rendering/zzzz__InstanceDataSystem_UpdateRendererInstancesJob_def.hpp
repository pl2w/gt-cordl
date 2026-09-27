#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_UpdateRendererInstancesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_UpdateRendererInstancesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_UpdateRendererInstancesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/UpdateRendererInstancesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUPerCameraInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.GPUDrivenRendererGroupData, UnityEngine.Rendering.GPUInstanceIndex, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/UpdateRendererInstancesJob
struct CORDL_TYPE InstanceDataSystem_UpdateRendererInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb2069b0, size 0x84c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_UpdateRendererInstancesJob() ;

// Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererData", ty: "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodGroupDataMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "perCameraInstanceData", ty: "::UnityEngine::Rendering::CPUPerCameraInstanceData", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_UpdateRendererInstancesJob(bool  implicitInstanceIndices, ::UnityEngine::Rendering::GPUDrivenRendererGroupData  rendererData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>  lodGroupDataMap, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::UnityEngine::Rendering::CPUPerCameraInstanceData  perCameraInstanceData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26647};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3d0};

/// [ReadOnly]
/// @brief Field implicitInstanceIndices, offset: 0x0, size: 0x1, def value: None
 bool  implicitInstanceIndices;

/// [ReadOnly]
/// @brief Field rendererData, offset: 0x8, size: 0x1e0, def value: None
 ::UnityEngine::Rendering::GPUDrivenRendererGroupData  rendererData;

/// [ReadOnly]
/// @brief Field instances, offset: 0x1e8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [ReadOnly]
/// @brief Field lodGroupDataMap, offset: 0x1f8, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>  lodGroupDataMap;

/// [NativeDisableParallelForRestriction]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field instanceData, offset: 0x208, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [NativeDisableParallelForRestriction]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field sharedInstanceData, offset: 0x2f8, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData;

/// [NativeDisableParallelForRestriction]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field perCameraInstanceData, offset: 0x3b0, size: 0x20, def value: None
 ::UnityEngine::Rendering::CPUPerCameraInstanceData  perCameraInstanceData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, implicitInstanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, rendererData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, instances) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, lodGroupDataMap) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, instanceData) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, sharedInstanceData) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob, perCameraInstanceData) == 0x3b0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob) == 0x3d0, "Size mismatch!");

} // namespace end def GlobalNamespace
