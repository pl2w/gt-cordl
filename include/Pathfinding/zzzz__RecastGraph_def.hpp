#pragma once
// IWYU pragma private; include "Pathfinding/RecastGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Voxels/zzzz__Voxelize_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "Pathfinding/zzzz__RecastGraph_RelevantGraphSurfaceMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecastGraph)
namespace GlobalNamespace {
struct RecastGraph_RelevantGraphSurfaceMode;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding::Voxels {
class RasterizationMesh;
}
namespace Pathfinding::Voxels {
struct VoxelMesh;
}
namespace Pathfinding::Voxels {
class Voxelize;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
struct GraphUpdateThreading;
}
namespace Pathfinding {
class IUpdatableGraph;
}
namespace Pathfinding {
struct Int2;
}
namespace Pathfinding {
class NavmeshTile;
}
namespace Pathfinding {
struct Progress;
}
namespace Pathfinding {
class RecastGraph__ScanAllTiles_d__50;
}
namespace Pathfinding {
class RecastGraph__ScanInternal_d__46;
}
namespace Pathfinding {
class RecastGraph___c__DisplayClass50_0;
}
namespace Pathfinding {
class RecastGraph___c__DisplayClass50_1;
}
namespace Pathfinding {
class TriangleMeshNode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RecastGraph;
}
namespace Pathfinding {
class RecastGraph__ScanAllTiles_d__50;
}
namespace Pathfinding {
class RecastGraph__ScanInternal_d__46;
}
namespace Pathfinding {
class RecastGraph___c__DisplayClass50_0;
}
namespace Pathfinding {
class RecastGraph___c__DisplayClass50_1;
}
// Write type traits
MARK_REF_T(::Pathfinding::RecastGraph*);
MARK_REF_T(::Pathfinding::RecastGraph__ScanAllTiles_d__50*);
MARK_REF_T(::Pathfinding::RecastGraph__ScanInternal_d__46*);
MARK_REF_T(::Pathfinding::RecastGraph___c__DisplayClass50_0*);
MARK_REF_T(::Pathfinding::RecastGraph___c__DisplayClass50_1*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastGraph*, "Pathfinding", "RecastGraph");
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastGraph__ScanAllTiles_d__50*, "Pathfinding", "RecastGraph/<ScanAllTiles>d__50");
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastGraph__ScanInternal_d__46*, "Pathfinding", "RecastGraph/<ScanInternal>d__46");
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastGraph___c__DisplayClass50_0*, "Pathfinding", "RecastGraph/<>c__DisplayClass50_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastGraph___c__DisplayClass50_1*, "Pathfinding", "RecastGraph/<>c__DisplayClass50_1");
// [JsonOptIn]
// [Preserve]
// Dependencies Pathfinding.NavmeshBase, Pathfinding.RecastGraph::RelevantGraphSurfaceMode, UnityEngine.LayerMask, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastGraph
class CORDL_TYPE RecastGraph : public ::Pathfinding::NavmeshBase {
public:
// Declarations
using RelevantGraphSurfaceMode = ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode;

using _ScanAllTiles_d__50 = ::Pathfinding::RecastGraph__ScanAllTiles_d__50;

using _ScanInternal_d__46 = ::Pathfinding::RecastGraph__ScanInternal_d__46;

using __c__DisplayClass50_0 = ::Pathfinding::RecastGraph___c__DisplayClass50_0;

using __c__DisplayClass50_1 = ::Pathfinding::RecastGraph___c__DisplayClass50_1;

 __declspec(property(get=get_CellHeight)) float_t  CellHeight;

 __declspec(property(get=get_CharacterRadiusInVoxels)) int32_t  CharacterRadiusInVoxels;

 __declspec(property(get=get_MaxTileConnectionEdgeDistance)) float_t  MaxTileConnectionEdgeDistance;

 __declspec(property(get=get_RecalculateNormals)) bool  RecalculateNormals;

 __declspec(property(get=get_TileBorderSizeInVoxels)) int32_t  TileBorderSizeInVoxels;

 __declspec(property(get=get_TileBorderSizeInWorldUnits)) float_t  TileBorderSizeInWorldUnits;

 __declspec(property(get=get_TileWorldSizeX)) float_t  TileWorldSizeX;

 __declspec(property(get=get_TileWorldSizeZ)) float_t  TileWorldSizeZ;

/// @brief Field cellSize, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_cellSize, put=__cordl_internal_set_cellSize)) float_t  cellSize;

/// @brief Field characterRadius, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_characterRadius, put=__cordl_internal_set_characterRadius)) float_t  characterRadius;

/// @brief Field colliderRasterizeDetail, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_colliderRasterizeDetail, put=__cordl_internal_set_colliderRasterizeDetail)) float_t  colliderRasterizeDetail;

/// @brief Field contourMaxError, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_contourMaxError, put=__cordl_internal_set_contourMaxError)) float_t  contourMaxError;

/// @brief Field editorTileSize, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_editorTileSize, put=__cordl_internal_set_editorTileSize)) int32_t  editorTileSize;

/// @brief [Obsolete("Obsolete since this is not accurate when the graph is rotated (rotation was not supported when this property was created)")]
 __declspec(property(get=get_forcedBounds)) ::UnityEngine::Bounds  forcedBounds;

/// @brief Field forcedBoundsCenter, offset 0x188, size 0xc 
 __declspec(property(get=__cordl_internal_get_forcedBoundsCenter, put=__cordl_internal_set_forcedBoundsCenter)) ::UnityEngine::Vector3  forcedBoundsCenter;

/// @brief Field globalVox, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalVox, put=__cordl_internal_set_globalVox)) ::Pathfinding::Voxels::Voxelize*  globalVox;

/// @brief Field mask, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field maxEdgeLength, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEdgeLength, put=__cordl_internal_set_maxEdgeLength)) float_t  maxEdgeLength;

/// @brief Field maxSlope, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSlope, put=__cordl_internal_set_maxSlope)) float_t  maxSlope;

/// @brief Field minRegionSize, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRegionSize, put=__cordl_internal_set_minRegionSize)) float_t  minRegionSize;

/// @brief Field rasterizeColliders, offset 0x164, size 0x1 
 __declspec(property(get=__cordl_internal_get_rasterizeColliders, put=__cordl_internal_set_rasterizeColliders)) bool  rasterizeColliders;

/// @brief Field rasterizeMeshes, offset 0x165, size 0x1 
 __declspec(property(get=__cordl_internal_get_rasterizeMeshes, put=__cordl_internal_set_rasterizeMeshes)) bool  rasterizeMeshes;

/// @brief Field rasterizeTerrain, offset 0x166, size 0x1 
 __declspec(property(get=__cordl_internal_get_rasterizeTerrain, put=__cordl_internal_set_rasterizeTerrain)) bool  rasterizeTerrain;

/// @brief Field rasterizeTrees, offset 0x167, size 0x1 
 __declspec(property(get=__cordl_internal_get_rasterizeTrees, put=__cordl_internal_set_rasterizeTrees)) bool  rasterizeTrees;

/// @brief Field relevantGraphSurfaceMode, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_relevantGraphSurfaceMode, put=__cordl_internal_set_relevantGraphSurfaceMode)) ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  relevantGraphSurfaceMode;

/// @brief Field rotation, offset 0x17c, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Vector3  rotation;

/// @brief Field scanEmptyGraph, offset 0x15d, size 0x1 
 __declspec(property(get=__cordl_internal_get_scanEmptyGraph, put=__cordl_internal_set_scanEmptyGraph)) bool  scanEmptyGraph;

/// @brief Field stagingTiles, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stagingTiles, put=__cordl_internal_set_stagingTiles)) ::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>*  stagingTiles;

/// @brief Field tagMask, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagMask, put=__cordl_internal_set_tagMask)) ::System::Collections::Generic::List_1<::StringW>*  tagMask;

/// @brief Field terrainSampleSize, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainSampleSize, put=__cordl_internal_set_terrainSampleSize)) int32_t  terrainSampleSize;

/// @brief Field tileSizeX, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileSizeX, put=__cordl_internal_set_tileSizeX)) int32_t  tileSizeX;

/// @brief Field tileSizeZ, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileSizeZ, put=__cordl_internal_set_tileSizeZ)) int32_t  tileSizeZ;

/// @brief Field useTiles, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTiles, put=__cordl_internal_set_useTiles)) bool  useTiles;

/// @brief Field walkableClimb, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_walkableClimb, put=__cordl_internal_set_walkableClimb)) float_t  walkableClimb;

/// @brief Field walkableHeight, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_walkableHeight, put=__cordl_internal_set_walkableHeight)) float_t  walkableHeight;

/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr operator  ::Pathfinding::IUpdatableGraph*() noexcept;

/// @brief Method BuildTileMesh, addr 0x5e908e0, size 0x354, virtual false, abstract: false, final false
inline ::Pathfinding::NavmeshTile* BuildTileMesh(::Pathfinding::Voxels::Voxelize*  vox, int32_t  x, int32_t  z, int32_t  threadIndex) ;

/// @brief Method CalculateTileBoundsWithBorder, addr 0x5e9176c, size 0x138, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateTileBoundsWithBorder(int32_t  x, int32_t  z) ;

/// @brief Method CalculateTransform, addr 0x5e90f24, size 0x228, virtual true, abstract: false, final false
inline ::Pathfinding::Util::GraphTransform* CalculateTransform() ;

/// [Obsolete("Use node.ClosestPointOnNode instead")]
/// @brief Method ClosestPointOnNode, addr 0x5e8fe5c, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnNode(::Pathfinding::TriangleMeshNode*  node, ::UnityEngine::Vector3  pos) ;

/// @brief Method CollectMeshes, addr 0x5e900f4, size 0x204, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* CollectMeshes(::UnityEngine::Bounds  bounds) ;

/// [Obsolete("Use node.ContainsPoint instead")]
/// @brief Method ContainsPoint, addr 0x5e8fe80, size 0x3c, virtual false, abstract: false, final false
inline bool ContainsPoint(::Pathfinding::TriangleMeshNode*  node, ::UnityEngine::Vector3  pos) ;

/// @brief Method CreateTile, addr 0x5e918a4, size 0x558, virtual false, abstract: false, final false
inline ::Pathfinding::NavmeshTile* CreateTile(::Pathfinding::Voxels::Voxelize*  vox, ::Pathfinding::Voxels::VoxelMesh  mesh, int32_t  x, int32_t  z, int32_t  threadIndex) ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x5e92170, size 0x464, virtual true, abstract: false, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method InitializeTileInfo, addr 0x5e9114c, size 0x1ec, virtual false, abstract: false, final false
inline void InitializeTileInfo() ;

static inline ::Pathfinding::RecastGraph* New_ctor() ;

/// @brief Method Pathfinding.IUpdatableGraph.CanUpdateAsync, addr 0x5e902f8, size 0x20, virtual true, abstract: false, final true
inline ::Pathfinding::GraphUpdateThreading Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateArea, addr 0x5e9053c, size 0x3a4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  guo) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaInit, addr 0x5e90318, size 0x1e0, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaPost, addr 0x5e90c34, size 0x23c, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  guo) ;

/// @brief Method PutMeshesIntoTileBuckets, addr 0x5e91338, size 0x2ec, virtual false, abstract: false, final false
inline ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*> PutMeshesIntoTileBuckets(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  meshes) ;

/// [IteratorStateMachine(typeof(Pathfinding.RecastGraph::<ScanAllTiles>d__50))]
/// @brief Method ScanAllTiles, addr 0x5e91624, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanAllTiles() ;

/// [IteratorStateMachine(typeof(Pathfinding.RecastGraph::<ScanInternal>d__46))]
/// @brief Method ScanInternal, addr 0x5e90e70, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method SnapForceBoundsToScene, addr 0x5e8febc, size 0x238, virtual false, abstract: false, final false
inline void SnapForceBoundsToScene() ;

constexpr float_t const& __cordl_internal_get_cellSize() const;

constexpr float_t& __cordl_internal_get_cellSize() ;

constexpr float_t const& __cordl_internal_get_characterRadius() const;

constexpr float_t& __cordl_internal_get_characterRadius() ;

constexpr float_t const& __cordl_internal_get_colliderRasterizeDetail() const;

constexpr float_t& __cordl_internal_get_colliderRasterizeDetail() ;

constexpr float_t const& __cordl_internal_get_contourMaxError() const;

constexpr float_t& __cordl_internal_get_contourMaxError() ;

constexpr int32_t const& __cordl_internal_get_editorTileSize() const;

constexpr int32_t& __cordl_internal_get_editorTileSize() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_forcedBoundsCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_forcedBoundsCenter() ;

constexpr ::Pathfinding::Voxels::Voxelize* const& __cordl_internal_get_globalVox() const;

constexpr ::Pathfinding::Voxels::Voxelize*& __cordl_internal_get_globalVox() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr float_t const& __cordl_internal_get_maxEdgeLength() const;

constexpr float_t& __cordl_internal_get_maxEdgeLength() ;

constexpr float_t const& __cordl_internal_get_maxSlope() const;

constexpr float_t& __cordl_internal_get_maxSlope() ;

constexpr float_t const& __cordl_internal_get_minRegionSize() const;

constexpr float_t& __cordl_internal_get_minRegionSize() ;

constexpr bool const& __cordl_internal_get_rasterizeColliders() const;

constexpr bool& __cordl_internal_get_rasterizeColliders() ;

constexpr bool const& __cordl_internal_get_rasterizeMeshes() const;

constexpr bool& __cordl_internal_get_rasterizeMeshes() ;

constexpr bool const& __cordl_internal_get_rasterizeTerrain() const;

constexpr bool& __cordl_internal_get_rasterizeTerrain() ;

constexpr bool const& __cordl_internal_get_rasterizeTrees() const;

constexpr bool& __cordl_internal_get_rasterizeTrees() ;

constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const& __cordl_internal_get_relevantGraphSurfaceMode() const;

constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode& __cordl_internal_get_relevantGraphSurfaceMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotation() ;

constexpr bool const& __cordl_internal_get_scanEmptyGraph() const;

constexpr bool& __cordl_internal_get_scanEmptyGraph() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>* const& __cordl_internal_get_stagingTiles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>*& __cordl_internal_get_stagingTiles() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_tagMask() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_tagMask() ;

constexpr int32_t const& __cordl_internal_get_terrainSampleSize() const;

constexpr int32_t& __cordl_internal_get_terrainSampleSize() ;

constexpr int32_t const& __cordl_internal_get_tileSizeX() const;

constexpr int32_t& __cordl_internal_get_tileSizeX() ;

constexpr int32_t const& __cordl_internal_get_tileSizeZ() const;

constexpr int32_t& __cordl_internal_get_tileSizeZ() ;

constexpr bool const& __cordl_internal_get_useTiles() const;

constexpr bool& __cordl_internal_get_useTiles() ;

constexpr float_t const& __cordl_internal_get_walkableClimb() const;

constexpr float_t& __cordl_internal_get_walkableClimb() ;

constexpr float_t const& __cordl_internal_get_walkableHeight() const;

constexpr float_t& __cordl_internal_get_walkableHeight() ;

constexpr void __cordl_internal_set_cellSize(float_t  value) ;

constexpr void __cordl_internal_set_characterRadius(float_t  value) ;

constexpr void __cordl_internal_set_colliderRasterizeDetail(float_t  value) ;

constexpr void __cordl_internal_set_contourMaxError(float_t  value) ;

constexpr void __cordl_internal_set_editorTileSize(int32_t  value) ;

constexpr void __cordl_internal_set_forcedBoundsCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_globalVox(::Pathfinding::Voxels::Voxelize*  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxEdgeLength(float_t  value) ;

constexpr void __cordl_internal_set_maxSlope(float_t  value) ;

constexpr void __cordl_internal_set_minRegionSize(float_t  value) ;

constexpr void __cordl_internal_set_rasterizeColliders(bool  value) ;

constexpr void __cordl_internal_set_rasterizeMeshes(bool  value) ;

constexpr void __cordl_internal_set_rasterizeTerrain(bool  value) ;

constexpr void __cordl_internal_set_rasterizeTrees(bool  value) ;

constexpr void __cordl_internal_set_relevantGraphSurfaceMode(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scanEmptyGraph(bool  value) ;

constexpr void __cordl_internal_set_stagingTiles(::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>*  value) ;

constexpr void __cordl_internal_set_tagMask(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_terrainSampleSize(int32_t  value) ;

constexpr void __cordl_internal_set_tileSizeX(int32_t  value) ;

constexpr void __cordl_internal_set_tileSizeZ(int32_t  value) ;

constexpr void __cordl_internal_set_useTiles(bool  value) ;

constexpr void __cordl_internal_set_walkableClimb(float_t  value) ;

constexpr void __cordl_internal_set_walkableHeight(float_t  value) ;

/// @brief Method .ctor, addr 0x5e925d4, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CellHeight, addr 0x5e9051c, size 0x20, virtual false, abstract: false, final false
inline float_t get_CellHeight() ;

/// @brief Method get_CharacterRadiusInVoxels, addr 0x5e916d8, size 0x80, virtual false, abstract: false, final false
inline int32_t get_CharacterRadiusInVoxels() ;

/// @brief Method get_MaxTileConnectionEdgeDistance, addr 0x5e8fe1c, size 0x8, virtual true, abstract: false, final false
inline float_t get_MaxTileConnectionEdgeDistance() ;

/// @brief Method get_RecalculateNormals, addr 0x5e8fdec, size 0x8, virtual true, abstract: false, final false
inline bool get_RecalculateNormals() ;

/// @brief Method get_TileBorderSizeInVoxels, addr 0x5e91758, size 0x14, virtual false, abstract: false, final false
inline int32_t get_TileBorderSizeInVoxels() ;

/// @brief Method get_TileBorderSizeInWorldUnits, addr 0x5e904f8, size 0x24, virtual false, abstract: false, final false
inline float_t get_TileBorderSizeInWorldUnits() ;

/// @brief Method get_TileWorldSizeX, addr 0x5e8fdf4, size 0x14, virtual true, abstract: false, final false
inline float_t get_TileWorldSizeX() ;

/// @brief Method get_TileWorldSizeZ, addr 0x5e8fe08, size 0x14, virtual true, abstract: false, final false
inline float_t get_TileWorldSizeZ() ;

/// @brief Method get_forcedBounds, addr 0x5e8fe24, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_forcedBounds() ;

/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* i___Pathfinding__IUpdatableGraph() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastGraph(RecastGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastGraph(RecastGraph const& ) = delete;

/// @brief Field BorderVertexMask offset 0xffffffff size 0x4
static constexpr int32_t  BorderVertexMask{static_cast<int32_t>(0x1)};

/// @brief Field BorderVertexOffset offset 0xffffffff size 0x4
static constexpr int32_t  BorderVertexOffset{static_cast<int32_t>(0x1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21336};

/// [JsonMember]
/// @brief Field characterRadius, offset: 0x130, size: 0x4, def value: None
 float_t  ___characterRadius;

/// [JsonMember]
/// @brief Field contourMaxError, offset: 0x134, size: 0x4, def value: None
 float_t  ___contourMaxError;

/// [JsonMember]
/// @brief Field cellSize, offset: 0x138, size: 0x4, def value: None
 float_t  ___cellSize;

/// [JsonMember]
/// @brief Field walkableHeight, offset: 0x13c, size: 0x4, def value: None
 float_t  ___walkableHeight;

/// [JsonMember]
/// @brief Field walkableClimb, offset: 0x140, size: 0x4, def value: None
 float_t  ___walkableClimb;

/// [JsonMember]
/// @brief Field maxSlope, offset: 0x144, size: 0x4, def value: None
 float_t  ___maxSlope;

/// [JsonMember]
/// @brief Field maxEdgeLength, offset: 0x148, size: 0x4, def value: None
 float_t  ___maxEdgeLength;

/// [JsonMember]
/// @brief Field minRegionSize, offset: 0x14c, size: 0x4, def value: None
 float_t  ___minRegionSize;

/// [JsonMember]
/// @brief Field editorTileSize, offset: 0x150, size: 0x4, def value: None
 int32_t  ___editorTileSize;

/// [JsonMember]
/// @brief Field tileSizeX, offset: 0x154, size: 0x4, def value: None
 int32_t  ___tileSizeX;

/// [JsonMember]
/// @brief Field tileSizeZ, offset: 0x158, size: 0x4, def value: None
 int32_t  ___tileSizeZ;

/// [JsonMember]
/// @brief Field useTiles, offset: 0x15c, size: 0x1, def value: None
 bool  ___useTiles;

/// @brief Field scanEmptyGraph, offset: 0x15d, size: 0x1, def value: None
 bool  ___scanEmptyGraph;

/// [JsonMember]
/// @brief Field relevantGraphSurfaceMode, offset: 0x160, size: 0x4, def value: None
 ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  ___relevantGraphSurfaceMode;

/// [JsonMember]
/// @brief Field rasterizeColliders, offset: 0x164, size: 0x1, def value: None
 bool  ___rasterizeColliders;

/// [JsonMember]
/// @brief Field rasterizeMeshes, offset: 0x165, size: 0x1, def value: None
 bool  ___rasterizeMeshes;

/// [JsonMember]
/// @brief Field rasterizeTerrain, offset: 0x166, size: 0x1, def value: None
 bool  ___rasterizeTerrain;

/// [JsonMember]
/// @brief Field rasterizeTrees, offset: 0x167, size: 0x1, def value: None
 bool  ___rasterizeTrees;

/// [JsonMember]
/// @brief Field colliderRasterizeDetail, offset: 0x168, size: 0x4, def value: None
 float_t  ___colliderRasterizeDetail;

/// [JsonMember]
/// @brief Field mask, offset: 0x16c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// [JsonMember]
/// @brief Field tagMask, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___tagMask;

/// [JsonMember]
/// @brief Field terrainSampleSize, offset: 0x178, size: 0x4, def value: None
 int32_t  ___terrainSampleSize;

/// [JsonMember]
/// @brief Field rotation, offset: 0x17c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotation;

/// [JsonMember]
/// @brief Field forcedBoundsCenter, offset: 0x188, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___forcedBoundsCenter;

/// @brief Field globalVox, offset: 0x198, size: 0x8, def value: None
 ::Pathfinding::Voxels::Voxelize*  ___globalVox;

/// @brief Field stagingTiles, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>*  ___stagingTiles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastGraph, ___characterRadius) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___contourMaxError) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___cellSize) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___walkableHeight) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___walkableClimb) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___maxSlope) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___maxEdgeLength) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___minRegionSize) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___editorTileSize) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___tileSizeX) == 0x154, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___tileSizeZ) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___useTiles) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___scanEmptyGraph) == 0x15d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___relevantGraphSurfaceMode) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___rasterizeColliders) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___rasterizeMeshes) == 0x165, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___rasterizeTerrain) == 0x166, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___rasterizeTrees) == 0x167, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___colliderRasterizeDetail) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___mask) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___tagMask) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___terrainSampleSize) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___rotation) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___forcedBoundsCenter) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___globalVox) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph, ___stagingTiles) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastGraph) == 0x1a8, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastGraph/<ScanInternal>d__46
class CORDL_TYPE RecastGraph__ScanInternal_d__46 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::RecastGraph*  __4__this;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e93e40, size 0x384, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::RecastGraph__ScanInternal_d__46* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e94314, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e94274, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e943b8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e94280, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e942b8, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e93e24, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::RecastGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::RecastGraph*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::RecastGraph*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x5e941c4, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e90ef0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastGraph__ScanInternal_d__46() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph__ScanInternal_d__46", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastGraph__ScanInternal_d__46(RecastGraph__ScanInternal_d__46 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph__ScanInternal_d__46", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastGraph__ScanInternal_d__46(RecastGraph__ScanInternal_d__46 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21335};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RecastGraph*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastGraph__ScanInternal_d__46, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanInternal_d__46, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanInternal_d__46, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanInternal_d__46, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanInternal_d__46, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastGraph__ScanInternal_d__46) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastGraph/<ScanAllTiles>d__50
class CORDL_TYPE RecastGraph__ScanAllTiles_d__50 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::RecastGraph*  __4__this;

/// @brief Field <>7__wrap4, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::System::Collections::Generic::IEnumerator_1<int32_t>*  __7__wrap4;

/// @brief Field <>8__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::Pathfinding::RecastGraph___c__DisplayClass50_0*  __8__1;

/// @brief Field <>8__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__2, put=__cordl_internal_set___8__2)) ::Pathfinding::RecastGraph___c__DisplayClass50_1*  __8__2;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <coordinateSum>5__6, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__coordinateSum_5__6, put=__cordl_internal_set__coordinateSum_5__6)) int32_t  _coordinateSum_5__6;

/// @brief Field <meshes>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshes_5__2, put=__cordl_internal_set__meshes_5__2)) ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  _meshes_5__2;

/// @brief Field <numTilesInQueue>5__7, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__numTilesInQueue_5__7, put=__cordl_internal_set__numTilesInQueue_5__7)) int32_t  _numTilesInQueue_5__7;

/// @brief Field <tileQueue>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tileQueue_5__3, put=__cordl_internal_set__tileQueue_5__3)) ::System::Collections::Generic::Queue_1<::Pathfinding::Int2>*  _tileQueue_5__3;

/// @brief Field <timeoutMillis>5__4, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeoutMillis_5__4, put=__cordl_internal_set__timeoutMillis_5__4)) int32_t  _timeoutMillis_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e929b0, size 0x11cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::RecastGraph__ScanAllTiles_d__50* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e93d7c, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e93cdc, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e93e20, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e93ce8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e93d20, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e92978, size 0x38, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::RecastGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::RecastGraph*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* const& __cordl_internal_get___7__wrap4() const;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& __cordl_internal_get___7__wrap4() ;

constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0* const& __cordl_internal_get___8__1() const;

constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0*& __cordl_internal_get___8__1() ;

constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_1* const& __cordl_internal_get___8__2() const;

constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_1*& __cordl_internal_get___8__2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__coordinateSum_5__6() const;

constexpr int32_t& __cordl_internal_get__coordinateSum_5__6() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* const& __cordl_internal_get__meshes_5__2() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*& __cordl_internal_get__meshes_5__2() ;

constexpr int32_t const& __cordl_internal_get__numTilesInQueue_5__7() const;

constexpr int32_t& __cordl_internal_get__numTilesInQueue_5__7() ;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Int2>* const& __cordl_internal_get__tileQueue_5__3() const;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Int2>*& __cordl_internal_get__tileQueue_5__3() ;

constexpr int32_t const& __cordl_internal_get__timeoutMillis_5__4() const;

constexpr int32_t& __cordl_internal_get__timeoutMillis_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::RecastGraph*  value) ;

constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<int32_t>*  value) ;

constexpr void __cordl_internal_set___8__1(::Pathfinding::RecastGraph___c__DisplayClass50_0*  value) ;

constexpr void __cordl_internal_set___8__2(::Pathfinding::RecastGraph___c__DisplayClass50_1*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__coordinateSum_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__meshes_5__2(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  value) ;

constexpr void __cordl_internal_set__numTilesInQueue_5__7(int32_t  value) ;

constexpr void __cordl_internal_set__tileQueue_5__3(::System::Collections::Generic::Queue_1<::Pathfinding::Int2>*  value) ;

constexpr void __cordl_internal_set__timeoutMillis_5__4(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x5e93b7c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x5e93c2c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e916a4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastGraph__ScanAllTiles_d__50() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph__ScanAllTiles_d__50", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastGraph__ScanAllTiles_d__50(RecastGraph__ScanAllTiles_d__50 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph__ScanAllTiles_d__50", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastGraph__ScanAllTiles_d__50(RecastGraph__ScanAllTiles_d__50 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21334};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RecastGraph*  _____4__this;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::RecastGraph___c__DisplayClass50_0*  _____8__1;

/// @brief Field <>8__2, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::RecastGraph___c__DisplayClass50_1*  _____8__2;

/// @brief Field <meshes>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  ____meshes_5__2;

/// @brief Field <tileQueue>5__3, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Pathfinding::Int2>*  ____tileQueue_5__3;

/// @brief Field <timeoutMillis>5__4, offset: 0x58, size: 0x4, def value: None
 int32_t  ____timeoutMillis_5__4;

/// @brief Field <>7__wrap4, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<int32_t>*  _____7__wrap4;

/// @brief Field <coordinateSum>5__6, offset: 0x68, size: 0x4, def value: None
 int32_t  ____coordinateSum_5__6;

/// @brief Field <numTilesInQueue>5__7, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____numTilesInQueue_5__7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____8__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, ____meshes_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, ____tileQueue_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, ____timeoutMillis_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, _____7__wrap4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, ____coordinateSum_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph__ScanAllTiles_d__50, ____numTilesInQueue_5__7) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastGraph__ScanAllTiles_d__50) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastGraph/<>c__DisplayClass50_1
class CORDL_TYPE RecastGraph___c__DisplayClass50_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Pathfinding::RecastGraph___c__DisplayClass50_0*  CS$__8__locals1;

/// @brief Field direction, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) int32_t  direction;

static inline ::Pathfinding::RecastGraph___c__DisplayClass50_1* New_ctor() ;

/// @brief Method <ScanAllTiles>b__2, addr 0x5e92874, size 0x104, virtual false, abstract: false, final false
inline void _ScanAllTiles_b__2(::Pathfinding::Int2  tile, int32_t  threadIndex) ;

constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_direction() const;

constexpr int32_t& __cordl_internal_get_direction() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Pathfinding::RecastGraph___c__DisplayClass50_0*  value) ;

constexpr void __cordl_internal_set_direction(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e9286c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastGraph___c__DisplayClass50_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph___c__DisplayClass50_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastGraph___c__DisplayClass50_1(RecastGraph___c__DisplayClass50_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph___c__DisplayClass50_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastGraph___c__DisplayClass50_1(RecastGraph___c__DisplayClass50_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21333};

/// @brief Field direction, offset: 0x10, size: 0x4, def value: None
 int32_t  ___direction;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::RecastGraph___c__DisplayClass50_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastGraph___c__DisplayClass50_1, ___direction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph___c__DisplayClass50_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastGraph___c__DisplayClass50_1) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Voxels.Voxelize, System.Collections.Generic.List`1<T>, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastGraph/<>c__DisplayClass50_0
class CORDL_TYPE RecastGraph___c__DisplayClass50_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::RecastGraph*  __4__this;

/// @brief Field buckets, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buckets, put=__cordl_internal_set_buckets)) ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>  buckets;

/// @brief Field graphIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphIndex, put=__cordl_internal_set_graphIndex)) uint32_t  graphIndex;

/// @brief Field voxelizers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_voxelizers, put=__cordl_internal_set_voxelizers)) ::ArrayW<::Pathfinding::Voxels::Voxelize*>  voxelizers;

static inline ::Pathfinding::RecastGraph___c__DisplayClass50_0* New_ctor() ;

/// @brief Method <ScanAllTiles>b__0, addr 0x5e9273c, size 0x110, virtual false, abstract: false, final false
inline void _ScanAllTiles_b__0(::Pathfinding::Int2  tile, int32_t  threadIndex) ;

/// @brief Method <ScanAllTiles>b__1, addr 0x5e9284c, size 0x20, virtual false, abstract: false, final false
inline void _ScanAllTiles_b__1(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::RecastGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::RecastGraph*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*> const& __cordl_internal_get_buckets() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>& __cordl_internal_get_buckets() ;

constexpr uint32_t const& __cordl_internal_get_graphIndex() const;

constexpr uint32_t& __cordl_internal_get_graphIndex() ;

constexpr ::ArrayW<::Pathfinding::Voxels::Voxelize*> const& __cordl_internal_get_voxelizers() const;

constexpr ::ArrayW<::Pathfinding::Voxels::Voxelize*>& __cordl_internal_get_voxelizers() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::RecastGraph*  value) ;

constexpr void __cordl_internal_set_buckets(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>  value) ;

constexpr void __cordl_internal_set_graphIndex(uint32_t  value) ;

constexpr void __cordl_internal_set_voxelizers(::ArrayW<::Pathfinding::Voxels::Voxelize*>  value) ;

/// @brief Method .ctor, addr 0x5e92734, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastGraph___c__DisplayClass50_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph___c__DisplayClass50_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastGraph___c__DisplayClass50_0(RecastGraph___c__DisplayClass50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastGraph___c__DisplayClass50_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastGraph___c__DisplayClass50_0(RecastGraph___c__DisplayClass50_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21332};

/// @brief Field voxelizers, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Voxels::Voxelize*>  ___voxelizers;

/// @brief Field buckets, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>  ___buckets;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::RecastGraph*  _____4__this;

/// @brief Field graphIndex, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___graphIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastGraph___c__DisplayClass50_0, ___voxelizers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph___c__DisplayClass50_0, ___buckets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph___c__DisplayClass50_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastGraph___c__DisplayClass50_0, ___graphIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastGraph___c__DisplayClass50_0) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
