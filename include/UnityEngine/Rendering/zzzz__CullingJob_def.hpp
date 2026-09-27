#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_PerCameraInstanceDataArrays_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_PlanePacket4_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_SplitInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_SplitInfo_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingJob)
namespace GlobalNamespace {
struct CullingJob_CrossFadeType;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine::Rendering {
struct InstanceFlags;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CullingJob, "UnityEngine.Rendering", "CullingJob");
// [BurstCompile]
// Dependencies System.IntPtr, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3, Unity.Mathematics.float3x3, UnityEngine.Plane, UnityEngine.Rendering.BatchCullingViewType, UnityEngine.Rendering.BinningConfig, UnityEngine.Rendering.CPUInstanceData::ReadOnly, UnityEngine.Rendering.CPUPerCameraInstanceData::PerCameraInstanceDataArrays, UnityEngine.Rendering.CPUSharedInstanceData::ReadOnly, UnityEngine.Rendering.FrustumPlaneCuller::PlanePacket4, UnityEngine.Rendering.FrustumPlaneCuller::SplitInfo, UnityEngine.Rendering.LODGroupCullingData, UnityEngine.Rendering.ReceiverSphereCuller::SplitInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingJob
struct CORDL_TYPE CullingJob {
public:
// Declarations
using CrossFadeType = ::GlobalNamespace::CullingJob_CrossFadeType;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method CalculateLODVisibility, addr 0xb1f0044, size 0x50c, virtual false, abstract: false, final false
inline uint32_t CalculateLODVisibility(int32_t  instanceIndex, int32_t  sharedInstanceIndex, ::UnityEngine::Rendering::InstanceFlags  instanceFlags) ;

/// @brief Method CalculateVisibilityMask, addr 0xb1f0550, size 0x194, virtual false, abstract: false, final false
inline uint32_t CalculateVisibilityMask(int32_t  instanceIndex, int32_t  sharedInstanceIndex, ::UnityEngine::Rendering::InstanceFlags  instanceFlags) ;

/// @brief Method ComputeMeshLODCrossfade, addr 0xb1f09b8, size 0xe8, virtual false, abstract: false, final false
inline uint32_t ComputeMeshLODCrossfade(int32_t  instanceIndex, ::by_ref<uint32_t>  meshLodLevel) ;

/// @brief Method ComputeMeshLODLevel, addr 0xb1f06e4, size 0x2d4, virtual false, abstract: false, final false
inline uint32_t ComputeMeshLODLevel(int32_t  instanceIndex, int32_t  sharedInstanceIndex) ;

/// @brief Method EnforcePreviousFrameMeshLOD, addr 0xb1f0aa0, size 0x5c, virtual false, abstract: false, final false
inline void EnforcePreviousFrameMeshLOD(int32_t  instanceIndex, ::by_ref<uint32_t>  meshLodLevel) ;

/// @brief Method Execute, addr 0xb1f0afc, size 0x20c, virtual true, abstract: false, final true
inline void Execute(int32_t  instanceIndex) ;

/// @brief Method PackFloatToUint8, addr 0xb1effe4, size 0x60, virtual false, abstract: false, final false
static inline uint32_t PackFloatToUint8(float_t  percent) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingJob() ;

// Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "sqrMeshLodSelectionConstant", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sqrScreenRelativeMetric", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minScreenRelativeHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOrtho", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "cullLightmappedShadowCasters", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxLOD", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cullingLayerMask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "animateCrossFades", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "frustumPlanePackets", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "frustumSplitInfos", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightFacingFrustumPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None, comment: None }, CppParam { name: "receiverSplitInfos", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::GlobalNamespace::CPUInstanceData_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstanceData", ty: "::GlobalNamespace::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodGroupCullingData", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "occlusionBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraInstanceData", ty: "::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererMeshLodSettings", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererCrossFadeValues", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr CullingJob(::UnityEngine::Rendering::BinningConfig  binningConfig, ::UnityEngine::Rendering::BatchCullingViewType  viewType, ::Unity::Mathematics::float3  cameraPosition, float_t  sqrMeshLodSelectionConstant, float_t  sqrScreenRelativeMetric, float_t  minScreenRelativeHeight, bool  isOrtho, bool  cullLightmappedShadowCasters, int32_t  maxLOD, uint32_t  cullingLayerMask, uint64_t  sceneCullingMask, bool  animateCrossFades, ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  frustumPlanePackets, ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  frustumSplitInfos, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  receiverSplitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation, ::GlobalNamespace::CPUInstanceData_ReadOnly  instanceData, ::GlobalNamespace::CPUSharedInstanceData_ReadOnly  sharedInstanceData, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>  lodGroupCullingData, ::System::IntPtr  occlusionBuffer, ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays  cameraInstanceData, ::Unity::Collections::NativeArray_1<uint8_t>  rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t>  rendererMeshLodSettings, ::Unity::Collections::NativeArray_1<uint8_t>  rendererCrossFadeValues) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2b0};

/// [ReadOnly]
/// @brief Field binningConfig, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::BinningConfig  binningConfig;

/// [ReadOnly]
/// @brief Field viewType, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  viewType;

/// [ReadOnly]
/// @brief Field cameraPosition, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  cameraPosition;

/// [ReadOnly]
/// @brief Field sqrMeshLodSelectionConstant, offset: 0x18, size: 0x4, def value: None
 float_t  sqrMeshLodSelectionConstant;

/// [ReadOnly]
/// @brief Field sqrScreenRelativeMetric, offset: 0x1c, size: 0x4, def value: None
 float_t  sqrScreenRelativeMetric;

/// [ReadOnly]
/// @brief Field minScreenRelativeHeight, offset: 0x20, size: 0x4, def value: None
 float_t  minScreenRelativeHeight;

/// [ReadOnly]
/// @brief Field isOrtho, offset: 0x24, size: 0x1, def value: None
 bool  isOrtho;

/// [ReadOnly]
/// @brief Field cullLightmappedShadowCasters, offset: 0x25, size: 0x1, def value: None
 bool  cullLightmappedShadowCasters;

/// [ReadOnly]
/// @brief Field maxLOD, offset: 0x28, size: 0x4, def value: None
 int32_t  maxLOD;

/// [ReadOnly]
/// @brief Field cullingLayerMask, offset: 0x2c, size: 0x4, def value: None
 uint32_t  cullingLayerMask;

/// [ReadOnly]
/// @brief Field sceneCullingMask, offset: 0x30, size: 0x8, def value: None
 uint64_t  sceneCullingMask;

/// [ReadOnly]
/// @brief Field animateCrossFades, offset: 0x38, size: 0x1, def value: None
 bool  animateCrossFades;

/// [ReadOnly]
/// @brief Field frustumPlanePackets, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  frustumPlanePackets;

/// [ReadOnly]
/// @brief Field frustumSplitInfos, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  frustumSplitInfos;

/// [ReadOnly]
/// @brief Field lightFacingFrustumPlanes, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes;

/// [ReadOnly]
/// @brief Field receiverSplitInfos, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  receiverSplitInfos;

/// @brief Field worldToLightSpaceRotation, offset: 0x80, size: 0x24, def value: None
 ::Unity::Mathematics::float3x3  worldToLightSpaceRotation;

/// [ReadOnly]
/// @brief Field instanceData, offset: 0xa8, size: 0xe8, def value: None
 ::GlobalNamespace::CPUInstanceData_ReadOnly  instanceData;

/// [ReadOnly]
/// @brief Field sharedInstanceData, offset: 0x190, size: 0xb0, def value: None
 ::GlobalNamespace::CPUSharedInstanceData_ReadOnly  sharedInstanceData;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [ReadOnly]
/// @brief Field lodGroupCullingData, offset: 0x240, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>  lodGroupCullingData;

/// [NativeDisableUnsafePtrRestriction]
/// [ReadOnly]
/// @brief Field occlusionBuffer, offset: 0x248, size: 0x8, def value: None
 ::System::IntPtr  occlusionBuffer;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field cameraInstanceData, offset: 0x250, size: 0x30, def value: None
 ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays  cameraInstanceData;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field rendererVisibilityMasks, offset: 0x280, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  rendererVisibilityMasks;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field rendererMeshLodSettings, offset: 0x290, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  rendererMeshLodSettings;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field rendererCrossFadeValues, offset: 0x2a0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  rendererCrossFadeValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullingJob, binningConfig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, viewType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cameraPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sqrMeshLodSelectionConstant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sqrScreenRelativeMetric) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, minScreenRelativeHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, isOrtho) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cullLightmappedShadowCasters) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, maxLOD) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cullingLayerMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sceneCullingMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, animateCrossFades) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, frustumPlanePackets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, frustumSplitInfos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, lightFacingFrustumPlanes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, receiverSplitInfos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, worldToLightSpaceRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, instanceData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sharedInstanceData) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, lodGroupCullingData) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, occlusionBuffer) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cameraInstanceData) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, rendererVisibilityMasks) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, rendererMeshLodSettings) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, rendererCrossFadeValues) == 0x2a0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CullingJob) == 0x2b0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
