#pragma once
// IWYU pragma private; include "XNode/NodeInspectorBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NodeInspectorBridge)
// Forward declare root types
namespace XNode {
class NodeInspectorBridge;
}
// Write type traits
MARK_REF_T(::XNode::NodeInspectorBridge*);
DEFINE_IL2CPP_CLASS(::XNode::NodeInspectorBridge*, "XNode", "NodeInspectorBridge");
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeInspectorBridge
class CORDL_TYPE NodeInspectorBridge : public ::System::Object {
public:
// Declarations
/// @brief Field InNodeEditor, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_InNodeEditor, put=setStaticF_InNodeEditor)) bool  InNodeEditor;

static inline bool getStaticF_InNodeEditor() ;

static inline void setStaticF_InNodeEditor(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeInspectorBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeInspectorBridge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeInspectorBridge(NodeInspectorBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeInspectorBridge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeInspectorBridge(NodeInspectorBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::XNode::NodeInspectorBridge) == 0x10, "Size mismatch!");

} // namespace end def XNode
