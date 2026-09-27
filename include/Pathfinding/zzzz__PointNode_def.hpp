#pragma once
// IWYU pragma private; include "Pathfinding/PointNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Connection_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointNode)
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
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class PointNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::PointNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PointNode*, "Pathfinding", "PointNode");
// Dependencies Pathfinding.Connection, Pathfinding.GraphNode
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointNode
class CORDL_TYPE PointNode : public ::Pathfinding::GraphNode {
public:
// Declarations
/// @brief Field connections, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::ArrayW<::Pathfinding::Connection>  connections;

/// @brief Field gameObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Method AddConnection, addr 0x5e89630, size 0x28c, virtual true, abstract: false, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost) ;

/// @brief Method ClearConnections, addr 0x5e89428, size 0xdc, virtual true, abstract: false, final false
inline void ClearConnections(bool  alsoReverse) ;

/// @brief Method ClosestPointOnNode, addr 0x5e89398, size 0x14, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsConnection, addr 0x5e895f0, size 0x40, virtual true, abstract: false, final false
inline bool ContainsConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method DeserializeNode, addr 0x5e89d98, size 0x40, virtual true, abstract: false, final false
inline void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DeserializeReferences, addr 0x5e89ed4, size 0x160, virtual true, abstract: false, final false
inline void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method GetConnections, addr 0x5e893ac, size 0x7c, virtual true, abstract: false, final false
inline void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetGizmoHashCode, addr 0x5e89cd8, size 0x84, virtual true, abstract: false, final false
inline int32_t GetGizmoHashCode() ;

static inline ::Pathfinding::PointNode* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method Open, addr 0x5e89b04, size 0x1d4, virtual true, abstract: false, final false
inline void Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method RemoveConnection, addr 0x5e89930, size 0x1d4, virtual true, abstract: false, final false
inline void RemoveConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method SerializeNode, addr 0x5e89d5c, size 0x3c, virtual true, abstract: false, final false
inline void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SerializeReferences, addr 0x5e89dd8, size 0xfc, virtual true, abstract: false, final false
inline void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SetPosition, addr 0x5e89384, size 0xc, virtual false, abstract: false, final false
inline void SetPosition(::Pathfinding::Int3  value) ;

/// @brief Method UpdateRecursiveG, addr 0x5e89504, size 0xec, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

constexpr ::ArrayW<::Pathfinding::Connection> const& __cordl_internal_get_connections() const;

constexpr ::ArrayW<::Pathfinding::Connection>& __cordl_internal_get_connections() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr void __cordl_internal_set_connections(::ArrayW<::Pathfinding::Connection>  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5e89390, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointNode(PointNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointNode(PointNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21324};

/// @brief Field connections, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Connection>  ___connections;

/// @brief Field gameObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PointNode, ___connections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointNode, ___gameObject) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PointNode) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
