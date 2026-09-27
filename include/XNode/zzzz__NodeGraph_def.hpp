#pragma once
// IWYU pragma private; include "XNode/NodeGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
CORDL_MODULE_EXPORT(NodeGraph)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace XNode {
class NodeGraph_RequireNodeAttribute;
}
namespace XNode {
class Node;
}
// Forward declare root types
namespace XNode {
class NodeGraph;
}
namespace XNode {
class NodeGraph_RequireNodeAttribute;
}
// Write type traits
MARK_REF_T(::XNode::NodeGraph*);
MARK_REF_T(::XNode::NodeGraph_RequireNodeAttribute*);
DEFINE_IL2CPP_CLASS(::XNode::NodeGraph*, "XNode", "NodeGraph");
DEFINE_IL2CPP_CLASS(::XNode::NodeGraph_RequireNodeAttribute*, "XNode", "NodeGraph/RequireNodeAttribute");
// Dependencies UnityEngine.ScriptableObject, XNode.Node
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeGraph
class CORDL_TYPE NodeGraph : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using RequireNodeAttribute = ::XNode::NodeGraph_RequireNodeAttribute;

/// @brief Field nodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  nodes;

/// @brief Method AddNode, addr 0xb991c80, size 0x138, virtual true, abstract: false, final false
inline ::UnityW<::XNode::Node> AddNode(::System::Type*  type) ;

/// @brief Method AddNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::XNode::Node*>)
inline T AddNode() ;

/// @brief Method Clear, addr 0xb991fd0, size 0x174, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Copy, addr 0xb992144, size 0x4f4, virtual true, abstract: false, final false
inline ::UnityW<::XNode::NodeGraph> Copy() ;

/// @brief Method CopyNode, addr 0xb991db8, size 0x148, virtual true, abstract: false, final false
inline ::UnityW<::XNode::Node> CopyNode(::XNode::Node*  original) ;

static inline ::XNode::NodeGraph* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb992800, size 0xc, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveNode, addr 0xb991f00, size 0xd0, virtual true, abstract: false, final false
inline void RemoveNode(::XNode::Node*  node) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>* const& __cordl_internal_get_nodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*& __cordl_internal_get_nodes() ;

constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  value) ;

/// @brief Method .ctor, addr 0xb99280c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeGraph(NodeGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeGraph(NodeGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32279};

/// [SerializeField]
/// @brief Field nodes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  ___nodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::NodeGraph, ___nodes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::XNode::NodeGraph) == 0x20, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = true)]
// Dependencies System.Attribute
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeGraph/RequireNodeAttribute
class CORDL_TYPE NodeGraph_RequireNodeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field type0, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type0, put=__cordl_internal_set_type0)) ::System::Type*  type0;

/// @brief Field type1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_type1, put=__cordl_internal_set_type1)) ::System::Type*  type1;

/// @brief Field type2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_type2, put=__cordl_internal_set_type2)) ::System::Type*  type2;

static inline ::XNode::NodeGraph_RequireNodeAttribute* New_ctor(::System::Type*  type) ;

static inline ::XNode::NodeGraph_RequireNodeAttribute* New_ctor(::System::Type*  type, ::System::Type*  type2) ;

static inline ::XNode::NodeGraph_RequireNodeAttribute* New_ctor(::System::Type*  type, ::System::Type*  type2, ::System::Type*  type3) ;

/// @brief Method Requires, addr 0xb992998, size 0xe0, virtual false, abstract: false, final false
inline bool Requires(::System::Type*  type) ;

constexpr ::System::Type* const& __cordl_internal_get_type0() const;

constexpr ::System::Type*& __cordl_internal_get_type0() ;

constexpr ::System::Type* const& __cordl_internal_get_type1() const;

constexpr ::System::Type*& __cordl_internal_get_type1() ;

constexpr ::System::Type* const& __cordl_internal_get_type2() const;

constexpr ::System::Type*& __cordl_internal_get_type2() ;

constexpr void __cordl_internal_set_type0(::System::Type*  value) ;

constexpr void __cordl_internal_set_type1(::System::Type*  value) ;

constexpr void __cordl_internal_set_type2(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xb992894, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method .ctor, addr 0xb9928e4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::System::Type*  type2) ;

/// @brief Method .ctor, addr 0xb992938, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::System::Type*  type2, ::System::Type*  type3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeGraph_RequireNodeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeGraph_RequireNodeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeGraph_RequireNodeAttribute(NodeGraph_RequireNodeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeGraph_RequireNodeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeGraph_RequireNodeAttribute(NodeGraph_RequireNodeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32278};

/// @brief Field type0, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type0;

/// @brief Field type1, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___type1;

/// @brief Field type2, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___type2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::NodeGraph_RequireNodeAttribute, ___type0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::NodeGraph_RequireNodeAttribute, ___type1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::NodeGraph_RequireNodeAttribute, ___type2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::XNode::NodeGraph_RequireNodeAttribute) == 0x28, "Size mismatch!");

} // namespace end def XNode
