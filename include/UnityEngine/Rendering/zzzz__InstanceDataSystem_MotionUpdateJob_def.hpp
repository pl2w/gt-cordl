#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_MotionUpdateJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_MotionUpdateJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_MotionUpdateJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob, "UnityEngine.Rendering", "InstanceDataSystem/MotionUpdateJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/MotionUpdateJob
struct CORDL_TYPE InstanceDataSystem_MotionUpdateJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb206830, size 0x180, virtual true, abstract: false, final true
inline void Execute(int32_t  chunk_index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_MotionUpdateJob() ;

// Ctor Parameters [CppParam { name: "queueWriteBase", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "atomicUpdateQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None, comment: None }, CppParam { name: "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_MotionUpdateJob(int32_t  queueWriteBase, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicUpdateQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformUpdateInstanceQueue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26646};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x110};

/// [ReadOnly]
/// @brief Field queueWriteBase, offset: 0x0, size: 0x4, def value: None
 int32_t  queueWriteBase;

/// [NativeDisableParallelForRestriction]
/// @brief Field instanceData, offset: 0x8, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field atomicUpdateQueueCount, offset: 0xf8, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicUpdateQueueCount;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field transformUpdateInstanceQueue, offset: 0x100, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformUpdateInstanceQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob, queueWriteBase) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob, instanceData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob, atomicUpdateQueueCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob, transformUpdateInstanceQueue) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_MotionUpdateJob) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
