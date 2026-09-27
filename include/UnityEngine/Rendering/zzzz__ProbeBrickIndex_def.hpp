#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickIndex)
namespace GlobalNamespace {
struct ProbeBrickIndex_Brick;
}
namespace GlobalNamespace {
struct ProbeBrickIndex_CellIndexUpdateInfo;
}
namespace GlobalNamespace {
struct ProbeBrickIndex_IndirectionEntryUpdateInfo;
}
namespace GlobalNamespace {
struct ProbeBrickPool_BrickChunkAlloc;
}
namespace GlobalNamespace {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class BitArray;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellIndexInfo;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeBrickIndex;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeBrickIndex*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeBrickIndex*, "UnityEngine.Rendering", "ProbeBrickIndex");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeBrickIndex
class CORDL_TYPE ProbeBrickIndex : public ::System::Object {
public:
// Declarations
using Brick = ::GlobalNamespace::ProbeBrickIndex_Brick;

using CellIndexUpdateInfo = ::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo;

using IndirectionEntryUpdateInfo = ::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo;

/// @brief Field <estimatedVMemCost>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__estimatedVMemCost_k__BackingField, put=__cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t  _estimatedVMemCost_k__BackingField;

/// @brief Field <fragmentationRate>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__fragmentationRate_k__BackingField, put=__cordl_internal_set__fragmentationRate_k__BackingField)) float_t  _fragmentationRate_k__BackingField;

 __declspec(property(get=get_estimatedVMemCost, put=set_estimatedVMemCost)) int32_t  estimatedVMemCost;

 __declspec(property(get=get_fragmentationRate, put=set_fragmentationRate)) float_t  fragmentationRate;

/// @brief Field m_AvailableChunkCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AvailableChunkCount, put=__cordl_internal_set_m_AvailableChunkCount)) int32_t  m_AvailableChunkCount;

/// @brief Field m_CenterRS, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CenterRS, put=__cordl_internal_set_m_CenterRS)) ::UnityEngine::Vector3Int  m_CenterRS;

/// @brief Field m_ChunksCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ChunksCount, put=__cordl_internal_set_m_ChunksCount)) int32_t  m_ChunksCount;

/// @brief Field m_DebugFragmentationBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugFragmentationBuffer, put=__cordl_internal_set_m_DebugFragmentationBuffer)) ::UnityEngine::ComputeBuffer*  m_DebugFragmentationBuffer;

/// @brief Field m_DebugFragmentationData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugFragmentationData, put=__cordl_internal_set_m_DebugFragmentationData)) ::ArrayW<int32_t>  m_DebugFragmentationData;

/// @brief Field m_IndexChunks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexChunks, put=__cordl_internal_set_m_IndexChunks)) ::System::Collections::BitArray*  m_IndexChunks;

/// @brief Field m_IndexChunksCopyForChecks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexChunksCopyForChecks, put=__cordl_internal_set_m_IndexChunksCopyForChecks)) ::System::Collections::BitArray*  m_IndexChunksCopyForChecks;

/// @brief Field m_NeedUpdateIndexComputeBuffer, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NeedUpdateIndexComputeBuffer, put=__cordl_internal_set_m_NeedUpdateIndexComputeBuffer)) bool  m_NeedUpdateIndexComputeBuffer;

/// @brief Field m_PhysicalIndexBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PhysicalIndexBuffer, put=__cordl_internal_set_m_PhysicalIndexBuffer)) ::UnityEngine::ComputeBuffer*  m_PhysicalIndexBuffer;

/// @brief Field m_PhysicalIndexBufferData, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PhysicalIndexBufferData, put=__cordl_internal_set_m_PhysicalIndexBufferData)) ::Unity::Collections::NativeArray_1<int32_t>  m_PhysicalIndexBufferData;

/// @brief Field m_UpdateMaxIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateMaxIndex, put=__cordl_internal_set_m_UpdateMaxIndex)) int32_t  m_UpdateMaxIndex;

/// @brief Field m_UpdateMinIndex, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateMinIndex, put=__cordl_internal_set_m_UpdateMinIndex)) int32_t  m_UpdateMinIndex;

/// @brief Method AddBricks, addr 0xb158fb4, size 0x3a0, virtual false, abstract: false, final false
inline void AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*  cellInfo, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ProbeBrickIndex_Brick>  bricks, ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>*  allocations, int32_t  allocationSize, int32_t  poolWidth, int32_t  poolHeight) ;

/// @brief Method BrickOverlapEntry, addr 0xb158c00, size 0x4c, virtual false, abstract: false, final false
static inline bool BrickOverlapEntry(::UnityEngine::Vector3Int  brickMin, ::UnityEngine::Vector3Int  brickMax, ::UnityEngine::Vector3Int  entryMin, ::UnityEngine::Vector3Int  entryMax) ;

/// @brief Method Cleanup, addr 0xb1585b8, size 0xb4, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Clear, addr 0xb15821c, size 0x98, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ComputeFragmentationRate, addr 0xb15866c, size 0x68, virtual false, abstract: false, final false
inline void ComputeFragmentationRate() ;

/// @brief Method FindSlotsForEntries, addr 0xb15875c, size 0x35c, virtual false, abstract: false, final false
inline bool FindSlotsForEntries(::by_ref<::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>>  entriesInfo) ;

/// @brief Method GetDebugFragmentationBuffer, addr 0xb157f98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::ComputeBuffer* GetDebugFragmentationBuffer() ;

/// @brief Method GetNumberOfChunks, addr 0xb1586e0, size 0x7c, virtual false, abstract: false, final false
inline int32_t GetNumberOfChunks(int32_t  brickCount) ;

/// @brief Method GetRemainingChunkCount, addr 0xb1582b4, size 0x8, virtual false, abstract: false, final false
inline int32_t GetRemainingChunkCount() ;

/// @brief Method GetRuntimeResources, addr 0xb1584cc, size 0xec, virtual false, abstract: false, final false
inline void GetRuntimeResources(::by_ref<::GlobalNamespace::ProbeReferenceVolume_RuntimeResources>  rr) ;

/// @brief Method LocationToIndex, addr 0xb158c4c, size 0x10, virtual false, abstract: false, final false
static inline int32_t LocationToIndex(int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Vector3Int  sizeOfValid) ;

/// @brief Method MarkBrickInPhysicalBuffer, addr 0xb158c5c, size 0x358, virtual false, abstract: false, final false
inline void MarkBrickInPhysicalBuffer(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>  entry, ::UnityEngine::Vector3Int  brickMin, ::UnityEngine::Vector3Int  brickMax, int32_t  brickSubdivLevel, int32_t  entrySubdivLevel, int32_t  idx) ;

/// @brief Method MergeIndex, addr 0xb1586d4, size 0xc, virtual false, abstract: false, final false
inline int32_t MergeIndex(int32_t  index, int32_t  size) ;

static inline ::UnityEngine::Rendering::ProbeBrickIndex* New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget) ;

/// @brief Method RemoveBricks, addr 0xb159368, size 0xc8, virtual false, abstract: false, final false
inline void RemoveBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*  cellInfo) ;

/// @brief Method ReserveChunks, addr 0xb158ab8, size 0x148, virtual false, abstract: false, final false
inline bool ReserveChunks(::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>  entriesInfo, bool  ignoreErrorLog) ;

/// @brief Method SizeOfPhysicalIndexFromBudget, addr 0xb157fb0, size 0x48, virtual false, abstract: false, final false
inline int32_t SizeOfPhysicalIndexFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget) ;

/// @brief Method UpdateDebugData, addr 0xb158334, size 0x198, virtual false, abstract: false, final false
inline void UpdateDebugData() ;

/// @brief Method UploadIndexData, addr 0xb1582bc, size 0x78, virtual false, abstract: false, final false
inline void UploadIndexData() ;

constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__fragmentationRate_k__BackingField() const;

constexpr float_t& __cordl_internal_get__fragmentationRate_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_AvailableChunkCount() const;

constexpr int32_t& __cordl_internal_get_m_AvailableChunkCount() ;

constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_CenterRS() const;

constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_CenterRS() ;

constexpr int32_t const& __cordl_internal_get_m_ChunksCount() const;

constexpr int32_t& __cordl_internal_get_m_ChunksCount() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_DebugFragmentationBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_DebugFragmentationBuffer() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_DebugFragmentationData() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_DebugFragmentationData() ;

constexpr ::System::Collections::BitArray* const& __cordl_internal_get_m_IndexChunks() const;

constexpr ::System::Collections::BitArray*& __cordl_internal_get_m_IndexChunks() ;

constexpr ::System::Collections::BitArray* const& __cordl_internal_get_m_IndexChunksCopyForChecks() const;

constexpr ::System::Collections::BitArray*& __cordl_internal_get_m_IndexChunksCopyForChecks() ;

constexpr bool const& __cordl_internal_get_m_NeedUpdateIndexComputeBuffer() const;

constexpr bool& __cordl_internal_get_m_NeedUpdateIndexComputeBuffer() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_PhysicalIndexBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_PhysicalIndexBuffer() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_PhysicalIndexBufferData() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_PhysicalIndexBufferData() ;

constexpr int32_t const& __cordl_internal_get_m_UpdateMaxIndex() const;

constexpr int32_t& __cordl_internal_get_m_UpdateMaxIndex() ;

constexpr int32_t const& __cordl_internal_get_m_UpdateMinIndex() const;

constexpr int32_t& __cordl_internal_get_m_UpdateMinIndex() ;

constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__fragmentationRate_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_AvailableChunkCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_CenterRS(::UnityEngine::Vector3Int  value) ;

constexpr void __cordl_internal_set_m_ChunksCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_DebugFragmentationBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_DebugFragmentationData(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_IndexChunks(::System::Collections::BitArray*  value) ;

constexpr void __cordl_internal_set_m_IndexChunksCopyForChecks(::System::Collections::BitArray*  value) ;

constexpr void __cordl_internal_set_m_NeedUpdateIndexComputeBuffer(bool  value) ;

constexpr void __cordl_internal_set_m_PhysicalIndexBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_PhysicalIndexBufferData(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_m_UpdateMaxIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_UpdateMinIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb157ff8, size 0x224, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget  memoryBudget) ;

/// [CompilerGenerated]
/// @brief Method get_estimatedVMemCost, addr 0xb157f88, size 0x8, virtual false, abstract: false, final false
inline int32_t get_estimatedVMemCost() ;

/// [CompilerGenerated]
/// @brief Method get_fragmentationRate, addr 0xb157fa0, size 0x8, virtual false, abstract: false, final false
inline float_t get_fragmentationRate() ;

/// [CompilerGenerated]
/// @brief Method set_estimatedVMemCost, addr 0xb157f90, size 0x8, virtual false, abstract: false, final false
inline void set_estimatedVMemCost(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_fragmentationRate, addr 0xb157fa8, size 0x8, virtual false, abstract: false, final false
inline void set_fragmentationRate(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickIndex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProbeBrickIndex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProbeBrickIndex(ProbeBrickIndex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProbeBrickIndex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProbeBrickIndex(ProbeBrickIndex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16801};

/// @brief Field kEmptyIndex offset 0xffffffff size 0x4
static constexpr int32_t  kEmptyIndex{static_cast<int32_t>(0xfffffffe)};

/// @brief Field kFailChunkIndex offset 0xffffffff size 0x4
static constexpr int32_t  kFailChunkIndex{static_cast<int32_t>(0xffffffff)};

/// @brief Field kIndexChunkSize offset 0xffffffff size 0x4
static constexpr int32_t  kIndexChunkSize{static_cast<int32_t>(0xf3)};

/// @brief Field kMaxSubdivisionLevels offset 0xffffffff size 0x4
static constexpr int32_t  kMaxSubdivisionLevels{static_cast<int32_t>(0x7)};

/// @brief Field m_IndexChunks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::BitArray*  ___m_IndexChunks;

/// @brief Field m_IndexChunksCopyForChecks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::BitArray*  ___m_IndexChunksCopyForChecks;

/// @brief Field m_ChunksCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_ChunksCount;

/// @brief Field m_AvailableChunkCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_AvailableChunkCount;

/// @brief Field m_PhysicalIndexBuffer, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_PhysicalIndexBuffer;

/// @brief Field m_PhysicalIndexBufferData, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___m_PhysicalIndexBufferData;

/// @brief Field m_DebugFragmentationBuffer, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_DebugFragmentationBuffer;

/// @brief Field m_DebugFragmentationData, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_DebugFragmentationData;

/// @brief Field m_NeedUpdateIndexComputeBuffer, offset: 0x50, size: 0x1, def value: None
 bool  ___m_NeedUpdateIndexComputeBuffer;

/// @brief Field m_UpdateMinIndex, offset: 0x54, size: 0x4, def value: None
 int32_t  ___m_UpdateMinIndex;

/// @brief Field m_UpdateMaxIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___m_UpdateMaxIndex;

/// [CompilerGenerated]
/// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____estimatedVMemCost_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <fragmentationRate>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____fragmentationRate_k__BackingField;

/// @brief Field m_CenterRS, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  ___m_CenterRS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_IndexChunks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_IndexChunksCopyForChecks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_ChunksCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_AvailableChunkCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_PhysicalIndexBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_PhysicalIndexBufferData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_DebugFragmentationBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_DebugFragmentationData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_NeedUpdateIndexComputeBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_UpdateMinIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_UpdateMaxIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ____estimatedVMemCost_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ____fragmentationRate_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_CenterRS) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ProbeBrickIndex) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
