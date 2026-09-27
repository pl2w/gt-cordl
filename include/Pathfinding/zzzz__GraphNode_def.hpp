#pragma once
// IWYU pragma private; include "Pathfinding/GraphNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphNode)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
class GraphNode___c__DisplayClass60_0;
}
namespace Pathfinding {
class GraphNode___c__DisplayClass65_0;
}
namespace Pathfinding {
class NavGraph;
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
class GraphNode;
}
namespace Pathfinding {
class GraphNode___c__DisplayClass60_0;
}
namespace Pathfinding {
class GraphNode___c__DisplayClass65_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphNode*);
MARK_REF_T(::Pathfinding::GraphNode___c__DisplayClass60_0*);
MARK_REF_T(::Pathfinding::GraphNode___c__DisplayClass65_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphNode*, "Pathfinding", "GraphNode");
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphNode___c__DisplayClass60_0*, "Pathfinding", "GraphNode/<>c__DisplayClass60_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphNode___c__DisplayClass65_0*, "Pathfinding", "GraphNode/<>c__DisplayClass65_0");
// Dependencies Pathfinding.Int3, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphNode
class CORDL_TYPE GraphNode : public ::System::Object {
public:
// Declarations
using __c__DisplayClass60_0 = ::Pathfinding::GraphNode___c__DisplayClass60_0;

using __c__DisplayClass65_0 = ::Pathfinding::GraphNode___c__DisplayClass65_0;

 __declspec(property(get=get_Area)) uint32_t  Area;

 __declspec(property(get=get_Destroyed)) bool  Destroyed;

 __declspec(property(get=get_Flags, put=set_Flags)) uint32_t  Flags;

 __declspec(property(get=get_Graph)) ::Pathfinding::NavGraph*  Graph;

 __declspec(property(get=get_GraphIndex, put=set_GraphIndex)) uint32_t  GraphIndex;

 __declspec(property(get=get_HierarchicalNodeIndex, put=set_HierarchicalNodeIndex)) int32_t  HierarchicalNodeIndex;

 __declspec(property(get=get_IsHierarchicalNodeDirty, put=set_IsHierarchicalNodeDirty)) bool  IsHierarchicalNodeDirty;

 __declspec(property(get=get_NodeIndex, put=set_NodeIndex)) int32_t  NodeIndex;

 __declspec(property(get=get_Penalty, put=set_Penalty)) uint32_t  Penalty;

 __declspec(property(get=get_Tag, put=set_Tag)) uint32_t  Tag;

 __declspec(property(get=get_TemporaryFlag1, put=set_TemporaryFlag1)) bool  TemporaryFlag1;

 __declspec(property(get=get_TemporaryFlag2, put=set_TemporaryFlag2)) bool  TemporaryFlag2;

 __declspec(property(get=get_Walkable, put=set_Walkable)) bool  Walkable;

/// @brief Field flags, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) uint32_t  flags;

/// @brief Field nodeIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodeIndex, put=__cordl_internal_set_nodeIndex)) int32_t  nodeIndex;

/// @brief Field penalty, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_penalty, put=__cordl_internal_set_penalty)) uint32_t  penalty;

/// @brief Field position, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::Pathfinding::Int3  position;

/// @brief Method AddConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost) ;

/// @brief Method ClearConnections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearConnections(bool  alsoReverse) ;

/// @brief Method ClosestPointOnNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsConnection, addr 0x5e67e38, size 0xd8, virtual true, abstract: false, final false
inline bool ContainsConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method DeserializeNode, addr 0x5e67fec, size 0x80, virtual true, abstract: false, final false
inline void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DeserializeReferences, addr 0x5e68070, size 0x4, virtual true, abstract: false, final false
inline void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method Destroy, addr 0x5e678c8, size 0x100, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method GetConnections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetGizmoHashCode, addr 0x5e67f54, size 0x3c, virtual true, abstract: false, final false
inline int32_t GetGizmoHashCode() ;

/// @brief Method GetPortal, addr 0x5e67f18, size 0x8, virtual true, abstract: false, final false
inline bool GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards) ;

static inline ::Pathfinding::GraphNode* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method Open, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method RandomPointOnSurface, addr 0x5e67f28, size 0x2c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 RandomPointOnSurface() ;

/// [Obsolete("This method is deprecated because it never did anything, you can safely remove any calls to this method")]
/// @brief Method RecalculateConnectionCosts, addr 0x5e67ca8, size 0x4, virtual false, abstract: false, final false
inline void RecalculateConnectionCosts() ;

/// @brief Method RemoveConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method SerializeNode, addr 0x5e67f90, size 0x5c, virtual true, abstract: false, final false
inline void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SerializeReferences, addr 0x5e6806c, size 0x4, virtual true, abstract: false, final false
inline void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SetConnectivityDirty, addr 0x5e67c38, size 0x70, virtual false, abstract: false, final false
inline void SetConnectivityDirty() ;

/// @brief Method SurfaceArea, addr 0x5e67f20, size 0x8, virtual true, abstract: false, final false
inline float_t SurfaceArea() ;

/// @brief Method UpdateRecursiveG, addr 0x5e67cac, size 0x134, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

constexpr uint32_t const& __cordl_internal_get_flags() const;

constexpr uint32_t& __cordl_internal_get_flags() ;

constexpr int32_t const& __cordl_internal_get_nodeIndex() const;

constexpr int32_t& __cordl_internal_get_nodeIndex() ;

constexpr uint32_t const& __cordl_internal_get_penalty() const;

constexpr uint32_t& __cordl_internal_get_penalty() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_position() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set_flags(uint32_t  value) ;

constexpr void __cordl_internal_set_nodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_penalty(uint32_t  value) ;

constexpr void __cordl_internal_set_position(::Pathfinding::Int3  value) ;

/// @brief Method .ctor, addr 0x5e67838, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method get_Area, addr 0x5e67ba0, size 0x74, virtual false, abstract: false, final false
inline uint32_t get_Area() ;

/// @brief Method get_Destroyed, addr 0x5e5b958, size 0x18, virtual false, abstract: false, final false
inline bool get_Destroyed() ;

/// @brief Method get_Flags, addr 0x5e67a4c, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Flags() ;

/// @brief Method get_Graph, addr 0x5e67814, size 0x24, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* get_Graph() ;

/// @brief Method get_GraphIndex, addr 0x5e5f828, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_GraphIndex() ;

/// @brief Method get_HierarchicalNodeIndex, addr 0x5e5b970, size 0xc, virtual false, abstract: false, final false
inline int32_t get_HierarchicalNodeIndex() ;

/// @brief Method get_IsHierarchicalNodeDirty, addr 0x5e5b920, size 0xc, virtual false, abstract: false, final false
inline bool get_IsHierarchicalNodeDirty() ;

/// @brief Method get_NodeIndex, addr 0x5e5a688, size 0xc, virtual false, abstract: false, final false
inline int32_t get_NodeIndex() ;

/// @brief Method get_Penalty, addr 0x5e67a5c, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Penalty() ;

/// @brief Method get_Tag, addr 0x5e67c1c, size 0xc, virtual false, abstract: false, final false
inline uint32_t get_Tag() ;

/// @brief Method get_TemporaryFlag1, addr 0x5e679dc, size 0xc, virtual false, abstract: false, final false
inline bool get_TemporaryFlag1() ;

/// @brief Method get_TemporaryFlag2, addr 0x5e67a14, size 0xc, virtual false, abstract: false, final false
inline bool get_TemporaryFlag2() ;

/// @brief Method get_Walkable, addr 0x5e5a67c, size 0xc, virtual false, abstract: false, final false
inline bool get_Walkable() ;

/// @brief Method set_Flags, addr 0x5e67a54, size 0x8, virtual false, abstract: false, final false
inline void set_Flags(uint32_t  value) ;

/// @brief Method set_GraphIndex, addr 0x5e67c14, size 0x8, virtual false, abstract: false, final false
inline void set_GraphIndex(uint32_t  value) ;

/// @brief Method set_HierarchicalNodeIndex, addr 0x5e5be0c, size 0x14, virtual false, abstract: false, final false
inline void set_HierarchicalNodeIndex(int32_t  value) ;

/// @brief Method set_IsHierarchicalNodeDirty, addr 0x5e5b92c, size 0x2c, virtual false, abstract: false, final false
inline void set_IsHierarchicalNodeDirty(bool  value) ;

/// @brief Method set_NodeIndex, addr 0x5e679c8, size 0x14, virtual false, abstract: false, final false
inline void set_NodeIndex(int32_t  value) ;

/// @brief Method set_Penalty, addr 0x5e67a64, size 0xb8, virtual false, abstract: false, final false
inline void set_Penalty(uint32_t  value) ;

/// @brief Method set_Tag, addr 0x5e67c28, size 0x10, virtual false, abstract: false, final false
inline void set_Tag(uint32_t  value) ;

/// @brief Method set_TemporaryFlag1, addr 0x5e679e8, size 0x2c, virtual false, abstract: false, final false
inline void set_TemporaryFlag1(bool  value) ;

/// @brief Method set_TemporaryFlag2, addr 0x5e67a20, size 0x2c, virtual false, abstract: false, final false
inline void set_TemporaryFlag2(bool  value) ;

/// @brief Method set_Walkable, addr 0x5e67b1c, size 0x84, virtual false, abstract: false, final false
inline void set_Walkable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode(GraphNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode(GraphNode const& ) = delete;

/// @brief Field DestroyedNodeIndex offset 0xffffffff size 0x4
static constexpr int32_t  DestroyedNodeIndex{static_cast<int32_t>(0xffffffe)};

/// @brief Field FlagsGraphMask offset 0xffffffff size 0x4
static constexpr uint32_t  FlagsGraphMask{static_cast<uint32_t>(0xff000000u)};

/// @brief Field FlagsGraphOffset offset 0xffffffff size 0x4
static constexpr int32_t  FlagsGraphOffset{static_cast<int32_t>(0x18)};

/// @brief Field FlagsHierarchicalIndexOffset offset 0xffffffff size 0x4
static constexpr int32_t  FlagsHierarchicalIndexOffset{static_cast<int32_t>(0x1)};

/// @brief Field FlagsTagMask offset 0xffffffff size 0x4
static constexpr uint32_t  FlagsTagMask{static_cast<uint32_t>(0xf80000u)};

/// @brief Field FlagsTagOffset offset 0xffffffff size 0x4
static constexpr int32_t  FlagsTagOffset{static_cast<int32_t>(0x13)};

/// @brief Field FlagsWalkableMask offset 0xffffffff size 0x4
static constexpr uint32_t  FlagsWalkableMask{static_cast<uint32_t>(0x1u)};

/// @brief Field FlagsWalkableOffset offset 0xffffffff size 0x4
static constexpr int32_t  FlagsWalkableOffset{static_cast<int32_t>(0x0)};

/// @brief Field HierarchicalDirtyMask offset 0xffffffff size 0x4
static constexpr uint32_t  HierarchicalDirtyMask{static_cast<uint32_t>(0x40000u)};

/// @brief Field HierarchicalDirtyOffset offset 0xffffffff size 0x4
static constexpr int32_t  HierarchicalDirtyOffset{static_cast<int32_t>(0x12)};

/// @brief Field HierarchicalIndexMask offset 0xffffffff size 0x4
static constexpr uint32_t  HierarchicalIndexMask{static_cast<uint32_t>(0x3fffeu)};

/// @brief Field MaxGraphIndex offset 0xffffffff size 0x4
static constexpr uint32_t  MaxGraphIndex{static_cast<uint32_t>(0xffu)};

/// @brief Field MaxHierarchicalNodeIndex offset 0xffffffff size 0x4
static constexpr uint32_t  MaxHierarchicalNodeIndex{static_cast<uint32_t>(0x1ffffu)};

/// @brief Field NodeIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  NodeIndexMask{static_cast<int32_t>(0xfffffff)};

/// @brief Field TemporaryFlag1Mask offset 0xffffffff size 0x4
static constexpr int32_t  TemporaryFlag1Mask{static_cast<int32_t>(0x10000000)};

/// @brief Field TemporaryFlag2Mask offset 0xffffffff size 0x4
static constexpr int32_t  TemporaryFlag2Mask{static_cast<int32_t>(0x20000000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21274};

/// @brief Field nodeIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___nodeIndex;

/// @brief Field flags, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___flags;

/// @brief Field penalty, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___penalty;

/// @brief Field position, offset: 0x1c, size: 0xc, def value: None
 ::Pathfinding::Int3  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphNode, ___nodeIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphNode, ___flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphNode, ___penalty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphNode, ___position) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphNode) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphNode/<>c__DisplayClass65_0
class CORDL_TYPE GraphNode___c__DisplayClass65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field contains, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_contains, put=__cordl_internal_set_contains)) bool  contains;

/// @brief Field node, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::Pathfinding::GraphNode*  node;

static inline ::Pathfinding::GraphNode___c__DisplayClass65_0* New_ctor() ;

/// @brief Method <ContainsConnection>b__0, addr 0x5e6812c, size 0x1c, virtual false, abstract: false, final false
inline void _ContainsConnection_b__0(::Pathfinding::GraphNode*  neighbour) ;

constexpr bool const& __cordl_internal_get_contains() const;

constexpr bool& __cordl_internal_get_contains() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_node() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_node() ;

constexpr void __cordl_internal_set_contains(bool  value) ;

constexpr void __cordl_internal_set_node(::Pathfinding::GraphNode*  value) ;

/// @brief Method .ctor, addr 0x5e67f10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode___c__DisplayClass65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode___c__DisplayClass65_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode___c__DisplayClass65_0(GraphNode___c__DisplayClass65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode___c__DisplayClass65_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode___c__DisplayClass65_0(GraphNode___c__DisplayClass65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21273};

/// @brief Field contains, offset: 0x10, size: 0x1, def value: None
 bool  ___contains;

/// @brief Field node, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphNode___c__DisplayClass65_0, ___contains) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphNode___c__DisplayClass65_0, ___node) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphNode___c__DisplayClass65_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphNode/<>c__DisplayClass60_0
class CORDL_TYPE GraphNode___c__DisplayClass60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Pathfinding::PathHandler*  handler;

/// @brief Field path, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

/// @brief Field pathNode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathNode, put=__cordl_internal_set_pathNode)) ::Pathfinding::PathNode*  pathNode;

static inline ::Pathfinding::GraphNode___c__DisplayClass60_0* New_ctor() ;

/// @brief Method <UpdateRecursiveG>b__0, addr 0x5e68074, size 0x7c, virtual false, abstract: false, final false
inline void _UpdateRecursiveG_b__0(::Pathfinding::GraphNode*  other) ;

constexpr ::Pathfinding::PathHandler* const& __cordl_internal_get_handler() const;

constexpr ::Pathfinding::PathHandler*& __cordl_internal_get_handler() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr ::Pathfinding::PathNode* const& __cordl_internal_get_pathNode() const;

constexpr ::Pathfinding::PathNode*& __cordl_internal_get_pathNode() ;

constexpr void __cordl_internal_set_handler(::Pathfinding::PathHandler*  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_pathNode(::Pathfinding::PathNode*  value) ;

/// @brief Method .ctor, addr 0x5e67de0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode___c__DisplayClass60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode___c__DisplayClass60_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode___c__DisplayClass60_0(GraphNode___c__DisplayClass60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode___c__DisplayClass60_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode___c__DisplayClass60_0(GraphNode___c__DisplayClass60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21272};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  ___handler;

/// @brief Field pathNode, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::PathNode*  ___pathNode;

/// @brief Field path, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphNode___c__DisplayClass60_0, ___handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphNode___c__DisplayClass60_0, ___pathNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphNode___c__DisplayClass60_0, ___path) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphNode___c__DisplayClass60_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
