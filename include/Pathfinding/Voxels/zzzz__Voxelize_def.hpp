#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/Voxelize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__RecastGraph_RelevantGraphSurfaceMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Voxelize)
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding::Voxels {
class RasterizationMesh;
}
namespace Pathfinding::Voxels {
class VoxelArea;
}
namespace Pathfinding::Voxels {
class VoxelContourSet;
}
namespace Pathfinding::Voxels {
struct VoxelContour;
}
namespace Pathfinding::Voxels {
struct VoxelMesh;
}
namespace Pathfinding {
struct Int3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Voxels {
class Voxelize;
}
// Write type traits
MARK_REF_T(::Pathfinding::Voxels::Voxelize*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::Voxelize*, "Pathfinding.Voxels", "Voxelize");
// Dependencies Pathfinding.RecastGraph::RelevantGraphSurfaceMode, System.Object, UnityEngine.Bounds, UnityEngine.Vector3
namespace Pathfinding::Voxels {
// Is value type: false
// CS Name: Pathfinding.Voxels.Voxelize
class CORDL_TYPE Voxelize : public ::System::Object {
public:
// Declarations
/// @brief Field <transformVoxel2Graph>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformVoxel2Graph_k__BackingField, put=__cordl_internal_set__transformVoxel2Graph_k__BackingField)) ::Pathfinding::Util::GraphTransform*  _transformVoxel2Graph_k__BackingField;

/// @brief Field borderSize, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_borderSize, put=__cordl_internal_set_borderSize)) int32_t  borderSize;

/// @brief Field cellHeight, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cellHeight, put=__cordl_internal_set_cellHeight)) float_t  cellHeight;

/// @brief Field cellScale, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get_cellScale, put=__cordl_internal_set_cellScale)) ::UnityEngine::Vector3  cellScale;

/// @brief Field cellSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cellSize, put=__cordl_internal_set_cellSize)) float_t  cellSize;

/// @brief Field countourSet, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_countourSet, put=__cordl_internal_set_countourSet)) ::Pathfinding::Voxels::VoxelContourSet*  countourSet;

/// @brief Field depth, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) int32_t  depth;

/// @brief Field forcedBounds, offset 0x3c, size 0x18 
 __declspec(property(get=__cordl_internal_get_forcedBounds, put=__cordl_internal_set_forcedBounds)) ::UnityEngine::Bounds  forcedBounds;

/// @brief Field inputMeshes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMeshes, put=__cordl_internal_set_inputMeshes)) ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  inputMeshes;

/// @brief Field maxEdgeLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEdgeLength, put=__cordl_internal_set_maxEdgeLength)) float_t  maxEdgeLength;

/// @brief Field maxSlope, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSlope, put=__cordl_internal_set_maxSlope)) float_t  maxSlope;

/// @brief Field minRegionSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRegionSize, put=__cordl_internal_set_minRegionSize)) int32_t  minRegionSize;

/// @brief Field relevantGraphSurfaceMode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_relevantGraphSurfaceMode, put=__cordl_internal_set_relevantGraphSurfaceMode)) ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  relevantGraphSurfaceMode;

/// @brief Field transform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::Pathfinding::Util::GraphTransform*  transform;

 __declspec(property(get=get_transformVoxel2Graph, put=set_transformVoxel2Graph)) ::Pathfinding::Util::GraphTransform*  transformVoxel2Graph;

/// @brief Field voxelArea, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_voxelArea, put=__cordl_internal_set_voxelArea)) ::Pathfinding::Voxels::VoxelArea*  voxelArea;

/// @brief Field voxelOffset, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_voxelOffset, put=__cordl_internal_set_voxelOffset)) ::UnityEngine::Vector3  voxelOffset;

/// @brief Field voxelWalkableClimb, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_voxelWalkableClimb, put=__cordl_internal_set_voxelWalkableClimb)) int32_t  voxelWalkableClimb;

/// @brief Field voxelWalkableHeight, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_voxelWalkableHeight, put=__cordl_internal_set_voxelWalkableHeight)) uint32_t  voxelWalkableHeight;

/// @brief Field width, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method Area2, addr 0x5ec2ea0, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Area2(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts) ;

/// @brief Method Between, addr 0x5ec3174, size 0x118, virtual false, abstract: false, final false
static inline bool Between(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts) ;

/// @brief Method BoxBlur, addr 0x5ec66e8, size 0x298, virtual false, abstract: false, final false
inline ::ArrayW<uint16_t> BoxBlur(::ArrayW<uint16_t>  src, ::ArrayW<uint16_t>  dst) ;

/// @brief Method BuildCompactField, addr 0x5ec51b4, size 0x2e0, virtual false, abstract: false, final false
inline void BuildCompactField() ;

/// @brief Method BuildContours, addr 0x5ebfa88, size 0xa4c, virtual false, abstract: false, final false
inline void BuildContours(float_t  maxError, int32_t  maxEdgeLength, ::Pathfinding::Voxels::VoxelContourSet*  cset, int32_t  buildFlags) ;

/// @brief Method BuildDistanceField, addr 0x5ec65d4, size 0x114, virtual false, abstract: false, final false
inline void BuildDistanceField() ;

/// @brief Method BuildPolyMesh, addr 0x5ec328c, size 0x5f4, virtual false, abstract: false, final false
inline void BuildPolyMesh(::Pathfinding::Voxels::VoxelContourSet*  cset, int32_t  nvp, ::by_ref<::Pathfinding::Voxels::VoxelMesh>  mesh) ;

/// @brief Method BuildRegions, addr 0x5ec7644, size 0xd1c, virtual false, abstract: false, final false
inline void BuildRegions() ;

/// @brief Method BuildVoxelConnections, addr 0x5ec5494, size 0x35c, virtual false, abstract: false, final false
inline void BuildVoxelConnections() ;

/// @brief Method CalcAreaOfPolygon2D, addr 0x5ec1db4, size 0xc8, virtual false, abstract: false, final false
inline int32_t CalcAreaOfPolygon2D(::ArrayW<int32_t>  verts, int32_t  nverts) ;

/// @brief Method CalculateDistanceField, addr 0x5ec5eb8, size 0x71c, virtual false, abstract: false, final false
inline uint16_t CalculateDistanceField(::ArrayW<uint16_t>  src) ;

/// @brief Method Collinear, addr 0x5ec2f3c, size 0x18, virtual false, abstract: false, final false
static inline bool Collinear(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts) ;

/// @brief Method CompactSpanToVector, addr 0x5ec3d0c, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CompactSpanToVector(int32_t  x, int32_t  z, int32_t  i) ;

/// @brief Method ConvertPosWithoutOffset, addr 0x5ec5cc4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConvertPosWithoutOffset(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method ConvertPosition, addr 0x5ec5d18, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConvertPosition(int32_t  x, int32_t  z, int32_t  i) ;

/// @brief Method DebugDrawSpans, addr 0x5ec4f48, size 0x26c, virtual false, abstract: false, final false
inline void DebugDrawSpans() ;

/// @brief Method Diagonal, addr 0x5ec2b40, size 0x60, virtual false, abstract: false, final false
static inline bool Diagonal(int32_t  i, int32_t  j, int32_t  n, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  indices) ;

/// @brief Method Diagonalie, addr 0x5ec2cd0, size 0x180, virtual false, abstract: false, final false
static inline bool Diagonalie(int32_t  i, int32_t  j, int32_t  n, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  indices) ;

/// @brief Method DrawLine, addr 0x5ec57f0, size 0x1c8, virtual false, abstract: false, final false
inline void DrawLine(int32_t  a, int32_t  b, ::ArrayW<int32_t>  indices, ::ArrayW<int32_t>  verts, ::UnityEngine::Color  color) ;

/// [Obsolete("This function is not complete and should not be used")]
/// @brief Method ErodeVoxels, addr 0x5ec6980, size 0x204, virtual false, abstract: false, final false
inline void ErodeVoxels(int32_t  radius) ;

/// @brief Method ErodeWalkableArea, addr 0x5ec5d8c, size 0x12c, virtual false, abstract: false, final false
inline void ErodeWalkableArea(int32_t  radius) ;

/// @brief Method FilterLedges, addr 0x5ec6c54, size 0x40c, virtual false, abstract: false, final false
inline void FilterLedges(uint32_t  voxelWalkableHeight, int32_t  voxelWalkableClimb, float_t  cs, float_t  ch) ;

/// @brief Method FilterLowHeightSpans, addr 0x5ec6b84, size 0xd0, virtual false, abstract: false, final false
inline void FilterLowHeightSpans(uint32_t  voxelWalkableHeight, float_t  cs, float_t  ch) ;

/// @brief Method FilterSmallRegions, addr 0x5ec8360, size 0x73c, virtual false, abstract: false, final false
inline void FilterSmallRegions(::ArrayW<uint16_t>  reg, int32_t  minRegionSize, int32_t  maxRegions) ;

/// @brief Method FloodRegion, addr 0x5ec7060, size 0x4f4, virtual false, abstract: false, final false
inline bool FloodRegion(int32_t  x, int32_t  z, int32_t  i, uint32_t  level, uint16_t  r, ::ArrayW<uint16_t>  srcReg, ::ArrayW<uint16_t>  srcDist, ::ArrayW<::Pathfinding::Int3>  stack, ::ArrayW<int32_t>  flags, ::ArrayW<bool>  closed) ;

/// @brief Method GetClosestIndices, addr 0x5ec1e7c, size 0x1d8, virtual false, abstract: false, final false
inline void GetClosestIndices(::ArrayW<int32_t>  vertsa, int32_t  nvertsa, ::ArrayW<int32_t>  vertsb, int32_t  nvertsb, ::by_ref<int32_t>  ia, ::by_ref<int32_t>  ib) ;

/// @brief Method GetCornerHeight, addr 0x5ec2528, size 0x618, virtual false, abstract: false, final false
inline int32_t GetCornerHeight(int32_t  x, int32_t  z, int32_t  i, int32_t  dir, ::by_ref<bool>  isBorderVertex) ;

/// @brief Method Ileft, addr 0x5ec2354, size 0xb8, virtual false, abstract: false, final false
static inline bool Ileft(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  va, ::ArrayW<int32_t>  vb, ::ArrayW<int32_t>  vc) ;

/// @brief Method InCone, addr 0x5ec2ba0, size 0x130, virtual false, abstract: false, final false
static inline bool InCone(int32_t  i, int32_t  j, int32_t  n, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  indices) ;

/// @brief Method Init, addr 0x5ec410c, size 0xb4, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Intersect, addr 0x5ec2fc8, size 0xa4, virtual false, abstract: false, final false
static inline bool Intersect(int32_t  a, int32_t  b, int32_t  c, int32_t  d, ::ArrayW<int32_t>  verts) ;

/// @brief Method IntersectProp, addr 0x5ec3078, size 0xfc, virtual false, abstract: false, final false
static inline bool IntersectProp(int32_t  a, int32_t  b, int32_t  c, int32_t  d, ::ArrayW<int32_t>  verts) ;

/// @brief Method Left, addr 0x5ec2e8c, size 0x14, virtual false, abstract: false, final false
static inline bool Left(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts) ;

/// @brief Method LeftOn, addr 0x5ec2e74, size 0x18, virtual false, abstract: false, final false
static inline bool LeftOn(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts) ;

/// @brief Method MarkRectWithRegion, addr 0x5ec7554, size 0xf0, virtual false, abstract: false, final false
inline void MarkRectWithRegion(int32_t  minx, int32_t  maxx, int32_t  minz, int32_t  maxz, uint16_t  region, ::ArrayW<uint16_t>  srcReg) ;

/// @brief Method MergeContours, addr 0x5ec2054, size 0x300, virtual false, abstract: false, final false
static inline bool MergeContours(::by_ref<::Pathfinding::Voxels::VoxelContour>  ca, ::by_ref<::Pathfinding::Voxels::VoxelContour>  cb, int32_t  ia, int32_t  ib) ;

static inline ::Pathfinding::Voxels::Voxelize* New_ctor(float_t  ch, float_t  cs, float_t  walkableClimb, float_t  walkableHeight, float_t  maxSlope, float_t  maxEdgeLength) ;

/// @brief Method Next, addr 0x5ec2e50, size 0x10, virtual false, abstract: false, final false
static inline int32_t Next(int32_t  i, int32_t  n) ;

/// @brief Method Prev, addr 0x5ec2e60, size 0x14, virtual false, abstract: false, final false
static inline int32_t Prev(int32_t  i, int32_t  n) ;

/// @brief Method ReleaseContours, addr 0x5ec240c, size 0x11c, virtual false, abstract: false, final false
static inline void ReleaseContours(::Pathfinding::Voxels::VoxelContourSet*  cset) ;

/// @brief Method RemoveDegenerateSegments, addr 0x5ec1c7c, size 0x138, virtual false, abstract: false, final false
inline void RemoveDegenerateSegments(::System::Collections::Generic::List_1<int32_t>*  simplified) ;

/// @brief Method SimplifyContour, addr 0x5ec0ab0, size 0x11cc, virtual false, abstract: false, final false
inline void SimplifyContour(::System::Collections::Generic::List_1<int32_t>*  verts, ::System::Collections::Generic::List_1<int32_t>*  simplified, float_t  maxError, int32_t  maxEdgeLenght, int32_t  buildFlags) ;

/// @brief Method Triangulate, addr 0x5ec3880, size 0x47c, virtual false, abstract: false, final false
inline int32_t Triangulate(int32_t  n, ::ArrayW<int32_t>  verts, ::by_ref<::ArrayW<int32_t>>  indices, ::by_ref<::ArrayW<int32_t>>  tris) ;

/// @brief Method VectorToIndex, addr 0x5ec3d80, size 0x1e8, virtual false, abstract: false, final false
inline void VectorToIndex(::UnityEngine::Vector3  p, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z) ;

/// @brief Method Vequal, addr 0x5ec2f54, size 0x74, virtual false, abstract: false, final false
static inline bool Vequal(int32_t  a, int32_t  b, ::ArrayW<int32_t>  verts) ;

/// @brief Method VoxelToWorld, addr 0x5ec59b8, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 VoxelToWorld(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method VoxelToWorldInt3, addr 0x5ec59f0, size 0x2d4, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 VoxelToWorldInt3(::Pathfinding::Int3  voxelPosition) ;

/// @brief Method VoxelizeInput, addr 0x5ec41c0, size 0xd88, virtual false, abstract: false, final false
inline void VoxelizeInput(::Pathfinding::Util::GraphTransform*  graphTransform, ::UnityEngine::Bounds  graphSpaceBounds) ;

/// @brief Method WalkContour, addr 0x5ec04d4, size 0x5dc, virtual false, abstract: false, final false
inline void WalkContour(int32_t  x, int32_t  z, int32_t  i, ::ArrayW<uint16_t>  flags, ::System::Collections::Generic::List_1<int32_t>*  verts) ;

/// @brief Method Xorb, addr 0x5ec306c, size 0xc, virtual false, abstract: false, final false
static inline bool Xorb(bool  x, bool  y) ;

constexpr ::Pathfinding::Util::GraphTransform* const& __cordl_internal_get__transformVoxel2Graph_k__BackingField() const;

constexpr ::Pathfinding::Util::GraphTransform*& __cordl_internal_get__transformVoxel2Graph_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_borderSize() const;

constexpr int32_t& __cordl_internal_get_borderSize() ;

constexpr float_t const& __cordl_internal_get_cellHeight() const;

constexpr float_t& __cordl_internal_get_cellHeight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cellScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cellScale() ;

constexpr float_t const& __cordl_internal_get_cellSize() const;

constexpr float_t& __cordl_internal_get_cellSize() ;

constexpr ::Pathfinding::Voxels::VoxelContourSet* const& __cordl_internal_get_countourSet() const;

constexpr ::Pathfinding::Voxels::VoxelContourSet*& __cordl_internal_get_countourSet() ;

constexpr int32_t const& __cordl_internal_get_depth() const;

constexpr int32_t& __cordl_internal_get_depth() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_forcedBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_forcedBounds() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* const& __cordl_internal_get_inputMeshes() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*& __cordl_internal_get_inputMeshes() ;

constexpr float_t const& __cordl_internal_get_maxEdgeLength() const;

constexpr float_t& __cordl_internal_get_maxEdgeLength() ;

constexpr float_t const& __cordl_internal_get_maxSlope() const;

constexpr float_t& __cordl_internal_get_maxSlope() ;

constexpr int32_t const& __cordl_internal_get_minRegionSize() const;

constexpr int32_t& __cordl_internal_get_minRegionSize() ;

constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const& __cordl_internal_get_relevantGraphSurfaceMode() const;

constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode& __cordl_internal_get_relevantGraphSurfaceMode() ;

constexpr ::Pathfinding::Util::GraphTransform* const& __cordl_internal_get_transform() const;

constexpr ::Pathfinding::Util::GraphTransform*& __cordl_internal_get_transform() ;

constexpr ::Pathfinding::Voxels::VoxelArea* const& __cordl_internal_get_voxelArea() const;

constexpr ::Pathfinding::Voxels::VoxelArea*& __cordl_internal_get_voxelArea() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_voxelOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_voxelOffset() ;

constexpr int32_t const& __cordl_internal_get_voxelWalkableClimb() const;

constexpr int32_t& __cordl_internal_get_voxelWalkableClimb() ;

constexpr uint32_t const& __cordl_internal_get_voxelWalkableHeight() const;

constexpr uint32_t& __cordl_internal_get_voxelWalkableHeight() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set__transformVoxel2Graph_k__BackingField(::Pathfinding::Util::GraphTransform*  value) ;

constexpr void __cordl_internal_set_borderSize(int32_t  value) ;

constexpr void __cordl_internal_set_cellHeight(float_t  value) ;

constexpr void __cordl_internal_set_cellScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cellSize(float_t  value) ;

constexpr void __cordl_internal_set_countourSet(::Pathfinding::Voxels::VoxelContourSet*  value) ;

constexpr void __cordl_internal_set_depth(int32_t  value) ;

constexpr void __cordl_internal_set_forcedBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_inputMeshes(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  value) ;

constexpr void __cordl_internal_set_maxEdgeLength(float_t  value) ;

constexpr void __cordl_internal_set_maxSlope(float_t  value) ;

constexpr void __cordl_internal_set_minRegionSize(int32_t  value) ;

constexpr void __cordl_internal_set_relevantGraphSurfaceMode(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  value) ;

constexpr void __cordl_internal_set_transform(::Pathfinding::Util::GraphTransform*  value) ;

constexpr void __cordl_internal_set_voxelArea(::Pathfinding::Voxels::VoxelArea*  value) ;

constexpr void __cordl_internal_set_voxelOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_voxelWalkableClimb(int32_t  value) ;

constexpr void __cordl_internal_set_voxelWalkableHeight(uint32_t  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ec3f68, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(float_t  ch, float_t  cs, float_t  walkableClimb, float_t  walkableHeight, float_t  maxSlope, float_t  maxEdgeLength) ;

/// [CompilerGenerated]
/// @brief Method get_transformVoxel2Graph, addr 0x5ec3cfc, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GraphTransform* get_transformVoxel2Graph() ;

/// [CompilerGenerated]
/// @brief Method set_transformVoxel2Graph, addr 0x5ec3d04, size 0x8, virtual false, abstract: false, final false
inline void set_transformVoxel2Graph(::Pathfinding::Util::GraphTransform*  value) ;

/// @brief Method union_find_find, addr 0x5ec8a9c, size 0x60, virtual false, abstract: false, final false
static inline int32_t union_find_find(::ArrayW<int32_t>  arr, int32_t  x) ;

/// @brief Method union_find_union, addr 0x5ec8afc, size 0xfc, virtual false, abstract: false, final false
static inline void union_find_union(::ArrayW<int32_t>  arr, int32_t  a, int32_t  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Voxelize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Voxelize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Voxelize(Voxelize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Voxelize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Voxelize(Voxelize const& ) = delete;

/// @brief Field BorderReg offset 0xffffffff size 0x2
static constexpr uint16_t  BorderReg{static_cast<uint16_t>(0x8000u)};

/// @brief Field ContourRegMask offset 0xffffffff size 0x4
static constexpr int32_t  ContourRegMask{static_cast<int32_t>(0xffff)};

/// @brief Field MaxLayers offset 0xffffffff size 0x4
static constexpr int32_t  MaxLayers{static_cast<int32_t>(0xffff)};

/// @brief Field MaxRegions offset 0xffffffff size 0x4
static constexpr int32_t  MaxRegions{static_cast<int32_t>(0x1f4)};

/// @brief Field NotConnected offset 0xffffffff size 0x4
static constexpr uint32_t  NotConnected{static_cast<uint32_t>(0x3fu)};

/// @brief Field RC_AREA_BORDER offset 0xffffffff size 0x4
static constexpr int32_t  RC_AREA_BORDER{static_cast<int32_t>(0x20000)};

/// @brief Field RC_BORDER_VERTEX offset 0xffffffff size 0x4
static constexpr int32_t  RC_BORDER_VERTEX{static_cast<int32_t>(0x10000)};

/// @brief Field RC_CONTOUR_TESS_AREA_EDGES offset 0xffffffff size 0x4
static constexpr int32_t  RC_CONTOUR_TESS_AREA_EDGES{static_cast<int32_t>(0x2)};

/// @brief Field RC_CONTOUR_TESS_TILE_EDGES offset 0xffffffff size 0x4
static constexpr int32_t  RC_CONTOUR_TESS_TILE_EDGES{static_cast<int32_t>(0x4)};

/// @brief Field RC_CONTOUR_TESS_WALL_EDGES offset 0xffffffff size 0x4
static constexpr int32_t  RC_CONTOUR_TESS_WALL_EDGES{static_cast<int32_t>(0x1)};

/// @brief Field UnwalkableArea offset 0xffffffff size 0x4
static constexpr int32_t  UnwalkableArea{static_cast<int32_t>(0x0)};

/// @brief Field VERTEX_BUCKET_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  VERTEX_BUCKET_COUNT{static_cast<int32_t>(0x1000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21437};

/// @brief Field inputMeshes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  ___inputMeshes;

/// @brief Field voxelWalkableClimb, offset: 0x18, size: 0x4, def value: None
 int32_t  ___voxelWalkableClimb;

/// @brief Field voxelWalkableHeight, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ___voxelWalkableHeight;

/// @brief Field cellSize, offset: 0x20, size: 0x4, def value: None
 float_t  ___cellSize;

/// @brief Field cellHeight, offset: 0x24, size: 0x4, def value: None
 float_t  ___cellHeight;

/// @brief Field minRegionSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___minRegionSize;

/// @brief Field borderSize, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___borderSize;

/// @brief Field maxEdgeLength, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxEdgeLength;

/// @brief Field maxSlope, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxSlope;

/// @brief Field relevantGraphSurfaceMode, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  ___relevantGraphSurfaceMode;

/// @brief Field forcedBounds, offset: 0x3c, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___forcedBounds;

/// @brief Field voxelArea, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::Voxels::VoxelArea*  ___voxelArea;

/// @brief Field countourSet, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::Voxels::VoxelContourSet*  ___countourSet;

/// @brief Field transform, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::Util::GraphTransform*  ___transform;

/// [CompilerGenerated]
/// @brief Field <transformVoxel2Graph>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Pathfinding::Util::GraphTransform*  ____transformVoxel2Graph_k__BackingField;

/// @brief Field width, offset: 0x78, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field depth, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___depth;

/// @brief Field voxelOffset, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___voxelOffset;

/// @brief Field cellScale, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cellScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___inputMeshes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___voxelWalkableClimb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___voxelWalkableHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___cellSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___cellHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___minRegionSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___borderSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___maxEdgeLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___maxSlope) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___relevantGraphSurfaceMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___forcedBounds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___voxelArea) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___countourSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___transform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ____transformVoxel2Graph_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___width) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___depth) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___voxelOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Voxelize, ___cellScale) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::Voxelize) == 0x98, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
