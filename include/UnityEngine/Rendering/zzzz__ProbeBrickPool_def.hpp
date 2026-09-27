#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_BrickChunkAlloc_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_DataLocation_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickPool)
namespace GlobalNamespace {
struct ProbeBrickPool_BrickChunkAlloc;
}
namespace GlobalNamespace {
struct ProbeBrickPool_DataLocation;
}
namespace GlobalNamespace {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
namespace GlobalNamespace {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingScratchBuffer;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeBrickPool;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeBrickPool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeBrickPool*, "UnityEngine.Rendering", "ProbeBrickPool");
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword, UnityEngine.Rendering.ProbeBrickPool::BrickChunkAlloc, UnityEngine.Rendering.ProbeBrickPool::DataLocation, UnityEngine.Rendering.ProbeVolumeSHBands
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeBrickPool
class CORDL_TYPE ProbeBrickPool : public ::System::Object {
public:
// Declarations
using BrickChunkAlloc = ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc;

using DataLocation = ::GlobalNamespace::ProbeBrickPool_DataLocation;

/// @brief Field _Out_L0_L1Rx, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L0_L1Rx, put=setStaticF__Out_L0_L1Rx)) int32_t  _Out_L0_L1Rx;

/// @brief Field _Out_L1B_L1Rz, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L1B_L1Rz, put=setStaticF__Out_L1B_L1Rz)) int32_t  _Out_L1B_L1Rz;

/// @brief Field _Out_L1G_L1Ry, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L1G_L1Ry, put=setStaticF__Out_L1G_L1Ry)) int32_t  _Out_L1G_L1Ry;

/// @brief Field _Out_L2_0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L2_0, put=setStaticF__Out_L2_0)) int32_t  _Out_L2_0;

/// @brief Field _Out_L2_1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L2_1, put=setStaticF__Out_L2_1)) int32_t  _Out_L2_1;

/// @brief Field _Out_L2_2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L2_2, put=setStaticF__Out_L2_2)) int32_t  _Out_L2_2;

/// @brief Field _Out_L2_3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_L2_3, put=setStaticF__Out_L2_3)) int32_t  _Out_L2_3;

/// @brief Field _Out_ProbeOcclusion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_ProbeOcclusion, put=setStaticF__Out_ProbeOcclusion)) int32_t  _Out_ProbeOcclusion;

/// @brief Field _Out_Shared, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_Shared, put=setStaticF__Out_Shared)) int32_t  _Out_Shared;

/// @brief Field _Out_SkyOcclusionL0L1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_SkyOcclusionL0L1, put=setStaticF__Out_SkyOcclusionL0L1)) int32_t  _Out_SkyOcclusionL0L1;

/// @brief Field _Out_SkyShadingDirectionIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Out_SkyShadingDirectionIndices, put=setStaticF__Out_SkyShadingDirectionIndices)) int32_t  _Out_SkyShadingDirectionIndices;

/// @brief Field _ProbeVolumeScratchBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProbeVolumeScratchBuffer, put=setStaticF__ProbeVolumeScratchBuffer)) int32_t  _ProbeVolumeScratchBuffer;

/// @brief Field _ProbeVolumeScratchBufferLayout, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProbeVolumeScratchBufferLayout, put=setStaticF__ProbeVolumeScratchBufferLayout)) int32_t  _ProbeVolumeScratchBufferLayout;

/// @brief Field <estimatedVMemCost>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__estimatedVMemCost_k__BackingField, put=__cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t  _estimatedVMemCost_k__BackingField;

 __declspec(property(get=get_estimatedVMemCost, put=set_estimatedVMemCost)) int32_t  estimatedVMemCost;

/// @brief Field m_AvailableChunkCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AvailableChunkCount, put=__cordl_internal_set_m_AvailableChunkCount)) int32_t  m_AvailableChunkCount;

/// @brief Field m_ContainsProbeOcclusion, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ContainsProbeOcclusion, put=__cordl_internal_set_m_ContainsProbeOcclusion)) bool  m_ContainsProbeOcclusion;

/// @brief Field m_ContainsRenderingLayers, offset 0xa2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ContainsRenderingLayers, put=__cordl_internal_set_m_ContainsRenderingLayers)) bool  m_ContainsRenderingLayers;

/// @brief Field m_ContainsSkyOcclusion, offset 0xa3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ContainsSkyOcclusion, put=__cordl_internal_set_m_ContainsSkyOcclusion)) bool  m_ContainsSkyOcclusion;

/// @brief Field m_ContainsSkyShadingDirection, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ContainsSkyShadingDirection, put=__cordl_internal_set_m_ContainsSkyShadingDirection)) bool  m_ContainsSkyShadingDirection;

/// @brief Field m_ContainsValidity, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ContainsValidity, put=__cordl_internal_set_m_ContainsValidity)) bool  m_ContainsValidity;

/// @brief Field m_FreeList, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FreeList, put=__cordl_internal_set_m_FreeList)) ::System::Collections::Generic::Stack_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  m_FreeList;

/// @brief Field m_NextFreeChunk, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NextFreeChunk, put=__cordl_internal_set_m_NextFreeChunk)) ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc  m_NextFreeChunk;

/// @brief Field m_Pool, offset 0x18, size 0x68 
 __declspec(property(get=__cordl_internal_get_m_Pool, put=__cordl_internal_set_m_Pool)) ::GlobalNamespace::ProbeBrickPool_DataLocation  m_Pool;

/// @brief Field m_SHBands, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SHBands, put=__cordl_internal_set_m_SHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands  m_SHBands;

/// @brief Field s_DataUploadCS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DataUploadCS, put=setStaticF_s_DataUploadCS)) ::UnityW<::UnityEngine::ComputeShader>  s_DataUploadCS;

/// @brief Field s_DataUploadKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DataUploadKernel, put=setStaticF_s_DataUploadKernel)) int32_t  s_DataUploadKernel;

/// @brief Field s_DataUploadL2CS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DataUploadL2CS, put=setStaticF_s_DataUploadL2CS)) ::UnityW<::UnityEngine::ComputeShader>  s_DataUploadL2CS;

/// @brief Field s_DataUploadL2Kernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DataUploadL2Kernel, put=setStaticF_s_DataUploadL2Kernel)) int32_t  s_DataUploadL2Kernel;

/// @brief Field s_DataUpload_ProbeOcclusion, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_DataUpload_ProbeOcclusion, put=setStaticF_s_DataUpload_ProbeOcclusion)) ::UnityEngine::Rendering::LocalKeyword  s_DataUpload_ProbeOcclusion;

/// @brief Field s_DataUpload_Shared, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_DataUpload_Shared, put=setStaticF_s_DataUpload_Shared)) ::UnityEngine::Rendering::LocalKeyword  s_DataUpload_Shared;

/// @brief Field s_DataUpload_SkyOcclusion, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_DataUpload_SkyOcclusion, put=setStaticF_s_DataUpload_SkyOcclusion)) ::UnityEngine::Rendering::LocalKeyword  s_DataUpload_SkyOcclusion;

/// @brief Field s_DataUpload_SkyShadingDirection, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_DataUpload_SkyShadingDirection, put=setStaticF_s_DataUpload_SkyShadingDirection)) ::UnityEngine::Rendering::LocalKeyword  s_DataUpload_SkyShadingDirection;

/// @brief Method Allocate, addr 0xb15adac, size 0x278, virtual false, abstract: false, final false
inline bool Allocate(int32_t  numberOfBrickChunks, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  outAllocations, bool  ignoreErrorLog) ;

/// @brief Method AllocatePool, addr 0xb159c94, size 0x130, virtual false, abstract: false, final false
inline void AllocatePool(int32_t  width, int32_t  height, int32_t  depth) ;

/// @brief Method Cleanup, addr 0xb15c57c, size 0x8, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Clear, addr 0xb15ad38, size 0x5c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateDataLocation, addr 0xb159dc4, size 0x668, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ProbeBrickPool_DataLocation CreateDataLocation(int32_t  numProbes, bool  compressed, ::UnityEngine::Rendering::ProbeVolumeSHBands  bands, ::StringW  name, bool  allocateRendertexture, bool  allocateValidityData, bool  allocateRenderingLayers, bool  allocateSkyOcclusionData, bool  allocateSkyShadingDirectionData, bool  allocateProbeOcclusionData, ::by_ref<int32_t>  allocatedBytes) ;

/// @brief Method CreateDataTexture, addr 0xb15c34c, size 0x230, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> CreateDataTexture(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::StringW  name, bool  allocateRendertexture, ::by_ref<int32_t>  allocatedBytes) ;

/// @brief Method Deallocate, addr 0xb15b024, size 0x174, virtual false, abstract: false, final false
inline void Deallocate(::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  allocations) ;

/// @brief Method DerivePoolSizeFromBudget, addr 0xb159c80, size 0x14, virtual false, abstract: false, final false
static inline void DerivePoolSizeFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget, ::by_ref<int32_t>  width, ::by_ref<int32_t>  height, ::by_ref<int32_t>  depth) ;

/// @brief Method DivRoundUp, addr 0xb159660, size 0x10, virtual false, abstract: false, final false
static inline int32_t DivRoundUp(int32_t  x, int32_t  y) ;

/// @brief Method EnsureTextureValidity, addr 0xb15a68c, size 0x94, virtual false, abstract: false, final false
inline bool EnsureTextureValidity(bool  renderingLayers, bool  skyOcclusion, bool  skyDirection, bool  probeOcclusion) ;

/// @brief Method EnsureTextureValidity, addr 0xb15a434, size 0x8c, virtual false, abstract: false, final false
inline void EnsureTextureValidity() ;

/// @brief Method EstimateMemoryCost, addr 0xb15c1e8, size 0x28, virtual false, abstract: false, final false
static inline int32_t EstimateMemoryCost(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method EstimateMemoryCostForBlending, addr 0xb15c210, size 0x13c, virtual false, abstract: false, final false
static inline int32_t EstimateMemoryCostForBlending(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget, bool  compressed, ::UnityEngine::Rendering::ProbeVolumeSHBands  bands) ;

/// @brief Method GetChunkCount, addr 0xb15ad94, size 0x18, virtual false, abstract: false, final false
static inline int32_t GetChunkCount(int32_t  brickCount) ;

/// @brief Method GetChunkSizeInBrickCount, addr 0xb15a720, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetChunkSizeInBrickCount() ;

/// @brief Method GetChunkSizeInProbeCount, addr 0xb15a728, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetChunkSizeInProbeCount() ;

/// @brief Method GetPoolDimensions, addr 0xb15a740, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int GetPoolDimensions() ;

/// @brief Method GetPoolHeight, addr 0xb15a738, size 0x8, virtual false, abstract: false, final false
inline int32_t GetPoolHeight() ;

/// @brief Method GetPoolWidth, addr 0xb15a730, size 0x8, virtual false, abstract: false, final false
inline int32_t GetPoolWidth() ;

/// @brief Method GetProbeOcclusionTexture, addr 0xb159b04, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetProbeOcclusionTexture() ;

/// @brief Method GetRemainingChunkCount, addr 0xb15a42c, size 0x8, virtual false, abstract: false, final false
inline int32_t GetRemainingChunkCount() ;

/// @brief Method GetRuntimeResources, addr 0xb15a750, size 0x5e8, virtual false, abstract: false, final false
inline void GetRuntimeResources(::by_ref<::GlobalNamespace::ProbeReferenceVolume_RuntimeResources>  rr) ;

/// @brief Method GetSkyOcclusionTexture, addr 0xb159af4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetSkyOcclusionTexture() ;

/// @brief Method GetSkyShadingDirectionIndicesTexture, addr 0xb159afc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetSkyShadingDirectionIndicesTexture() ;

/// @brief Method GetValidityTexture, addr 0xb159aec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetValidityTexture() ;

/// @brief Method Initialize, addr 0xb159680, size 0x46c, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::UnityEngine::Rendering::ProbeBrickPool* New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands  shBands, bool  allocateValidityData, bool  allocateRenderingLayerData, bool  allocateSkyOcclusion, bool  allocateSkyShadingData, bool  allocateProbeOcclusionData) ;

/// @brief Method ProbeCountToDataLocSize, addr 0xb15c17c, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int ProbeCountToDataLocSize(int32_t  numProbes) ;

/// @brief Method Update, addr 0xb15b644, size 0x970, virtual false, abstract: false, final false
inline void Update(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*  dataBuffer, ::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout  layout, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  dstLocations, bool  updateSharedData, ::UnityEngine::Texture*  validityTexture, ::UnityEngine::Rendering::ProbeVolumeSHBands  bands, bool  skyOcclusion, ::UnityEngine::Texture*  skyOcclusionTexture, bool  skyShadingDirections, ::UnityEngine::Texture*  skyShadingDirectionsTexture, bool  probeOcclusion) ;

/// @brief Method Update, addr 0xb15b198, size 0x4ac, virtual false, abstract: false, final false
inline void Update(::GlobalNamespace::ProbeBrickPool_DataLocation  source, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  srcLocations, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  dstLocations, int32_t  destStartIndex, ::UnityEngine::Rendering::ProbeVolumeSHBands  bands) ;

/// @brief Method UpdateValidity, addr 0xb15bfe8, size 0x194, virtual false, abstract: false, final false
inline void UpdateValidity(::GlobalNamespace::ProbeBrickPool_DataLocation  source, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  srcLocations, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  dstLocations, int32_t  destStartIndex) ;

constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_AvailableChunkCount() const;

constexpr int32_t& __cordl_internal_get_m_AvailableChunkCount() ;

constexpr bool const& __cordl_internal_get_m_ContainsProbeOcclusion() const;

constexpr bool& __cordl_internal_get_m_ContainsProbeOcclusion() ;

constexpr bool const& __cordl_internal_get_m_ContainsRenderingLayers() const;

constexpr bool& __cordl_internal_get_m_ContainsRenderingLayers() ;

constexpr bool const& __cordl_internal_get_m_ContainsSkyOcclusion() const;

constexpr bool& __cordl_internal_get_m_ContainsSkyOcclusion() ;

constexpr bool const& __cordl_internal_get_m_ContainsSkyShadingDirection() const;

constexpr bool& __cordl_internal_get_m_ContainsSkyShadingDirection() ;

constexpr bool const& __cordl_internal_get_m_ContainsValidity() const;

constexpr bool& __cordl_internal_get_m_ContainsValidity() ;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>* const& __cordl_internal_get_m_FreeList() const;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*& __cordl_internal_get_m_FreeList() ;

constexpr ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc const& __cordl_internal_get_m_NextFreeChunk() const;

constexpr ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc& __cordl_internal_get_m_NextFreeChunk() ;

constexpr ::GlobalNamespace::ProbeBrickPool_DataLocation const& __cordl_internal_get_m_Pool() const;

constexpr ::GlobalNamespace::ProbeBrickPool_DataLocation& __cordl_internal_get_m_Pool() ;

constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_SHBands() const;

constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_SHBands() ;

constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_AvailableChunkCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_ContainsProbeOcclusion(bool  value) ;

constexpr void __cordl_internal_set_m_ContainsRenderingLayers(bool  value) ;

constexpr void __cordl_internal_set_m_ContainsSkyOcclusion(bool  value) ;

constexpr void __cordl_internal_set_m_ContainsSkyShadingDirection(bool  value) ;

constexpr void __cordl_internal_set_m_ContainsValidity(bool  value) ;

constexpr void __cordl_internal_set_m_FreeList(::System::Collections::Generic::Stack_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  value) ;

constexpr void __cordl_internal_set_m_NextFreeChunk(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc  value) ;

constexpr void __cordl_internal_set_m_Pool(::GlobalNamespace::ProbeBrickPool_DataLocation  value) ;

constexpr void __cordl_internal_set_m_SHBands(::UnityEngine::Rendering::ProbeVolumeSHBands  value) ;

/// @brief Method .ctor, addr 0xb159b0c, size 0x174, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands  shBands, bool  allocateValidityData, bool  allocateRenderingLayerData, bool  allocateSkyOcclusion, bool  allocateSkyShadingData, bool  allocateProbeOcclusionData) ;

static inline int32_t getStaticF__Out_L0_L1Rx() ;

static inline int32_t getStaticF__Out_L1B_L1Rz() ;

static inline int32_t getStaticF__Out_L1G_L1Ry() ;

static inline int32_t getStaticF__Out_L2_0() ;

static inline int32_t getStaticF__Out_L2_1() ;

static inline int32_t getStaticF__Out_L2_2() ;

static inline int32_t getStaticF__Out_L2_3() ;

static inline int32_t getStaticF__Out_ProbeOcclusion() ;

static inline int32_t getStaticF__Out_Shared() ;

static inline int32_t getStaticF__Out_SkyOcclusionL0L1() ;

static inline int32_t getStaticF__Out_SkyShadingDirectionIndices() ;

static inline int32_t getStaticF__ProbeVolumeScratchBuffer() ;

static inline int32_t getStaticF__ProbeVolumeScratchBufferLayout() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_s_DataUploadCS() ;

static inline int32_t getStaticF_s_DataUploadKernel() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_s_DataUploadL2CS() ;

static inline int32_t getStaticF_s_DataUploadL2Kernel() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_ProbeOcclusion() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_Shared() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_SkyOcclusion() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_SkyShadingDirection() ;

/// [CompilerGenerated]
/// @brief Method get_estimatedVMemCost, addr 0xb159670, size 0x8, virtual false, abstract: false, final false
inline int32_t get_estimatedVMemCost() ;

static inline void setStaticF__Out_L0_L1Rx(int32_t  value) ;

static inline void setStaticF__Out_L1B_L1Rz(int32_t  value) ;

static inline void setStaticF__Out_L1G_L1Ry(int32_t  value) ;

static inline void setStaticF__Out_L2_0(int32_t  value) ;

static inline void setStaticF__Out_L2_1(int32_t  value) ;

static inline void setStaticF__Out_L2_2(int32_t  value) ;

static inline void setStaticF__Out_L2_3(int32_t  value) ;

static inline void setStaticF__Out_ProbeOcclusion(int32_t  value) ;

static inline void setStaticF__Out_Shared(int32_t  value) ;

static inline void setStaticF__Out_SkyOcclusionL0L1(int32_t  value) ;

static inline void setStaticF__Out_SkyShadingDirectionIndices(int32_t  value) ;

static inline void setStaticF__ProbeVolumeScratchBuffer(int32_t  value) ;

static inline void setStaticF__ProbeVolumeScratchBufferLayout(int32_t  value) ;

static inline void setStaticF_s_DataUploadCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_s_DataUploadKernel(int32_t  value) ;

static inline void setStaticF_s_DataUploadL2CS(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_s_DataUploadL2Kernel(int32_t  value) ;

static inline void setStaticF_s_DataUpload_ProbeOcclusion(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_s_DataUpload_Shared(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_s_DataUpload_SkyOcclusion(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_s_DataUpload_SkyShadingDirection(::UnityEngine::Rendering::LocalKeyword  value) ;

/// [CompilerGenerated]
/// @brief Method set_estimatedVMemCost, addr 0xb159678, size 0x8, virtual false, abstract: false, final false
inline void set_estimatedVMemCost(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProbeBrickPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProbeBrickPool(ProbeBrickPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProbeBrickPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProbeBrickPool(ProbeBrickPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16804};

/// @brief Field kBrickCellCount offset 0xffffffff size 0x4
static constexpr int32_t  kBrickCellCount{static_cast<int32_t>(0x3)};

/// @brief Field kBrickProbeCountPerDim offset 0xffffffff size 0x4
static constexpr int32_t  kBrickProbeCountPerDim{static_cast<int32_t>(0x4)};

/// @brief Field kBrickProbeCountTotal offset 0xffffffff size 0x4
static constexpr int32_t  kBrickProbeCountTotal{static_cast<int32_t>(0x40)};

/// @brief Field kChunkProbeCountPerDim offset 0xffffffff size 0x4
static constexpr int32_t  kChunkProbeCountPerDim{static_cast<int32_t>(0x200)};

/// @brief Field kChunkSizeInBricks offset 0xffffffff size 0x4
static constexpr int32_t  kChunkSizeInBricks{static_cast<int32_t>(0x80)};

/// @brief Field kMaxPoolWidth offset 0xffffffff size 0x4
static constexpr int32_t  kMaxPoolWidth{static_cast<int32_t>(0x800)};

/// [CompilerGenerated]
/// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____estimatedVMemCost_k__BackingField;

/// @brief Field m_Pool, offset: 0x18, size: 0x68, def value: None
 ::GlobalNamespace::ProbeBrickPool_DataLocation  ___m_Pool;

/// @brief Field m_NextFreeChunk, offset: 0x80, size: 0xc, def value: None
 ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc  ___m_NextFreeChunk;

/// @brief Field m_FreeList, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  ___m_FreeList;

/// @brief Field m_AvailableChunkCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ___m_AvailableChunkCount;

/// @brief Field m_SHBands, offset: 0x9c, size: 0x4, def value: None
 ::UnityEngine::Rendering::ProbeVolumeSHBands  ___m_SHBands;

/// @brief Field m_ContainsValidity, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_ContainsValidity;

/// @brief Field m_ContainsProbeOcclusion, offset: 0xa1, size: 0x1, def value: None
 bool  ___m_ContainsProbeOcclusion;

/// @brief Field m_ContainsRenderingLayers, offset: 0xa2, size: 0x1, def value: None
 bool  ___m_ContainsRenderingLayers;

/// @brief Field m_ContainsSkyOcclusion, offset: 0xa3, size: 0x1, def value: None
 bool  ___m_ContainsSkyOcclusion;

/// @brief Field m_ContainsSkyShadingDirection, offset: 0xa4, size: 0x1, def value: None
 bool  ___m_ContainsSkyShadingDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ____estimatedVMemCost_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_Pool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_NextFreeChunk) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_FreeList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_AvailableChunkCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_SHBands) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsValidity) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsProbeOcclusion) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsRenderingLayers) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsSkyOcclusion) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsSkyShadingDirection) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ProbeBrickPool) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
