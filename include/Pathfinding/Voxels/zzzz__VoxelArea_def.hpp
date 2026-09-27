#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Voxels/zzzz__CompactVoxelCell_def.hpp"
#include "Pathfinding/Voxels/zzzz__CompactVoxelSpan_def.hpp"
#include "Pathfinding/Voxels/zzzz__LinkedVoxelSpan_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelArea)
// Forward declare root types
namespace Pathfinding::Voxels {
class VoxelArea;
}
// Write type traits
MARK_REF_T(::Pathfinding::Voxels::VoxelArea*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelArea*, "Pathfinding.Voxels", "VoxelArea");
// Dependencies Pathfinding.Voxels.CompactVoxelCell, Pathfinding.Voxels.CompactVoxelSpan, Pathfinding.Voxels.LinkedVoxelSpan, System.Object, UnityEngine.Vector3
namespace Pathfinding::Voxels {
// Is value type: false
// CS Name: Pathfinding.Voxels.VoxelArea
class CORDL_TYPE VoxelArea : public ::System::Object {
public:
// Declarations
/// @brief Field DirectionX, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_DirectionX, put=__cordl_internal_set_DirectionX)) ::ArrayW<int32_t>  DirectionX;

/// @brief Field DirectionZ, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_DirectionZ, put=__cordl_internal_set_DirectionZ)) ::ArrayW<int32_t>  DirectionZ;

/// @brief Field VectorDirection, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_VectorDirection, put=__cordl_internal_set_VectorDirection)) ::ArrayW<::UnityEngine::Vector3>  VectorDirection;

/// @brief Field areaTypes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_areaTypes, put=__cordl_internal_set_areaTypes)) ::ArrayW<int32_t>  areaTypes;

/// @brief Field compactCells, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_compactCells, put=__cordl_internal_set_compactCells)) ::ArrayW<::Pathfinding::Voxels::CompactVoxelCell>  compactCells;

/// @brief Field compactSpanCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_compactSpanCount, put=__cordl_internal_set_compactSpanCount)) int32_t  compactSpanCount;

/// @brief Field compactSpans, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_compactSpans, put=__cordl_internal_set_compactSpans)) ::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan>  compactSpans;

/// @brief Field depth, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) int32_t  depth;

/// @brief Field dist, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dist, put=__cordl_internal_set_dist)) ::ArrayW<uint16_t>  dist;

/// @brief Field linkedSpanCount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_linkedSpanCount, put=__cordl_internal_set_linkedSpanCount)) int32_t  linkedSpanCount;

/// @brief Field linkedSpans, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedSpans, put=__cordl_internal_set_linkedSpans)) ::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan>  linkedSpans;

/// @brief Field maxDistance, offset 0x48, size 0x2 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) uint16_t  maxDistance;

/// @brief Field maxRegions, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRegions, put=__cordl_internal_set_maxRegions)) int32_t  maxRegions;

/// @brief Field removedStack, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_removedStack, put=__cordl_internal_set_removedStack)) ::ArrayW<int32_t>  removedStack;

/// @brief Field removedStackCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_removedStackCount, put=__cordl_internal_set_removedStackCount)) int32_t  removedStackCount;

/// @brief Field tmpUShortArr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpUShortArr, put=__cordl_internal_set_tmpUShortArr)) ::ArrayW<uint16_t>  tmpUShortArr;

/// @brief Field width, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method AddLinkedSpan, addr 0x5ebf048, size 0x400, virtual false, abstract: false, final false
inline void AddLinkedSpan(int32_t  index, uint32_t  bottom, uint32_t  top, int32_t  area, int32_t  voxelWalkableClimb) ;

/// @brief Method GetSpanCount, addr 0x5ebeedc, size 0x8c, virtual false, abstract: false, final false
inline int32_t GetSpanCount() ;

/// @brief Method GetSpanCountAll, addr 0x5ebee54, size 0x88, virtual false, abstract: false, final false
inline int32_t GetSpanCountAll() ;

static inline ::Pathfinding::Voxels::VoxelArea* New_ctor(int32_t  width, int32_t  depth) ;

/// @brief Method PushToSpanRemovedStack, addr 0x5ebef68, size 0xe0, virtual false, abstract: false, final false
inline void PushToSpanRemovedStack(int32_t  index) ;

/// @brief Method Reset, addr 0x5ebe888, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetLinkedVoxelSpans, addr 0x5ebe8d8, size 0x288, virtual false, abstract: false, final false
inline void ResetLinkedVoxelSpans() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_DirectionX() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_DirectionX() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_DirectionZ() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_DirectionZ() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_VectorDirection() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_VectorDirection() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_areaTypes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_areaTypes() ;

constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelCell> const& __cordl_internal_get_compactCells() const;

constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelCell>& __cordl_internal_get_compactCells() ;

constexpr int32_t const& __cordl_internal_get_compactSpanCount() const;

constexpr int32_t& __cordl_internal_get_compactSpanCount() ;

constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan> const& __cordl_internal_get_compactSpans() const;

constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan>& __cordl_internal_get_compactSpans() ;

constexpr int32_t const& __cordl_internal_get_depth() const;

constexpr int32_t& __cordl_internal_get_depth() ;

constexpr ::ArrayW<uint16_t> const& __cordl_internal_get_dist() const;

constexpr ::ArrayW<uint16_t>& __cordl_internal_get_dist() ;

constexpr int32_t const& __cordl_internal_get_linkedSpanCount() const;

constexpr int32_t& __cordl_internal_get_linkedSpanCount() ;

constexpr ::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan> const& __cordl_internal_get_linkedSpans() const;

constexpr ::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan>& __cordl_internal_get_linkedSpans() ;

constexpr uint16_t const& __cordl_internal_get_maxDistance() const;

constexpr uint16_t& __cordl_internal_get_maxDistance() ;

constexpr int32_t const& __cordl_internal_get_maxRegions() const;

constexpr int32_t& __cordl_internal_get_maxRegions() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_removedStack() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_removedStack() ;

constexpr int32_t const& __cordl_internal_get_removedStackCount() const;

constexpr int32_t& __cordl_internal_get_removedStackCount() ;

constexpr ::ArrayW<uint16_t> const& __cordl_internal_get_tmpUShortArr() const;

constexpr ::ArrayW<uint16_t>& __cordl_internal_get_tmpUShortArr() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_DirectionX(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_DirectionZ(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_VectorDirection(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_areaTypes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_compactCells(::ArrayW<::Pathfinding::Voxels::CompactVoxelCell>  value) ;

constexpr void __cordl_internal_set_compactSpanCount(int32_t  value) ;

constexpr void __cordl_internal_set_compactSpans(::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan>  value) ;

constexpr void __cordl_internal_set_depth(int32_t  value) ;

constexpr void __cordl_internal_set_dist(::ArrayW<uint16_t>  value) ;

constexpr void __cordl_internal_set_linkedSpanCount(int32_t  value) ;

constexpr void __cordl_internal_set_linkedSpans(::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan>  value) ;

constexpr void __cordl_internal_set_maxDistance(uint16_t  value) ;

constexpr void __cordl_internal_set_maxRegions(int32_t  value) ;

constexpr void __cordl_internal_set_removedStack(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_removedStackCount(int32_t  value) ;

constexpr void __cordl_internal_set_tmpUShortArr(::ArrayW<uint16_t>  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ebeb6c, size 0x2e8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  depth) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelArea", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelArea(VoxelArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelArea", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelArea(VoxelArea const& ) = delete;

/// @brief Field AvgSpanLayerCountEstimate offset 0xffffffff size 0x4
static constexpr float_t  AvgSpanLayerCountEstimate{static_cast<float_t>(8.0f)};

/// @brief Field InvalidSpanValue offset 0xffffffff size 0x4
static constexpr uint32_t  InvalidSpanValue{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field MaxHeight offset 0xffffffff size 0x4
static constexpr uint32_t  MaxHeight{static_cast<uint32_t>(0x10000u)};

/// @brief Field MaxHeightInt offset 0xffffffff size 0x4
static constexpr int32_t  MaxHeightInt{static_cast<int32_t>(0x10000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21427};

/// @brief Field width, offset: 0x10, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field depth, offset: 0x14, size: 0x4, def value: None
 int32_t  ___depth;

/// @brief Field compactSpans, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan>  ___compactSpans;

/// @brief Field compactCells, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Voxels::CompactVoxelCell>  ___compactCells;

/// @brief Field compactSpanCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___compactSpanCount;

/// @brief Field tmpUShortArr, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint16_t>  ___tmpUShortArr;

/// @brief Field areaTypes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___areaTypes;

/// @brief Field dist, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint16_t>  ___dist;

/// @brief Field maxDistance, offset: 0x48, size: 0x2, def value: None
 uint16_t  ___maxDistance;

/// @brief Field maxRegions, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___maxRegions;

/// @brief Field DirectionX, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___DirectionX;

/// @brief Field DirectionZ, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___DirectionZ;

/// @brief Field VectorDirection, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___VectorDirection;

/// @brief Field linkedSpanCount, offset: 0x68, size: 0x4, def value: None
 int32_t  ___linkedSpanCount;

/// @brief Field linkedSpans, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan>  ___linkedSpans;

/// @brief Field removedStack, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___removedStack;

/// @brief Field removedStackCount, offset: 0x80, size: 0x4, def value: None
 int32_t  ___removedStackCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___depth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___compactSpans) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___compactCells) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___compactSpanCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___tmpUShortArr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___areaTypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___dist) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___maxDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___maxRegions) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___DirectionX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___DirectionZ) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___VectorDirection) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___linkedSpanCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___linkedSpans) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___removedStack) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelArea, ___removedStackCount) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelArea) == 0x88, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
