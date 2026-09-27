#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_UpdateCompactedInstanceVisibilityJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_UpdateCompactedInstanceVisibilityJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_UpdateCompactedInstanceVisibilityJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, "UnityEngine.Rendering", "InstanceDataSystem/UpdateCompactedInstanceVisibilityJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.ParallelBitArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/UpdateCompactedInstanceVisibilityJob
struct CORDL_TYPE InstanceDataSystem_UpdateCompactedInstanceVisibilityJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb20755c, size 0xe4, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_UpdateCompactedInstanceVisibilityJob() ;

// Ctor Parameters [CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_UpdateCompactedInstanceVisibilityJob(::UnityEngine::Rendering::ParallelBitArray  compactedVisibilityMasks, ::UnityEngine::Rendering::CPUInstanceData  instanceData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x110};

/// [ReadOnly]
/// @brief Field compactedVisibilityMasks, offset: 0x0, size: 0x20, def value: None
 ::UnityEngine::Rendering::ParallelBitArray  compactedVisibilityMasks;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [NativeDisableParallelForRestriction]
/// @brief Field instanceData, offset: 0x20, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  instanceData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, compactedVisibilityMasks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, instanceData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
