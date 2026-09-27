#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, "UnityEngine.Rendering", "InstanceDataSystem/CalculateInterpolatedLightAndOcclusionProbesBatchJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LightProbesQuery, UnityEngine.Rendering.SphericalHarmonicsL2, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/CalculateInterpolatedLightAndOcclusionProbesBatchJob
struct CORDL_TYPE InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb205e38, size 0x158, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob() ;

// Ctor Parameters [CppParam { name: "probesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightProbesQuery", ty: "::UnityEngine::LightProbesQuery", modifiers: "", def_value: None, comment: None }, CppParam { name: "queryPostitions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "probesSphericalHarmonics", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "probesOcclusion", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob(int32_t  probesCount, ::UnityEngine::LightProbesQuery  lightProbesQuery, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  queryPostitions, ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  probesSphericalHarmonics, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  probesOcclusion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// [ReadOnly]
/// @brief Field probesCount, offset: 0x0, size: 0x4, def value: None
 int32_t  probesCount;

/// [ReadOnly]
/// @brief Field lightProbesQuery, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::LightProbesQuery  lightProbesQuery;

/// [NativeDisableParallelForRestriction]
/// [ReadOnly]
/// @brief Field queryPostitions, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  queryPostitions;

/// [NativeDisableParallelForRestriction]
/// @brief Field compactTetrahedronCache, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field probesSphericalHarmonics, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  probesSphericalHarmonics;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field probesOcclusion, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  probesOcclusion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, probesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, lightProbesQuery) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, queryPostitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, compactTetrahedronCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, probesSphericalHarmonics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, probesOcclusion) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
