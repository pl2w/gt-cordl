#pragma once
// IWYU pragma private; include "Pathfinding/GridNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GridNode)
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
class GridGraph;
}
namespace Pathfinding {
class GridNodeBase;
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
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class GridNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::GridNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GridNode*, "Pathfinding", "GridNode");
// Dependencies Pathfinding.GridGraph, Pathfinding.GridNodeBase
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridNode
class CORDL_TYPE GridNode : public ::Pathfinding::GridNodeBase {
public:
// Declarations
 __declspec(property(get=get_EdgeNode, put=set_EdgeNode)) bool  EdgeNode;

 __declspec(property(get=get_HasConnectionsToAllEightNeighbours)) bool  HasConnectionsToAllEightNeighbours;

 __declspec(property(get=get_InternalGridFlags, put=set_InternalGridFlags)) uint16_t  InternalGridFlags;

/// @brief Field _gridGraphs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gridGraphs, put=setStaticF__gridGraphs)) ::ArrayW<::Pathfinding::GridGraph*>  _gridGraphs;

/// @brief Method AddConnection, addr 0x5e88344, size 0xbc, virtual true, abstract: false, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost) ;

/// @brief Method ClearConnections, addr 0x5e87050, size 0xdc, virtual true, abstract: false, final false
inline void ClearConnections(bool  alsoReverse) ;

/// @brief Method ClearGridGraph, addr 0x5e86c30, size 0x100, virtual false, abstract: false, final false
static inline void ClearGridGraph(int32_t  graphIndex, ::Pathfinding::GridGraph*  graph) ;

/// @brief Method ClosestPointOnNode, addr 0x5e872cc, size 0x134, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3  p) ;

/// @brief Method DeserializeNode, addr 0x5e882e8, size 0x5c, virtual true, abstract: false, final false
inline void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// [Obsolete("Use HasConnectionInDirection")]
/// @brief Method GetConnectionInternal, addr 0x5e86d64, size 0x10, virtual false, abstract: false, final false
inline bool GetConnectionInternal(int32_t  dir) ;

/// @brief Method GetConnections, addr 0x5e87134, size 0x11c, virtual true, abstract: false, final false
inline void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetGridGraph, addr 0x5e869d8, size 0x7c, virtual false, abstract: false, final false
static inline ::Pathfinding::GridGraph* GetGridGraph(uint32_t  graphIndex) ;

/// @brief Method GetNeighbourAlongDirection, addr 0x5e86f60, size 0xe4, virtual true, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNeighbourAlongDirection(int32_t  direction) ;

/// @brief Method GetPortal, addr 0x5e87400, size 0x7d0, virtual true, abstract: false, final false
inline bool GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards) ;

/// @brief Method HasConnectionInDirection, addr 0x5e86d54, size 0x10, virtual true, abstract: false, final false
inline bool HasConnectionInDirection(int32_t  dir) ;

static inline ::Pathfinding::GridNode* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method Open, addr 0x5e87e40, size 0x29c, virtual true, abstract: false, final false
inline void Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method RemoveConnection, addr 0x5e88704, size 0xb8, virtual true, abstract: false, final false
inline void RemoveConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method RemoveGridConnection, addr 0x5e88400, size 0x110, virtual false, abstract: false, final false
inline void RemoveGridConnection(::Pathfinding::GridNode*  node) ;

/// @brief Method ResetConnectionsInternal, addr 0x5e86ea8, size 0x80, virtual false, abstract: false, final false
inline void ResetConnectionsInternal() ;

/// @brief Method SerializeNode, addr 0x5e88290, size 0x58, virtual true, abstract: false, final false
inline void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SetAllConnectionInternal, addr 0x5e86e1c, size 0x8c, virtual false, abstract: false, final false
inline void SetAllConnectionInternal(int32_t  connections) ;

/// @brief Method SetConnectionInternal, addr 0x5e86d74, size 0xa8, virtual false, abstract: false, final false
inline void SetConnectionInternal(int32_t  dir, bool  value) ;

/// @brief Method SetGridGraph, addr 0x5e86a54, size 0x1dc, virtual false, abstract: false, final false
static inline void SetGridGraph(int32_t  graphIndex, ::Pathfinding::GridGraph*  graph) ;

/// @brief Method UpdateRecursiveG, addr 0x5e87bd0, size 0x1a0, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method .ctor, addr 0x5e869c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

static inline ::ArrayW<::Pathfinding::GridGraph*> getStaticF__gridGraphs() ;

/// @brief Method get_EdgeNode, addr 0x5e86f28, size 0xc, virtual false, abstract: false, final false
inline bool get_EdgeNode() ;

/// @brief Method get_HasConnectionsToAllEightNeighbours, addr 0x5e86d40, size 0x14, virtual true, abstract: false, final false
inline bool get_HasConnectionsToAllEightNeighbours() ;

/// @brief Method get_InternalGridFlags, addr 0x5e86d30, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_InternalGridFlags() ;

static inline void setStaticF__gridGraphs(::ArrayW<::Pathfinding::GridGraph*>  value) ;

/// @brief Method set_EdgeNode, addr 0x5e86f34, size 0x2c, virtual false, abstract: false, final false
inline void set_EdgeNode(bool  value) ;

/// @brief Method set_InternalGridFlags, addr 0x5e86d38, size 0x8, virtual false, abstract: false, final false
inline void set_InternalGridFlags(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridNode(GridNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridNode(GridNode const& ) = delete;

/// @brief Field GridFlagsConnectionBit0 offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsConnectionBit0{static_cast<int32_t>(0x1)};

/// @brief Field GridFlagsConnectionMask offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsConnectionMask{static_cast<int32_t>(0xff)};

/// @brief Field GridFlagsConnectionOffset offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsConnectionOffset{static_cast<int32_t>(0x0)};

/// @brief Field GridFlagsEdgeNodeMask offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsEdgeNodeMask{static_cast<int32_t>(0x400)};

/// @brief Field GridFlagsEdgeNodeOffset offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsEdgeNodeOffset{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::GridNode) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
