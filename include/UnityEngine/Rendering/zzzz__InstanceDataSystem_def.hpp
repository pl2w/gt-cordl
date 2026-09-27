#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocators_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem)
namespace GlobalNamespace {
struct CPUInstanceData_ReadOnly;
}
namespace GlobalNamespace {
struct CPUSharedInstanceData_ReadOnly;
}
namespace GlobalNamespace {
struct InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_MotionUpdateJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_ProbesUpdateJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_QueryRendererGroupInstancesCountJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_QueryRendererGroupInstancesJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_QueryRendererGroupInstancesMultiJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_QuerySortedMeshInstancesJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_ScatterTetrahedronCacheIndicesJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_TransformUpdateJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_UpdateCompactedInstanceVisibilityJob;
}
namespace GlobalNamespace {
struct InstanceDataSystem_UpdateRendererInstancesJob;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceTransformUpdateIDs;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceWindDataUpdateIDs;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
namespace UnityEngine::Rendering {
struct RenderersParameters;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine::Rendering {
struct TransformUpdatePacket;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceDataSystem;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceTransformUpdateIDs;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceWindDataUpdateIDs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystem*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystem*, "UnityEngine.Rendering", "InstanceDataSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*, "UnityEngine.Rendering", "InstanceDataSystem/InstanceTransformUpdateIDs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*, "UnityEngine.Rendering", "InstanceDataSystem/InstanceWindDataUpdateIDs");
// Dependencies System.Object, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUPerCameraInstanceData, UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceAllocators, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystem
class CORDL_TYPE InstanceDataSystem : public ::System::Object {
public:
// Declarations
using CalculateInterpolatedLightAndOcclusionProbesBatchJob = ::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob;

using CollectInstancesLODGroupsAndMasksJob = ::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob;

using ComputeInstancesOffsetAndResizeInstancesArrayJob = ::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob;

using GetVisibleNonProcessedTreeInstancesJob = ::GlobalNamespace::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob;

using MotionUpdateJob = ::GlobalNamespace::InstanceDataSystem_MotionUpdateJob;

using ProbesUpdateJob = ::GlobalNamespace::InstanceDataSystem_ProbesUpdateJob;

using QueryRendererGroupInstancesCountJob = ::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesCountJob;

using QueryRendererGroupInstancesJob = ::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob;

using QueryRendererGroupInstancesMultiJob = ::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesMultiJob;

using QuerySortedMeshInstancesJob = ::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob;

using ScatterTetrahedronCacheIndicesJob = ::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob;

using TransformUpdateJob = ::GlobalNamespace::InstanceDataSystem_TransformUpdateJob;

using UpdateCompactedInstanceVisibilityJob = ::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob;

using UpdateRendererInstancesJob = ::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob;

using InstanceTransformUpdateIDs = ::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs;

using InstanceWindDataUpdateIDs = ::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs;

 __declspec(property(get=get_aliveInstances)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  aliveInstances;

 __declspec(property(get=get_cameraCount)) int32_t  cameraCount;

 __declspec(property(get=get_hasBoundingSpheres)) bool  hasBoundingSpheres;

 __declspec(property(get=get_instanceData)) ::GlobalNamespace::CPUInstanceData_ReadOnly  instanceData;

/// @brief Field m_BoundingSpheresUpdateDataQueueBuffer, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer, put=__cordl_internal_set_m_BoundingSpheresUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer*  m_BoundingSpheresUpdateDataQueueBuffer;

/// @brief Field m_EnableBoundingSpheres, offset 0x298, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableBoundingSpheres, put=__cordl_internal_set_m_EnableBoundingSpheres)) bool  m_EnableBoundingSpheres;

/// @brief Field m_InstanceAllocators, offset 0x10, size 0x60 
 __declspec(property(get=__cordl_internal_get_m_InstanceAllocators, put=__cordl_internal_set_m_InstanceAllocators)) ::UnityEngine::Rendering::InstanceAllocators  m_InstanceAllocators;

/// @brief Field m_InstanceData, offset 0x128, size 0xf0 
 __declspec(property(get=__cordl_internal_get_m_InstanceData, put=__cordl_internal_set_m_InstanceData)) ::UnityEngine::Rendering::CPUInstanceData  m_InstanceData;

/// @brief Field m_MotionUpdateKernel, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MotionUpdateKernel, put=__cordl_internal_set_m_MotionUpdateKernel)) int32_t  m_MotionUpdateKernel;

/// @brief Field m_PerCameraInstanceData, offset 0x218, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_PerCameraInstanceData, put=__cordl_internal_set_m_PerCameraInstanceData)) ::UnityEngine::Rendering::CPUPerCameraInstanceData  m_PerCameraInstanceData;

/// @brief Field m_ProbeOcclusionUpdateDataQueueBuffer, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer, put=__cordl_internal_set_m_ProbeOcclusionUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer*  m_ProbeOcclusionUpdateDataQueueBuffer;

/// @brief Field m_ProbeUpdateDataQueueBuffer, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProbeUpdateDataQueueBuffer, put=__cordl_internal_set_m_ProbeUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer*  m_ProbeUpdateDataQueueBuffer;

/// @brief Field m_ProbeUpdateKernel, offset 0x264, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ProbeUpdateKernel, put=__cordl_internal_set_m_ProbeUpdateKernel)) int32_t  m_ProbeUpdateKernel;

/// @brief Field m_RendererGroupInstanceMultiHash, offset 0x238, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_RendererGroupInstanceMultiHash, put=__cordl_internal_set_m_RendererGroupInstanceMultiHash)) ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  m_RendererGroupInstanceMultiHash;

/// @brief Field m_ScratchWindParamAddressArray, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScratchWindParamAddressArray, put=__cordl_internal_set_m_ScratchWindParamAddressArray)) ::ArrayW<int32_t>  m_ScratchWindParamAddressArray;

/// @brief Field m_SharedInstanceData, offset 0x70, size 0xb8 
 __declspec(property(get=__cordl_internal_get_m_SharedInstanceData, put=__cordl_internal_set_m_SharedInstanceData)) ::UnityEngine::Rendering::CPUSharedInstanceData  m_SharedInstanceData;

/// @brief Field m_TransformInitKernel, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TransformInitKernel, put=__cordl_internal_set_m_TransformInitKernel)) int32_t  m_TransformInitKernel;

/// @brief Field m_TransformUpdateCS, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformUpdateCS, put=__cordl_internal_set_m_TransformUpdateCS)) ::UnityW<::UnityEngine::ComputeShader>  m_TransformUpdateCS;

/// @brief Field m_TransformUpdateDataQueueBuffer, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformUpdateDataQueueBuffer, put=__cordl_internal_set_m_TransformUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer*  m_TransformUpdateDataQueueBuffer;

/// @brief Field m_TransformUpdateKernel, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TransformUpdateKernel, put=__cordl_internal_set_m_TransformUpdateKernel)) int32_t  m_TransformUpdateKernel;

/// @brief Field m_UpdateIndexQueueBuffer, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdateIndexQueueBuffer, put=__cordl_internal_set_m_UpdateIndexQueueBuffer)) ::UnityEngine::ComputeBuffer*  m_UpdateIndexQueueBuffer;

/// @brief Field m_WindDataCopyHistoryKernel, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WindDataCopyHistoryKernel, put=__cordl_internal_set_m_WindDataCopyHistoryKernel)) int32_t  m_WindDataCopyHistoryKernel;

/// @brief Field m_WindDataUpdateCS, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WindDataUpdateCS, put=__cordl_internal_set_m_WindDataUpdateCS)) ::UnityW<::UnityEngine::ComputeShader>  m_WindDataUpdateCS;

 __declspec(property(get=get_perCameraInstanceData)) ::UnityEngine::Rendering::CPUPerCameraInstanceData  perCameraInstanceData;

 __declspec(property(get=get_sharedInstanceData)) ::GlobalNamespace::CPUSharedInstanceData_ReadOnly  sharedInstanceData;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AllocatePerCameraInstanceData, addr 0xb2053a8, size 0x8, virtual false, abstract: false, final false
inline void AllocatePerCameraInstanceData(::Unity::Collections::NativeArray_1<int32_t>  cameraIDs) ;

/// @brief Method AtomicAddLengthNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t AtomicAddLengthNoResize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeList_1<T>>  list, int32_t  count) ;

/// @brief Method DeallocatePerCameraInstanceData, addr 0xb2053a0, size 0x8, virtual false, abstract: false, final false
inline void DeallocatePerCameraInstanceData(::Unity::Collections::NativeArray_1<int32_t>  cameraIDs) ;

/// @brief Method DispatchMotionUpdateCommand, addr 0xb203190, size 0x270, virtual false, abstract: false, final false
inline void DispatchMotionUpdateCommand(int32_t  motionQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformInstanceQueue, ::UnityEngine::Rendering::RenderersParameters  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method DispatchProbeUpdateCommand, addr 0xb202ea8, size 0x2e8, virtual false, abstract: false, final false
inline void DispatchProbeUpdateCommand(int32_t  queueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeInstanceQueue, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  probeUpdateDataQueue, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  probeOcclusionUpdateDataQueue, ::UnityEngine::Rendering::RenderersParameters  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method DispatchTransformUpdateCommand, addr 0xb203400, size 0x3a8, virtual false, abstract: false, final false
inline void DispatchTransformUpdateCommand(bool  initialize, int32_t  transformQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformInstanceQueue, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>  updateDataQueue, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  boundingSphereUpdateDataQueue, ::UnityEngine::Rendering::RenderersParameters  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method DispatchWindDataCopyHistoryCommand, addr 0xb2037a8, size 0x26c, virtual false, abstract: false, final false
inline void DispatchWindDataCopyHistoryCommand(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices, ::UnityEngine::Rendering::RenderersParameters  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method Dispose, addr 0xb202834, size 0xc4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureIndexQueueBufferCapacity, addr 0xb202948, size 0xa8, virtual false, abstract: false, final false
inline void EnsureIndexQueueBufferCapacity(int32_t  capacity) ;

/// @brief Method EnsureProbeBuffersCapacity, addr 0xb2029f0, size 0x17c, virtual false, abstract: false, final false
inline void EnsureProbeBuffersCapacity(int32_t  capacity) ;

/// @brief Method EnsureTransformBuffersCapacity, addr 0xb202b6c, size 0x1a4, virtual false, abstract: false, final false
inline void EnsureTransformBuffersCapacity(int32_t  capacity) ;

/// @brief Method FreeRendererGroupInstances, addr 0xb20474c, size 0x80, virtual false, abstract: false, final false
inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t>  rendererGroupsID) ;

/// @brief Method GetAliveInstancesOfType, addr 0xb202920, size 0x28, virtual false, abstract: false, final false
inline int32_t GetAliveInstancesOfType(::UnityEngine::Rendering::InstanceType  instanceType) ;

/// @brief Method GetMaxInstancesOfType, addr 0xb2028f8, size 0x28, virtual false, abstract: false, final false
inline int32_t GetMaxInstancesOfType(::UnityEngine::Rendering::InstanceType  instanceType) ;

/// @brief Method GetVisibleTreeInstances, addr 0xb204f04, size 0x3bc, virtual false, abstract: false, final false
inline void GetVisibleTreeInstances(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ParallelBitArray>  compactedVisibilityMasks, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ParallelBitArray>  processedBits, ::Unity::Collections::NativeList_1<int32_t>  visibeTreeRendererIDs, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  visibeTreeInstances, bool  becomeVisibleOnly, ::by_ref<int32_t>  becomeVisibeTreeInstancesCount) ;

/// @brief Method InitializeInstanceTransforms, addr 0xb2049a8, size 0x48, virtual false, abstract: false, final false
inline void InitializeInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  prevLocalToWorldMatrices, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

static inline ::UnityEngine::Rendering::InstanceDataSystem* New_ctor(int32_t  maxInstances, bool  enableBoundingSpheres, ::UnityEngine::Rendering::GPUResidentDrawerResources*  resources) ;

/// @brief Method ReallocateAndGetInstances, addr 0xb204548, size 0x204, virtual false, abstract: false, final false
inline void ReallocateAndGetInstances(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleInterpolateProbesAndUpdateTetrahedronCache, addr 0xb202d10, size 0x198, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleInterpolateProbesAndUpdateTetrahedronCache(int32_t  queueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeUpdateInstanceQueue, ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  probeQueryPosition, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  probeUpdateDataQueue, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  probeOcclusionUpdateDataQueue) ;

/// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0xb204a48, size 0xac, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0xb204af4, size 0x114, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0xb204c08, size 0x1e4, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t>  instancesOffset, ::Unity::Collections::NativeArray_1<int32_t>  instancesCount, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleQuerySortedMeshInstancesJob, addr 0xb204dec, size 0x118, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQuerySortedMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t>  sortedMeshIDs, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleUpdateInstanceDataJob, addr 0xb2047cc, size 0x14c, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>  lodGroupDataMap) ;

/// @brief Method UpdateAllInstanceProbes, addr 0xb204918, size 0x90, virtual false, abstract: false, final false
inline void UpdateAllInstanceProbes(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdateInstanceMotions, addr 0xb204a34, size 0x14, virtual false, abstract: false, final false
inline void UpdateInstanceMotions(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdateInstanceMotionsData, addr 0xb203a14, size 0x1d4, virtual false, abstract: false, final false
inline void UpdateInstanceMotionsData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdateInstanceProbesData, addr 0xb2041d4, size 0x314, virtual false, abstract: false, final false
inline void UpdateInstanceProbesData(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdateInstanceTransforms, addr 0xb2049f0, size 0x44, virtual false, abstract: false, final false
inline void UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdateInstanceTransformsData, addr 0xb203be8, size 0x5ec, virtual false, abstract: false, final false
inline void UpdateInstanceTransformsData(bool  initialize, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  prevLocalToWorldMatrices, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersParameters>  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdateInstanceWindDataHistory, addr 0xb2044e8, size 0x60, virtual false, abstract: false, final false
inline void UpdateInstanceWindDataHistory(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices, ::UnityEngine::Rendering::RenderersParameters  renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  outputBuffer) ;

/// @brief Method UpdatePerFrameInstanceVisibility, addr 0xb2052c0, size 0xe0, virtual false, abstract: false, final false
inline void UpdatePerFrameInstanceVisibility(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ParallelBitArray>  compactedVisibilityMasks) ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer() ;

constexpr bool const& __cordl_internal_get_m_EnableBoundingSpheres() const;

constexpr bool& __cordl_internal_get_m_EnableBoundingSpheres() ;

constexpr ::UnityEngine::Rendering::InstanceAllocators const& __cordl_internal_get_m_InstanceAllocators() const;

constexpr ::UnityEngine::Rendering::InstanceAllocators& __cordl_internal_get_m_InstanceAllocators() ;

constexpr ::UnityEngine::Rendering::CPUInstanceData const& __cordl_internal_get_m_InstanceData() const;

constexpr ::UnityEngine::Rendering::CPUInstanceData& __cordl_internal_get_m_InstanceData() ;

constexpr int32_t const& __cordl_internal_get_m_MotionUpdateKernel() const;

constexpr int32_t& __cordl_internal_get_m_MotionUpdateKernel() ;

constexpr ::UnityEngine::Rendering::CPUPerCameraInstanceData const& __cordl_internal_get_m_PerCameraInstanceData() const;

constexpr ::UnityEngine::Rendering::CPUPerCameraInstanceData& __cordl_internal_get_m_PerCameraInstanceData() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_ProbeUpdateDataQueueBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_ProbeUpdateDataQueueBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_ProbeUpdateKernel() const;

constexpr int32_t& __cordl_internal_get_m_ProbeUpdateKernel() ;

constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle> const& __cordl_internal_get_m_RendererGroupInstanceMultiHash() const;

constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>& __cordl_internal_get_m_RendererGroupInstanceMultiHash() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_ScratchWindParamAddressArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_ScratchWindParamAddressArray() ;

constexpr ::UnityEngine::Rendering::CPUSharedInstanceData const& __cordl_internal_get_m_SharedInstanceData() const;

constexpr ::UnityEngine::Rendering::CPUSharedInstanceData& __cordl_internal_get_m_SharedInstanceData() ;

constexpr int32_t const& __cordl_internal_get_m_TransformInitKernel() const;

constexpr int32_t& __cordl_internal_get_m_TransformInitKernel() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_TransformUpdateCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_TransformUpdateCS() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_TransformUpdateDataQueueBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_TransformUpdateDataQueueBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_TransformUpdateKernel() const;

constexpr int32_t& __cordl_internal_get_m_TransformUpdateKernel() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_UpdateIndexQueueBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_UpdateIndexQueueBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_WindDataCopyHistoryKernel() const;

constexpr int32_t& __cordl_internal_get_m_WindDataCopyHistoryKernel() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_WindDataUpdateCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_WindDataUpdateCS() ;

constexpr void __cordl_internal_set_m_BoundingSpheresUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_EnableBoundingSpheres(bool  value) ;

constexpr void __cordl_internal_set_m_InstanceAllocators(::UnityEngine::Rendering::InstanceAllocators  value) ;

constexpr void __cordl_internal_set_m_InstanceData(::UnityEngine::Rendering::CPUInstanceData  value) ;

constexpr void __cordl_internal_set_m_MotionUpdateKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_PerCameraInstanceData(::UnityEngine::Rendering::CPUPerCameraInstanceData  value) ;

constexpr void __cordl_internal_set_m_ProbeOcclusionUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_ProbeUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_ProbeUpdateKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_RendererGroupInstanceMultiHash(::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  value) ;

constexpr void __cordl_internal_set_m_ScratchWindParamAddressArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_SharedInstanceData(::UnityEngine::Rendering::CPUSharedInstanceData  value) ;

constexpr void __cordl_internal_set_m_TransformInitKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_TransformUpdateCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_TransformUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_TransformUpdateKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_UpdateIndexQueueBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_WindDataCopyHistoryKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_WindDataUpdateCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method .ctor, addr 0xb2025c0, size 0x274, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxInstances, bool  enableBoundingSpheres, ::UnityEngine::Rendering::GPUResidentDrawerResources*  resources) ;

/// @brief Method get_aliveInstances, addr 0xb20256c, size 0x54, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> get_aliveInstances() ;

/// @brief Method get_cameraCount, addr 0xb202514, size 0x8, virtual false, abstract: false, final false
inline int32_t get_cameraCount() ;

/// @brief Method get_hasBoundingSpheres, addr 0xb2024ac, size 0x8, virtual false, abstract: false, final false
inline bool get_hasBoundingSpheres() ;

/// @brief Method get_instanceData, addr 0xb2024b4, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::CPUInstanceData_ReadOnly get_instanceData() ;

/// @brief Method get_perCameraInstanceData, addr 0xb202504, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CPUPerCameraInstanceData get_perCameraInstanceData() ;

/// @brief Method get_sharedInstanceData, addr 0xb20251c, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::CPUSharedInstanceData_ReadOnly get_sharedInstanceData() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystem(InstanceDataSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystem(InstanceDataSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26651};

/// @brief Field m_InstanceAllocators, offset: 0x10, size: 0x60, def value: None
 ::UnityEngine::Rendering::InstanceAllocators  ___m_InstanceAllocators;

/// @brief Field m_SharedInstanceData, offset: 0x70, size: 0xb8, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData  ___m_SharedInstanceData;

/// @brief Field m_InstanceData, offset: 0x128, size: 0xf0, def value: None
 ::UnityEngine::Rendering::CPUInstanceData  ___m_InstanceData;

/// @brief Field m_PerCameraInstanceData, offset: 0x218, size: 0x20, def value: None
 ::UnityEngine::Rendering::CPUPerCameraInstanceData  ___m_PerCameraInstanceData;

/// @brief Field m_RendererGroupInstanceMultiHash, offset: 0x238, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  ___m_RendererGroupInstanceMultiHash;

/// @brief Field m_TransformUpdateCS, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_TransformUpdateCS;

/// @brief Field m_WindDataUpdateCS, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_WindDataUpdateCS;

/// @brief Field m_TransformInitKernel, offset: 0x258, size: 0x4, def value: None
 int32_t  ___m_TransformInitKernel;

/// @brief Field m_TransformUpdateKernel, offset: 0x25c, size: 0x4, def value: None
 int32_t  ___m_TransformUpdateKernel;

/// @brief Field m_MotionUpdateKernel, offset: 0x260, size: 0x4, def value: None
 int32_t  ___m_MotionUpdateKernel;

/// @brief Field m_ProbeUpdateKernel, offset: 0x264, size: 0x4, def value: None
 int32_t  ___m_ProbeUpdateKernel;

/// @brief Field m_WindDataCopyHistoryKernel, offset: 0x268, size: 0x4, def value: None
 int32_t  ___m_WindDataCopyHistoryKernel;

/// @brief Field m_UpdateIndexQueueBuffer, offset: 0x270, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_UpdateIndexQueueBuffer;

/// @brief Field m_ProbeUpdateDataQueueBuffer, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_ProbeUpdateDataQueueBuffer;

/// @brief Field m_ProbeOcclusionUpdateDataQueueBuffer, offset: 0x280, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_ProbeOcclusionUpdateDataQueueBuffer;

/// @brief Field m_TransformUpdateDataQueueBuffer, offset: 0x288, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_TransformUpdateDataQueueBuffer;

/// @brief Field m_BoundingSpheresUpdateDataQueueBuffer, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_BoundingSpheresUpdateDataQueueBuffer;

/// @brief Field m_EnableBoundingSpheres, offset: 0x298, size: 0x1, def value: None
 bool  ___m_EnableBoundingSpheres;

/// @brief Field m_ScratchWindParamAddressArray, offset: 0x2a0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_ScratchWindParamAddressArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_InstanceAllocators) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_SharedInstanceData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_InstanceData) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_PerCameraInstanceData) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_RendererGroupInstanceMultiHash) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformUpdateCS) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_WindDataUpdateCS) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformInitKernel) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformUpdateKernel) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_MotionUpdateKernel) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ProbeUpdateKernel) == 0x264, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_WindDataCopyHistoryKernel) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_UpdateIndexQueueBuffer) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ProbeUpdateDataQueueBuffer) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ProbeOcclusionUpdateDataQueueBuffer) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformUpdateDataQueueBuffer) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_BoundingSpheresUpdateDataQueueBuffer) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_EnableBoundingSpheres) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ScratchWindParamAddressArray) == 0x2a0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystem) == 0x2a8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystem/InstanceWindDataUpdateIDs
class CORDL_TYPE InstanceDataSystem_InstanceWindDataUpdateIDs : public ::System::Object {
public:
// Declarations
/// @brief Field _WindDataBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindDataBuffer, put=setStaticF__WindDataBuffer)) int32_t  _WindDataBuffer;

/// @brief Field _WindDataQueueCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindDataQueueCount, put=setStaticF__WindDataQueueCount)) int32_t  _WindDataQueueCount;

/// @brief Field _WindDataUpdateIndexQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindDataUpdateIndexQueue, put=setStaticF__WindDataUpdateIndexQueue)) int32_t  _WindDataUpdateIndexQueue;

/// @brief Field _WindHistoryParamAddressArray, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindHistoryParamAddressArray, put=setStaticF__WindHistoryParamAddressArray)) int32_t  _WindHistoryParamAddressArray;

/// @brief Field _WindParamAddressArray, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindParamAddressArray, put=setStaticF__WindParamAddressArray)) int32_t  _WindParamAddressArray;

static inline int32_t getStaticF__WindDataBuffer() ;

static inline int32_t getStaticF__WindDataQueueCount() ;

static inline int32_t getStaticF__WindDataUpdateIndexQueue() ;

static inline int32_t getStaticF__WindHistoryParamAddressArray() ;

static inline int32_t getStaticF__WindParamAddressArray() ;

static inline void setStaticF__WindDataBuffer(int32_t  value) ;

static inline void setStaticF__WindDataQueueCount(int32_t  value) ;

static inline void setStaticF__WindDataUpdateIndexQueue(int32_t  value) ;

static inline void setStaticF__WindHistoryParamAddressArray(int32_t  value) ;

static inline void setStaticF__WindParamAddressArray(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_InstanceWindDataUpdateIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceWindDataUpdateIDs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystem_InstanceWindDataUpdateIDs(InstanceDataSystem_InstanceWindDataUpdateIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceWindDataUpdateIDs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystem_InstanceWindDataUpdateIDs(InstanceDataSystem_InstanceWindDataUpdateIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26636};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystem/InstanceTransformUpdateIDs
class CORDL_TYPE InstanceDataSystem_InstanceTransformUpdateIDs : public ::System::Object {
public:
// Declarations
/// @brief Field _BoundingSphereDataQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BoundingSphereDataQueue, put=setStaticF__BoundingSphereDataQueue)) int32_t  _BoundingSphereDataQueue;

/// @brief Field _BoundingSphereOutputVec4Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BoundingSphereOutputVec4Offset, put=setStaticF__BoundingSphereOutputVec4Offset)) int32_t  _BoundingSphereOutputVec4Offset;

/// @brief Field _OutputProbeBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputProbeBuffer, put=setStaticF__OutputProbeBuffer)) int32_t  _OutputProbeBuffer;

/// @brief Field _OutputTransformBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputTransformBuffer, put=setStaticF__OutputTransformBuffer)) int32_t  _OutputTransformBuffer;

/// @brief Field _ProbeOcclusionUpdateDataQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProbeOcclusionUpdateDataQueue, put=setStaticF__ProbeOcclusionUpdateDataQueue)) int32_t  _ProbeOcclusionUpdateDataQueue;

/// @brief Field _ProbeUpdateDataQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProbeUpdateDataQueue, put=setStaticF__ProbeUpdateDataQueue)) int32_t  _ProbeUpdateDataQueue;

/// @brief Field _ProbeUpdateIndexQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProbeUpdateIndexQueue, put=setStaticF__ProbeUpdateIndexQueue)) int32_t  _ProbeUpdateIndexQueue;

/// @brief Field _ProbeUpdateQueueCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProbeUpdateQueueCount, put=setStaticF__ProbeUpdateQueueCount)) int32_t  _ProbeUpdateQueueCount;

/// @brief Field _SHUpdateVec4Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SHUpdateVec4Offset, put=setStaticF__SHUpdateVec4Offset)) int32_t  _SHUpdateVec4Offset;

/// @brief Field _TransformUpdateDataQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateDataQueue, put=setStaticF__TransformUpdateDataQueue)) int32_t  _TransformUpdateDataQueue;

/// @brief Field _TransformUpdateIndexQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateIndexQueue, put=setStaticF__TransformUpdateIndexQueue)) int32_t  _TransformUpdateIndexQueue;

/// @brief Field _TransformUpdateOutputL2WVec4Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateOutputL2WVec4Offset, put=setStaticF__TransformUpdateOutputL2WVec4Offset)) int32_t  _TransformUpdateOutputL2WVec4Offset;

/// @brief Field _TransformUpdateOutputPrevL2WVec4Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateOutputPrevL2WVec4Offset, put=setStaticF__TransformUpdateOutputPrevL2WVec4Offset)) int32_t  _TransformUpdateOutputPrevL2WVec4Offset;

/// @brief Field _TransformUpdateOutputPrevW2LVec4Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateOutputPrevW2LVec4Offset, put=setStaticF__TransformUpdateOutputPrevW2LVec4Offset)) int32_t  _TransformUpdateOutputPrevW2LVec4Offset;

/// @brief Field _TransformUpdateOutputW2LVec4Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateOutputW2LVec4Offset, put=setStaticF__TransformUpdateOutputW2LVec4Offset)) int32_t  _TransformUpdateOutputW2LVec4Offset;

/// @brief Field _TransformUpdateQueueCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransformUpdateQueueCount, put=setStaticF__TransformUpdateQueueCount)) int32_t  _TransformUpdateQueueCount;

static inline int32_t getStaticF__BoundingSphereDataQueue() ;

static inline int32_t getStaticF__BoundingSphereOutputVec4Offset() ;

static inline int32_t getStaticF__OutputProbeBuffer() ;

static inline int32_t getStaticF__OutputTransformBuffer() ;

static inline int32_t getStaticF__ProbeOcclusionUpdateDataQueue() ;

static inline int32_t getStaticF__ProbeUpdateDataQueue() ;

static inline int32_t getStaticF__ProbeUpdateIndexQueue() ;

static inline int32_t getStaticF__ProbeUpdateQueueCount() ;

static inline int32_t getStaticF__SHUpdateVec4Offset() ;

static inline int32_t getStaticF__TransformUpdateDataQueue() ;

static inline int32_t getStaticF__TransformUpdateIndexQueue() ;

static inline int32_t getStaticF__TransformUpdateOutputL2WVec4Offset() ;

static inline int32_t getStaticF__TransformUpdateOutputPrevL2WVec4Offset() ;

static inline int32_t getStaticF__TransformUpdateOutputPrevW2LVec4Offset() ;

static inline int32_t getStaticF__TransformUpdateOutputW2LVec4Offset() ;

static inline int32_t getStaticF__TransformUpdateQueueCount() ;

static inline void setStaticF__BoundingSphereDataQueue(int32_t  value) ;

static inline void setStaticF__BoundingSphereOutputVec4Offset(int32_t  value) ;

static inline void setStaticF__OutputProbeBuffer(int32_t  value) ;

static inline void setStaticF__OutputTransformBuffer(int32_t  value) ;

static inline void setStaticF__ProbeOcclusionUpdateDataQueue(int32_t  value) ;

static inline void setStaticF__ProbeUpdateDataQueue(int32_t  value) ;

static inline void setStaticF__ProbeUpdateIndexQueue(int32_t  value) ;

static inline void setStaticF__ProbeUpdateQueueCount(int32_t  value) ;

static inline void setStaticF__SHUpdateVec4Offset(int32_t  value) ;

static inline void setStaticF__TransformUpdateDataQueue(int32_t  value) ;

static inline void setStaticF__TransformUpdateIndexQueue(int32_t  value) ;

static inline void setStaticF__TransformUpdateOutputL2WVec4Offset(int32_t  value) ;

static inline void setStaticF__TransformUpdateOutputPrevL2WVec4Offset(int32_t  value) ;

static inline void setStaticF__TransformUpdateOutputPrevW2LVec4Offset(int32_t  value) ;

static inline void setStaticF__TransformUpdateOutputW2LVec4Offset(int32_t  value) ;

static inline void setStaticF__TransformUpdateQueueCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystem_InstanceTransformUpdateIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceTransformUpdateIDs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystem_InstanceTransformUpdateIDs(InstanceDataSystem_InstanceTransformUpdateIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceTransformUpdateIDs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystem_InstanceTransformUpdateIDs(InstanceDataSystem_InstanceTransformUpdateIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26635};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
