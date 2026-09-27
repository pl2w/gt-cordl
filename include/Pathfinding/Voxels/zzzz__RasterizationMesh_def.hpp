#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/RasterizationMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RasterizationMesh)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Voxels {
class RasterizationMesh;
}
// Write type traits
MARK_REF_T(::Pathfinding::Voxels::RasterizationMesh*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::RasterizationMesh*, "Pathfinding.Voxels", "RasterizationMesh");
// Dependencies System.Object, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Vector3
namespace Pathfinding::Voxels {
// Is value type: false
// CS Name: Pathfinding.Voxels.RasterizationMesh
class CORDL_TYPE RasterizationMesh : public ::System::Object {
public:
// Declarations
/// @brief Field area, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) int32_t  area;

/// @brief Field bounds, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field matrix, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get_matrix, put=__cordl_internal_set_matrix)) ::UnityEngine::Matrix4x4  matrix;

/// @brief Field numTriangles, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_numTriangles, put=__cordl_internal_set_numTriangles)) int32_t  numTriangles;

/// @brief Field numVertices, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVertices, put=__cordl_internal_set_numVertices)) int32_t  numVertices;

/// @brief Field original, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_original, put=__cordl_internal_set_original)) ::UnityW<::UnityEngine::MeshFilter>  original;

/// @brief Field pool, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) bool  pool;

/// @brief Field triangles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_triangles, put=__cordl_internal_set_triangles)) ::ArrayW<int32_t>  triangles;

/// @brief Field vertices, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

static inline ::Pathfinding::Voxels::RasterizationMesh* New_ctor() ;

static inline ::Pathfinding::Voxels::RasterizationMesh* New_ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds) ;

static inline ::Pathfinding::Voxels::RasterizationMesh* New_ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method Pool, addr 0x5ebf754, size 0xd8, virtual false, abstract: false, final false
inline void Pool() ;

/// @brief Method RecalculateBounds, addr 0x5ebf5dc, size 0x178, virtual false, abstract: false, final false
inline void RecalculateBounds() ;

constexpr int32_t const& __cordl_internal_get_area() const;

constexpr int32_t& __cordl_internal_get_area() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_matrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_matrix() ;

constexpr int32_t const& __cordl_internal_get_numTriangles() const;

constexpr int32_t& __cordl_internal_get_numTriangles() ;

constexpr int32_t const& __cordl_internal_get_numVertices() const;

constexpr int32_t& __cordl_internal_get_numVertices() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_original() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_original() ;

constexpr bool const& __cordl_internal_get_pool() const;

constexpr bool& __cordl_internal_get_pool() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_triangles() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_triangles() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_area(int32_t  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_numTriangles(int32_t  value) ;

constexpr void __cordl_internal_set_numVertices(int32_t  value) ;

constexpr void __cordl_internal_set_original(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_pool(bool  value) ;

constexpr void __cordl_internal_set_triangles(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5ebf458, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5ebf460, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds) ;

/// @brief Method .ctor, addr 0x5ebf534, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  matrix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RasterizationMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RasterizationMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RasterizationMesh(RasterizationMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RasterizationMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RasterizationMesh(RasterizationMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21429};

/// @brief Field original, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___original;

/// @brief Field area, offset: 0x18, size: 0x4, def value: None
 int32_t  ___area;

/// @brief Field vertices, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___vertices;

/// @brief Field triangles, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___triangles;

/// @brief Field numVertices, offset: 0x30, size: 0x4, def value: None
 int32_t  ___numVertices;

/// @brief Field numTriangles, offset: 0x34, size: 0x4, def value: None
 int32_t  ___numTriangles;

/// @brief Field bounds, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field matrix, offset: 0x50, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___matrix;

/// @brief Field pool, offset: 0x90, size: 0x1, def value: None
 bool  ___pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___original) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___area) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___vertices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___triangles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___numVertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___numTriangles) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___bounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___matrix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::RasterizationMesh, ___pool) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::RasterizationMesh) == 0x98, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
