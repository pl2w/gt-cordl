#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_TransformUpdateJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdatePacket_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_TransformUpdateJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_TransformUpdateJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, "UnityEngine.Rendering", "InstanceDataSystem/TransformUpdateJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4, UnityEngine.Matrix4x4, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.TransformUpdatePacket
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/TransformUpdateJob
struct CORDL_TYPE InstanceDataSystem_TransformUpdateJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb205fcc, size 0x5f4, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_TransformUpdateJob() ;

// Ctor Parameters [CppParam { name: "initialize", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableBoundingSpheres", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevLocalToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "atomicTransformQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }, CppParam { name: "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "transformUpdateDataQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>", modifiers: "", def_value: None, comment: None }, CppParam { name: "boundingSpheresDataQueue", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_TransformUpdateJob(bool  initialize, bool  enableBoundingSpheres, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  prevLocalToWorldMatrices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicTransformQueueCount, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformUpdateInstanceQueue, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>  transformUpdateDataQueue, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  boundingSpheresDataQueue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26644};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x218};

/// [ReadOnly]
/// @brief Field initialize, offset: 0x0, size: 0x1, def value: None
 bool  initialize;

/// [ReadOnly]
/// @brief Field enableBoundingSpheres, offset: 0x1, size: 0x1, def value: None
 bool  enableBoundingSpheres;

/// [ReadOnly]
/// @brief Field instances, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances;

/// [ReadOnly]
/// @brief Field localToWorldMatrices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices;

/// [ReadOnly]
/// @brief Field prevLocalToWorldMatrices, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  prevLocalToWorldMatrices;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field atomicTransformQueueCount, offset: 0x38, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicTransformQueueCount;

/// [NativeDisableParallelForRestriction]
/// @brief Field sharedInstanceData, offset: 0x40, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData;

/// [NativeDisableParallelForRestriction]
/// @brief Field instanceData, offset: 0xf8, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

/// [NativeDisableParallelForRestriction]
/// @brief Field transformUpdateInstanceQueue, offset: 0x1e8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformUpdateInstanceQueue;

/// [NativeDisableParallelForRestriction]
/// @brief Field transformUpdateDataQueue, offset: 0x1f8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>  transformUpdateDataQueue;

/// [NativeDisableParallelForRestriction]
/// @brief Field boundingSpheresDataQueue, offset: 0x208, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  boundingSpheresDataQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, initialize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, enableBoundingSpheres) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, instances) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, localToWorldMatrices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, prevLocalToWorldMatrices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, atomicTransformQueueCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, sharedInstanceData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, instanceData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, transformUpdateInstanceQueue) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, transformUpdateDataQueue) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob, boundingSpheresDataQueue) == 0x208, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_TransformUpdateJob) == 0x218, "Size mismatch!");

} // namespace end def GlobalNamespace
