#pragma once
// IWYU pragma private; include "Pathfinding/MeshNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Connection_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshNode)
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
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class MeshNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::MeshNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::MeshNode*, "Pathfinding", "MeshNode");
// Dependencies Pathfinding.Connection, Pathfinding.GraphNode
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.MeshNode
class CORDL_TYPE MeshNode : public ::Pathfinding::GraphNode {
public:
// Declarations
/// @brief Field connections, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::ArrayW<::Pathfinding::Connection>  connections;

/// @brief Method AddConnection, addr 0x5e68424, size 0x8, virtual true, abstract: false, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost) ;

/// @brief Method AddConnection, addr 0x5e6842c, size 0x26c, virtual false, abstract: false, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost, uint8_t  shapeEdge) ;

/// @brief Method ClearConnections, addr 0x5e6814c, size 0x110, virtual true, abstract: false, final false
inline void ClearConnections(bool  alsoReverse) ;

/// @brief Method ClosestPointOnNodeXZ, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 ClosestPointOnNodeXZ(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsConnection, addr 0x5e682d8, size 0x68, virtual true, abstract: false, final false
inline bool ContainsConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method ContainsPoint, addr 0x5e688cc, size 0x34, virtual true, abstract: false, final false
inline bool ContainsPoint(::Pathfinding::Int3  point) ;

/// @brief Method ContainsPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ContainsPoint(::UnityEngine::Vector3  point) ;

/// @brief Method ContainsPointInGraphSpace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ContainsPointInGraphSpace(::Pathfinding::Int3  point) ;

/// @brief Method DeserializeReferences, addr 0x5e68aec, size 0x20c, virtual true, abstract: false, final false
inline void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method GetConnections, addr 0x5e6825c, size 0x7c, virtual true, abstract: false, final false
inline void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetGizmoHashCode, addr 0x5e68900, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetGizmoHashCode() ;

/// @brief Method GetVertex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Int3 GetVertex(int32_t  i) ;

/// @brief Method GetVertexCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetVertexCount() ;

static inline ::Pathfinding::MeshNode* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method RemoveConnection, addr 0x5e68698, size 0x234, virtual true, abstract: false, final false
inline void RemoveConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method SerializeReferences, addr 0x5e689c0, size 0x12c, virtual true, abstract: false, final false
inline void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method UpdateRecursiveG, addr 0x5e68340, size 0xe4, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

constexpr ::ArrayW<::Pathfinding::Connection> const& __cordl_internal_get_connections() const;

constexpr ::ArrayW<::Pathfinding::Connection>& __cordl_internal_get_connections() ;

constexpr void __cordl_internal_set_connections(::ArrayW<::Pathfinding::Connection>  value) ;

/// @brief Method .ctor, addr 0x5e68148, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshNode(MeshNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshNode(MeshNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21275};

/// @brief Field connections, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Connection>  ___connections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::MeshNode, ___connections) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::MeshNode) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
