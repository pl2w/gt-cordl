#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, "UnityEngine.Rendering", "InstanceDataSystem/ComputeInstancesOffsetAndResizeInstancesArrayJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ComputeInstancesOffsetAndResizeInstancesArrayJob
struct CORDL_TYPE InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xb205914, size 0x88, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob() ;

// Ctor Parameters [CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instancesOffset", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob(::Unity::Collections::NativeArray_1<int32_t>  instancesCount, ::Unity::Collections::NativeArray_1<int32_t>  instancesOffset, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [ReadOnly]
/// @brief Field instancesCount, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  instancesCount;

/// [WriteOnly]
/// @brief Field instancesOffset, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  instancesOffset;

/// @brief Field instances, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, instancesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, instancesOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, instances) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
