#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__NavmeshTile_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshBase)
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Util {
class GraphGizmoHelper;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding {
struct Connection;
}
namespace Pathfinding {
struct GraphHitInfo;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class INavmeshHolder;
}
namespace Pathfinding {
class INavmesh;
}
namespace Pathfinding {
class IRaycastableGraph;
}
namespace Pathfinding {
class ITransformedGraph;
}
namespace Pathfinding {
struct Int2;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
struct IntRect;
}
namespace Pathfinding {
class MeshNode;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace Pathfinding {
class NavmeshBase___c;
}
namespace Pathfinding {
class NavmeshBase___c__DisplayClass84_0;
}
namespace Pathfinding {
class NavmeshBase___c__DisplayClass84_1;
}
namespace Pathfinding {
class NavmeshTile;
}
namespace Pathfinding {
class NavmeshUpdates_NavmeshUpdateSettings;
}
namespace Pathfinding {
class TriangleMeshNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class NavmeshBase;
}
namespace Pathfinding {
class NavmeshBase___c;
}
namespace Pathfinding {
class NavmeshBase___c__DisplayClass84_0;
}
namespace Pathfinding {
class NavmeshBase___c__DisplayClass84_1;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshBase*);
MARK_REF_T(::Pathfinding::NavmeshBase___c*);
MARK_REF_T(::Pathfinding::NavmeshBase___c__DisplayClass84_0*);
MARK_REF_T(::Pathfinding::NavmeshBase___c__DisplayClass84_1*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshBase*, "Pathfinding", "NavmeshBase");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshBase___c*, "Pathfinding", "NavmeshBase/<>c");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshBase___c__DisplayClass84_0*, "Pathfinding", "NavmeshBase/<>c__DisplayClass84_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshBase___c__DisplayClass84_1*, "Pathfinding", "NavmeshBase/<>c__DisplayClass84_1");
// Dependencies Pathfinding.NavGraph, Pathfinding.NavmeshTile, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshBase
class CORDL_TYPE NavmeshBase : public ::Pathfinding::NavGraph {
public:
// Declarations
using __c = ::Pathfinding::NavmeshBase___c;

using __c__DisplayClass84_0 = ::Pathfinding::NavmeshBase___c__DisplayClass84_0;

using __c__DisplayClass84_1 = ::Pathfinding::NavmeshBase___c__DisplayClass84_1;

/// @brief Field LinecastShapeEdgeLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LinecastShapeEdgeLookup, put=setStaticF_LinecastShapeEdgeLookup)) ::ArrayW<uint8_t>  LinecastShapeEdgeLookup;

 __declspec(property(get=get_MaxTileConnectionEdgeDistance)) float_t  MaxTileConnectionEdgeDistance;

/// @brief Field NNConstraintDistanceXZ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NNConstraintDistanceXZ, put=setStaticF_NNConstraintDistanceXZ)) ::Pathfinding::NNConstraint*  NNConstraintDistanceXZ;

/// @brief Field NNConstraintNoneXZ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NNConstraintNoneXZ, put=setStaticF_NNConstraintNoneXZ)) ::Pathfinding::NNConstraint*  NNConstraintNoneXZ;

/// @brief Field OnRecalculatedTiles, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecalculatedTiles, put=__cordl_internal_set_OnRecalculatedTiles)) ::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>*  OnRecalculatedTiles;

 __declspec(property(get=Pathfinding_ITransformedGraph_get_transform)) ::Pathfinding::Util::GraphTransform*  Pathfinding_ITransformedGraph_transform;

 __declspec(property(get=get_RecalculateNormals)) bool  RecalculateNormals;

 __declspec(property(get=get_TileWorldSizeX)) float_t  TileWorldSizeX;

 __declspec(property(get=get_TileWorldSizeZ)) float_t  TileWorldSizeZ;

/// @brief Field batchNodesToDestroy, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_batchNodesToDestroy, put=__cordl_internal_set_batchNodesToDestroy)) ::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*  batchNodesToDestroy;

/// @brief Field batchTileUpdate, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_batchTileUpdate, put=__cordl_internal_set_batchTileUpdate)) bool  batchTileUpdate;

/// @brief Field batchUpdatedTiles, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_batchUpdatedTiles, put=__cordl_internal_set_batchUpdatedTiles)) ::System::Collections::Generic::List_1<int32_t>*  batchUpdatedTiles;

/// @brief Field enableNavmeshCutting, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableNavmeshCutting, put=__cordl_internal_set_enableNavmeshCutting)) bool  enableNavmeshCutting;

/// @brief Field forcedBoundsSize, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_forcedBoundsSize, put=__cordl_internal_set_forcedBoundsSize)) ::UnityEngine::Vector3  forcedBoundsSize;

/// @brief Field navmeshUpdateData, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_navmeshUpdateData, put=__cordl_internal_set_navmeshUpdateData)) ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*  navmeshUpdateData;

/// @brief Field nearestSearchOnlyXZ, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_nearestSearchOnlyXZ, put=__cordl_internal_set_nearestSearchOnlyXZ)) bool  nearestSearchOnlyXZ;

/// @brief Field nodeRecyclingHashBuffer, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeRecyclingHashBuffer, put=__cordl_internal_set_nodeRecyclingHashBuffer)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  nodeRecyclingHashBuffer;

/// @brief Field showMeshOutline, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_showMeshOutline, put=__cordl_internal_set_showMeshOutline)) bool  showMeshOutline;

/// @brief Field showMeshSurface, offset 0xde, size 0x1 
 __declspec(property(get=__cordl_internal_get_showMeshSurface, put=__cordl_internal_set_showMeshSurface)) bool  showMeshSurface;

/// @brief Field showNodeConnections, offset 0xdd, size 0x1 
 __declspec(property(get=__cordl_internal_get_showNodeConnections, put=__cordl_internal_set_showNodeConnections)) bool  showNodeConnections;

/// @brief Field tileXCount, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileXCount, put=__cordl_internal_set_tileXCount)) int32_t  tileXCount;

/// @brief Field tileZCount, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileZCount, put=__cordl_internal_set_tileZCount)) int32_t  tileZCount;

/// @brief Field tiles, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tiles, put=__cordl_internal_set_tiles)) ::ArrayW<::Pathfinding::NavmeshTile*>  tiles;

/// @brief Field transform, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::Pathfinding::Util::GraphTransform*  transform;

/// @brief Convert operator to "::Pathfinding::INavmesh"
constexpr operator  ::Pathfinding::INavmesh*() noexcept;

/// @brief Convert operator to "::Pathfinding::INavmeshHolder"
constexpr operator  ::Pathfinding::INavmeshHolder*() noexcept;

/// @brief Convert operator to "::Pathfinding::IRaycastableGraph"
constexpr operator  ::Pathfinding::IRaycastableGraph*() noexcept;

/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr operator  ::Pathfinding::ITransformedGraph*() noexcept;

/// @brief Method CalculateTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Util::GraphTransform* CalculateTransform() ;

/// @brief Method ClearTile, addr 0x5e80214, size 0x1cc, virtual false, abstract: false, final false
inline void ClearTile(int32_t  x, int32_t  z) ;

/// @brief Method ConnectTileWithNeighbours, addr 0x5e7e020, size 0x148, virtual false, abstract: false, final false
inline void ConnectTileWithNeighbours(::Pathfinding::NavmeshTile*  tile, bool  onlyUnflagged) ;

/// @brief Method ConnectTiles, addr 0x5e7e168, size 0xc48, virtual false, abstract: false, final false
inline void ConnectTiles(::Pathfinding::NavmeshTile*  tile1, ::Pathfinding::NavmeshTile*  tile2) ;

/// @brief Method CreateNavmeshOutlineVisualization, addr 0x5e837b8, size 0x3b4, virtual false, abstract: false, final false
static inline void CreateNavmeshOutlineVisualization(::ArrayW<::Pathfinding::NavmeshTile*>  tiles, int32_t  startTile, int32_t  endTile, ::Pathfinding::Util::GraphGizmoHelper*  helper) ;

/// @brief Method CreateNavmeshSurfaceVisualization, addr 0x5e83370, size 0x448, virtual false, abstract: false, final false
inline void CreateNavmeshSurfaceVisualization(::ArrayW<::Pathfinding::NavmeshTile*>  tiles, int32_t  startTile, int32_t  endTile, ::Pathfinding::Util::GraphGizmoHelper*  helper) ;

/// @brief Method CreateNodeConnections, addr 0x5e7f6f8, size 0x568, virtual false, abstract: false, final false
static inline void CreateNodeConnections(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes) ;

/// @brief Method CreateNodes, addr 0x5e81624, size 0x360, virtual false, abstract: false, final false
inline void CreateNodes(::ArrayW<::Pathfinding::TriangleMeshNode*>  buffer, ::ArrayW<int32_t>  tris, int32_t  tileIndex, uint32_t  graphIndex) ;

/// @brief Method DeserializeExtraInfo, addr 0x5e83f28, size 0x7ec, virtual true, abstract: false, final false
inline void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DestroyNodes, addr 0x5e7fcc0, size 0x194, virtual false, abstract: false, final false
inline void DestroyNodes(::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*  nodes) ;

/// @brief Method EndBatchTileUpdate, addr 0x5e7fecc, size 0x348, virtual false, abstract: false, final false
inline void EndBatchTileUpdate() ;

/// @brief Method FillWithEmptyTiles, addr 0x5e7f628, size 0xd0, virtual false, abstract: false, final false
inline void FillWithEmptyTiles() ;

/// @brief Method GetNearest, addr 0x5e7f0f4, size 0xe4, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method GetNearestForce, addr 0x5e7f1d8, size 0x3a0, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNodes, addr 0x5e7d68c, size 0xd0, virtual true, abstract: false, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetTile, addr 0x5e7ce98, size 0x38, virtual false, abstract: false, final false
inline ::Pathfinding::NavmeshTile* GetTile(int32_t  x, int32_t  z) ;

/// @brief Method GetTileBounds, addr 0x5e7cf8c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetTileBounds(::Pathfinding::IntRect  rect) ;

/// @brief Method GetTileBounds, addr 0x5e7d00c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetTileBounds(int32_t  x, int32_t  z, int32_t  width, int32_t  depth) ;

/// @brief Method GetTileBoundsInGraphSpace, addr 0x5e7d174, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetTileBoundsInGraphSpace(::Pathfinding::IntRect  rect) ;

/// @brief Method GetTileBoundsInGraphSpace, addr 0x5e7d074, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetTileBoundsInGraphSpace(int32_t  x, int32_t  z, int32_t  width, int32_t  depth) ;

/// @brief Method GetTileCoordinates, addr 0x5e7d1f4, size 0xa4, virtual false, abstract: false, final false
inline ::Pathfinding::Int2 GetTileCoordinates(::UnityEngine::Vector3  position) ;

/// @brief Method GetTileCoordinates, addr 0x5e7cf68, size 0x1c, virtual true, abstract: false, final true
inline void GetTileCoordinates(int32_t  tileIndex, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z) ;

/// @brief Method GetTileIndex, addr 0x5e7cf58, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetTileIndex(int32_t  index) ;

/// @brief Method GetTiles, addr 0x5e7cf84, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Pathfinding::NavmeshTile*> GetTiles() ;

/// @brief Method GetTouchingTiles, addr 0x5e7d75c, size 0x29c, virtual false, abstract: false, final false
inline ::Pathfinding::IntRect GetTouchingTiles(::UnityEngine::Bounds  bounds, float_t  margin) ;

/// @brief Method GetTouchingTilesInGraphSpace, addr 0x5e7d9f8, size 0x210, virtual false, abstract: false, final false
inline ::Pathfinding::IntRect GetTouchingTilesInGraphSpace(::UnityEngine::Rect  rect) ;

/// @brief Method GetTouchingTilesRound, addr 0x5e7dc08, size 0x418, virtual false, abstract: false, final false
inline ::Pathfinding::IntRect GetTouchingTilesRound(::UnityEngine::Bounds  bounds) ;

/// @brief Method GetVertex, addr 0x5e7ced0, size 0x44, virtual true, abstract: false, final true
inline ::Pathfinding::Int3 GetVertex(int32_t  index) ;

/// @brief Method GetVertexArrayIndex, addr 0x5e7cf60, size 0x8, virtual true, abstract: false, final true
inline int32_t GetVertexArrayIndex(int32_t  index) ;

/// @brief Method GetVertexInGraphSpace, addr 0x5e7cf14, size 0x44, virtual true, abstract: false, final true
inline ::Pathfinding::Int3 GetVertexInGraphSpace(int32_t  index) ;

/// @brief Method Linecast, addr 0x5e829d4, size 0xbc, virtual false, abstract: false, final false
static inline bool Linecast(::Pathfinding::NavmeshBase*  graph, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit) ;

/// @brief Method Linecast, addr 0x5e81d3c, size 0xb08, virtual false, abstract: false, final false
static inline bool Linecast(::Pathfinding::NavmeshBase*  graph, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

/// @brief Method Linecast, addr 0x5e81ba0, size 0x8, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end) ;

/// @brief Method Linecast, addr 0x5e81ba8, size 0xd8, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method Linecast, addr 0x5e81c80, size 0xbc, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit) ;

/// @brief Method Linecast, addr 0x5e82844, size 0xc8, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace) ;

/// @brief Method Linecast, addr 0x5e8290c, size 0xc8, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

/// @brief Method NewEmptyTile, addr 0x5e7d518, size 0x174, virtual false, abstract: false, final false
inline ::Pathfinding::NavmeshTile* NewEmptyTile(int32_t  x, int32_t  z) ;

static inline ::Pathfinding::NavmeshBase* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e7d298, size 0xf0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x5e82d30, size 0x640, virtual true, abstract: false, final false
inline void OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos, bool  drawNodes) ;

/// @brief Method Pathfinding.ITransformedGraph.get_transform, addr 0x5e7ce90, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::Util::GraphTransform* Pathfinding_ITransformedGraph_get_transform() ;

/// @brief Method PointOnNavmesh, addr 0x5e7f578, size 0xb0, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* PointOnNavmesh(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method PostDeserialization, addr 0x5e84714, size 0x434, virtual true, abstract: false, final false
inline void PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method PrepareNodeRecycling, addr 0x5e803e0, size 0x6a4, virtual false, abstract: false, final false
inline void PrepareNodeRecycling(int32_t  x, int32_t  z, ::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::ArrayW<::Pathfinding::TriangleMeshNode*>  recycledNodeBuffer) ;

/// @brief Method RelocateNodes, addr 0x5e7d388, size 0xa4, virtual true, abstract: false, final false
inline void RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix) ;

/// @brief Method RelocateNodes, addr 0x5e7d42c, size 0xec, virtual false, abstract: false, final false
inline void RelocateNodes(::Pathfinding::Util::GraphTransform*  newTransform) ;

/// @brief Method RemoveConnectionsFromTile, addr 0x5e7edb0, size 0x1e0, virtual false, abstract: false, final false
inline void RemoveConnectionsFromTile(::Pathfinding::NavmeshTile*  tile) ;

/// @brief Method RemoveConnectionsFromTo, addr 0x5e7ef90, size 0x164, virtual false, abstract: false, final false
inline void RemoveConnectionsFromTo(::Pathfinding::NavmeshTile*  a, ::Pathfinding::NavmeshTile*  b) ;

/// @brief Method ReplaceTile, addr 0x5e80a84, size 0xba0, virtual false, abstract: false, final false
inline void ReplaceTile(int32_t  x, int32_t  z, ::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris) ;

/// @brief Method SerializeExtraInfo, addr 0x5e83b6c, size 0x3bc, virtual true, abstract: false, final false
inline void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method StartBatchTileUpdate, addr 0x5e7fc60, size 0x60, virtual false, abstract: false, final false
inline void StartBatchTileUpdate() ;

/// @brief Method TryConnect, addr 0x5e7fe54, size 0x78, virtual false, abstract: false, final false
inline void TryConnect(int32_t  tileIdx1, int32_t  tileIdx2) ;

constexpr ::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>* const& __cordl_internal_get_OnRecalculatedTiles() const;

constexpr ::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>*& __cordl_internal_get_OnRecalculatedTiles() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>* const& __cordl_internal_get_batchNodesToDestroy() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*& __cordl_internal_get_batchNodesToDestroy() ;

constexpr bool const& __cordl_internal_get_batchTileUpdate() const;

constexpr bool& __cordl_internal_get_batchTileUpdate() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_batchUpdatedTiles() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_batchUpdatedTiles() ;

constexpr bool const& __cordl_internal_get_enableNavmeshCutting() const;

constexpr bool& __cordl_internal_get_enableNavmeshCutting() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_forcedBoundsSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_forcedBoundsSize() ;

constexpr ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings* const& __cordl_internal_get_navmeshUpdateData() const;

constexpr ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*& __cordl_internal_get_navmeshUpdateData() ;

constexpr bool const& __cordl_internal_get_nearestSearchOnlyXZ() const;

constexpr bool& __cordl_internal_get_nearestSearchOnlyXZ() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_nodeRecyclingHashBuffer() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_nodeRecyclingHashBuffer() ;

constexpr bool const& __cordl_internal_get_showMeshOutline() const;

constexpr bool& __cordl_internal_get_showMeshOutline() ;

constexpr bool const& __cordl_internal_get_showMeshSurface() const;

constexpr bool& __cordl_internal_get_showMeshSurface() ;

constexpr bool const& __cordl_internal_get_showNodeConnections() const;

constexpr bool& __cordl_internal_get_showNodeConnections() ;

constexpr int32_t const& __cordl_internal_get_tileXCount() const;

constexpr int32_t& __cordl_internal_get_tileXCount() ;

constexpr int32_t const& __cordl_internal_get_tileZCount() const;

constexpr int32_t& __cordl_internal_get_tileZCount() ;

constexpr ::ArrayW<::Pathfinding::NavmeshTile*> const& __cordl_internal_get_tiles() const;

constexpr ::ArrayW<::Pathfinding::NavmeshTile*>& __cordl_internal_get_tiles() ;

constexpr ::Pathfinding::Util::GraphTransform* const& __cordl_internal_get_transform() const;

constexpr ::Pathfinding::Util::GraphTransform*& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_OnRecalculatedTiles(::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>*  value) ;

constexpr void __cordl_internal_set_batchNodesToDestroy(::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*  value) ;

constexpr void __cordl_internal_set_batchTileUpdate(bool  value) ;

constexpr void __cordl_internal_set_batchUpdatedTiles(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_enableNavmeshCutting(bool  value) ;

constexpr void __cordl_internal_set_forcedBoundsSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_navmeshUpdateData(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*  value) ;

constexpr void __cordl_internal_set_nearestSearchOnlyXZ(bool  value) ;

constexpr void __cordl_internal_set_nodeRecyclingHashBuffer(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_showMeshOutline(bool  value) ;

constexpr void __cordl_internal_set_showMeshSurface(bool  value) ;

constexpr void __cordl_internal_set_showNodeConnections(bool  value) ;

constexpr void __cordl_internal_set_tileXCount(int32_t  value) ;

constexpr void __cordl_internal_set_tileZCount(int32_t  value) ;

constexpr void __cordl_internal_set_tiles(::ArrayW<::Pathfinding::NavmeshTile*>  value) ;

constexpr void __cordl_internal_set_transform(::Pathfinding::Util::GraphTransform*  value) ;

/// @brief Method .ctor, addr 0x5e81984, size 0x21c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_LinecastShapeEdgeLookup() ;

static inline ::Pathfinding::NNConstraint* getStaticF_NNConstraintDistanceXZ() ;

static inline ::Pathfinding::NNConstraint* getStaticF_NNConstraintNoneXZ() ;

/// @brief Method get_MaxTileConnectionEdgeDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_MaxTileConnectionEdgeDistance() ;

/// @brief Method get_RecalculateNormals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_RecalculateNormals() ;

/// @brief Method get_TileWorldSizeX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_TileWorldSizeX() ;

/// @brief Method get_TileWorldSizeZ, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_TileWorldSizeZ() ;

/// @brief Convert to "::Pathfinding::INavmesh"
constexpr ::Pathfinding::INavmesh* i___Pathfinding__INavmesh() noexcept;

/// @brief Convert to "::Pathfinding::INavmeshHolder"
constexpr ::Pathfinding::INavmeshHolder* i___Pathfinding__INavmeshHolder() noexcept;

/// @brief Convert to "::Pathfinding::IRaycastableGraph"
constexpr ::Pathfinding::IRaycastableGraph* i___Pathfinding__IRaycastableGraph() noexcept;

/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* i___Pathfinding__ITransformedGraph() noexcept;

static inline void setStaticF_LinecastShapeEdgeLookup(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_NNConstraintDistanceXZ(::Pathfinding::NNConstraint*  value) ;

static inline void setStaticF_NNConstraintNoneXZ(::Pathfinding::NNConstraint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshBase(NavmeshBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshBase(NavmeshBase const& ) = delete;

/// @brief Field TileIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  TileIndexMask{static_cast<int32_t>(0x7ffff)};

/// @brief Field TileIndexOffset offset 0xffffffff size 0x4
static constexpr int32_t  TileIndexOffset{static_cast<int32_t>(0xc)};

/// @brief Field VertexIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  VertexIndexMask{static_cast<int32_t>(0xfff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21317};

/// [JsonMember]
/// @brief Field forcedBoundsSize, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___forcedBoundsSize;

/// [JsonMember]
/// @brief Field showMeshOutline, offset: 0xdc, size: 0x1, def value: None
 bool  ___showMeshOutline;

/// [JsonMember]
/// @brief Field showNodeConnections, offset: 0xdd, size: 0x1, def value: None
 bool  ___showNodeConnections;

/// [JsonMember]
/// @brief Field showMeshSurface, offset: 0xde, size: 0x1, def value: None
 bool  ___showMeshSurface;

/// @brief Field tileXCount, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___tileXCount;

/// @brief Field tileZCount, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___tileZCount;

/// @brief Field tiles, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::NavmeshTile*>  ___tiles;

/// [JsonMember]
/// @brief Field nearestSearchOnlyXZ, offset: 0xf0, size: 0x1, def value: None
 bool  ___nearestSearchOnlyXZ;

/// [JsonMember]
/// @brief Field enableNavmeshCutting, offset: 0xf1, size: 0x1, def value: None
 bool  ___enableNavmeshCutting;

/// @brief Field navmeshUpdateData, offset: 0xf8, size: 0x8, def value: None
 ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*  ___navmeshUpdateData;

/// @brief Field batchTileUpdate, offset: 0x100, size: 0x1, def value: None
 bool  ___batchTileUpdate;

/// @brief Field batchUpdatedTiles, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___batchUpdatedTiles;

/// @brief Field batchNodesToDestroy, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*  ___batchNodesToDestroy;

/// @brief Field transform, offset: 0x118, size: 0x8, def value: None
 ::Pathfinding::Util::GraphTransform*  ___transform;

/// @brief Field OnRecalculatedTiles, offset: 0x120, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>*  ___OnRecalculatedTiles;

/// @brief Field nodeRecyclingHashBuffer, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___nodeRecyclingHashBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshBase, ___forcedBoundsSize) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___showMeshOutline) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___showNodeConnections) == 0xdd, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___showMeshSurface) == 0xde, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___tileXCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___tileZCount) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___tiles) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___nearestSearchOnlyXZ) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___enableNavmeshCutting) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___navmeshUpdateData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___batchTileUpdate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___batchUpdatedTiles) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___batchNodesToDestroy) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___transform) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___OnRecalculatedTiles) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase, ___nodeRecyclingHashBuffer) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshBase) == 0x130, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshBase/<>c__DisplayClass84_1
class CORDL_TYPE NavmeshBase___c__DisplayClass84_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__4, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Func_2<::Pathfinding::Connection,bool>*  __9__4;

/// @brief Field triNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_triNode, put=__cordl_internal_set_triNode)) ::Pathfinding::TriangleMeshNode*  triNode;

static inline ::Pathfinding::NavmeshBase___c__DisplayClass84_1* New_ctor() ;

/// @brief Method <PostDeserialization>b__4, addr 0x5e84f20, size 0x2c, virtual false, abstract: false, final false
inline bool _PostDeserialization_b__4(::Pathfinding::Connection  conn) ;

constexpr ::System::Func_2<::Pathfinding::Connection,bool>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Func_2<::Pathfinding::Connection,bool>*& __cordl_internal_get___9__4() ;

constexpr ::Pathfinding::TriangleMeshNode* const& __cordl_internal_get_triNode() const;

constexpr ::Pathfinding::TriangleMeshNode*& __cordl_internal_get_triNode() ;

constexpr void __cordl_internal_set___9__4(::System::Func_2<::Pathfinding::Connection,bool>*  value) ;

constexpr void __cordl_internal_set_triNode(::Pathfinding::TriangleMeshNode*  value) ;

/// @brief Method .ctor, addr 0x5e84f18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshBase___c__DisplayClass84_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase___c__DisplayClass84_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshBase___c__DisplayClass84_1(NavmeshBase___c__DisplayClass84_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase___c__DisplayClass84_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshBase___c__DisplayClass84_1(NavmeshBase___c__DisplayClass84_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21316};

/// @brief Field triNode, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::TriangleMeshNode*  ___triNode;

/// @brief Field <>9__4, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::Pathfinding::Connection,bool>*  _____9__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshBase___c__DisplayClass84_1, ___triNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshBase___c__DisplayClass84_1, _____9__4) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshBase___c__DisplayClass84_1) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshBase/<>c__DisplayClass84_0
class CORDL_TYPE NavmeshBase___c__DisplayClass84_0 : public ::System::Object {
public:
// Declarations
/// @brief Field conns, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_conns, put=__cordl_internal_set_conns)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  conns;

static inline ::Pathfinding::NavmeshBase___c__DisplayClass84_0* New_ctor() ;

/// @brief Method <PostDeserialization>b__3, addr 0x5e84c40, size 0x2d8, virtual false, abstract: false, final false
inline void _PostDeserialization_b__3(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>* const& __cordl_internal_get_conns() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*& __cordl_internal_get_conns() ;

constexpr void __cordl_internal_set_conns(::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  value) ;

/// @brief Method .ctor, addr 0x5e84c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshBase___c__DisplayClass84_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase___c__DisplayClass84_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshBase___c__DisplayClass84_0(NavmeshBase___c__DisplayClass84_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase___c__DisplayClass84_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshBase___c__DisplayClass84_0(NavmeshBase___c__DisplayClass84_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21315};

/// @brief Field conns, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  ___conns;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshBase___c__DisplayClass84_0, ___conns) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshBase___c__DisplayClass84_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshBase/<>c
class CORDL_TYPE NavmeshBase___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Pathfinding::NavmeshBase___c*  __9;

/// @brief Field <>9__84_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_0, put=setStaticF___9__84_0)) ::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>*  __9__84_0;

/// @brief Field <>9__84_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_1, put=setStaticF___9__84_1)) ::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*  __9__84_1;

/// @brief Field <>9__84_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_2, put=setStaticF___9__84_2)) ::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  __9__84_2;

static inline ::Pathfinding::NavmeshBase___c* New_ctor() ;

/// @brief Method <PostDeserialization>b__84_0, addr 0x5e84bb8, size 0x14, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>* _PostDeserialization_b__84_0(::Pathfinding::NavmeshTile*  s) ;

/// @brief Method <PostDeserialization>b__84_1, addr 0x5e84bcc, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::TriangleMeshNode* _PostDeserialization_b__84_1(::Pathfinding::TriangleMeshNode*  n) ;

/// @brief Method <PostDeserialization>b__84_2, addr 0x5e84bd4, size 0x64, virtual false, abstract: false, final false
inline ::ArrayW<::Pathfinding::Connection> _PostDeserialization_b__84_2(::Pathfinding::TriangleMeshNode*  n) ;

/// @brief Method .ctor, addr 0x5e84bb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::NavmeshBase___c* getStaticF___9() ;

static inline ::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>* getStaticF___9__84_0() ;

static inline ::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>* getStaticF___9__84_1() ;

static inline ::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>* getStaticF___9__84_2() ;

static inline void setStaticF___9(::Pathfinding::NavmeshBase___c*  value) ;

static inline void setStaticF___9__84_0(::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>*  value) ;

static inline void setStaticF___9__84_1(::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*  value) ;

static inline void setStaticF___9__84_2(::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshBase___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshBase___c(NavmeshBase___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshBase___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshBase___c(NavmeshBase___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::NavmeshBase___c) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
