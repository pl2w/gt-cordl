#pragma once
// IWYU pragma private; include "XNode/SceneGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneGraph)
namespace XNode {
class NodeGraph;
}
// Forward declare root types
namespace XNode {
class SceneGraph;
}
// Write type traits
MARK_REF_T(::XNode::SceneGraph*);
DEFINE_IL2CPP_CLASS(::XNode::SceneGraph*, "XNode", "SceneGraph");
// Dependencies UnityEngine.MonoBehaviour
namespace XNode {
// Is value type: false
// CS Name: XNode.SceneGraph
class CORDL_TYPE SceneGraph : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field graph, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::UnityW<::XNode::NodeGraph>  graph;

static inline ::XNode::SceneGraph* New_ctor() ;

constexpr ::UnityW<::XNode::NodeGraph> const& __cordl_internal_get_graph() const;

constexpr ::UnityW<::XNode::NodeGraph>& __cordl_internal_get_graph() ;

constexpr void __cordl_internal_set_graph(::UnityW<::XNode::NodeGraph>  value) ;

/// @brief Method .ctor, addr 0xb993a4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGraph(SceneGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGraph(SceneGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32284};

/// @brief Field graph, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::XNode::NodeGraph>  ___graph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::SceneGraph, ___graph) == 0x20, "Offset mismatch!");

static_assert(sizeof(::XNode::SceneGraph) == 0x28, "Size mismatch!");

} // namespace end def XNode
