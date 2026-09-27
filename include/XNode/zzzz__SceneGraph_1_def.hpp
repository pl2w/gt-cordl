#pragma once
// IWYU pragma private; include "XNode/SceneGraph_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "XNode/zzzz__SceneGraph_def.hpp"
CORDL_MODULE_EXPORT(SceneGraph_1)
// Forward declare root types
namespace XNode {
template<typename T>
class SceneGraph_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::XNode::SceneGraph_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::XNode::SceneGraph_1, "XNode", "SceneGraph`1");
// Dependencies XNode.SceneGraph
namespace XNode {
// cpp template
template<typename T>
// Is value type: false
// CS Name: XNode.SceneGraph`1<T>
class CORDL_TYPE SceneGraph_1 : public ::XNode::SceneGraph {
public:
// Declarations
 __declspec(property(get=get_graph, put=set_graph)) T  graph;

static inline ::XNode::SceneGraph_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_graph, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_graph() ;

/// @brief Method set_graph, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_graph(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGraph_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGraph_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGraph_1(SceneGraph_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGraph_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGraph_1(SceneGraph_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def XNode
