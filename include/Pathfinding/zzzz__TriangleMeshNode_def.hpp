#pragma once
// IWYU pragma private; include "Pathfinding/TriangleMeshNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__INavmeshHolder_def.hpp"
#include "Pathfinding/zzzz__MeshNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangleMeshNode)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class INavmeshHolder;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class PathHandler;
}
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class TriangleMeshNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::TriangleMeshNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::TriangleMeshNode*, "Pathfinding", "TriangleMeshNode");
// Dependencies Pathfinding.INavmeshHolder, Pathfinding.MeshNode
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.TriangleMeshNode
class CORDL_TYPE TriangleMeshNode : public ::Pathfinding::MeshNode {
public:
// Declarations
/// @brief Field _navmeshHolders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__navmeshHolders, put=setStaticF__navmeshHolders)) ::ArrayW<::Pathfinding::INavmeshHolder*>  _navmeshHolders;

/// @brief Field lockObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lockObject, put=setStaticF_lockObject)) ::System::Object*  lockObject;

/// @brief Field v0, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_v0, put=__cordl_internal_set_v0)) int32_t  v0;

/// @brief Field v1, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_v1, put=__cordl_internal_set_v1)) int32_t  v1;

/// @brief Field v2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_v2, put=__cordl_internal_set_v2)) int32_t  v2;

/// @brief Method ClosestPointOnNode, addr 0x5e8a76c, size 0x138, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3  p) ;

/// @brief Method ClosestPointOnNodeXZ, addr 0x5e8ac60, size 0x138, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnNodeXZ(::UnityEngine::Vector3  p) ;

/// @brief Method ClosestPointOnNodeXZInGraphSpace, addr 0x5e8a8a4, size 0x3bc, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 ClosestPointOnNodeXZInGraphSpace(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsPoint, addr 0x5e8ad98, size 0x13c, virtual true, abstract: false, final false
inline bool ContainsPoint(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsPointInGraphSpace, addr 0x5e8aed4, size 0xd0, virtual true, abstract: false, final false
inline bool ContainsPointInGraphSpace(::Pathfinding::Int3  p) ;

/// @brief Method DeserializeNode, addr 0x5e8c068, size 0x88, virtual true, abstract: false, final false
inline void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method GetNavmeshHolder, addr 0x5e8a03c, size 0x7c, virtual false, abstract: false, final false
static inline ::Pathfinding::INavmeshHolder* GetNavmeshHolder(uint32_t  graphIndex) ;

/// @brief Method GetPortal, addr 0x5e8b2ec, size 0x1c, virtual true, abstract: false, final false
inline bool GetPortal(::Pathfinding::GraphNode*  toNode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards) ;

/// @brief Method GetPortal, addr 0x5e8b308, size 0x72c, virtual false, abstract: false, final false
inline bool GetPortal(::Pathfinding::GraphNode*  toNode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards, ::by_ref<int32_t>  aIndex, ::by_ref<int32_t>  bIndex) ;

/// @brief Method GetVertex, addr 0x5e8a648, size 0x11c, virtual true, abstract: false, final false
inline ::Pathfinding::Int3 GetVertex(int32_t  i) ;

/// @brief Method GetVertexArrayIndex, addr 0x5e8a344, size 0x118, virtual false, abstract: false, final false
inline int32_t GetVertexArrayIndex(int32_t  i) ;

/// @brief Method GetVertexCount, addr 0x5e8a764, size 0x8, virtual true, abstract: false, final false
inline int32_t GetVertexCount() ;

/// @brief Method GetVertexInGraphSpace, addr 0x5e85dd4, size 0x120, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 GetVertexInGraphSpace(int32_t  i) ;

/// @brief Method GetVertexIndex, addr 0x5e8a320, size 0x24, virtual false, abstract: false, final false
inline int32_t GetVertexIndex(int32_t  i) ;

/// @brief Method GetVertices, addr 0x5e8a140, size 0x1e0, virtual false, abstract: false, final false
inline void GetVertices(::by_ref<::Pathfinding::Int3>  v0, ::by_ref<::Pathfinding::Int3>  v1, ::by_ref<::Pathfinding::Int3>  v2) ;

/// @brief Method GetVerticesInGraphSpace, addr 0x5e8a45c, size 0x1ec, virtual false, abstract: false, final false
inline void GetVerticesInGraphSpace(::by_ref<::Pathfinding::Int3>  v0, ::by_ref<::Pathfinding::Int3>  v1, ::by_ref<::Pathfinding::Int3>  v2) ;

static inline ::Pathfinding::TriangleMeshNode* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method Open, addr 0x5e8b090, size 0x214, virtual true, abstract: false, final false
inline void Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method RandomPointOnSurface, addr 0x5e8bc6c, size 0x380, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 RandomPointOnSurface() ;

/// @brief Method SerializeNode, addr 0x5e8bfec, size 0x7c, virtual true, abstract: false, final false
inline void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SetNavmeshHolder, addr 0x5e86658, size 0x228, virtual false, abstract: false, final false
static inline void SetNavmeshHolder(int32_t  graphIndex, ::Pathfinding::INavmeshHolder*  graph) ;

/// @brief Method SharedEdge, addr 0x5e8b2a4, size 0x48, virtual false, abstract: false, final false
inline int32_t SharedEdge(::Pathfinding::GraphNode*  other) ;

/// @brief Method SurfaceArea, addr 0x5e8ba34, size 0x238, virtual true, abstract: false, final false
inline float_t SurfaceArea() ;

/// @brief Method UpdatePositionFromVertices, addr 0x5e8a0b8, size 0x88, virtual false, abstract: false, final false
inline void UpdatePositionFromVertices() ;

/// @brief Method UpdateRecursiveG, addr 0x5e8afa4, size 0xec, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

constexpr int32_t const& __cordl_internal_get_v0() const;

constexpr int32_t& __cordl_internal_get_v0() ;

constexpr int32_t const& __cordl_internal_get_v1() const;

constexpr int32_t& __cordl_internal_get_v1() ;

constexpr int32_t const& __cordl_internal_get_v2() const;

constexpr int32_t& __cordl_internal_get_v2() ;

constexpr void __cordl_internal_set_v0(int32_t  value) ;

constexpr void __cordl_internal_set_v1(int32_t  value) ;

constexpr void __cordl_internal_set_v2(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e8a034, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

static inline ::ArrayW<::Pathfinding::INavmeshHolder*> getStaticF__navmeshHolders() ;

static inline ::System::Object* getStaticF_lockObject() ;

static inline void setStaticF__navmeshHolders(::ArrayW<::Pathfinding::INavmeshHolder*>  value) ;

static inline void setStaticF_lockObject(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangleMeshNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangleMeshNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangleMeshNode(TriangleMeshNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangleMeshNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangleMeshNode(TriangleMeshNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21326};

/// @brief Field v0, offset: 0x30, size: 0x4, def value: None
 int32_t  ___v0;

/// @brief Field v1, offset: 0x34, size: 0x4, def value: None
 int32_t  ___v1;

/// @brief Field v2, offset: 0x38, size: 0x4, def value: None
 int32_t  ___v2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::TriangleMeshNode, ___v0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TriangleMeshNode, ___v1) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TriangleMeshNode, ___v2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::TriangleMeshNode) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
