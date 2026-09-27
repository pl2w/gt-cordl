#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_ScatterTetrahedronCacheIndicesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_ScatterTetrahedronCacheIndicesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_ScatterTetrahedronCacheIndicesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, "UnityEngine.Rendering", "InstanceDataSystem/ScatterTetrahedronCacheIndicesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.InstanceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ScatterTetrahedronCacheIndicesJob
struct CORDL_TYPE InstanceDataSystem_ScatterTetrahedronCacheIndicesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb205f90, size 0x3c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_ScatterTetrahedronCacheIndicesJob() ;

// Ctor Parameters [CppParam { name: "probeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_ScatterTetrahedronCacheIndicesJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeInstances, ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache, ::UnityEngine::Rendering::CPUInstanceData  instanceData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26643};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x110};

/// [ReadOnly]
/// @brief Field probeInstances, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeInstances;

/// [ReadOnly]
/// @brief Field compactTetrahedronCache, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [NativeDisableParallelForRestriction]
/// @brief Field instanceData, offset: 0x20, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, probeInstances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, compactTetrahedronCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, instanceData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
