#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshTile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshTile)
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding {
class BBTree;
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
class ITransformedGraph;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NavmeshBase;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Pathfinding {
class NavmeshTile;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshTile*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshTile*, "Pathfinding", "NavmeshTile");
// Dependencies Pathfinding.Int3, Pathfinding.TriangleMeshNode, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshTile
class CORDL_TYPE NavmeshTile : public ::System::Object {
public:
// Declarations
/// @brief Field bbTree, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bbTree, put=__cordl_internal_set_bbTree)) ::Pathfinding::BBTree*  bbTree;

/// @brief Field d, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_d, put=__cordl_internal_set_d)) int32_t  d;

/// @brief Field flag, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_flag, put=__cordl_internal_set_flag)) bool  flag;

/// @brief Field graph, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::NavmeshBase*  graph;

/// @brief Field nodes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes;

 __declspec(property(get=get_transform)) ::Pathfinding::Util::GraphTransform*  transform;

/// @brief Field tris, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tris, put=__cordl_internal_set_tris)) ::ArrayW<int32_t>  tris;

/// @brief Field verts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_verts, put=__cordl_internal_set_verts)) ::ArrayW<::Pathfinding::Int3>  verts;

/// @brief Field vertsInGraphSpace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertsInGraphSpace, put=__cordl_internal_set_vertsInGraphSpace)) ::ArrayW<::Pathfinding::Int3>  vertsInGraphSpace;

/// @brief Field w, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_w, put=__cordl_internal_set_w)) int32_t  w;

/// @brief Field x, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field z, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

/// @brief Convert operator to "::Pathfinding::INavmesh"
constexpr operator  ::Pathfinding::INavmesh*() noexcept;

/// @brief Convert operator to "::Pathfinding::INavmeshHolder"
constexpr operator  ::Pathfinding::INavmeshHolder*() noexcept;

/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr operator  ::Pathfinding::ITransformedGraph*() noexcept;

/// @brief Method GetNodes, addr 0x5e98690, size 0x6c, virtual true, abstract: false, final true
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetTileCoordinates, addr 0x5e985e4, size 0x14, virtual true, abstract: false, final true
inline void GetTileCoordinates(int32_t  tileIndex, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z) ;

/// @brief Method GetVertex, addr 0x5e98600, size 0x3c, virtual true, abstract: false, final true
inline ::Pathfinding::Int3 GetVertex(int32_t  index) ;

/// @brief Method GetVertexArrayIndex, addr 0x5e985f8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetVertexArrayIndex(int32_t  index) ;

/// @brief Method GetVertexInGraphSpace, addr 0x5e9863c, size 0x3c, virtual true, abstract: false, final true
inline ::Pathfinding::Int3 GetVertexInGraphSpace(int32_t  index) ;

static inline ::Pathfinding::NavmeshTile* New_ctor() ;

constexpr ::Pathfinding::BBTree* const& __cordl_internal_get_bbTree() const;

constexpr ::Pathfinding::BBTree*& __cordl_internal_get_bbTree() ;

constexpr int32_t const& __cordl_internal_get_d() const;

constexpr int32_t& __cordl_internal_get_d() ;

constexpr bool const& __cordl_internal_get_flag() const;

constexpr bool& __cordl_internal_get_flag() ;

constexpr ::Pathfinding::NavmeshBase* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::NavmeshBase*& __cordl_internal_get_graph() ;

constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*>& __cordl_internal_get_nodes() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tris() ;

constexpr ::ArrayW<::Pathfinding::Int3> const& __cordl_internal_get_verts() const;

constexpr ::ArrayW<::Pathfinding::Int3>& __cordl_internal_get_verts() ;

constexpr ::ArrayW<::Pathfinding::Int3> const& __cordl_internal_get_vertsInGraphSpace() const;

constexpr ::ArrayW<::Pathfinding::Int3>& __cordl_internal_get_vertsInGraphSpace() ;

constexpr int32_t const& __cordl_internal_get_w() const;

constexpr int32_t& __cordl_internal_get_w() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_bbTree(::Pathfinding::BBTree*  value) ;

constexpr void __cordl_internal_set_d(int32_t  value) ;

constexpr void __cordl_internal_set_flag(bool  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::Pathfinding::TriangleMeshNode*>  value) ;

constexpr void __cordl_internal_set_tris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_verts(::ArrayW<::Pathfinding::Int3>  value) ;

constexpr void __cordl_internal_set_vertsInGraphSpace(::ArrayW<::Pathfinding::Int3>  value) ;

constexpr void __cordl_internal_set_w(int32_t  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e986fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_transform, addr 0x5e98678, size 0x18, virtual true, abstract: false, final true
inline ::Pathfinding::Util::GraphTransform* get_transform() ;

/// @brief Convert to "::Pathfinding::INavmesh"
constexpr ::Pathfinding::INavmesh* i___Pathfinding__INavmesh() noexcept;

/// @brief Convert to "::Pathfinding::INavmeshHolder"
constexpr ::Pathfinding::INavmeshHolder* i___Pathfinding__INavmeshHolder() noexcept;

/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* i___Pathfinding__ITransformedGraph() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshTile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshTile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshTile(NavmeshTile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshTile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshTile(NavmeshTile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21346};

/// @brief Field tris, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tris;

/// @brief Field verts, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Int3>  ___verts;

/// @brief Field vertsInGraphSpace, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Int3>  ___vertsInGraphSpace;

/// @brief Field x, offset: 0x28, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field z, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___z;

/// @brief Field w, offset: 0x30, size: 0x4, def value: None
 int32_t  ___w;

/// @brief Field d, offset: 0x34, size: 0x4, def value: None
 int32_t  ___d;

/// @brief Field nodes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::TriangleMeshNode*>  ___nodes;

/// @brief Field bbTree, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::BBTree*  ___bbTree;

/// @brief Field flag, offset: 0x48, size: 0x1, def value: None
 bool  ___flag;

/// @brief Field graph, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::NavmeshBase*  ___graph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshTile, ___tris) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___verts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___vertsInGraphSpace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___x) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___z) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___w) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___d) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___nodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___bbTree) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___flag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshTile, ___graph) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshTile) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
