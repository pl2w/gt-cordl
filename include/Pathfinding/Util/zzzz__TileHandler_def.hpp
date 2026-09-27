#pragma once
// IWYU pragma private; include "Pathfinding/Util/TileHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Voxels/zzzz__Int3PolygonClipper_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TileHandler)
namespace GlobalNamespace {
struct TileHandler_CutMode;
}
namespace GlobalNamespace {
struct TileHandler_CuttingResult;
}
namespace Pathfinding::ClipperLib {
class Clipper;
}
namespace Pathfinding::ClipperLib {
struct IntPoint;
}
namespace Pathfinding::ClipperLib {
class PolyTree;
}
namespace Pathfinding::Poly2Tri {
class Polygon;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding::Util {
template<typename T>
class GridLookup_1;
}
namespace Pathfinding::Util {
class TileHandler_Cut;
}
namespace Pathfinding::Util {
class TileHandler_TileType;
}
namespace Pathfinding::Util {
class TileHandler___c__DisplayClass37_0;
}
namespace Pathfinding::Util {
class TileHandler___c__DisplayClass41_0;
}
namespace Pathfinding {
class IWorkItemContext;
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
class NavmeshBase;
}
namespace Pathfinding {
class NavmeshClipper;
}
namespace Pathfinding {
class NavmeshCut;
}
namespace Pathfinding {
class NavmeshTile;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Pathfinding::Util {
class TileHandler;
}
namespace Pathfinding::Util {
class TileHandler_Cut;
}
namespace Pathfinding::Util {
class TileHandler_TileType;
}
namespace Pathfinding::Util {
class TileHandler___c__DisplayClass37_0;
}
namespace Pathfinding::Util {
class TileHandler___c__DisplayClass41_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::TileHandler*);
MARK_REF_T(::Pathfinding::Util::TileHandler_Cut*);
MARK_REF_T(::Pathfinding::Util::TileHandler_TileType*);
MARK_REF_T(::Pathfinding::Util::TileHandler___c__DisplayClass37_0*);
MARK_REF_T(::Pathfinding::Util::TileHandler___c__DisplayClass41_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::TileHandler*, "Pathfinding.Util", "TileHandler");
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::TileHandler_Cut*, "Pathfinding.Util", "TileHandler/Cut");
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::TileHandler_TileType*, "Pathfinding.Util", "TileHandler/TileType");
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::TileHandler___c__DisplayClass37_0*, "Pathfinding.Util", "TileHandler/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::TileHandler___c__DisplayClass41_0*, "Pathfinding.Util", "TileHandler/<>c__DisplayClass41_0");
// Dependencies Pathfinding.Util.TileHandler::TileType, Pathfinding.Voxels.Int3PolygonClipper, System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.TileHandler
class CORDL_TYPE TileHandler : public ::System::Object {
public:
// Declarations
using CutMode = ::GlobalNamespace::TileHandler_CutMode;

using CuttingResult = ::GlobalNamespace::TileHandler_CuttingResult;

using Cut = ::Pathfinding::Util::TileHandler_Cut;

using TileType = ::Pathfinding::Util::TileHandler_TileType;

using __c__DisplayClass37_0 = ::Pathfinding::Util::TileHandler___c__DisplayClass37_0;

using __c__DisplayClass41_0 = ::Pathfinding::Util::TileHandler___c__DisplayClass41_0;

/// @brief Field activeTileOffsets, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeTileOffsets, put=__cordl_internal_set_activeTileOffsets)) ::ArrayW<int32_t>  activeTileOffsets;

/// @brief Field activeTileRotations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeTileRotations, put=__cordl_internal_set_activeTileRotations)) ::ArrayW<int32_t>  activeTileRotations;

/// @brief Field activeTileTypes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeTileTypes, put=__cordl_internal_set_activeTileTypes)) ::ArrayW<::Pathfinding::Util::TileHandler_TileType*>  activeTileTypes;

/// @brief Field batchDepth, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_batchDepth, put=__cordl_internal_set_batchDepth)) int32_t  batchDepth;

/// @brief Field cached_Int2_int_dict, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cached_Int2_int_dict, put=__cordl_internal_set_cached_Int2_int_dict)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  cached_Int2_int_dict;

/// @brief Field clipper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipper, put=__cordl_internal_set_clipper)) ::Pathfinding::ClipperLib::Clipper*  clipper;

/// @brief Field cuts, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cuts, put=__cordl_internal_set_cuts)) ::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>*  cuts;

/// @brief Field graph, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::NavmeshBase*  graph;

 __declspec(property(get=get_isBatching)) bool  isBatching;

 __declspec(property(get=get_isValid)) bool  isValid;

/// @brief Field reloadedInBatch, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_reloadedInBatch, put=__cordl_internal_set_reloadedInBatch)) ::ArrayW<bool>  reloadedInBatch;

/// @brief Field simpleClipper, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_simpleClipper, put=__cordl_internal_set_simpleClipper)) ::Pathfinding::Voxels::Int3PolygonClipper  simpleClipper;

/// @brief Field tileXCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileXCount, put=__cordl_internal_set_tileXCount)) int32_t  tileXCount;

/// @brief Field tileZCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileZCount, put=__cordl_internal_set_tileZCount)) int32_t  tileZCount;

/// @brief Method ClearTile, addr 0x5ede640, size 0x1bc, virtual false, abstract: false, final false
inline void ClearTile(int32_t  x, int32_t  z) ;

/// @brief Method ClipAgainstRectangle, addr 0x5edce14, size 0xdc, virtual false, abstract: false, final false
inline int32_t ClipAgainstRectangle(::ArrayW<::Pathfinding::Int3>  clipIn, ::ArrayW<::Pathfinding::Int3>  clipOut, ::Pathfinding::Int2  size) ;

/// @brief Method CopyMesh, addr 0x5edcba0, size 0x274, virtual false, abstract: false, final false
static inline void CopyMesh(::ArrayW<::Pathfinding::Int3>  vertices, ::ArrayW<int32_t>  triangles, ::System::Collections::Generic::List_1<::Pathfinding::Int3>*  outVertices, ::System::Collections::Generic::List_1<int32_t>*  outTriangles) ;

/// @brief Method CreateTileTypesFromGraph, addr 0x5ed9df8, size 0xe8, virtual false, abstract: false, final false
inline void CreateTileTypesFromGraph() ;

/// @brief Method CutAll, addr 0x5edcef0, size 0x14c, virtual false, abstract: false, final false
inline void CutAll(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly, ::System::Collections::Generic::List_1<int32_t>*  intersectingCutIndices, ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*  cuts, ::Pathfinding::ClipperLib::PolyTree*  result) ;

/// @brief Method CutDual, addr 0x5edd03c, size 0x2d4, virtual false, abstract: false, final false
inline void CutDual(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly, ::System::Collections::Generic::List_1<int32_t>*  tmpIntersectingCuts, ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*  cuts, bool  hasDual, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  intermediateResult, ::Pathfinding::ClipperLib::PolyTree*  result) ;

/// @brief Method CutExtra, addr 0x5edd310, size 0xa0, virtual false, abstract: false, final false
inline void CutExtra(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly, ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  extraClipShape, ::Pathfinding::ClipperLib::PolyTree*  result) ;

/// @brief Method CutPoly, addr 0x5eda1a4, size 0x2298, virtual false, abstract: false, final false
inline ::GlobalNamespace::TileHandler_CuttingResult CutPoly(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::ArrayW<::Pathfinding::Int3>  extraShape, ::Pathfinding::Util::GraphTransform*  graphTransform, ::Pathfinding::IntRect  tiles, ::GlobalNamespace::TileHandler_CutMode  mode, int32_t  perturbate) ;

/// @brief Method DelaunayRefinement, addr 0x5edd89c, size 0xda4, virtual false, abstract: false, final false
inline void DelaunayRefinement(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::by_ref<int32_t>  tCount, bool  delaunay, bool  colinear) ;

/// @brief Method EndBatchLoad, addr 0x5ed989c, size 0x17c, virtual false, abstract: false, final false
inline void EndBatchLoad() ;

/// @brief Method GetActiveRotation, addr 0x5ed9a18, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetActiveRotation(::Pathfinding::Int2  p) ;

/// @brief Method LoadTile, addr 0x5ede920, size 0x3a0, virtual false, abstract: false, final false
inline void LoadTile(::Pathfinding::Util::TileHandler_TileType*  tile, int32_t  x, int32_t  z, int32_t  rotation, int32_t  yoffset) ;

static inline ::Pathfinding::Util::TileHandler* New_ctor(::Pathfinding::NavmeshBase*  graph) ;

/// @brief Method OnRecalculatedTiles, addr 0x5ed93e8, size 0xb8, virtual false, abstract: false, final false
inline void OnRecalculatedTiles(::ArrayW<::Pathfinding::NavmeshTile*>  recalculatedTiles) ;

/// @brief Method PoolPolygon, addr 0x5edd3b0, size 0x4ec, virtual false, abstract: false, final false
static inline void PoolPolygon(::Pathfinding::Poly2Tri::Polygon*  polygon, ::System::Collections::Generic::Stack_1<::Pathfinding::Poly2Tri::Polygon*>*  pool) ;

/// @brief Method PrepareNavmeshCutsForCutting, addr 0x5edc43c, size 0x764, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>* PrepareNavmeshCutsForCutting(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshCut>>*  navmeshCuts, ::Pathfinding::Util::GraphTransform*  transform, ::Pathfinding::IntRect  cutSpaceBounds, int32_t  perturbate, bool  anyNavmeshAdds) ;

/// @brief Method RegisterTileType, addr 0x5ed9a54, size 0x100, virtual false, abstract: false, final false
inline ::Pathfinding::Util::TileHandler_TileType* RegisterTileType(::UnityEngine::Mesh*  source, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth) ;

/// @brief Method ReloadInBounds, addr 0x5ede7fc, size 0x5c, virtual false, abstract: false, final false
inline void ReloadInBounds(::UnityEngine::Bounds  bounds) ;

/// @brief Method ReloadInBounds, addr 0x5ede858, size 0xc8, virtual false, abstract: false, final false
inline void ReloadInBounds(::Pathfinding::IntRect  tiles) ;

/// @brief Method ReloadTile, addr 0x5ed97f8, size 0xa4, virtual false, abstract: false, final false
inline void ReloadTile(int32_t  x, int32_t  z) ;

/// @brief Method StartBatchLoad, addr 0x5ed96fc, size 0xfc, virtual false, abstract: false, final false
inline void StartBatchLoad() ;

/// @brief Method UpdateTileType, addr 0x5ed94a0, size 0x25c, virtual false, abstract: false, final false
inline void UpdateTileType(::Pathfinding::NavmeshTile*  tile) ;

/// [CompilerGenerated]
/// @brief Method <EndBatchLoad>b__24_0, addr 0x5edece4, size 0xc4, virtual false, abstract: false, final false
inline bool _EndBatchLoad_b__24_0(::Pathfinding::IWorkItemContext*  ctx, bool  force) ;

/// [CompilerGenerated]
/// @brief Method <StartBatchLoad>b__23_0, addr 0x5edecc0, size 0x24, virtual false, abstract: false, final false
inline bool _StartBatchLoad_b__23_0(bool  force) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeTileOffsets() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeTileOffsets() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeTileRotations() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeTileRotations() ;

constexpr ::ArrayW<::Pathfinding::Util::TileHandler_TileType*> const& __cordl_internal_get_activeTileTypes() const;

constexpr ::ArrayW<::Pathfinding::Util::TileHandler_TileType*>& __cordl_internal_get_activeTileTypes() ;

constexpr int32_t const& __cordl_internal_get_batchDepth() const;

constexpr int32_t& __cordl_internal_get_batchDepth() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>* const& __cordl_internal_get_cached_Int2_int_dict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*& __cordl_internal_get_cached_Int2_int_dict() ;

constexpr ::Pathfinding::ClipperLib::Clipper* const& __cordl_internal_get_clipper() const;

constexpr ::Pathfinding::ClipperLib::Clipper*& __cordl_internal_get_clipper() ;

constexpr ::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>* const& __cordl_internal_get_cuts() const;

constexpr ::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>*& __cordl_internal_get_cuts() ;

constexpr ::Pathfinding::NavmeshBase* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::NavmeshBase*& __cordl_internal_get_graph() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_reloadedInBatch() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_reloadedInBatch() ;

constexpr ::Pathfinding::Voxels::Int3PolygonClipper const& __cordl_internal_get_simpleClipper() const;

constexpr ::Pathfinding::Voxels::Int3PolygonClipper& __cordl_internal_get_simpleClipper() ;

constexpr int32_t const& __cordl_internal_get_tileXCount() const;

constexpr int32_t& __cordl_internal_get_tileXCount() ;

constexpr int32_t const& __cordl_internal_get_tileZCount() const;

constexpr int32_t& __cordl_internal_get_tileZCount() ;

constexpr void __cordl_internal_set_activeTileOffsets(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_activeTileRotations(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_activeTileTypes(::ArrayW<::Pathfinding::Util::TileHandler_TileType*>  value) ;

constexpr void __cordl_internal_set_batchDepth(int32_t  value) ;

constexpr void __cordl_internal_set_cached_Int2_int_dict(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  value) ;

constexpr void __cordl_internal_set_clipper(::Pathfinding::ClipperLib::Clipper*  value) ;

constexpr void __cordl_internal_set_cuts(::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value) ;

constexpr void __cordl_internal_set_reloadedInBatch(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_simpleClipper(::Pathfinding::Voxels::Int3PolygonClipper  value) ;

constexpr void __cordl_internal_set_tileXCount(int32_t  value) ;

constexpr void __cordl_internal_set_tileZCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ed912c, size 0x2bc, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::NavmeshBase*  graph) ;

/// @brief Method get_isBatching, addr 0x5ed90c4, size 0x10, virtual false, abstract: false, final false
inline bool get_isBatching() ;

/// @brief Method get_isValid, addr 0x5ed90d4, size 0x58, virtual false, abstract: false, final false
inline bool get_isValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TileHandler(TileHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileHandler(TileHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21481};

/// @brief Field graph, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::NavmeshBase*  ___graph;

/// @brief Field tileXCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___tileXCount;

/// @brief Field tileZCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___tileZCount;

/// @brief Field clipper, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::Clipper*  ___clipper;

/// @brief Field cached_Int2_int_dict, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  ___cached_Int2_int_dict;

/// @brief Field activeTileTypes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Util::TileHandler_TileType*>  ___activeTileTypes;

/// @brief Field activeTileRotations, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeTileRotations;

/// @brief Field activeTileOffsets, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeTileOffsets;

/// @brief Field reloadedInBatch, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<bool>  ___reloadedInBatch;

/// @brief Field cuts, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>*  ___cuts;

/// @brief Field batchDepth, offset: 0x58, size: 0x4, def value: None
 int32_t  ___batchDepth;

/// @brief Field simpleClipper, offset: 0x60, size: 0x10, def value: None
 ::Pathfinding::Voxels::Int3PolygonClipper  ___simpleClipper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::TileHandler, ___graph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___tileXCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___tileZCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___clipper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___cached_Int2_int_dict) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___activeTileTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___activeTileRotations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___activeTileOffsets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___reloadedInBatch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___cuts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___batchDepth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler, ___simpleClipper) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::TileHandler) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding::Util
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.TileHandler/<>c__DisplayClass41_0
class CORDL_TYPE TileHandler___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::Util::TileHandler*  __4__this;

/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field rotation, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) int32_t  rotation;

/// @brief Field tile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tile, put=__cordl_internal_set_tile)) ::Pathfinding::Util::TileHandler_TileType*  tile;

/// @brief Field x, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field yoffset, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_yoffset, put=__cordl_internal_set_yoffset)) int32_t  yoffset;

/// @brief Field z, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

static inline ::Pathfinding::Util::TileHandler___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <LoadTile>b__0, addr 0x5edf244, size 0x36c, virtual false, abstract: false, final false
inline bool _LoadTile_b__0(::Pathfinding::IWorkItemContext*  context, bool  force) ;

constexpr ::Pathfinding::Util::TileHandler* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::Util::TileHandler*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_rotation() const;

constexpr int32_t& __cordl_internal_get_rotation() ;

constexpr ::Pathfinding::Util::TileHandler_TileType* const& __cordl_internal_get_tile() const;

constexpr ::Pathfinding::Util::TileHandler_TileType*& __cordl_internal_get_tile() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_yoffset() const;

constexpr int32_t& __cordl_internal_get_yoffset() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::Util::TileHandler*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_rotation(int32_t  value) ;

constexpr void __cordl_internal_set_tile(::Pathfinding::Util::TileHandler_TileType*  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_yoffset(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x5edf23c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileHandler___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileHandler___c__DisplayClass41_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TileHandler___c__DisplayClass41_0(TileHandler___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileHandler___c__DisplayClass41_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileHandler___c__DisplayClass41_0(TileHandler___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21480};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Util::TileHandler*  _____4__this;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field yoffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___yoffset;

/// @brief Field rotation, offset: 0x20, size: 0x4, def value: None
 int32_t  ___rotation;

/// @brief Field tile, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Util::TileHandler_TileType*  ___tile;

/// @brief Field x, offset: 0x30, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field z, offset: 0x34, size: 0x4, def value: None
 int32_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, ___yoffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, ___rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, ___tile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, ___x) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0, ___z) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::TileHandler___c__DisplayClass41_0) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Util
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.TileHandler/<>c__DisplayClass37_0
class CORDL_TYPE TileHandler___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::Util::TileHandler*  __4__this;

/// @brief Field x, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field z, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

static inline ::Pathfinding::Util::TileHandler___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <ClearTile>b__0, addr 0x5edf0a8, size 0x194, virtual false, abstract: false, final false
inline bool _ClearTile_b__0(::Pathfinding::IWorkItemContext*  context, bool  force) ;

constexpr ::Pathfinding::Util::TileHandler* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::Util::TileHandler*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::Util::TileHandler*  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x5edf0a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileHandler___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileHandler___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TileHandler___c__DisplayClass37_0(TileHandler___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileHandler___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileHandler___c__DisplayClass37_0(TileHandler___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21479};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Util::TileHandler*  _____4__this;

/// @brief Field x, offset: 0x18, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field z, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass37_0, ___x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler___c__DisplayClass37_0, ___z) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::TileHandler___c__DisplayClass37_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Util
// Dependencies Pathfinding.Int2, Pathfinding.IntRect, System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.TileHandler/Cut
class CORDL_TYPE TileHandler_Cut : public ::System::Object {
public:
// Declarations
/// @brief Field bounds, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::Pathfinding::IntRect  bounds;

/// @brief Field boundsY, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundsY, put=__cordl_internal_set_boundsY)) ::Pathfinding::Int2  boundsY;

/// @brief Field contour, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_contour, put=__cordl_internal_set_contour)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  contour;

/// @brief Field cutsAddedGeom, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_cutsAddedGeom, put=__cordl_internal_set_cutsAddedGeom)) bool  cutsAddedGeom;

/// @brief Field isDual, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDual, put=__cordl_internal_set_isDual)) bool  isDual;

static inline ::Pathfinding::Util::TileHandler_Cut* New_ctor() ;

constexpr ::Pathfinding::IntRect const& __cordl_internal_get_bounds() const;

constexpr ::Pathfinding::IntRect& __cordl_internal_get_bounds() ;

constexpr ::Pathfinding::Int2 const& __cordl_internal_get_boundsY() const;

constexpr ::Pathfinding::Int2& __cordl_internal_get_boundsY() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* const& __cordl_internal_get_contour() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*& __cordl_internal_get_contour() ;

constexpr bool const& __cordl_internal_get_cutsAddedGeom() const;

constexpr bool& __cordl_internal_get_cutsAddedGeom() ;

constexpr bool const& __cordl_internal_get_isDual() const;

constexpr bool& __cordl_internal_get_isDual() ;

constexpr void __cordl_internal_set_bounds(::Pathfinding::IntRect  value) ;

constexpr void __cordl_internal_set_boundsY(::Pathfinding::Int2  value) ;

constexpr void __cordl_internal_set_contour(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  value) ;

constexpr void __cordl_internal_set_cutsAddedGeom(bool  value) ;

constexpr void __cordl_internal_set_isDual(bool  value) ;

/// @brief Method .ctor, addr 0x5edf098, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileHandler_Cut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileHandler_Cut", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TileHandler_Cut(TileHandler_Cut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileHandler_Cut", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileHandler_Cut(TileHandler_Cut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21477};

/// @brief Field bounds, offset: 0x10, size: 0x10, def value: None
 ::Pathfinding::IntRect  ___bounds;

/// @brief Field boundsY, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Int2  ___boundsY;

/// @brief Field isDual, offset: 0x28, size: 0x1, def value: None
 bool  ___isDual;

/// @brief Field cutsAddedGeom, offset: 0x29, size: 0x1, def value: None
 bool  ___cutsAddedGeom;

/// @brief Field contour, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  ___contour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::TileHandler_Cut, ___bounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_Cut, ___boundsY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_Cut, ___isDual) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_Cut, ___cutsAddedGeom) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_Cut, ___contour) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::TileHandler_Cut) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Util
// Dependencies Pathfinding.Int3, System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.TileHandler/TileType
class CORDL_TYPE TileHandler_TileType : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Depth)) int32_t  Depth;

/// @brief Field Rotations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Rotations, put=setStaticF_Rotations)) ::ArrayW<int32_t>  Rotations;

 __declspec(property(get=get_Width)) int32_t  Width;

/// @brief Field depth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) int32_t  depth;

/// @brief Field lastRotation, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRotation, put=__cordl_internal_set_lastRotation)) int32_t  lastRotation;

/// @brief Field lastYOffset, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastYOffset, put=__cordl_internal_set_lastYOffset)) int32_t  lastYOffset;

/// @brief Field offset, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::Pathfinding::Int3  offset;

/// @brief Field tris, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tris, put=__cordl_internal_set_tris)) ::ArrayW<int32_t>  tris;

/// @brief Field verts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_verts, put=__cordl_internal_set_verts)) ::ArrayW<::Pathfinding::Int3>  verts;

/// @brief Field width, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method Load, addr 0x5ededb8, size 0x240, virtual false, abstract: false, final false
inline void Load(::by_ref<::ArrayW<::Pathfinding::Int3>>  verts, ::by_ref<::ArrayW<int32_t>>  tris, int32_t  rotation, int32_t  yoffset) ;

static inline ::Pathfinding::Util::TileHandler_TileType* New_ctor(::UnityEngine::Mesh*  source, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth) ;

static inline ::Pathfinding::Util::TileHandler_TileType* New_ctor(::ArrayW<::Pathfinding::Int3>  sourceVerts, ::ArrayW<int32_t>  sourceTris, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth) ;

constexpr int32_t const& __cordl_internal_get_depth() const;

constexpr int32_t& __cordl_internal_get_depth() ;

constexpr int32_t const& __cordl_internal_get_lastRotation() const;

constexpr int32_t& __cordl_internal_get_lastRotation() ;

constexpr int32_t const& __cordl_internal_get_lastYOffset() const;

constexpr int32_t& __cordl_internal_get_lastYOffset() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_offset() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_offset() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tris() ;

constexpr ::ArrayW<::Pathfinding::Int3> const& __cordl_internal_get_verts() const;

constexpr ::ArrayW<::Pathfinding::Int3>& __cordl_internal_get_verts() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_depth(int32_t  value) ;

constexpr void __cordl_internal_set_lastRotation(int32_t  value) ;

constexpr void __cordl_internal_set_lastYOffset(int32_t  value) ;

constexpr void __cordl_internal_set_offset(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_tris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_verts(::ArrayW<::Pathfinding::Int3>  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ed9b54, size 0x2a4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Mesh*  source, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth) ;

/// @brief Method .ctor, addr 0x5ed9ee0, size 0x2c4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Pathfinding::Int3>  sourceVerts, ::ArrayW<int32_t>  sourceTris, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth) ;

static inline ::ArrayW<int32_t> getStaticF_Rotations() ;

/// @brief Method get_Depth, addr 0x5ededb0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_Width, addr 0x5ededa8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Width() ;

static inline void setStaticF_Rotations(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileHandler_TileType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileHandler_TileType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TileHandler_TileType(TileHandler_TileType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileHandler_TileType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileHandler_TileType(TileHandler_TileType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21475};

/// @brief Field verts, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Int3>  ___verts;

/// @brief Field tris, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tris;

/// @brief Field offset, offset: 0x20, size: 0xc, def value: None
 ::Pathfinding::Int3  ___offset;

/// @brief Field lastYOffset, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___lastYOffset;

/// @brief Field lastRotation, offset: 0x30, size: 0x4, def value: None
 int32_t  ___lastRotation;

/// @brief Field width, offset: 0x34, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field depth, offset: 0x38, size: 0x4, def value: None
 int32_t  ___depth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___verts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___tris) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___lastYOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___lastRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___width) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::TileHandler_TileType, ___depth) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::TileHandler_TileType) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Util
