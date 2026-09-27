#pragma once
// IWYU pragma private; include "Pathfinding/Recast/RecastMeshGatherer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecastMeshGatherer)
namespace Pathfinding::Recast {
class RecastMeshGatherer_CapsuleCache;
}
namespace Pathfinding::Voxels {
class RasterizationMesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Recast {
class RecastMeshGatherer;
}
namespace Pathfinding::Recast {
class RecastMeshGatherer_CapsuleCache;
}
// Write type traits
MARK_REF_T(::Pathfinding::Recast::RecastMeshGatherer*);
MARK_REF_T(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Recast::RecastMeshGatherer*, "Pathfinding.Recast", "RecastMeshGatherer");
DEFINE_IL2CPP_CLASS(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*, "Pathfinding.Recast", "RecastMeshGatherer/CapsuleCache");
// Dependencies System.Object, UnityEngine.Bounds, UnityEngine.LayerMask, UnityEngine.Vector3
namespace Pathfinding::Recast {
// Is value type: false
// CS Name: Pathfinding.Recast.RecastMeshGatherer
class CORDL_TYPE RecastMeshGatherer : public ::System::Object {
public:
// Declarations
using CapsuleCache = ::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache;

/// @brief Field BoxColliderTris, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoxColliderTris, put=setStaticF_BoxColliderTris)) ::ArrayW<int32_t>  BoxColliderTris;

/// @brief Field BoxColliderVerts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoxColliderVerts, put=setStaticF_BoxColliderVerts)) ::ArrayW<::UnityEngine::Vector3>  BoxColliderVerts;

/// @brief Field bounds, offset 0x24, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field capsuleCache, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_capsuleCache, put=__cordl_internal_set_capsuleCache)) ::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>*  capsuleCache;

/// @brief Field colliderRasterizeDetail, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_colliderRasterizeDetail, put=__cordl_internal_set_colliderRasterizeDetail)) float_t  colliderRasterizeDetail;

/// @brief Field mask, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field tagMask, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagMask, put=__cordl_internal_set_tagMask)) ::System::Collections::Generic::List_1<::StringW>*  tagMask;

/// @brief Field terrainSampleSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainSampleSize, put=__cordl_internal_set_terrainSampleSize)) int32_t  terrainSampleSize;

/// @brief Method CeilDivision, addr 0x5ecba4c, size 0x10, virtual false, abstract: false, final false
static inline int32_t CeilDivision(int32_t  lhs, int32_t  rhs) ;

/// @brief Method CollectColliderMeshes, addr 0x5ecbffc, size 0x3e4, virtual false, abstract: false, final false
inline void CollectColliderMeshes(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result) ;

/// @brief Method CollectRecastMeshObjs, addr 0x5eca278, size 0x778, virtual false, abstract: false, final false
inline void CollectRecastMeshObjs(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  buffer) ;

/// @brief Method CollectSceneMeshes, addr 0x5ec9ce4, size 0x594, virtual false, abstract: false, final false
inline void CollectSceneMeshes(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  meshes) ;

/// @brief Method CollectTerrainMeshes, addr 0x5ecaa58, size 0x14c, virtual false, abstract: false, final false
inline void CollectTerrainMeshes(bool  rasterizeTrees, float_t  desiredChunkSize, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result) ;

/// @brief Method CollectTreeMeshes, addr 0x5ecb0e0, size 0x510, virtual false, abstract: false, final false
inline void CollectTreeMeshes(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result) ;

/// @brief Method FilterMeshes, addr 0x5ec9a20, size 0x2c4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* FilterMeshes(::ArrayW<::UnityEngine::MeshFilter*>  meshFilters, ::System::Collections::Generic::List_1<::StringW>*  tagMask, ::UnityEngine::LayerMask  layerMask) ;

/// @brief Method GenerateHeightmapChunk, addr 0x5ecb5f0, size 0x45c, virtual false, abstract: false, final false
inline ::Pathfinding::Voxels::RasterizationMesh* GenerateHeightmapChunk(::System::Object*  heights, ::UnityEngine::Vector3  sampleSize, ::UnityEngine::Vector3  offset, int32_t  x0, int32_t  z0, int32_t  width, int32_t  depth, int32_t  stride) ;

/// @brief Method GenerateTerrainChunks, addr 0x5ecaba4, size 0x53c, virtual false, abstract: false, final false
inline void GenerateTerrainChunks(::UnityEngine::Terrain*  terrain, ::UnityEngine::Bounds  bounds, float_t  desiredChunkSize, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result) ;

static inline ::Pathfinding::Recast::RecastMeshGatherer* New_ctor(::UnityEngine::Bounds  bounds, int32_t  terrainSampleSize, ::UnityEngine::LayerMask  mask, ::System::Collections::Generic::List_1<::StringW>*  tagMask, float_t  colliderRasterizeDetail) ;

/// @brief Method RasterizeBoxCollider, addr 0x5ecc3e0, size 0x1f8, virtual false, abstract: false, final false
inline ::Pathfinding::Voxels::RasterizationMesh* RasterizeBoxCollider(::UnityEngine::BoxCollider*  collider, ::UnityEngine::Matrix4x4  localToWorldMatrix) ;

/// @brief Method RasterizeCapsuleCollider, addr 0x5ecc5d8, size 0xbac, virtual false, abstract: false, final false
inline ::Pathfinding::Voxels::RasterizationMesh* RasterizeCapsuleCollider(float_t  radius, float_t  height, ::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  localToWorldMatrix) ;

/// @brief Method RasterizeCollider, addr 0x5eca9f0, size 0x68, virtual false, abstract: false, final false
inline ::Pathfinding::Voxels::RasterizationMesh* RasterizeCollider(::UnityEngine::Collider*  col) ;

/// @brief Method RasterizeCollider, addr 0x5ecba5c, size 0x5a0, virtual false, abstract: false, final false
inline ::Pathfinding::Voxels::RasterizationMesh* RasterizeCollider(::UnityEngine::Collider*  col, ::UnityEngine::Matrix4x4  localToWorldMatrix) ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>* const& __cordl_internal_get_capsuleCache() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>*& __cordl_internal_get_capsuleCache() ;

constexpr float_t const& __cordl_internal_get_colliderRasterizeDetail() const;

constexpr float_t& __cordl_internal_get_colliderRasterizeDetail() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_tagMask() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_tagMask() ;

constexpr int32_t const& __cordl_internal_get_terrainSampleSize() const;

constexpr int32_t& __cordl_internal_get_terrainSampleSize() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_capsuleCache(::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>*  value) ;

constexpr void __cordl_internal_set_colliderRasterizeDetail(float_t  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_tagMask(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_terrainSampleSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ec98cc, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Bounds  bounds, int32_t  terrainSampleSize, ::UnityEngine::LayerMask  mask, ::System::Collections::Generic::List_1<::StringW>*  tagMask, float_t  colliderRasterizeDetail) ;

static inline ::ArrayW<int32_t> getStaticF_BoxColliderTris() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_BoxColliderVerts() ;

static inline void setStaticF_BoxColliderTris(::ArrayW<int32_t>  value) ;

static inline void setStaticF_BoxColliderVerts(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastMeshGatherer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastMeshGatherer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastMeshGatherer(RecastMeshGatherer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastMeshGatherer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastMeshGatherer(RecastMeshGatherer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21442};

/// @brief Field terrainSampleSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___terrainSampleSize;

/// @brief Field mask, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field tagMask, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___tagMask;

/// @brief Field colliderRasterizeDetail, offset: 0x20, size: 0x4, def value: None
 float_t  ___colliderRasterizeDetail;

/// @brief Field bounds, offset: 0x24, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field capsuleCache, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>*  ___capsuleCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer, ___terrainSampleSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer, ___mask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer, ___tagMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer, ___colliderRasterizeDetail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer, ___bounds) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer, ___capsuleCache) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Recast::RecastMeshGatherer) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Recast
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding::Recast {
// Is value type: false
// CS Name: Pathfinding.Recast.RecastMeshGatherer/CapsuleCache
class CORDL_TYPE RecastMeshGatherer_CapsuleCache : public ::System::Object {
public:
// Declarations
/// @brief Field height, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field rows, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_rows, put=__cordl_internal_set_rows)) int32_t  rows;

/// @brief Field tris, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tris, put=__cordl_internal_set_tris)) ::ArrayW<int32_t>  tris;

/// @brief Field verts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_verts, put=__cordl_internal_set_verts)) ::ArrayW<::UnityEngine::Vector3>  verts;

static inline ::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache* New_ctor() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_rows() const;

constexpr int32_t& __cordl_internal_get_rows() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tris() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_verts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_verts() ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_rows(int32_t  value) ;

constexpr void __cordl_internal_set_tris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5ecd184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastMeshGatherer_CapsuleCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastMeshGatherer_CapsuleCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastMeshGatherer_CapsuleCache(RecastMeshGatherer_CapsuleCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastMeshGatherer_CapsuleCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastMeshGatherer_CapsuleCache(RecastMeshGatherer_CapsuleCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21441};

/// @brief Field rows, offset: 0x10, size: 0x4, def value: None
 int32_t  ___rows;

/// @brief Field height, offset: 0x14, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field verts, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___verts;

/// @brief Field tris, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tris;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache, ___rows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache, ___height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache, ___verts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache, ___tris) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Recast
