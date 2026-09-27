#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, "UnityEngine.Rendering", "InstanceDataSystem/CollectInstancesLODGroupsAndMasksJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData::ReadOnly, UnityEngine.Rendering.CPUSharedInstanceData::ReadOnly, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/CollectInstancesLODGroupsAndMasksJob
struct CORDL_TYPE InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb2071fc, size 0x94, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob() ;

// Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::GlobalNamespace::CPUInstanceData_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::GlobalNamespace::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::GlobalNamespace::CPUInstanceData_ReadOnly  instanceData, ::GlobalNamespace::CPUSharedInstanceData_ReadOnly  sharedInstanceData, ::Unity::Collections::NativeArray_1<uint32_t>  lodGroupAndMasks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26648};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1b8};

/// [ReadOnly]
/// @brief Field instances, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [ReadOnly]
/// @brief Field instanceData, offset: 0x10, size: 0xe8, def value: None
 ::GlobalNamespace::CPUInstanceData_ReadOnly  instanceData;

/// [ReadOnly]
/// @brief Field sharedInstanceData, offset: 0xf8, size: 0xb0, def value: None
 ::GlobalNamespace::CPUSharedInstanceData_ReadOnly  sharedInstanceData;

/// [WriteOnly]
/// @brief Field lodGroupAndMasks, offset: 0x1a8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  lodGroupAndMasks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, instances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, instanceData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, sharedInstanceData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, lodGroupAndMasks) == 0x1a8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob) == 0x1b8, "Size mismatch!");

} // namespace end def GlobalNamespace
